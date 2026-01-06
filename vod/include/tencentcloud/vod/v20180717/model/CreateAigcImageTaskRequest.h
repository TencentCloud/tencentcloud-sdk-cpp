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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCIMAGETASKREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCIMAGETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcImageTaskInputFileInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcImageOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAigcImageTask请求参数结构体
                */
                class CreateAigcImageTaskRequest : public AbstractModel
                {
                public:
                    CreateAigcImageTaskRequest();
                    ~CreateAigcImageTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
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
                     * 获取模型名称。取值：
<li>GEM：Gemini；</li>
<li>Qwen：千问。</li>
<li>Hunyuan：混元。</li>
                     * @return ModelName 模型名称。取值：
<li>GEM：Gemini；</li>
<li>Qwen：千问。</li>
<li>Hunyuan：混元。</li>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称。取值：
<li>GEM：Gemini；</li>
<li>Qwen：千问。</li>
<li>Hunyuan：混元。</li>
                     * @param _modelName 模型名称。取值：
<li>GEM：Gemini；</li>
<li>Qwen：千问。</li>
<li>Hunyuan：混元。</li>
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
                     * 获取模型版本。取值：
<li>当 ModelName 是 GEM，可选值为 2.5、3.0；</li>
<li>当 ModelName 是 Qwen，可选值为 0925；</li>
<li>当 ModelName 是 Hunyuan，可选值为 3.0；</li>
                     * @return ModelVersion 模型版本。取值：
<li>当 ModelName 是 GEM，可选值为 2.5、3.0；</li>
<li>当 ModelName 是 Qwen，可选值为 0925；</li>
<li>当 ModelName 是 Hunyuan，可选值为 3.0；</li>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置模型版本。取值：
<li>当 ModelName 是 GEM，可选值为 2.5、3.0；</li>
<li>当 ModelName 是 Qwen，可选值为 0925；</li>
<li>当 ModelName 是 Hunyuan，可选值为 3.0；</li>
                     * @param _modelVersion 模型版本。取值：
<li>当 ModelName 是 GEM，可选值为 2.5、3.0；</li>
<li>当 ModelName 是 Qwen，可选值为 0925；</li>
<li>当 ModelName 是 Hunyuan，可选值为 3.0；</li>
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
                     * 获取AIGC 生图任务的输入图片的文件信息。默认只支持指定1个，使用模型 GEM 时，版本2.5最多指定3个，版本3.0最多指定14个。
                     * @return FileInfos AIGC 生图任务的输入图片的文件信息。默认只支持指定1个，使用模型 GEM 时，版本2.5最多指定3个，版本3.0最多指定14个。
                     * 
                     */
                    std::vector<AigcImageTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置AIGC 生图任务的输入图片的文件信息。默认只支持指定1个，使用模型 GEM 时，版本2.5最多指定3个，版本3.0最多指定14个。
                     * @param _fileInfos AIGC 生图任务的输入图片的文件信息。默认只支持指定1个，使用模型 GEM 时，版本2.5最多指定3个，版本3.0最多指定14个。
                     * 
                     */
                    void SetFileInfos(const std::vector<AigcImageTaskInputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取生成图片的提示词。当 FileInfos 为空时，此参数必填。
                     * @return Prompt 生成图片的提示词。当 FileInfos 为空时，此参数必填。
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置生成图片的提示词。当 FileInfos 为空时，此参数必填。
                     * @param _prompt 生成图片的提示词。当 FileInfos 为空时，此参数必填。
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
                     * 获取要阻止模型生成图片的提示词。
                     * @return NegativePrompt 要阻止模型生成图片的提示词。
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置要阻止模型生成图片的提示词。
                     * @param _negativePrompt 要阻止模型生成图片的提示词。
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
                     * 获取是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     * @return EnhancePrompt 是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     * 
                     */
                    std::string GetEnhancePrompt() const;

                    /**
                     * 设置是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     * @param _enhancePrompt 是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
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
                     * 获取生图任务的输出媒体文件配置。
                     * @return OutputConfig 生图任务的输出媒体文件配置。
                     * 
                     */
                    AigcImageOutputConfig GetOutputConfig() const;

                    /**
                     * 设置生图任务的输出媒体文件配置。
                     * @param _outputConfig 生图任务的输出媒体文件配置。
                     * 
                     */
                    void SetOutputConfig(const AigcImageOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * @return SessionId 用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * @param _sessionId 用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。
                     * @return SessionContext 来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。
                     * @param _sessionContext 来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * @return TasksPriority 任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * @param _tasksPriority 任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取保留字段，特殊用途时使用。
                     * @return ExtInfo 保留字段，特殊用途时使用。
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置保留字段，特殊用途时使用。
                     * @param _extInfo 保留字段，特殊用途时使用。
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 模型名称。取值：
<li>GEM：Gemini；</li>
<li>Qwen：千问。</li>
<li>Hunyuan：混元。</li>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 模型版本。取值：
<li>当 ModelName 是 GEM，可选值为 2.5、3.0；</li>
<li>当 ModelName 是 Qwen，可选值为 0925；</li>
<li>当 ModelName 是 Hunyuan，可选值为 3.0；</li>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * AIGC 生图任务的输入图片的文件信息。默认只支持指定1个，使用模型 GEM 时，版本2.5最多指定3个，版本3.0最多指定14个。
                     */
                    std::vector<AigcImageTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 生成图片的提示词。当 FileInfos 为空时，此参数必填。
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 要阻止模型生成图片的提示词。
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * 是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     */
                    std::string m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * 生图任务的输出媒体文件配置。
                     */
                    AigcImageOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * 用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * 保留字段，特殊用途时使用。
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCIMAGETASKREQUEST_H_
