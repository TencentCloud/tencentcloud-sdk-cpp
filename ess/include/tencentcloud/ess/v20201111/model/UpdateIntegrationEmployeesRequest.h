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
                     * 获取执行本接口操作的员工信息,UserId必填。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息,UserId必填。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息,UserId必填。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息,UserId必填。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
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
                     * 获取员工邀请方式
如果是来自H5的，参数需要传递H5
短信或者企微 请传递SMS，或者不传递
                     * @return InvitationNotifyType 员工邀请方式
如果是来自H5的，参数需要传递H5
短信或者企微 请传递SMS，或者不传递
                     * 
                     */
                    std::string GetInvitationNotifyType() const;

                    /**
                     * 设置员工邀请方式
如果是来自H5的，参数需要传递H5
短信或者企微 请传递SMS，或者不传递
                     * @param _invitationNotifyType 员工邀请方式
如果是来自H5的，参数需要传递H5
短信或者企微 请传递SMS，或者不传递
                     * 
                     */
                    void SetInvitationNotifyType(const std::string& _invitationNotifyType);

                    /**
                     * 判断参数 InvitationNotifyType 是否已赋值
                     * @return InvitationNotifyType 是否已赋值
                     * 
                     */
                    bool InvitationNotifyTypeHasBeenSet() const;

                    /**
                     * 获取回跳地址，
在认证成功之后，进行回跳，请保证回跳地址的可用性。
使用前请联系对接的客户经理沟通，提供回跳地址的域名，进行域名配置。
                     * @return JumpUrl 回跳地址，
在认证成功之后，进行回跳，请保证回跳地址的可用性。
使用前请联系对接的客户经理沟通，提供回跳地址的域名，进行域名配置。
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置回跳地址，
在认证成功之后，进行回跳，请保证回跳地址的可用性。
使用前请联系对接的客户经理沟通，提供回跳地址的域名，进行域名配置。
                     * @param _jumpUrl 回跳地址，
在认证成功之后，进行回跳，请保证回跳地址的可用性。
使用前请联系对接的客户经理沟通，提供回跳地址的域名，进行域名配置。
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息,UserId必填。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
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
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 员工邀请方式
如果是来自H5的，参数需要传递H5
短信或者企微 请传递SMS，或者不传递
                     */
                    std::string m_invitationNotifyType;
                    bool m_invitationNotifyTypeHasBeenSet;

                    /**
                     * 回跳地址，
在认证成功之后，进行回跳，请保证回跳地址的可用性。
使用前请联系对接的客户经理沟通，提供回跳地址的域名，进行域名配置。
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_UPDATEINTEGRATIONEMPLOYEESREQUEST_H_
