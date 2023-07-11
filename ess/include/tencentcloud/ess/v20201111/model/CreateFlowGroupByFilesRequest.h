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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWGROUPBYFILESREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWGROUPBYFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/FlowGroupInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/FlowGroupOptions.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateFlowGroupByFiles请求参数结构体
                */
                class CreateFlowGroupByFilesRequest : public AbstractModel
                {
                public:
                    CreateFlowGroupByFilesRequest();
                    ~CreateFlowGroupByFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方用户信息，userId 必填。支持填入集团子公司经办人 userId 代发合同
                     * @return Operator 调用方用户信息，userId 必填。支持填入集团子公司经办人 userId 代发合同
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置调用方用户信息，userId 必填。支持填入集团子公司经办人 userId 代发合同
                     * @param _operator 调用方用户信息，userId 必填。支持填入集团子公司经办人 userId 代发合同
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
                     * 获取合同（流程）组名称,最大长度200个字符
                     * @return FlowGroupName 合同（流程）组名称,最大长度200个字符
                     * 
                     */
                    std::string GetFlowGroupName() const;

                    /**
                     * 设置合同（流程）组名称,最大长度200个字符
                     * @param _flowGroupName 合同（流程）组名称,最大长度200个字符
                     * 
                     */
                    void SetFlowGroupName(const std::string& _flowGroupName);

                    /**
                     * 判断参数 FlowGroupName 是否已赋值
                     * @return FlowGroupName 是否已赋值
                     * 
                     */
                    bool FlowGroupNameHasBeenSet() const;

                    /**
                     * 获取合同（流程）组的子合同信息，支持2-50个子合同
                     * @return FlowGroupInfos 合同（流程）组的子合同信息，支持2-50个子合同
                     * 
                     */
                    std::vector<FlowGroupInfo> GetFlowGroupInfos() const;

                    /**
                     * 设置合同（流程）组的子合同信息，支持2-50个子合同
                     * @param _flowGroupInfos 合同（流程）组的子合同信息，支持2-50个子合同
                     * 
                     */
                    void SetFlowGroupInfos(const std::vector<FlowGroupInfo>& _flowGroupInfos);

                    /**
                     * 判断参数 FlowGroupInfos 是否已赋值
                     * @return FlowGroupInfos 是否已赋值
                     * 
                     */
                    bool FlowGroupInfosHasBeenSet() const;

                    /**
                     * 获取代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @return Agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @param _agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
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
                     * 获取合同（流程）组的配置项信息。包括是否通知本企业签署方，是否通知其他签署方
                     * @return FlowGroupOptions 合同（流程）组的配置项信息。包括是否通知本企业签署方，是否通知其他签署方
                     * 
                     */
                    FlowGroupOptions GetFlowGroupOptions() const;

                    /**
                     * 设置合同（流程）组的配置项信息。包括是否通知本企业签署方，是否通知其他签署方
                     * @param _flowGroupOptions 合同（流程）组的配置项信息。包括是否通知本企业签署方，是否通知其他签署方
                     * 
                     */
                    void SetFlowGroupOptions(const FlowGroupOptions& _flowGroupOptions);

                    /**
                     * 判断参数 FlowGroupOptions 是否已赋值
                     * @return FlowGroupOptions 是否已赋值
                     * 
                     */
                    bool FlowGroupOptionsHasBeenSet() const;

                private:

                    /**
                     * 调用方用户信息，userId 必填。支持填入集团子公司经办人 userId 代发合同
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同（流程）组名称,最大长度200个字符
                     */
                    std::string m_flowGroupName;
                    bool m_flowGroupNameHasBeenSet;

                    /**
                     * 合同（流程）组的子合同信息，支持2-50个子合同
                     */
                    std::vector<FlowGroupInfo> m_flowGroupInfos;
                    bool m_flowGroupInfosHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 合同（流程）组的配置项信息。包括是否通知本企业签署方，是否通知其他签署方
                     */
                    FlowGroupOptions m_flowGroupOptions;
                    bool m_flowGroupOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWGROUPBYFILESREQUEST_H_
