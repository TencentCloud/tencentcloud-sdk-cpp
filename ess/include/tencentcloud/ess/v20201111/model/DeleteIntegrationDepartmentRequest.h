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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DELETEINTEGRATIONDEPARTMENTREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DELETEINTEGRATIONDEPARTMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
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
                * DeleteIntegrationDepartment请求参数结构体
                */
                class DeleteIntegrationDepartmentRequest : public AbstractModel
                {
                public:
                    DeleteIntegrationDepartmentRequest();
                    ~DeleteIntegrationDepartmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得组织架构管理权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得组织架构管理权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得组织架构管理权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得组织架构管理权限，并具备接口传入的相应资源的数据权限。`
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
                     * 获取电子签中的部门ID，通过<a href="https://qian.tencent.com/developers/companyApis/organizations/DescribeIntegrationDepartments" target="_blank">DescribeIntegrationDepartments</a>接口可获得。
                     * @return DeptId 电子签中的部门ID，通过<a href="https://qian.tencent.com/developers/companyApis/organizations/DescribeIntegrationDepartments" target="_blank">DescribeIntegrationDepartments</a>接口可获得。
                     * 
                     */
                    std::string GetDeptId() const;

                    /**
                     * 设置电子签中的部门ID，通过<a href="https://qian.tencent.com/developers/companyApis/organizations/DescribeIntegrationDepartments" target="_blank">DescribeIntegrationDepartments</a>接口可获得。
                     * @param _deptId 电子签中的部门ID，通过<a href="https://qian.tencent.com/developers/companyApis/organizations/DescribeIntegrationDepartments" target="_blank">DescribeIntegrationDepartments</a>接口可获得。
                     * 
                     */
                    void SetDeptId(const std::string& _deptId);

                    /**
                     * 判断参数 DeptId 是否已赋值
                     * @return DeptId 是否已赋值
                     * 
                     */
                    bool DeptIdHasBeenSet() const;

                    /**
                     * 获取代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
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
                     * 获取交接部门ID。
待删除部门中的合同、印章和模板数据，将会被交接至该部门ID下；若未填写则交接至公司根部门。
                     * @return ReceiveDeptId 交接部门ID。
待删除部门中的合同、印章和模板数据，将会被交接至该部门ID下；若未填写则交接至公司根部门。
                     * 
                     */
                    std::string GetReceiveDeptId() const;

                    /**
                     * 设置交接部门ID。
待删除部门中的合同、印章和模板数据，将会被交接至该部门ID下；若未填写则交接至公司根部门。
                     * @param _receiveDeptId 交接部门ID。
待删除部门中的合同、印章和模板数据，将会被交接至该部门ID下；若未填写则交接至公司根部门。
                     * 
                     */
                    void SetReceiveDeptId(const std::string& _receiveDeptId);

                    /**
                     * 判断参数 ReceiveDeptId 是否已赋值
                     * @return ReceiveDeptId 是否已赋值
                     * 
                     */
                    bool ReceiveDeptIdHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得组织架构管理权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 电子签中的部门ID，通过<a href="https://qian.tencent.com/developers/companyApis/organizations/DescribeIntegrationDepartments" target="_blank">DescribeIntegrationDepartments</a>接口可获得。
                     */
                    std::string m_deptId;
                    bool m_deptIdHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 交接部门ID。
待删除部门中的合同、印章和模板数据，将会被交接至该部门ID下；若未填写则交接至公司根部门。
                     */
                    std::string m_receiveDeptId;
                    bool m_receiveDeptIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DELETEINTEGRATIONDEPARTMENTREQUEST_H_
