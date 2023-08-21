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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONDEPARTMENTSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONDEPARTMENTSREQUEST_H_

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
                * DescribeIntegrationDepartments请求参数结构体
                */
                class DescribeIntegrationDepartmentsRequest : public AbstractModel
                {
                public:
                    DescribeIntegrationDepartmentsRequest();
                    ~DescribeIntegrationDepartmentsRequest() = default;
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
                     * 获取查询类型 0-查询单个部门节点 1-单个部门节点及一级子节点部门列表
                     * @return QueryType 查询类型 0-查询单个部门节点 1-单个部门节点及一级子节点部门列表
                     * 
                     */
                    uint64_t GetQueryType() const;

                    /**
                     * 设置查询类型 0-查询单个部门节点 1-单个部门节点及一级子节点部门列表
                     * @param _queryType 查询类型 0-查询单个部门节点 1-单个部门节点及一级子节点部门列表
                     * 
                     */
                    void SetQueryType(const uint64_t& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

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
                     * 获取部门ID,与DeptOpenId二选一,优先DeptId,都为空时获取根节点数据
                     * @return DeptId 部门ID,与DeptOpenId二选一,优先DeptId,都为空时获取根节点数据
                     * 
                     */
                    std::string GetDeptId() const;

                    /**
                     * 设置部门ID,与DeptOpenId二选一,优先DeptId,都为空时获取根节点数据
                     * @param _deptId 部门ID,与DeptOpenId二选一,优先DeptId,都为空时获取根节点数据
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
                     * 获取客户系统部门ID,与DeptId二选一,优先DeptId,都为空时获取根节点数据
                     * @return DeptOpenId 客户系统部门ID,与DeptId二选一,优先DeptId,都为空时获取根节点数据
                     * 
                     */
                    std::string GetDeptOpenId() const;

                    /**
                     * 设置客户系统部门ID,与DeptId二选一,优先DeptId,都为空时获取根节点数据
                     * @param _deptOpenId 客户系统部门ID,与DeptId二选一,优先DeptId,都为空时获取根节点数据
                     * 
                     */
                    void SetDeptOpenId(const std::string& _deptOpenId);

                    /**
                     * 判断参数 DeptOpenId 是否已赋值
                     * @return DeptOpenId 是否已赋值
                     * 
                     */
                    bool DeptOpenIdHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得组织架构管理权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 查询类型 0-查询单个部门节点 1-单个部门节点及一级子节点部门列表
                     */
                    uint64_t m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 部门ID,与DeptOpenId二选一,优先DeptId,都为空时获取根节点数据
                     */
                    std::string m_deptId;
                    bool m_deptIdHasBeenSet;

                    /**
                     * 客户系统部门ID,与DeptId二选一,优先DeptId,都为空时获取根节点数据
                     */
                    std::string m_deptOpenId;
                    bool m_deptOpenIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONDEPARTMENTSREQUEST_H_
