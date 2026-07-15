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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_MODIFYORGANIZATIONBUSINESSINFORESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_MODIFYORGANIZATIONBUSINESSINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ModifyOrganizationBusinessInfo返回参数结构体
                */
                class ModifyOrganizationBusinessInfoResponse : public AbstractModel
                {
                public:
                    ModifyOrganizationBusinessInfoResponse();
                    ~ModifyOrganizationBusinessInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>业务状态码。<br>0 表示正常（无阻断）；非 0 表示存在阻断，例如企业名称变更且存在未完结合同时返回 1。</p><p>枚举值：</p><ul><li>0： 正常（无阻断）</li><li>1： 存在未完结合同</li></ul>
                     * @return ErrorCode <p>业务状态码。<br>0 表示正常（无阻断）；非 0 表示存在阻断，例如企业名称变更且存在未完结合同时返回 1。</p><p>枚举值：</p><ul><li>0： 正常（无阻断）</li><li>1： 存在未完结合同</li></ul>
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>提示文案。<br>例如企业名称变更且存在未完结合同时返回「存在 X 份未完结的合同，请先撤销或者完成合同」。</p>
                     * @return ErrorMessage <p>提示文案。<br>例如企业名称变更且存在未完结合同时返回「存在 X 份未完结的合同，请先撤销或者完成合同」。</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>未完结合同总数。<br>仅当企业名称变更且存在未完结合同时有值。</p>
                     * @return UnfinishedCount <p>未完结合同总数。<br>仅当企业名称变更且存在未完结合同时有值。</p>
                     * 
                     */
                    uint64_t GetUnfinishedCount() const;

                    /**
                     * 判断参数 UnfinishedCount 是否已赋值
                     * @return UnfinishedCount 是否已赋值
                     * 
                     */
                    bool UnfinishedCountHasBeenSet() const;

                    /**
                     * 获取<p>SaaS 企业下未完结合同的 flowId 列表。注:<code>SaaS企业下的合同ID可能无法查询，可通知子客企业去处理相应的合同</code></p>
                     * @return FlowIds <p>SaaS 企业下未完结合同的 flowId 列表。注:<code>SaaS企业下的合同ID可能无法查询，可通知子客企业去处理相应的合同</code></p>
                     * 
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 判断参数 FlowIds 是否已赋值
                     * @return FlowIds 是否已赋值
                     * 
                     */
                    bool FlowIdsHasBeenSet() const;

                    /**
                     * 获取<p>渠道子客企业下未完结合同的 flowId 列表。注：<code>子客企业在其他渠道下的合同ID可能无法查询，可通知子客企业去处理其他渠道下相应的合同</code></p>
                     * @return ChannelFlowIds <p>渠道子客企业下未完结合同的 flowId 列表。注：<code>子客企业在其他渠道下的合同ID可能无法查询，可通知子客企业去处理其他渠道下相应的合同</code></p>
                     * 
                     */
                    std::vector<std::string> GetChannelFlowIds() const;

                    /**
                     * 判断参数 ChannelFlowIds 是否已赋值
                     * @return ChannelFlowIds 是否已赋值
                     * 
                     */
                    bool ChannelFlowIdsHasBeenSet() const;

                private:

                    /**
                     * <p>业务状态码。<br>0 表示正常（无阻断）；非 0 表示存在阻断，例如企业名称变更且存在未完结合同时返回 1。</p><p>枚举值：</p><ul><li>0： 正常（无阻断）</li><li>1： 存在未完结合同</li></ul>
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>提示文案。<br>例如企业名称变更且存在未完结合同时返回「存在 X 份未完结的合同，请先撤销或者完成合同」。</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>未完结合同总数。<br>仅当企业名称变更且存在未完结合同时有值。</p>
                     */
                    uint64_t m_unfinishedCount;
                    bool m_unfinishedCountHasBeenSet;

                    /**
                     * <p>SaaS 企业下未完结合同的 flowId 列表。注:<code>SaaS企业下的合同ID可能无法查询，可通知子客企业去处理相应的合同</code></p>
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * <p>渠道子客企业下未完结合同的 flowId 列表。注：<code>子客企业在其他渠道下的合同ID可能无法查询，可通知子客企业去处理其他渠道下相应的合同</code></p>
                     */
                    std::vector<std::string> m_channelFlowIds;
                    bool m_channelFlowIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_MODIFYORGANIZATIONBUSINESSINFORESPONSE_H_
