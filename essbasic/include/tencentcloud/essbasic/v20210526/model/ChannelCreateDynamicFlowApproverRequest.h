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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEDYNAMICFLOWAPPROVERREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEDYNAMICFLOWAPPROVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/DynamicFlowInfo.h>
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
                * ChannelCreateDynamicFlowApprover请求参数结构体
                */
                class ChannelCreateDynamicFlowApproverRequest : public AbstractModel
                {
                public:
                    ChannelCreateDynamicFlowApproverRequest();
                    ~ChannelCreateDynamicFlowApproverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取动态合同信息

                     * @return FillDynamicFlowList 动态合同信息

                     * 
                     */
                    std::vector<DynamicFlowInfo> GetFillDynamicFlowList() const;

                    /**
                     * 设置动态合同信息

                     * @param _fillDynamicFlowList 动态合同信息

                     * 
                     */
                    void SetFillDynamicFlowList(const std::vector<DynamicFlowInfo>& _fillDynamicFlowList);

                    /**
                     * 判断参数 FillDynamicFlowList 是否已赋值
                     * @return FillDynamicFlowList 是否已赋值
                     * 
                     */
                    bool FillDynamicFlowListHasBeenSet() const;

                    /**
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。 此接口下面信息必填。 <ul> <li>渠道应用标识: Agent.AppId</li> <li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li> <li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li> </ul> 第三方平台子客企业和员工必须已经经过实名认证	
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。 此接口下面信息必填。 <ul> <li>渠道应用标识: Agent.AppId</li> <li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li> <li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li> </ul> 第三方平台子客企业和员工必须已经经过实名认证	
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。 此接口下面信息必填。 <ul> <li>渠道应用标识: Agent.AppId</li> <li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li> <li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li> </ul> 第三方平台子客企业和员工必须已经经过实名认证	
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。 此接口下面信息必填。 <ul> <li>渠道应用标识: Agent.AppId</li> <li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li> <li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li> </ul> 第三方平台子客企业和员工必须已经经过实名认证	
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                private:

                    /**
                     * 动态合同信息

                     */
                    std::vector<DynamicFlowInfo> m_fillDynamicFlowList;
                    bool m_fillDynamicFlowListHasBeenSet;

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。 此接口下面信息必填。 <ul> <li>渠道应用标识: Agent.AppId</li> <li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li> <li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li> </ul> 第三方平台子客企业和员工必须已经经过实名认证	
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEDYNAMICFLOWAPPROVERREQUEST_H_
