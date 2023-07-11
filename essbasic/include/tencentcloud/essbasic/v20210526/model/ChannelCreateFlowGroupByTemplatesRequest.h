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
                     * 获取应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 均必填。
                     * @return Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 均必填。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 均必填。
                     * @param _agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 均必填。
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
                     * 获取每个子合同的发起所需的信息，数量限制2-50（合同组暂不支持抄送功能）
                     * @return FlowInfos 每个子合同的发起所需的信息，数量限制2-50（合同组暂不支持抄送功能）
                     * 
                     */
                    std::vector<FlowInfo> GetFlowInfos() const;

                    /**
                     * 设置每个子合同的发起所需的信息，数量限制2-50（合同组暂不支持抄送功能）
                     * @param _flowInfos 每个子合同的发起所需的信息，数量限制2-50（合同组暂不支持抄送功能）
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
                     * 获取合同组名称，长度不超过200个字符
                     * @return FlowGroupName 合同组名称，长度不超过200个字符
                     * 
                     */
                    std::string GetFlowGroupName() const;

                    /**
                     * 设置合同组名称，长度不超过200个字符
                     * @param _flowGroupName 合同组名称，长度不超过200个字符
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
                     * 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 均必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 每个子合同的发起所需的信息，数量限制2-50（合同组暂不支持抄送功能）
                     */
                    std::vector<FlowInfo> m_flowInfos;
                    bool m_flowInfosHasBeenSet;

                    /**
                     * 合同组名称，长度不超过200个字符
                     */
                    std::string m_flowGroupName;
                    bool m_flowGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWGROUPBYTEMPLATESREQUEST_H_
