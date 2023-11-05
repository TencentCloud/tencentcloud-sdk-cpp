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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEFLOWDETAILINFOREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEFLOWDETAILINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
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
                * DescribeFlowDetailInfo请求参数结构体
                */
                class DescribeFlowDetailInfoRequest : public AbstractModel
                {
                public:
                    DescribeFlowDetailInfoRequest();
                    ~DescribeFlowDetailInfoRequest() = default;
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
                     * 获取需要查询的流程ID列表，最多可传入100个ID。
如果要查询合同组的信息，则不需要传入此参数，只需传入 FlowGroupId 参数即可。
                     * @return FlowIds 需要查询的流程ID列表，最多可传入100个ID。
如果要查询合同组的信息，则不需要传入此参数，只需传入 FlowGroupId 参数即可。
                     * 
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 设置需要查询的流程ID列表，最多可传入100个ID。
如果要查询合同组的信息，则不需要传入此参数，只需传入 FlowGroupId 参数即可。
                     * @param _flowIds 需要查询的流程ID列表，最多可传入100个ID。
如果要查询合同组的信息，则不需要传入此参数，只需传入 FlowGroupId 参数即可。
                     * 
                     */
                    void SetFlowIds(const std::vector<std::string>& _flowIds);

                    /**
                     * 判断参数 FlowIds 是否已赋值
                     * @return FlowIds 是否已赋值
                     * 
                     */
                    bool FlowIdsHasBeenSet() const;

                    /**
                     * 获取需要查询的流程组ID，如果传入此参数，则会忽略 FlowIds 参数。

合同组由<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowGroupByTemplates" target="_blank">通过多模板创建合同组签署流程</a>和<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowGroupByFiles" target="_blank">通过多文件创建合同组签署流程</a>等接口创建。
                     * @return FlowGroupId 需要查询的流程组ID，如果传入此参数，则会忽略 FlowIds 参数。

合同组由<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowGroupByTemplates" target="_blank">通过多模板创建合同组签署流程</a>和<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowGroupByFiles" target="_blank">通过多文件创建合同组签署流程</a>等接口创建。
                     * 
                     */
                    std::string GetFlowGroupId() const;

                    /**
                     * 设置需要查询的流程组ID，如果传入此参数，则会忽略 FlowIds 参数。

合同组由<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowGroupByTemplates" target="_blank">通过多模板创建合同组签署流程</a>和<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowGroupByFiles" target="_blank">通过多文件创建合同组签署流程</a>等接口创建。
                     * @param _flowGroupId 需要查询的流程组ID，如果传入此参数，则会忽略 FlowIds 参数。

合同组由<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowGroupByTemplates" target="_blank">通过多模板创建合同组签署流程</a>和<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowGroupByFiles" target="_blank">通过多文件创建合同组签署流程</a>等接口创建。
                     * 
                     */
                    void SetFlowGroupId(const std::string& _flowGroupId);

                    /**
                     * 判断参数 FlowGroupId 是否已赋值
                     * @return FlowGroupId 是否已赋值
                     * 
                     */
                    bool FlowGroupIdHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return Operator 暂未开放
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置暂未开放
                     * @param _operator 暂未开放
                     * @deprecated
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

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
                     * 需要查询的流程ID列表，最多可传入100个ID。
如果要查询合同组的信息，则不需要传入此参数，只需传入 FlowGroupId 参数即可。
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * 需要查询的流程组ID，如果传入此参数，则会忽略 FlowIds 参数。

合同组由<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowGroupByTemplates" target="_blank">通过多模板创建合同组签署流程</a>和<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowGroupByFiles" target="_blank">通过多文件创建合同组签署流程</a>等接口创建。
                     */
                    std::string m_flowGroupId;
                    bool m_flowGroupIdHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEFLOWDETAILINFOREQUEST_H_
