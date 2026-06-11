/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCAUDIOTASKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCAUDIOTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AigcAudioReferenceVideoInfo.h>
#include <tencentcloud/mps/v20190612/model/AigcAudioReferenceAudioInfo.h>
#include <tencentcloud/mps/v20190612/model/AigcStoreCosParam.h>
#include <tencentcloud/mps/v20190612/model/AigcAudioExtraParam.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateAigcAudioTask请求参数结构体
                */
                class CreateAigcAudioTaskRequest : public AbstractModel
                {
                public:
                    CreateAigcAudioTaskRequest();
                    ~CreateAigcAudioTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型名称。生音乐当前支持的模型: GL、MinimaxMusic。</p>
                     * @return ModelName <p>模型名称。生音乐当前支持的模型: GL、MinimaxMusic。</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称。生音乐当前支持的模型: GL、MinimaxMusic。</p>
                     * @param _modelName <p>模型名称。生音乐当前支持的模型: GL、MinimaxMusic。</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。<br>模型GL支持的版本号：2.0、3.0-clip、3.0-pro。<br>模型MinimaxMusic支持的版本号：2.0、2.5、2.6。</p>
                     * @return ModelVersion <p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。<br>模型GL支持的版本号：2.0、3.0-clip、3.0-pro。<br>模型MinimaxMusic支持的版本号：2.0、2.5、2.6。</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。<br>模型GL支持的版本号：2.0、3.0-clip、3.0-pro。<br>模型MinimaxMusic支持的版本号：2.0、2.5、2.6。</p>
                     * @param _modelVersion <p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。<br>模型GL支持的版本号：2.0、3.0-clip、3.0-pro。<br>模型MinimaxMusic支持的版本号：2.0、2.5、2.6。</p>
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取<p>指定场景生音频。音乐: music。</p>
                     * @return SceneType <p>指定场景生音频。音乐: music。</p>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>指定场景生音频。音乐: music。</p>
                     * @param _sceneType <p>指定场景生音频。音乐: music。</p>
                     * 
                     */
                    void SetSceneType(const std::string& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取<p>生成视频的描述。(注：最大支持2000字符)。当未传入图片时，此参数必填。</p>
                     * @return Prompt <p>生成视频的描述。(注：最大支持2000字符)。当未传入图片时，此参数必填。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>生成视频的描述。(注：最大支持2000字符)。当未传入图片时，此参数必填。</p>
                     * @param _prompt <p>生成视频的描述。(注：最大支持2000字符)。当未传入图片时，此参数必填。</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>参考视频信息。仅部分模型支持。</p>
                     * @return VideoInfos <p>参考视频信息。仅部分模型支持。</p>
                     * 
                     */
                    std::vector<AigcAudioReferenceVideoInfo> GetVideoInfos() const;

                    /**
                     * 设置<p>参考视频信息。仅部分模型支持。</p>
                     * @param _videoInfos <p>参考视频信息。仅部分模型支持。</p>
                     * 
                     */
                    void SetVideoInfos(const std::vector<AigcAudioReferenceVideoInfo>& _videoInfos);

                    /**
                     * 判断参数 VideoInfos 是否已赋值
                     * @return VideoInfos 是否已赋值
                     * 
                     */
                    bool VideoInfosHasBeenSet() const;

                    /**
                     * 获取<p>传入参考音频信息。</p><p>比如传入音频生成音乐时需要传入。</p>
                     * @return AudioInfos <p>传入参考音频信息。</p><p>比如传入音频生成音乐时需要传入。</p>
                     * 
                     */
                    std::vector<AigcAudioReferenceAudioInfo> GetAudioInfos() const;

                    /**
                     * 设置<p>传入参考音频信息。</p><p>比如传入音频生成音乐时需要传入。</p>
                     * @param _audioInfos <p>传入参考音频信息。</p><p>比如传入音频生成音乐时需要传入。</p>
                     * 
                     */
                    void SetAudioInfos(const std::vector<AigcAudioReferenceAudioInfo>& _audioInfos);

                    /**
                     * 判断参数 AudioInfos 是否已赋值
                     * @return AudioInfos 是否已赋值
                     * 
                     */
                    bool AudioInfosHasBeenSet() const;

                    /**
                     * 获取<p>输出音频格式，默认不填。mp3、wav。</p>
                     * @return OutputAudioFormat <p>输出音频格式，默认不填。mp3、wav。</p>
                     * 
                     */
                    std::string GetOutputAudioFormat() const;

                    /**
                     * 设置<p>输出音频格式，默认不填。mp3、wav。</p>
                     * @param _outputAudioFormat <p>输出音频格式，默认不填。mp3、wav。</p>
                     * 
                     */
                    void SetOutputAudioFormat(const std::string& _outputAudioFormat);

                    /**
                     * 判断参数 OutputAudioFormat 是否已赋值
                     * @return OutputAudioFormat 是否已赋值
                     * 
                     */
                    bool OutputAudioFormatHasBeenSet() const;

                    /**
                     * 获取<p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     * @return StoreCosParam <p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     * 
                     */
                    AigcStoreCosParam GetStoreCosParam() const;

                    /**
                     * 设置<p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     * @param _storeCosParam <p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     * 
                     */
                    void SetStoreCosParam(const AigcStoreCosParam& _storeCosParam);

                    /**
                     * 判断参数 StoreCosParam 是否已赋值
                     * @return StoreCosParam 是否已赋值
                     * 
                     */
                    bool StoreCosParamHasBeenSet() const;

                    /**
                     * 获取<p>用于传入要求的额外参数。</p>
                     * @return ExtraParameters <p>用于传入要求的额外参数。</p>
                     * 
                     */
                    AigcAudioExtraParam GetExtraParameters() const;

                    /**
                     * 设置<p>用于传入要求的额外参数。</p>
                     * @param _extraParameters <p>用于传入要求的额外参数。</p>
                     * 
                     */
                    void SetExtraParameters(const AigcAudioExtraParam& _extraParameters);

                    /**
                     * 判断参数 ExtraParameters 是否已赋值
                     * @return ExtraParameters 是否已赋值
                     * 
                     */
                    bool ExtraParametersHasBeenSet() const;

                    /**
                     * 获取<p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。<br>示例MinimaxMusic模型传入歌词时：<br>{"lyric":{"小马在快乐奔跑，花儿在开放"}}</p>
                     * @return AdditionalParameters <p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。<br>示例MinimaxMusic模型传入歌词时：<br>{"lyric":{"小马在快乐奔跑，花儿在开放"}}</p>
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置<p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。<br>示例MinimaxMusic模型传入歌词时：<br>{"lyric":{"小马在快乐奔跑，花儿在开放"}}</p>
                     * @param _additionalParameters <p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。<br>示例MinimaxMusic模型传入歌词时：<br>{"lyric":{"小马在快乐奔跑，花儿在开放"}}</p>
                     * 
                     */
                    void SetAdditionalParameters(const std::string& _additionalParameters);

                    /**
                     * 判断参数 AdditionalParameters 是否已赋值
                     * @return AdditionalParameters 是否已赋值
                     * 
                     */
                    bool AdditionalParametersHasBeenSet() const;

                    /**
                     * 获取<p>接口操作者名称。</p>
                     * @return Operator <p>接口操作者名称。</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>接口操作者名称。</p>
                     * @param _operator <p>接口操作者名称。</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * <p>模型名称。生音乐当前支持的模型: GL、MinimaxMusic。</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。<br>模型GL支持的版本号：2.0、3.0-clip、3.0-pro。<br>模型MinimaxMusic支持的版本号：2.0、2.5、2.6。</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>指定场景生音频。音乐: music。</p>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>生成视频的描述。(注：最大支持2000字符)。当未传入图片时，此参数必填。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>参考视频信息。仅部分模型支持。</p>
                     */
                    std::vector<AigcAudioReferenceVideoInfo> m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                    /**
                     * <p>传入参考音频信息。</p><p>比如传入音频生成音乐时需要传入。</p>
                     */
                    std::vector<AigcAudioReferenceAudioInfo> m_audioInfos;
                    bool m_audioInfosHasBeenSet;

                    /**
                     * <p>输出音频格式，默认不填。mp3、wav。</p>
                     */
                    std::string m_outputAudioFormat;
                    bool m_outputAudioFormatHasBeenSet;

                    /**
                     * <p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     */
                    AigcStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

                    /**
                     * <p>用于传入要求的额外参数。</p>
                     */
                    AigcAudioExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * <p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。<br>示例MinimaxMusic模型传入歌词时：<br>{"lyric":{"小马在快乐奔跑，花儿在开放"}}</p>
                     */
                    std::string m_additionalParameters;
                    bool m_additionalParametersHasBeenSet;

                    /**
                     * <p>接口操作者名称。</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCAUDIOTASKREQUEST_H_
