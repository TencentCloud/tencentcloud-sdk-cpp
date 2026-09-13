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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDYNAMICFLOWAPPROVERREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDYNAMICFLOWAPPROVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/ApproverInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateDynamicFlowApprover请求参数结构体
                */
                class CreateDynamicFlowApproverRequest : public AbstractModel
                {
                public:
                    CreateDynamicFlowApproverRequest();
                    ~CreateDynamicFlowApproverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行本接口操作的员工信息。使用此接口时，必须填写userId。支持填入集团子公司经办人 userId 代发合同。注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行本接口操作的员工信息。使用此接口时，必须填写userId。支持填入集团子公司经办人 userId 代发合同。注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。使用此接口时，必须填写userId。支持填入集团子公司经办人 userId 代发合同。注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行本接口操作的员工信息。使用此接口时，必须填写userId。支持填入集团子公司经办人 userId 代发合同。注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
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
                     * 获取<p>合同流程ID，为32位字符串</p>
                     * @return FlowId <p>合同流程ID，为32位字符串</p>
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置<p>合同流程ID，为32位字符串</p>
                     * @param _flowId <p>合同流程ID，为32位字符串</p>
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
                     * 获取<p>合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。</p>
                     * @return Approvers <p>合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。</p>
                     * 
                     */
                    std::vector<ApproverInfo> GetApprovers() const;

                    /**
                     * 设置<p>合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。</p>
                     * @param _approvers <p>合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。</p>
                     * 
                     */
                    void SetApprovers(const std::vector<ApproverInfo>& _approvers);

                    /**
                     * 判断参数 Approvers 是否已赋值
                     * @return Approvers 是否已赋值
                     * 
                     */
                    bool ApproversHasBeenSet() const;

                    /**
                     * 获取<p>代理企业和员工的信息。在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @return Agent <p>代理企业和员工的信息。在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>代理企业和员工的信息。在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @param _agent <p>代理企业和员工的信息。在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
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
                     * 获取<p>个人“授权签”名的使用场景包括以下, 个人“授权签”(即ApproverType设置成个人“授权签”时)业务此值必传：<ul><li> <strong>E_PRESCRIPTION_AUTO_SIGN</strong>：电子处方单（医疗“授权签”）  </li><li> <strong>OTHER</strong> :  通用场景</li></ul>注: <code>个人“授权签”名场景是白名单功能，使用前请与对接的客户经理联系沟通。</code></p>
                     * @return AutoSignScene <p>个人“授权签”名的使用场景包括以下, 个人“授权签”(即ApproverType设置成个人“授权签”时)业务此值必传：<ul><li> <strong>E_PRESCRIPTION_AUTO_SIGN</strong>：电子处方单（医疗“授权签”）  </li><li> <strong>OTHER</strong> :  通用场景</li></ul>注: <code>个人“授权签”名场景是白名单功能，使用前请与对接的客户经理联系沟通。</code></p>
                     * 
                     */
                    std::string GetAutoSignScene() const;

                    /**
                     * 设置<p>个人“授权签”名的使用场景包括以下, 个人“授权签”(即ApproverType设置成个人“授权签”时)业务此值必传：<ul><li> <strong>E_PRESCRIPTION_AUTO_SIGN</strong>：电子处方单（医疗“授权签”）  </li><li> <strong>OTHER</strong> :  通用场景</li></ul>注: <code>个人“授权签”名场景是白名单功能，使用前请与对接的客户经理联系沟通。</code></p>
                     * @param _autoSignScene <p>个人“授权签”名的使用场景包括以下, 个人“授权签”(即ApproverType设置成个人“授权签”时)业务此值必传：<ul><li> <strong>E_PRESCRIPTION_AUTO_SIGN</strong>：电子处方单（医疗“授权签”）  </li><li> <strong>OTHER</strong> :  通用场景</li></ul>注: <code>个人“授权签”名场景是白名单功能，使用前请与对接的客户经理联系沟通。</code></p>
                     * 
                     */
                    void SetAutoSignScene(const std::string& _autoSignScene);

                    /**
                     * 判断参数 AutoSignScene 是否已赋值
                     * @return AutoSignScene 是否已赋值
                     * 
                     */
                    bool AutoSignSceneHasBeenSet() const;

                private:

                    /**
                     * <p>执行本接口操作的员工信息。使用此接口时，必须填写userId。支持填入集团子公司经办人 userId 代发合同。注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>合同流程ID，为32位字符串</p>
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。</p>
                     */
                    std::vector<ApproverInfo> m_approvers;
                    bool m_approversHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>个人“授权签”名的使用场景包括以下, 个人“授权签”(即ApproverType设置成个人“授权签”时)业务此值必传：<ul><li> <strong>E_PRESCRIPTION_AUTO_SIGN</strong>：电子处方单（医疗“授权签”）  </li><li> <strong>OTHER</strong> :  通用场景</li></ul>注: <code>个人“授权签”名场景是白名单功能，使用前请与对接的客户经理联系沟通。</code></p>
                     */
                    std::string m_autoSignScene;
                    bool m_autoSignSceneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDYNAMICFLOWAPPROVERREQUEST_H_
