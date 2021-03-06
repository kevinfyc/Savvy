#ifndef SAVVY_DEFINES_H
#define SAVVY_DEFINES_H

#define SAVVY_DEBUG 1

#define SAVVY_ORIGINAL_SEMANTIC_DECL "/* Original Semantic: "
#define SAVVY_TEX_WIDTH "SavvyTexWidth"
#define SAVVY_TEX_HEIGHT "SavvyTexHeight"
#define SAVVY_INPUT_STRUCT_TYPE "InputData"
#define SAVVY_OUTPUT_STRUCT_TYPE "OutputData"
#define SAVVY_OUTPUT_STRUCT_NAME "OUT"
#define SAVVY_INPUT_STRUCT_NAME "IN"
#define SAVVY_FRAGMENT_SHADER_OUTPUT_NAME "SavvyOutColor"
#define SAVVY_VERSION_MAJOR 1
#define SAVVY_VERSION_MINOR 1
#define SAVVY_VERSION_EXTRA "(Beta)"
#define SAVVY_MAX_INCLUDE_RECURSION_DEPTH 20

namespace Savvy
{

	/*
	The supported shader languages.
	*/
	enum ShaderLang
	{
		/*
		Default value.
		The shader conversion will automatically fail if this value is specified as input or output type.
		*/
		INVALID_SHADER_LANG = 0,

		/*
		The DirectX standard shader language supported by DirectX 11 and 11.1.
		*/
		HLSL_5_0,

		/*
		The OpenGL 4.5 standard shader language.
		This will result in UBOs being created for uniform variables and automatic explicit layout locations
		being assigned to input, output , uniform and sampler variables.
		*/
		GLSL_4_5,

		/*
		OpenGL shader without using any UBO(Uniform buffer objects).
		If this options is specified as an input option it is equivalent to OPEN_GL_4_5.
		However if it is used as an output option, it will result in a shader construction without any Uniform buffer objects.
		*/
		GLSL_NO_UBO,

		/*
		OpenGL shader without using any explicit layout locations.
		If this options is specified as an input option it is equivalent to OPEN_GL_4_5.
		However if it is used as an output option, it will result in a shader construction without any explicit layout locations for input, output, uniform and sampler variables.
		*/
		GLSL_NO_LOC,

		/*
		OpenGL shader without using any UBO(Uniform buffer objects) and explicit layout locations.
		If this options is specified as an input option it is equivalent to OPEN_GL_4_5.
		However if it is used as an output option, it will result in a shader construction without any Uniform buffer objects
		and explicit layout locations for input, output, uniform and sampler variables.
		*/
		GLSL_NO_UBO_NO_LOC,

		/*
		A shader language for users to implement.
		If you want to extend the library make sure your custom shader language IDs start from this enum.
		*/
		SAVVY_CUSTOM_USER_LANG
	};

	/*
	The supported shader types.
	*/
	enum ShaderProgramType
	{
		/*
		Default value
		*/
		INVALID_SHADER_TYPE = 0,

		/*
		Vertex program.
		*/
		VERTEX_SHADER,

		/*
		Fragment/Pixel program.
		*/
		FRAGMENT_SHADER,

		/*
		Custom user shader type.
		If you want to implement support for extra shader types, make sure their IDs start from this enum.
		*/
		SAVVY_CUSTOM_USER_TYPE
	};
}

#endif // !SAVVY_DEFINES_H
