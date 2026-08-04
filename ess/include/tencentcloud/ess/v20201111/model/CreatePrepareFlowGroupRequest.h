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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREFLOWGROUPREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREFLOWGROUPREQUEST_H_

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
                * CreatePrepareFlowGroup请求参数结构体
                */
                class CreatePrepareFlowGroupRequest : public AbstractModel
                {
                public:
                    CreatePrepareFlowGroupRequest();
                    ~CreatePrepareFlowGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
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
                     * 获取<p>合同（流程）组名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * @return FlowGroupName <p>合同（流程）组名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * 
                     */
                    std::string GetFlowGroupName() const;

                    /**
                     * 设置<p>合同（流程）组名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * @param _flowGroupName <p>合同（流程）组名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
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
                     * 获取<p>合同（流程）组的子合同信息，支持2-50个子合同</p>
                     * @return FlowGroupInfos <p>合同（流程）组的子合同信息，支持2-50个子合同</p>
                     * 
                     */
                    std::vector<FlowGroupInfo> GetFlowGroupInfos() const;

                    /**
                     * 设置<p>合同（流程）组的子合同信息，支持2-50个子合同</p>
                     * @param _flowGroupInfos <p>合同（流程）组的子合同信息，支持2-50个子合同</p>
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
                     * 获取<p>资源类型，取值有： <ul><li> <strong>1</strong>：模板</li> <li> <strong>2</strong>：文件</li></ul></p>
                     * @return ResourceType <p>资源类型，取值有： <ul><li> <strong>1</strong>：模板</li> <li> <strong>2</strong>：文件</li></ul></p>
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置<p>资源类型，取值有： <ul><li> <strong>1</strong>：模板</li> <li> <strong>2</strong>：文件</li></ul></p>
                     * @param _resourceType <p>资源类型，取值有： <ul><li> <strong>1</strong>：模板</li> <li> <strong>2</strong>：文件</li></ul></p>
                     * 
                     */
                    void SetResourceType(const int64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @return Agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @param _agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
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
                     * 获取<p>合同组发起控制参数，例如FlowGroupNeedWorkflow，表示开启嵌入式合同组发起审批</p>
                     * @return FlowGroupOptions <p>合同组发起控制参数，例如FlowGroupNeedWorkflow，表示开启嵌入式合同组发起审批</p>
                     * 
                     */
                    FlowGroupOptions GetFlowGroupOptions() const;

                    /**
                     * 设置<p>合同组发起控制参数，例如FlowGroupNeedWorkflow，表示开启嵌入式合同组发起审批</p>
                     * @param _flowGroupOptions <p>合同组发起控制参数，例如FlowGroupNeedWorkflow，表示开启嵌入式合同组发起审批</p>
                     * 
                     */
                    void SetFlowGroupOptions(const FlowGroupOptions& _flowGroupOptions);

                    /**
                     * 判断参数 FlowGroupOptions 是否已赋值
                     * @return FlowGroupOptions 是否已赋值
                     * 
                     */
                    bool FlowGroupOptionsHasBeenSet() const;

                    /**
                     * 获取<p>合同组类型，发起合同组后会应用到所有子合同</p>
                     * @return FlowGroupType <p>合同组类型，发起合同组后会应用到所有子合同</p>
                     * 
                     */
                    std::string GetFlowGroupType() const;

                    /**
                     * 设置<p>合同组类型，发起合同组后会应用到所有子合同</p>
                     * @param _flowGroupType <p>合同组类型，发起合同组后会应用到所有子合同</p>
                     * 
                     */
                    void SetFlowGroupType(const std::string& _flowGroupType);

                    /**
                     * 判断参数 FlowGroupType 是否已赋值
                     * @return FlowGroupType 是否已赋值
                     * 
                     */
                    bool FlowGroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>合同组过期时间，发起合同组后会应用到所有子合同</p>
                     * @return FlowGroupDeadline <p>合同组过期时间，发起合同组后会应用到所有子合同</p>
                     * 
                     */
                    int64_t GetFlowGroupDeadline() const;

                    /**
                     * 设置<p>合同组过期时间，发起合同组后会应用到所有子合同</p>
                     * @param _flowGroupDeadline <p>合同组过期时间，发起合同组后会应用到所有子合同</p>
                     * 
                     */
                    void SetFlowGroupDeadline(const int64_t& _flowGroupDeadline);

                    /**
                     * 判断参数 FlowGroupDeadline 是否已赋值
                     * @return FlowGroupDeadline 是否已赋值
                     * 
                     */
                    bool FlowGroupDeadlineHasBeenSet() const;

                private:

                    /**
                     * <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>合同（流程）组名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     */
                    std::string m_flowGroupName;
                    bool m_flowGroupNameHasBeenSet;

                    /**
                     * <p>合同（流程）组的子合同信息，支持2-50个子合同</p>
                     */
                    std::vector<FlowGroupInfo> m_flowGroupInfos;
                    bool m_flowGroupInfosHasBeenSet;

                    /**
                     * <p>资源类型，取值有： <ul><li> <strong>1</strong>：模板</li> <li> <strong>2</strong>：文件</li></ul></p>
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>合同组发起控制参数，例如FlowGroupNeedWorkflow，表示开启嵌入式合同组发起审批</p>
                     */
                    FlowGroupOptions m_flowGroupOptions;
                    bool m_flowGroupOptionsHasBeenSet;

                    /**
                     * <p>合同组类型，发起合同组后会应用到所有子合同</p>
                     */
                    std::string m_flowGroupType;
                    bool m_flowGroupTypeHasBeenSet;

                    /**
                     * <p>合同组过期时间，发起合同组后会应用到所有子合同</p>
                     */
                    int64_t m_flowGroupDeadline;
                    bool m_flowGroupDeadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREFLOWGROUPREQUEST_H_
