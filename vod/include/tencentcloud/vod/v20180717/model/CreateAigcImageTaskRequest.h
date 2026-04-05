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
                     * 获取<p><b>点播<a href="https://cloud.tencent.com/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="https://cloud.tencent.com/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="https://cloud.tencent.com/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="https://cloud.tencent.com/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
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
                     * 获取<p>模型名称。取值：</p><li>GG</li><li>SI</li><li>Qwen</li><li>Hunyuan</li><li>Vidu</li><li>Kling</li>
                     * @return ModelName <p>模型名称。取值：</p><li>GG</li><li>SI</li><li>Qwen</li><li>Hunyuan</li><li>Vidu</li><li>Kling</li>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称。取值：</p><li>GG</li><li>SI</li><li>Qwen</li><li>Hunyuan</li><li>Vidu</li><li>Kling</li>
                     * @param _modelName <p>模型名称。取值：</p><li>GG</li><li>SI</li><li>Qwen</li><li>Hunyuan</li><li>Vidu</li><li>Kling</li>
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
                     * 获取<p>模型版本。取值：</p><li>当 ModelName 是 GG，可选值为 2.5、3.0、3.1；</li><li>当 ModelName 是 Jimeng，可选值为 4.0；</li><li>当 ModelName 是 SI，可选值为 4.0、4.5、5.0-lite；</li><li>当 ModelName 是 Qwen，可选值为 0925、2.0；</li><li>当 ModelName 是 Hunyuan，可选值为 3.0；</li><li>当 ModelName 是 Vidu，可选值为 q2；</li><li>当 ModelName 是 Kling，可选值为 2.1、3.0、3.0-Omni；</li>
                     * @return ModelVersion <p>模型版本。取值：</p><li>当 ModelName 是 GG，可选值为 2.5、3.0、3.1；</li><li>当 ModelName 是 Jimeng，可选值为 4.0；</li><li>当 ModelName 是 SI，可选值为 4.0、4.5、5.0-lite；</li><li>当 ModelName 是 Qwen，可选值为 0925、2.0；</li><li>当 ModelName 是 Hunyuan，可选值为 3.0；</li><li>当 ModelName 是 Vidu，可选值为 q2；</li><li>当 ModelName 是 Kling，可选值为 2.1、3.0、3.0-Omni；</li>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>模型版本。取值：</p><li>当 ModelName 是 GG，可选值为 2.5、3.0、3.1；</li><li>当 ModelName 是 Jimeng，可选值为 4.0；</li><li>当 ModelName 是 SI，可选值为 4.0、4.5、5.0-lite；</li><li>当 ModelName 是 Qwen，可选值为 0925、2.0；</li><li>当 ModelName 是 Hunyuan，可选值为 3.0；</li><li>当 ModelName 是 Vidu，可选值为 q2；</li><li>当 ModelName 是 Kling，可选值为 2.1、3.0、3.0-Omni；</li>
                     * @param _modelVersion <p>模型版本。取值：</p><li>当 ModelName 是 GG，可选值为 2.5、3.0、3.1；</li><li>当 ModelName 是 Jimeng，可选值为 4.0；</li><li>当 ModelName 是 SI，可选值为 4.0、4.5、5.0-lite；</li><li>当 ModelName 是 Qwen，可选值为 0925、2.0；</li><li>当 ModelName 是 Hunyuan，可选值为 3.0；</li><li>当 ModelName 是 Vidu，可选值为 q2；</li><li>当 ModelName 是 Kling，可选值为 2.1、3.0、3.0-Omni；</li>
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
                     * 获取<p>AIGC 生图任务的输入图片的文件信息。各模型支持最大参考图数量：</p><ul><li>GG 2.5： 3张；</li><li>GG 3.0：14张；</li><li>GG 3.1：14张；</li><li>Kling 2.1：4张；</li><li>Kling 3.0：1张；</li><li>Kling 3.0-Omni：10张；</li><li>SI 4.0：14张；</li><li>SI 4.5：14张；</li><li>SI 5.0-lite：14张；</li><li>Vidu q2：7张；</li><li>Hunyuan 3.0：3张；</li><li>Qwen 0925：1张；</li><li>Qwen 2.0：3张；</li><li>MJ v7：3张。</li></ul>
                     * @return FileInfos <p>AIGC 生图任务的输入图片的文件信息。各模型支持最大参考图数量：</p><ul><li>GG 2.5： 3张；</li><li>GG 3.0：14张；</li><li>GG 3.1：14张；</li><li>Kling 2.1：4张；</li><li>Kling 3.0：1张；</li><li>Kling 3.0-Omni：10张；</li><li>SI 4.0：14张；</li><li>SI 4.5：14张；</li><li>SI 5.0-lite：14张；</li><li>Vidu q2：7张；</li><li>Hunyuan 3.0：3张；</li><li>Qwen 0925：1张；</li><li>Qwen 2.0：3张；</li><li>MJ v7：3张。</li></ul>
                     * 
                     */
                    std::vector<AigcImageTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置<p>AIGC 生图任务的输入图片的文件信息。各模型支持最大参考图数量：</p><ul><li>GG 2.5： 3张；</li><li>GG 3.0：14张；</li><li>GG 3.1：14张；</li><li>Kling 2.1：4张；</li><li>Kling 3.0：1张；</li><li>Kling 3.0-Omni：10张；</li><li>SI 4.0：14张；</li><li>SI 4.5：14张；</li><li>SI 5.0-lite：14张；</li><li>Vidu q2：7张；</li><li>Hunyuan 3.0：3张；</li><li>Qwen 0925：1张；</li><li>Qwen 2.0：3张；</li><li>MJ v7：3张。</li></ul>
                     * @param _fileInfos <p>AIGC 生图任务的输入图片的文件信息。各模型支持最大参考图数量：</p><ul><li>GG 2.5： 3张；</li><li>GG 3.0：14张；</li><li>GG 3.1：14张；</li><li>Kling 2.1：4张；</li><li>Kling 3.0：1张；</li><li>Kling 3.0-Omni：10张；</li><li>SI 4.0：14张；</li><li>SI 4.5：14张；</li><li>SI 5.0-lite：14张；</li><li>Vidu q2：7张；</li><li>Hunyuan 3.0：3张；</li><li>Qwen 0925：1张；</li><li>Qwen 2.0：3张；</li><li>MJ v7：3张。</li></ul>
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
                     * 获取<p>生成图片的提示词。当 FileInfos 为空时，此参数必填。</p>
                     * @return Prompt <p>生成图片的提示词。当 FileInfos 为空时，此参数必填。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>生成图片的提示词。当 FileInfos 为空时，此参数必填。</p>
                     * @param _prompt <p>生成图片的提示词。当 FileInfos 为空时，此参数必填。</p>
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
                     * 获取<p>要阻止模型生成图片的提示词。</p>
                     * @return NegativePrompt <p>要阻止模型生成图片的提示词。</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>要阻止模型生成图片的提示词。</p>
                     * @param _negativePrompt <p>要阻止模型生成图片的提示词。</p>
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
                     * 获取<p>是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * @return EnhancePrompt <p>是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * 
                     */
                    std::string GetEnhancePrompt() const;

                    /**
                     * 设置<p>是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * @param _enhancePrompt <p>是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
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
                     * 获取<p>生图任务的输出媒体文件配置。</p>
                     * @return OutputConfig <p>生图任务的输出媒体文件配置。</p>
                     * 
                     */
                    AigcImageOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>生图任务的输出媒体文件配置。</p>
                     * @param _outputConfig <p>生图任务的输出媒体文件配置。</p>
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
                     * 获取<p>输入的区域信息。可选值：</p><ul><li>Mainland：中国大陆；</li><li>Oversea：海外；</li><li>OverseaUSWest：海外-美西；</li></ul>
                     * @return InputRegion <p>输入的区域信息。可选值：</p><ul><li>Mainland：中国大陆；</li><li>Oversea：海外；</li><li>OverseaUSWest：海外-美西；</li></ul>
                     * 
                     */
                    std::string GetInputRegion() const;

                    /**
                     * 设置<p>输入的区域信息。可选值：</p><ul><li>Mainland：中国大陆；</li><li>Oversea：海外；</li><li>OverseaUSWest：海外-美西；</li></ul>
                     * @param _inputRegion <p>输入的区域信息。可选值：</p><ul><li>Mainland：中国大陆；</li><li>Oversea：海外；</li><li>OverseaUSWest：海外-美西；</li></ul>
                     * 
                     */
                    void SetInputRegion(const std::string& _inputRegion);

                    /**
                     * 判断参数 InputRegion 是否已赋值
                     * @return InputRegion 是否已赋值
                     * 
                     */
                    bool InputRegionHasBeenSet() const;

                    /**
                     * 获取<p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @return SessionId <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @param _sessionId <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
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
                     * 获取<p>来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。</p>
                     * @return SessionContext <p>来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。</p>
                     * @param _sessionContext <p>来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。</p>
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
                     * 获取<p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * @return TasksPriority <p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * @param _tasksPriority <p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
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
                     * 获取<p>保留字段，特殊用途时使用。</p>
                     * @return ExtInfo <p>保留字段，特殊用途时使用。</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>保留字段，特殊用途时使用。</p>
                     * @param _extInfo <p>保留字段，特殊用途时使用。</p>
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
                     * <p><b>点播<a href="https://cloud.tencent.com/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>模型名称。取值：</p><li>GG</li><li>SI</li><li>Qwen</li><li>Hunyuan</li><li>Vidu</li><li>Kling</li>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>模型版本。取值：</p><li>当 ModelName 是 GG，可选值为 2.5、3.0、3.1；</li><li>当 ModelName 是 Jimeng，可选值为 4.0；</li><li>当 ModelName 是 SI，可选值为 4.0、4.5、5.0-lite；</li><li>当 ModelName 是 Qwen，可选值为 0925、2.0；</li><li>当 ModelName 是 Hunyuan，可选值为 3.0；</li><li>当 ModelName 是 Vidu，可选值为 q2；</li><li>当 ModelName 是 Kling，可选值为 2.1、3.0、3.0-Omni；</li>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>AIGC 生图任务的输入图片的文件信息。各模型支持最大参考图数量：</p><ul><li>GG 2.5： 3张；</li><li>GG 3.0：14张；</li><li>GG 3.1：14张；</li><li>Kling 2.1：4张；</li><li>Kling 3.0：1张；</li><li>Kling 3.0-Omni：10张；</li><li>SI 4.0：14张；</li><li>SI 4.5：14张；</li><li>SI 5.0-lite：14张；</li><li>Vidu q2：7张；</li><li>Hunyuan 3.0：3张；</li><li>Qwen 0925：1张；</li><li>Qwen 2.0：3张；</li><li>MJ v7：3张。</li></ul>
                     */
                    std::vector<AigcImageTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * <p>生成图片的提示词。当 FileInfos 为空时，此参数必填。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>要阻止模型生成图片的提示词。</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     */
                    std::string m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * <p>生图任务的输出媒体文件配置。</p>
                     */
                    AigcImageOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * <p>输入的区域信息。可选值：</p><ul><li>Mainland：中国大陆；</li><li>Oversea：海外；</li><li>OverseaUSWest：海外-美西；</li></ul>
                     */
                    std::string m_inputRegion;
                    bool m_inputRegionHasBeenSet;

                    /**
                     * <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * <p>保留字段，特殊用途时使用。</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCIMAGETASKREQUEST_H_
