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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTBLINDWATERMARKREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTBLINDWATERMARKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ExtractBlindWatermarkInputInfo.h>
#include <tencentcloud/vod/v20180717/model/ExtractBlindWatermarkTaskConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ExtractBlindWatermark请求参数结构体
                */
                class ExtractBlindWatermarkRequest : public AbstractModel
                {
                public:
                    ExtractBlindWatermarkRequest();
                    ~ExtractBlindWatermarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数字水印类型，可选值：<li>blind-basic：基础版权数字水印；</li><li>blind-trace：溯源ab序列水印；</li>
                     * @return Type 数字水印类型，可选值：<li>blind-basic：基础版权数字水印；</li><li>blind-trace：溯源ab序列水印；</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数字水印类型，可选值：<li>blind-basic：基础版权数字水印；</li><li>blind-trace：溯源ab序列水印；</li>
                     * @param _type 数字水印类型，可选值：<li>blind-basic：基础版权数字水印；</li><li>blind-trace：溯源ab序列水印；</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取媒体处理的文件输入信息。
                     * @return InputInfo 媒体处理的文件输入信息。
                     * 
                     */
                    ExtractBlindWatermarkInputInfo GetInputInfo() const;

                    /**
                     * 设置媒体处理的文件输入信息。
                     * @param _inputInfo 媒体处理的文件输入信息。
                     * 
                     */
                    void SetInputInfo(const ExtractBlindWatermarkInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取添加水印时的点播应用 ID。注意不管是传入FILEID还是URL，都必须与添加水印时的SubAppId吻合才能提取到水印。
                     * @return SubAppId 添加水印时的点播应用 ID。注意不管是传入FILEID还是URL，都必须与添加水印时的SubAppId吻合才能提取到水印。
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置添加水印时的点播应用 ID。注意不管是传入FILEID还是URL，都必须与添加水印时的SubAppId吻合才能提取到水印。
                     * @param _subAppId 添加水印时的点播应用 ID。注意不管是传入FILEID还是URL，都必须与添加水印时的SubAppId吻合才能提取到水印。
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
                     * 获取提取数字水印任务配置
                     * @return ExtractBlindWatermarkConfig 提取数字水印任务配置
                     * 
                     */
                    ExtractBlindWatermarkTaskConfig GetExtractBlindWatermarkConfig() const;

                    /**
                     * 设置提取数字水印任务配置
                     * @param _extractBlindWatermarkConfig 提取数字水印任务配置
                     * 
                     */
                    void SetExtractBlindWatermarkConfig(const ExtractBlindWatermarkTaskConfig& _extractBlindWatermarkConfig);

                    /**
                     * 判断参数 ExtractBlindWatermarkConfig 是否已赋值
                     * @return ExtractBlindWatermarkConfig 是否已赋值
                     * 
                     */
                    bool ExtractBlindWatermarkConfigHasBeenSet() const;

                    /**
                     * 获取标识来源上下文，用于透传用户请求信息，在 ExtractBlindWatermarkComplete 回调和任务流状态变更回调将返回该字段值，最长 1000 个字符。
                     * @return SessionContext 标识来源上下文，用于透传用户请求信息，在 ExtractBlindWatermarkComplete 回调和任务流状态变更回调将返回该字段值，最长 1000 个字符。
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置标识来源上下文，用于透传用户请求信息，在 ExtractBlindWatermarkComplete 回调和任务流状态变更回调将返回该字段值，最长 1000 个字符。
                     * @param _sessionContext 标识来源上下文，用于透传用户请求信息，在 ExtractBlindWatermarkComplete 回调和任务流状态变更回调将返回该字段值，最长 1000 个字符。
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
                     * 获取用于任务去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * @return SessionId 用于任务去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置用于任务去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * @param _sessionId 用于任务去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
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

                private:

                    /**
                     * 数字水印类型，可选值：<li>blind-basic：基础版权数字水印；</li><li>blind-trace：溯源ab序列水印；</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 媒体处理的文件输入信息。
                     */
                    ExtractBlindWatermarkInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 添加水印时的点播应用 ID。注意不管是传入FILEID还是URL，都必须与添加水印时的SubAppId吻合才能提取到水印。
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 提取数字水印任务配置
                     */
                    ExtractBlindWatermarkTaskConfig m_extractBlindWatermarkConfig;
                    bool m_extractBlindWatermarkConfigHasBeenSet;

                    /**
                     * 标识来源上下文，用于透传用户请求信息，在 ExtractBlindWatermarkComplete 回调和任务流状态变更回调将返回该字段值，最长 1000 个字符。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 用于任务去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTBLINDWATERMARKREQUEST_H_
