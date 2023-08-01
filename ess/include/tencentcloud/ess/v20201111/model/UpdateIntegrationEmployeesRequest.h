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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_UPDATEINTEGRATIONEMPLOYEESREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_UPDATEINTEGRATIONEMPLOYEESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Staff.h>
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
                * UpdateIntegrationEmployees请求参数结构体
                */
                class UpdateIntegrationEmployeesRequest : public AbstractModel
                {
                public:
                    UpdateIntegrationEmployeesRequest();
                    ~UpdateIntegrationEmployeesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取当前用户信息，OpenId与UserId二选一必填一个，OpenId是第三方客户ID，userId是用户实名后的电子签生成的ID,当传入客户系统openId，传入的openId需与电子签员工userId绑定，且参数Channel必填，Channel值为YUFU；
                     * @return Operator 当前用户信息，OpenId与UserId二选一必填一个，OpenId是第三方客户ID，userId是用户实名后的电子签生成的ID,当传入客户系统openId，传入的openId需与电子签员工userId绑定，且参数Channel必填，Channel值为YUFU；
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置当前用户信息，OpenId与UserId二选一必填一个，OpenId是第三方客户ID，userId是用户实名后的电子签生成的ID,当传入客户系统openId，传入的openId需与电子签员工userId绑定，且参数Channel必填，Channel值为YUFU；
                     * @param _operator 当前用户信息，OpenId与UserId二选一必填一个，OpenId是第三方客户ID，userId是用户实名后的电子签生成的ID,当传入客户系统openId，传入的openId需与电子签员工userId绑定，且参数Channel必填，Channel值为YUFU；
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
                     * 获取员工信息，不超过100个。
根据UserId或OpenId更新员工，必填一个，优先UserId。
可更新Mobile、DisplayName、Email和Department.DepartmentId字段，其他字段暂不支持
                     * @return Employees 员工信息，不超过100个。
根据UserId或OpenId更新员工，必填一个，优先UserId。
可更新Mobile、DisplayName、Email和Department.DepartmentId字段，其他字段暂不支持
                     * 
                     */
                    std::vector<Staff> GetEmployees() const;

                    /**
                     * 设置员工信息，不超过100个。
根据UserId或OpenId更新员工，必填一个，优先UserId。
可更新Mobile、DisplayName、Email和Department.DepartmentId字段，其他字段暂不支持
                     * @param _employees 员工信息，不超过100个。
根据UserId或OpenId更新员工，必填一个，优先UserId。
可更新Mobile、DisplayName、Email和Department.DepartmentId字段，其他字段暂不支持
                     * 
                     */
                    void SetEmployees(const std::vector<Staff>& _employees);

                    /**
                     * 判断参数 Employees 是否已赋值
                     * @return Employees 是否已赋值
                     * 
                     */
                    bool EmployeesHasBeenSet() const;

                    /**
                     * 获取代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId需填充子企业Id
                     * @return Agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId需填充子企业Id
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId需填充子企业Id
                     * @param _agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId需填充子企业Id
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
                     * 当前用户信息，OpenId与UserId二选一必填一个，OpenId是第三方客户ID，userId是用户实名后的电子签生成的ID,当传入客户系统openId，传入的openId需与电子签员工userId绑定，且参数Channel必填，Channel值为YUFU；
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 员工信息，不超过100个。
根据UserId或OpenId更新员工，必填一个，优先UserId。
可更新Mobile、DisplayName、Email和Department.DepartmentId字段，其他字段暂不支持
                     */
                    std::vector<Staff> m_employees;
                    bool m_employeesHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId需填充子企业Id
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_UPDATEINTEGRATIONEMPLOYEESREQUEST_H_
