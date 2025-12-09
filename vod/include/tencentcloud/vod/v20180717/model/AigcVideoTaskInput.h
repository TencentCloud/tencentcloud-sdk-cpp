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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTaskInputFileInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AIGC 生视频任务的输入。
                */
                class AigcVideoTaskInput : public AbstractModel
                {
                public:
                    AigcVideoTaskInput();
                    ~AigcVideoTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型名称。
                     * @return ModelName 模型名称。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称。
                     * @param _modelName 模型名称。
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
                     * 获取模型版本。
                     * @return ModelVersion 模型版本。
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置模型版本。
                     * @param _modelVersion 模型版本。
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
                     * 获取AIGC生图任务输入文件信息。
                     * @return FileInfos AIGC生图任务输入文件信息。
                     * 
                     */
                    std::vector<AigcVideoTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置AIGC生图任务输入文件信息。
                     * @param _fileInfos AIGC生图任务输入文件信息。
                     * 
                     */
                    void SetFileInfos(const std::vector<AigcVideoTaskInputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取用于作为尾帧画面来生成视频的媒体文件 ID。该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。
                     * @return LastFrameFileId 用于作为尾帧画面来生成视频的媒体文件 ID。该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。
                     * 
                     */
                    std::string GetLastFrameFileId() const;

                    /**
                     * 设置用于作为尾帧画面来生成视频的媒体文件 ID。该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。
                     * @param _lastFrameFileId 用于作为尾帧画面来生成视频的媒体文件 ID。该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。
                     * 
                     */
                    void SetLastFrameFileId(const std::string& _lastFrameFileId);

                    /**
                     * 判断参数 LastFrameFileId 是否已赋值
                     * @return LastFrameFileId 是否已赋值
                     * 
                     */
                    bool LastFrameFileIdHasBeenSet() const;

                    /**
                     * 获取生成视频的提示词。最大支持1000字符，当 FileInfos 为空时，此参数必填。
                     * @return Prompt 生成视频的提示词。最大支持1000字符，当 FileInfos 为空时，此参数必填。
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置生成视频的提示词。最大支持1000字符，当 FileInfos 为空时，此参数必填。
                     * @param _prompt 生成视频的提示词。最大支持1000字符，当 FileInfos 为空时，此参数必填。
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
                     * 获取要阻止模型生成视频的提示词。最大支持1000字符。
                     * @return NegativePrompt 要阻止模型生成视频的提示词。最大支持1000字符。
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置要阻止模型生成视频的提示词。最大支持1000字符。
                     * @param _negativePrompt 要阻止模型生成视频的提示词。最大支持1000字符。
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
                     * 获取是否自动优化提示词。开启时将自动优化传入的Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     * @return EnhancePrompt 是否自动优化提示词。开启时将自动优化传入的Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     * 
                     */
                    std::string GetEnhancePrompt() const;

                    /**
                     * 设置是否自动优化提示词。开启时将自动优化传入的Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     * @param _enhancePrompt 是否自动优化提示词。开启时将自动优化传入的Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     * 
                     */
                    void SetEnhancePrompt(const std::string& _enhancePrompt);

                    /**
                     * 判断参数 EnhancePrompt 是否已赋值
                     * @return EnhancePrompt 是否已赋值
                     * 
                     */
                    bool EnhancePromptHasBeenSet() const;

                    /**
                     * 获取生成模式。取值有： <li>Standard：标准模式；</li> <li>Professional：高品质模式；</li> 
                     * @return GenerationMode 生成模式。取值有： <li>Standard：标准模式；</li> <li>Professional：高品质模式；</li> 
                     * 
                     */
                    std::string GetGenerationMode() const;

                    /**
                     * 设置生成模式。取值有： <li>Standard：标准模式；</li> <li>Professional：高品质模式；</li> 
                     * @param _generationMode 生成模式。取值有： <li>Standard：标准模式；</li> <li>Professional：高品质模式；</li> 
                     * 
                     */
                    void SetGenerationMode(const std::string& _generationMode);

                    /**
                     * 判断参数 GenerationMode 是否已赋值
                     * @return GenerationMode 是否已赋值
                     * 
                     */
                    bool GenerationModeHasBeenSet() const;

                    /**
                     * 获取AIGC 生图输出结果文件输出。
                     * @return OutputConfig AIGC 生图输出结果文件输出。
                     * 
                     */
                    AigcVideoOutputConfig GetOutputConfig() const;

                    /**
                     * 设置AIGC 生图输出结果文件输出。
                     * @param _outputConfig AIGC 生图输出结果文件输出。
                     * 
                     */
                    void SetOutputConfig(const AigcVideoOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                private:

                    /**
                     * 模型名称。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 模型版本。
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * AIGC生图任务输入文件信息。
                     */
                    std::vector<AigcVideoTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 用于作为尾帧画面来生成视频的媒体文件 ID。该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。
                     */
                    std::string m_lastFrameFileId;
                    bool m_lastFrameFileIdHasBeenSet;

                    /**
                     * 生成视频的提示词。最大支持1000字符，当 FileInfos 为空时，此参数必填。
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 要阻止模型生成视频的提示词。最大支持1000字符。
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * 是否自动优化提示词。开启时将自动优化传入的Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     */
                    std::string m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * 生成模式。取值有： <li>Standard：标准模式；</li> <li>Professional：高品质模式；</li> 
                     */
                    std::string m_generationMode;
                    bool m_generationModeHasBeenSet;

                    /**
                     * AIGC 生图输出结果文件输出。
                     */
                    AigcVideoOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUT_H_
