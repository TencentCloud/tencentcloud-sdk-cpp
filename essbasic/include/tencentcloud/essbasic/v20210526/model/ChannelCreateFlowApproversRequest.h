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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWAPPROVERSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWAPPROVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/FillApproverInfo.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreateFlowApprovers请求参数结构体
                */
                class ChannelCreateFlowApproversRequest : public AbstractModel
                {
                public:
                    ChannelCreateFlowApproversRequest();
                    ~ChannelCreateFlowApproversRequest() = default;
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
                     * 获取补充企业签署人信息。

- 如果发起方指定的补充签署人是企业签署人，则需要提供企业名称或者企业OpenId；

- 如果不指定，则使用姓名和手机号进行补充。
                     * @return Approvers 补充企业签署人信息。

- 如果发起方指定的补充签署人是企业签署人，则需要提供企业名称或者企业OpenId；

- 如果不指定，则使用姓名和手机号进行补充。
                     * 
                     */
                    std::vector<FillApproverInfo> GetApprovers() const;

                    /**
                     * 设置补充企业签署人信息。

- 如果发起方指定的补充签署人是企业签署人，则需要提供企业名称或者企业OpenId；

- 如果不指定，则使用姓名和手机号进行补充。
                     * @param _approvers 补充企业签署人信息。

- 如果发起方指定的补充签署人是企业签署人，则需要提供企业名称或者企业OpenId；

- 如果不指定，则使用姓名和手机号进行补充。
                     * 
                     */
                    void SetApprovers(const std::vector<FillApproverInfo>& _approvers);

                    /**
                     * 判断参数 Approvers 是否已赋值
                     * @return Approvers 是否已赋值
                     * 
                     */
                    bool ApproversHasBeenSet() const;

                    /**
                     * 获取合同流程ID，为32位字符串。 
- 建议开发者妥善保存此流程ID，以便于顺利进行后续操作。
- 可登录腾讯电子签控制台，在 "合同"->"合同中心" 中查看某个合同的FlowId(在页面中展示为合同ID)。
- <font color="red">不建议继续使用</font>，请使用<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#fillapproverinfo/" target="_blank">补充签署人结构体</a>中的FlowId指定合同
                     * @return FlowId 合同流程ID，为32位字符串。 
- 建议开发者妥善保存此流程ID，以便于顺利进行后续操作。
- 可登录腾讯电子签控制台，在 "合同"->"合同中心" 中查看某个合同的FlowId(在页面中展示为合同ID)。
- <font color="red">不建议继续使用</font>，请使用<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#fillapproverinfo/" target="_blank">补充签署人结构体</a>中的FlowId指定合同
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同流程ID，为32位字符串。 
- 建议开发者妥善保存此流程ID，以便于顺利进行后续操作。
- 可登录腾讯电子签控制台，在 "合同"->"合同中心" 中查看某个合同的FlowId(在页面中展示为合同ID)。
- <font color="red">不建议继续使用</font>，请使用<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#fillapproverinfo/" target="_blank">补充签署人结构体</a>中的FlowId指定合同
                     * @param _flowId 合同流程ID，为32位字符串。 
- 建议开发者妥善保存此流程ID，以便于顺利进行后续操作。
- 可登录腾讯电子签控制台，在 "合同"->"合同中心" 中查看某个合同的FlowId(在页面中展示为合同ID)。
- <font color="red">不建议继续使用</font>，请使用<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#fillapproverinfo/" target="_blank">补充签署人结构体</a>中的FlowId指定合同
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
                     * 获取签署人信息补充方式

<ul><li>**1**: 表示往未指定签署人的节点，添加一个明确的签署人，支持企业或个人签署方。</li></ul>
                     * @return FillApproverType 签署人信息补充方式

<ul><li>**1**: 表示往未指定签署人的节点，添加一个明确的签署人，支持企业或个人签署方。</li></ul>
                     * 
                     */
                    int64_t GetFillApproverType() const;

                    /**
                     * 设置签署人信息补充方式

<ul><li>**1**: 表示往未指定签署人的节点，添加一个明确的签署人，支持企业或个人签署方。</li></ul>
                     * @param _fillApproverType 签署人信息补充方式

<ul><li>**1**: 表示往未指定签署人的节点，添加一个明确的签署人，支持企业或个人签署方。</li></ul>
                     * 
                     */
                    void SetFillApproverType(const int64_t& _fillApproverType);

                    /**
                     * 判断参数 FillApproverType 是否已赋值
                     * @return FillApproverType 是否已赋值
                     * 
                     */
                    bool FillApproverTypeHasBeenSet() const;

                    /**
                     * 获取操作人信息
                     * @return Operator 操作人信息
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息
                     * @param _operator 操作人信息
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取合同流程组的组ID, 在合同流程组场景下，生成合同流程组的签署链接时需要赋值
                     * @return FlowGroupId 合同流程组的组ID, 在合同流程组场景下，生成合同流程组的签署链接时需要赋值
                     * 
                     */
                    std::string GetFlowGroupId() const;

                    /**
                     * 设置合同流程组的组ID, 在合同流程组场景下，生成合同流程组的签署链接时需要赋值
                     * @param _flowGroupId 合同流程组的组ID, 在合同流程组场景下，生成合同流程组的签署链接时需要赋值
                     * 
                     */
                    void SetFlowGroupId(const std::string& _flowGroupId);

                    /**
                     * 判断参数 FlowGroupId 是否已赋值
                     * @return FlowGroupId 是否已赋值
                     * 
                     */
                    bool FlowGroupIdHasBeenSet() const;

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
                     * 补充企业签署人信息。

- 如果发起方指定的补充签署人是企业签署人，则需要提供企业名称或者企业OpenId；

- 如果不指定，则使用姓名和手机号进行补充。
                     */
                    std::vector<FillApproverInfo> m_approvers;
                    bool m_approversHasBeenSet;

                    /**
                     * 合同流程ID，为32位字符串。 
- 建议开发者妥善保存此流程ID，以便于顺利进行后续操作。
- 可登录腾讯电子签控制台，在 "合同"->"合同中心" 中查看某个合同的FlowId(在页面中展示为合同ID)。
- <font color="red">不建议继续使用</font>，请使用<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#fillapproverinfo/" target="_blank">补充签署人结构体</a>中的FlowId指定合同
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 签署人信息补充方式

<ul><li>**1**: 表示往未指定签署人的节点，添加一个明确的签署人，支持企业或个人签署方。</li></ul>
                     */
                    int64_t m_fillApproverType;
                    bool m_fillApproverTypeHasBeenSet;

                    /**
                     * 操作人信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同流程组的组ID, 在合同流程组场景下，生成合同流程组的签署链接时需要赋值
                     */
                    std::string m_flowGroupId;
                    bool m_flowGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWAPPROVERSREQUEST_H_
