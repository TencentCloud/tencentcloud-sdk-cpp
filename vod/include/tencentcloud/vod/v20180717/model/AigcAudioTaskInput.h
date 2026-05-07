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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * AIGC 生音效任务的输入。
                */
                class AigcAudioTaskInput : public AbstractModel
                {
                public:
                    AigcAudioTaskInput();
                    ~AigcAudioTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>模型版本。</p>
                     * @return ModelVersion <p>模型版本。</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>模型版本。</p>
                     * @param _modelVersion <p>模型版本。</p>
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
                     * 获取<p>场景类型。取值如下：<li>当 ModelName 为 Kling 时，取值 motion_control 表示动作控制；</li><li>其他 ModelName 暂不支持。</li></p>
                     * @return SceneType <p>场景类型。取值如下：<li>当 ModelName 为 Kling 时，取值 motion_control 表示动作控制；</li><li>其他 ModelName 暂不支持。</li></p>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>场景类型。取值如下：<li>当 ModelName 为 Kling 时，取值 motion_control 表示动作控制；</li><li>其他 ModelName 暂不支持。</li></p>
                     * @param _sceneType <p>场景类型。取值如下：<li>当 ModelName 为 Kling 时，取值 motion_control 表示动作控制；</li><li>其他 ModelName 暂不支持。</li></p>
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
                     * 获取<p>生成视频的提示词。最大支持1000字符，当 FileInfos 为空时，此参数必填。</p>
                     * @return Prompt <p>生成视频的提示词。最大支持1000字符，当 FileInfos 为空时，此参数必填。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>生成视频的提示词。最大支持1000字符，当 FileInfos 为空时，此参数必填。</p>
                     * @param _prompt <p>生成视频的提示词。最大支持1000字符，当 FileInfos 为空时，此参数必填。</p>
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
                     * 获取<p>要阻止模型生成视频的提示词。最大支持1000字符。</p>
                     * @return NegativePrompt <p>要阻止模型生成视频的提示词。最大支持1000字符。</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>要阻止模型生成视频的提示词。最大支持1000字符。</p>
                     * @param _negativePrompt <p>要阻止模型生成视频的提示词。最大支持1000字符。</p>
                     * 
                     */
                    void SetNegativePrompt(const std::string& _negativePrompt);

                    /**
                     * 判断参数 NegativePrompt 是否已赋值
                     * @return NegativePrompt 是否已赋值
                     * 
                     */
                    bool NegativePromptHasBeenSet() const;

                    /**
                     * 获取<p>是否自动优化提示词。开启时将自动优化传入的Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * @return EnhancePrompt <p>是否自动优化提示词。开启时将自动优化传入的Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * 
                     */
                    bool GetEnhancePrompt() const;

                    /**
                     * 设置<p>是否自动优化提示词。开启时将自动优化传入的Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * @param _enhancePrompt <p>是否自动优化提示词。开启时将自动优化传入的Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * 
                     */
                    void SetEnhancePrompt(const bool& _enhancePrompt);

                    /**
                     * 判断参数 EnhancePrompt 是否已赋值
                     * @return EnhancePrompt 是否已赋值
                     * 
                     */
                    bool EnhancePromptHasBeenSet() const;

                    /**
                     * 获取<p>AIGC 生图输出结果文件输出。</p>
                     * @return OutputConfig <p>AIGC 生图输出结果文件输出。</p>
                     * 
                     */
                    AigcAudioOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>AIGC 生图输出结果文件输出。</p>
                     * @param _outputConfig <p>AIGC 生图输出结果文件输出。</p>
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
                     * 获取<p>额外参数</p>
                     * @return AdditionalParameters <p>额外参数</p>
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置<p>额外参数</p>
                     * @param _additionalParameters <p>额外参数</p>
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
                     * <p>模型名称。</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>模型版本。</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>场景类型。取值如下：<li>当 ModelName 为 Kling 时，取值 motion_control 表示动作控制；</li><li>其他 ModelName 暂不支持。</li></p>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>生成视频的提示词。最大支持1000字符，当 FileInfos 为空时，此参数必填。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>要阻止模型生成视频的提示词。最大支持1000字符。</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>是否自动优化提示词。开启时将自动优化传入的Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     */
                    bool m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * <p>AIGC 生图输出结果文件输出。</p>
                     */
                    AigcAudioOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * <p>额外参数</p>
                     */
                    std::string m_additionalParameters;
                    bool m_additionalParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOTASKINPUT_H_
