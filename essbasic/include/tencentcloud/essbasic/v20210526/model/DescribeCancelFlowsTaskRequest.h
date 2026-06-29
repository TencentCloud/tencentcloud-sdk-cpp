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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECANCELFLOWSTASKREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECANCELFLOWSTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * DescribeCancelFlowsTask请求参数结构体
                */
                class DescribeCancelFlowsTaskRequest : public AbstractModel
                {
                public:
                    DescribeCancelFlowsTaskRequest();
                    ~DescribeCancelFlowsTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * @return Agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * @param _agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取<p>批量撤销任务编号，为32位字符串，通过接口<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/ChannelBatchCancelFlows">批量撤销合同流程</a>或者<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/ChannelCreateBatchCancelFlowUrl">获取批量撤销签署流程腾讯电子签小程序链接</a>或者<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/CancelOrganizationFlows">全量撤销企业合同</a>获得。</p>
                     * @return TaskId <p>批量撤销任务编号，为32位字符串，通过接口<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/ChannelBatchCancelFlows">批量撤销合同流程</a>或者<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/ChannelCreateBatchCancelFlowUrl">获取批量撤销签署流程腾讯电子签小程序链接</a>或者<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/CancelOrganizationFlows">全量撤销企业合同</a>获得。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>批量撤销任务编号，为32位字符串，通过接口<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/ChannelBatchCancelFlows">批量撤销合同流程</a>或者<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/ChannelCreateBatchCancelFlowUrl">获取批量撤销签署流程腾讯电子签小程序链接</a>或者<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/CancelOrganizationFlows">全量撤销企业合同</a>获得。</p>
                     * @param _taskId <p>批量撤销任务编号，为32位字符串，通过接口<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/ChannelBatchCancelFlows">批量撤销合同流程</a>或者<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/ChannelCreateBatchCancelFlowUrl">获取批量撤销签署流程腾讯电子签小程序链接</a>或者<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/CancelOrganizationFlows">全量撤销企业合同</a>获得。</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>撤销任务类型</p><p>枚举值：</p><ul><li>0： 默认类型，批量撤销合同任务或者获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul><p>枚举值：</p><ul><li>0： 默认类型，批量撤销合同任务或者获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul>
                     * @return CancelType <p>撤销任务类型</p><p>枚举值：</p><ul><li>0： 默认类型，批量撤销合同任务或者获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul><p>枚举值：</p><ul><li>0： 默认类型，批量撤销合同任务或者获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul>
                     * 
                     */
                    uint64_t GetCancelType() const;

                    /**
                     * 设置<p>撤销任务类型</p><p>枚举值：</p><ul><li>0： 默认类型，批量撤销合同任务或者获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul><p>枚举值：</p><ul><li>0： 默认类型，批量撤销合同任务或者获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul>
                     * @param _cancelType <p>撤销任务类型</p><p>枚举值：</p><ul><li>0： 默认类型，批量撤销合同任务或者获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul><p>枚举值：</p><ul><li>0： 默认类型，批量撤销合同任务或者获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul>
                     * 
                     */
                    void SetCancelType(const uint64_t& _cancelType);

                    /**
                     * 判断参数 CancelType 是否已赋值
                     * @return CancelType 是否已赋值
                     * 
                     */
                    bool CancelTypeHasBeenSet() const;

                private:

                    /**
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>批量撤销任务编号，为32位字符串，通过接口<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/ChannelBatchCancelFlows">批量撤销合同流程</a>或者<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/ChannelCreateBatchCancelFlowUrl">获取批量撤销签署流程腾讯电子签小程序链接</a>或者<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/CancelOrganizationFlows">全量撤销企业合同</a>获得。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>撤销任务类型</p><p>枚举值：</p><ul><li>0： 默认类型，批量撤销合同任务或者获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul><p>枚举值：</p><ul><li>0： 默认类型，批量撤销合同任务或者获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul>
                     */
                    uint64_t m_cancelType;
                    bool m_cancelTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECANCELFLOWSTASKREQUEST_H_
