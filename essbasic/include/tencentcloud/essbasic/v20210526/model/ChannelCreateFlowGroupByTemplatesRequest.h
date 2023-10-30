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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWGROUPBYTEMPLATESREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWGROUPBYTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/FlowInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreateFlowGroupByTemplates请求参数结构体
                */
                class ChannelCreateFlowGroupByTemplatesRequest : public AbstractModel
                {
                public:
                    ChannelCreateFlowGroupByTemplatesRequest();
                    ~ChannelCreateFlowGroupByTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
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
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
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
                     * 获取合同组中每个合同签署流程的信息，合同组中最少包含2个合同，不能超过50个合同。
                     * @return FlowInfos 合同组中每个合同签署流程的信息，合同组中最少包含2个合同，不能超过50个合同。
                     * 
                     */
                    std::vector<FlowInfo> GetFlowInfos() const;

                    /**
                     * 设置合同组中每个合同签署流程的信息，合同组中最少包含2个合同，不能超过50个合同。
                     * @param _flowInfos 合同组中每个合同签署流程的信息，合同组中最少包含2个合同，不能超过50个合同。
                     * 
                     */
                    void SetFlowInfos(const std::vector<FlowInfo>& _flowInfos);

                    /**
                     * 判断参数 FlowInfos 是否已赋值
                     * @return FlowInfos 是否已赋值
                     * 
                     */
                    bool FlowInfosHasBeenSet() const;

                    /**
                     * 获取合同组的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
                     * @return FlowGroupName 合同组的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
                     * 
                     */
                    std::string GetFlowGroupName() const;

                    /**
                     * 设置合同组的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
                     * @param _flowGroupName 合同组的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
                     * 
                     */
                    void SetFlowGroupName(const std::string& _flowGroupName);

                    /**
                     * 判断参数 FlowGroupName 是否已赋值
                     * @return FlowGroupName 是否已赋值
                     * 
                     */
                    bool FlowGroupNameHasBeenSet() const;

                private:

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 合同组中每个合同签署流程的信息，合同组中最少包含2个合同，不能超过50个合同。
                     */
                    std::vector<FlowInfo> m_flowInfos;
                    bool m_flowInfosHasBeenSet;

                    /**
                     * 合同组的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
                     */
                    std::string m_flowGroupName;
                    bool m_flowGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWGROUPBYTEMPLATESREQUEST_H_
