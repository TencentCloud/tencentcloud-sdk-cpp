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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOTASKREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcAudioReferenceVideoInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcAudioReferenceAudioInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcAudioOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
                     * 获取<p>点播应用 ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     * @return SubAppId <p>点播应用 ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p>点播应用 ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     * @param _subAppId <p>点播应用 ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>模型名称。</p>
                     * @return ModelName <p>模型名称。</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称。</p>
                     * @param _modelName <p>模型名称。</p>
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
                     * 获取<p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。</p>
                     * @return ModelVersion <p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。</p>
                     * @param _modelVersion <p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。</p>
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
                     * 获取<p>指定场景，目前支持sfx（音效）、music（音乐）。</p>
                     * @return SceneType <p>指定场景，目前支持sfx（音效）、music（音乐）。</p>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>指定场景，目前支持sfx（音效）、music（音乐）。</p>
                     * @param _sceneType <p>指定场景，目前支持sfx（音效）、music（音乐）。</p>
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
                     * 获取<p>生成音频的描述</p>
                     * @return Prompt <p>生成音频的描述</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>生成音频的描述</p>
                     * @param _prompt <p>生成音频的描述</p>
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
                     * 获取<p>参考视频信息</p>
                     * @return VideoInfos <p>参考视频信息</p>
                     * 
                     */
                    std::vector<AigcAudioReferenceVideoInfo> GetVideoInfos() const;

                    /**
                     * 设置<p>参考视频信息</p>
                     * @param _videoInfos <p>参考视频信息</p>
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
                     * 获取<p>输出参数</p>
                     * @return OutputConfig <p>输出参数</p>
                     * 
                     */
                    AigcAudioOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>输出参数</p>
                     * @param _outputConfig <p>输出参数</p>
                     * 
                     */
                    void SetOutputConfig(const AigcAudioOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取<p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。<br>示例：<br>{"camera_control":{"type":"simple"}}</p>
                     * @return AdditionalParameters <p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。<br>示例：<br>{"camera_control":{"type":"simple"}}</p>
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置<p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。<br>示例：<br>{"camera_control":{"type":"simple"}}</p>
                     * @param _additionalParameters <p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。<br>示例：<br>{"camera_control":{"type":"simple"}}</p>
                     * 
                     */
                    void SetAdditionalParameters(const std::string& _additionalParameters);

                    /**
                     * 判断参数 AdditionalParameters 是否已赋值
                     * @return AdditionalParameters 是否已赋值
                     * 
                     */
                    bool AdditionalParametersHasBeenSet() const;

                private:

                    /**
                     * <p>点播应用 ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>模型名称。</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>指定场景，目前支持sfx（音效）、music（音乐）。</p>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>生成音频的描述</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>参考视频信息</p>
                     */
                    std::vector<AigcAudioReferenceVideoInfo> m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                    /**
                     * <p>传入参考音频信息。</p><p>比如传入音频生成音乐时需要传入。</p>
                     */
                    std::vector<AigcAudioReferenceAudioInfo> m_audioInfos;
                    bool m_audioInfosHasBeenSet;

                    /**
                     * <p>输出参数</p>
                     */
                    AigcAudioOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * <p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。<br>示例：<br>{"camera_control":{"type":"simple"}}</p>
                     */
                    std::string m_additionalParameters;
                    bool m_additionalParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOTASKREQUEST_H_
