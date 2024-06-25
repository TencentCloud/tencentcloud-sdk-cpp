/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWSIGNREVIEWREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWSIGNREVIEWREQUEST_H_

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
                * ChannelCreateFlowSignReview请求参数结构体
                */
                class ChannelCreateFlowSignReviewRequest : public AbstractModel
                {
                public:
                    ChannelCreateFlowSignReviewRequest();
                    ~ChannelCreateFlowSignReviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
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
                     * 获取合同流程ID，为32位字符串。
                     * @return FlowId 合同流程ID，为32位字符串。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同流程ID，为32位字符串。
                     * @param _flowId 合同流程ID，为32位字符串。
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取企业内部审核结果
<ul><li>PASS: 审核通过（流程可以继续签署或者发起）</li>
<li>REJECT: 审核拒绝（流程状态不变，可以继续调用审核接口通过审核）</li>
<li>SIGN_REJECT:拒签(流程终止，流程状态变为拒签状态)</li></ul>
                     * @return ReviewType 企业内部审核结果
<ul><li>PASS: 审核通过（流程可以继续签署或者发起）</li>
<li>REJECT: 审核拒绝（流程状态不变，可以继续调用审核接口通过审核）</li>
<li>SIGN_REJECT:拒签(流程终止，流程状态变为拒签状态)</li></ul>
                     * 
                     */
                    std::string GetReviewType() const;

                    /**
                     * 设置企业内部审核结果
<ul><li>PASS: 审核通过（流程可以继续签署或者发起）</li>
<li>REJECT: 审核拒绝（流程状态不变，可以继续调用审核接口通过审核）</li>
<li>SIGN_REJECT:拒签(流程终止，流程状态变为拒签状态)</li></ul>
                     * @param _reviewType 企业内部审核结果
<ul><li>PASS: 审核通过（流程可以继续签署或者发起）</li>
<li>REJECT: 审核拒绝（流程状态不变，可以继续调用审核接口通过审核）</li>
<li>SIGN_REJECT:拒签(流程终止，流程状态变为拒签状态)</li></ul>
                     * 
                     */
                    void SetReviewType(const std::string& _reviewType);

                    /**
                     * 判断参数 ReviewType 是否已赋值
                     * @return ReviewType 是否已赋值
                     * 
                     */
                    bool ReviewTypeHasBeenSet() const;

                    /**
                     * 获取审核结果原因
<ul><li>字符串长度不超过200</li>
<li>当ReviewType 是拒绝（REJECT） 时此字段必填。</li>
<li>当ReviewType 是拒绝（SIGN_REJECT） 时此字段必填。</li></ul>
                     * @return ReviewMessage 审核结果原因
<ul><li>字符串长度不超过200</li>
<li>当ReviewType 是拒绝（REJECT） 时此字段必填。</li>
<li>当ReviewType 是拒绝（SIGN_REJECT） 时此字段必填。</li></ul>
                     * 
                     */
                    std::string GetReviewMessage() const;

                    /**
                     * 设置审核结果原因
<ul><li>字符串长度不超过200</li>
<li>当ReviewType 是拒绝（REJECT） 时此字段必填。</li>
<li>当ReviewType 是拒绝（SIGN_REJECT） 时此字段必填。</li></ul>
                     * @param _reviewMessage 审核结果原因
<ul><li>字符串长度不超过200</li>
<li>当ReviewType 是拒绝（REJECT） 时此字段必填。</li>
<li>当ReviewType 是拒绝（SIGN_REJECT） 时此字段必填。</li></ul>
                     * 
                     */
                    void SetReviewMessage(const std::string& _reviewMessage);

                    /**
                     * 判断参数 ReviewMessage 是否已赋值
                     * @return ReviewMessage 是否已赋值
                     * 
                     */
                    bool ReviewMessageHasBeenSet() const;

                    /**
                     * 获取审核节点的签署人标志，用于指定当前审核的签署方。
<font color= "red">注意：以下情况必须传递RecipientId</font>
<ul><li> **发起签署流程时，指定签署人需要审批（即签署人需要审批
<a href="https://qian.tencent.com/developers/partnerApis/dataTypes#flowapproverinfo" target="_blank">ApproverNeedSignReview</a>为true），则必须指定RecipientId**</li><li>**如果签署审核节点是个人， 此参数必填**。</li></ul>
                     * @return RecipientId 审核节点的签署人标志，用于指定当前审核的签署方。
<font color= "red">注意：以下情况必须传递RecipientId</font>
<ul><li> **发起签署流程时，指定签署人需要审批（即签署人需要审批
<a href="https://qian.tencent.com/developers/partnerApis/dataTypes#flowapproverinfo" target="_blank">ApproverNeedSignReview</a>为true），则必须指定RecipientId**</li><li>**如果签署审核节点是个人， 此参数必填**。</li></ul>
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置审核节点的签署人标志，用于指定当前审核的签署方。
<font color= "red">注意：以下情况必须传递RecipientId</font>
<ul><li> **发起签署流程时，指定签署人需要审批（即签署人需要审批
<a href="https://qian.tencent.com/developers/partnerApis/dataTypes#flowapproverinfo" target="_blank">ApproverNeedSignReview</a>为true），则必须指定RecipientId**</li><li>**如果签署审核节点是个人， 此参数必填**。</li></ul>
                     * @param _recipientId 审核节点的签署人标志，用于指定当前审核的签署方。
<font color= "red">注意：以下情况必须传递RecipientId</font>
<ul><li> **发起签署流程时，指定签署人需要审批（即签署人需要审批
<a href="https://qian.tencent.com/developers/partnerApis/dataTypes#flowapproverinfo" target="_blank">ApproverNeedSignReview</a>为true），则必须指定RecipientId**</li><li>**如果签署审核节点是个人， 此参数必填**。</li></ul>
                     * 
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     * 
                     */
                    bool RecipientIdHasBeenSet() const;

                    /**
                     * 获取流程审核操作类型，取值如下：
<ul><li>**SignReview**：（默认）签署审核</li>
<li>**CreateReview**：发起审核</li>
<li>注意：`该字段不传或者为空，则默认为SignReview签署审核，走签署审核流程`</li></ul>


                     * @return OperateType 流程审核操作类型，取值如下：
<ul><li>**SignReview**：（默认）签署审核</li>
<li>**CreateReview**：发起审核</li>
<li>注意：`该字段不传或者为空，则默认为SignReview签署审核，走签署审核流程`</li></ul>


                     * 
                     */
                    std::string GetOperateType() const;

                    /**
                     * 设置流程审核操作类型，取值如下：
<ul><li>**SignReview**：（默认）签署审核</li>
<li>**CreateReview**：发起审核</li>
<li>注意：`该字段不传或者为空，则默认为SignReview签署审核，走签署审核流程`</li></ul>


                     * @param _operateType 流程审核操作类型，取值如下：
<ul><li>**SignReview**：（默认）签署审核</li>
<li>**CreateReview**：发起审核</li>
<li>注意：`该字段不传或者为空，则默认为SignReview签署审核，走签署审核流程`</li></ul>


                     * 
                     */
                    void SetOperateType(const std::string& _operateType);

                    /**
                     * 判断参数 OperateType 是否已赋值
                     * @return OperateType 是否已赋值
                     * 
                     */
                    bool OperateTypeHasBeenSet() const;

                private:

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 合同流程ID，为32位字符串。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 企业内部审核结果
<ul><li>PASS: 审核通过（流程可以继续签署或者发起）</li>
<li>REJECT: 审核拒绝（流程状态不变，可以继续调用审核接口通过审核）</li>
<li>SIGN_REJECT:拒签(流程终止，流程状态变为拒签状态)</li></ul>
                     */
                    std::string m_reviewType;
                    bool m_reviewTypeHasBeenSet;

                    /**
                     * 审核结果原因
<ul><li>字符串长度不超过200</li>
<li>当ReviewType 是拒绝（REJECT） 时此字段必填。</li>
<li>当ReviewType 是拒绝（SIGN_REJECT） 时此字段必填。</li></ul>
                     */
                    std::string m_reviewMessage;
                    bool m_reviewMessageHasBeenSet;

                    /**
                     * 审核节点的签署人标志，用于指定当前审核的签署方。
<font color= "red">注意：以下情况必须传递RecipientId</font>
<ul><li> **发起签署流程时，指定签署人需要审批（即签署人需要审批
<a href="https://qian.tencent.com/developers/partnerApis/dataTypes#flowapproverinfo" target="_blank">ApproverNeedSignReview</a>为true），则必须指定RecipientId**</li><li>**如果签署审核节点是个人， 此参数必填**。</li></ul>
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 流程审核操作类型，取值如下：
<ul><li>**SignReview**：（默认）签署审核</li>
<li>**CreateReview**：发起审核</li>
<li>注意：`该字段不传或者为空，则默认为SignReview签署审核，走签署审核流程`</li></ul>


                     */
                    std::string m_operateType;
                    bool m_operateTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWSIGNREVIEWREQUEST_H_
