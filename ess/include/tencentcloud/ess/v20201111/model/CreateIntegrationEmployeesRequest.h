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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONEMPLOYEESREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONEMPLOYEESREQUEST_H_

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
                * CreateIntegrationEmployees请求参数结构体
                */
                class CreateIntegrationEmployeesRequest : public AbstractModel
                {
                public:
                    CreateIntegrationEmployeesRequest();
                    ~CreateIntegrationEmployeesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息。使用此接口时，必须填写userId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。使用此接口时，必须填写userId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。使用此接口时，必须填写userId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。使用此接口时，必须填写userId。
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
                     * 获取待创建员工的信息最多不超过20个。

**1. 在创建企业微信员工的场景下** :  只需传入下面的参数，其他信息不支持设置。
<table> <thead> <tr> <th>参数</th> <th>是否必填</th> <th>含义</th> </tr> </thead> <tbody> <tr> <td>WeworkOpenId</td> <td>是</td> <td>企业微信用户账号ID</td> </tr> </tbody> </table>

**2. 在其他场景下** :   只需传入下面的参数，其他信息不支持设置。
<table> <thead> <tr> <th>参数</th> <th>是否必填</th> <th>含义</th> </tr> </thead> <tbody> <tr> <td>DisplayName</td> <td>是</td> <td>用户的真实名字</td> </tr> <tr> <td>Mobile</td> <td>是</td> <td>用户手机号码</td> </tr> <tr> <td>OpenId</td> <td>否</td> <td>用户的自定义ID</td> </tr> <tr> <td>Email</td> <td>否</td> <td>用户的邮箱</td> </tr> <tr> <td>Department.DepartmentId</td> <td>否</td> <td>用户加入后的部门ID</td> </tr> </tbody> </table>


注: `每个手机号每天最多使用3次`
                     * @return Employees 待创建员工的信息最多不超过20个。

**1. 在创建企业微信员工的场景下** :  只需传入下面的参数，其他信息不支持设置。
<table> <thead> <tr> <th>参数</th> <th>是否必填</th> <th>含义</th> </tr> </thead> <tbody> <tr> <td>WeworkOpenId</td> <td>是</td> <td>企业微信用户账号ID</td> </tr> </tbody> </table>

**2. 在其他场景下** :   只需传入下面的参数，其他信息不支持设置。
<table> <thead> <tr> <th>参数</th> <th>是否必填</th> <th>含义</th> </tr> </thead> <tbody> <tr> <td>DisplayName</td> <td>是</td> <td>用户的真实名字</td> </tr> <tr> <td>Mobile</td> <td>是</td> <td>用户手机号码</td> </tr> <tr> <td>OpenId</td> <td>否</td> <td>用户的自定义ID</td> </tr> <tr> <td>Email</td> <td>否</td> <td>用户的邮箱</td> </tr> <tr> <td>Department.DepartmentId</td> <td>否</td> <td>用户加入后的部门ID</td> </tr> </tbody> </table>


注: `每个手机号每天最多使用3次`
                     * 
                     */
                    std::vector<Staff> GetEmployees() const;

                    /**
                     * 设置待创建员工的信息最多不超过20个。

**1. 在创建企业微信员工的场景下** :  只需传入下面的参数，其他信息不支持设置。
<table> <thead> <tr> <th>参数</th> <th>是否必填</th> <th>含义</th> </tr> </thead> <tbody> <tr> <td>WeworkOpenId</td> <td>是</td> <td>企业微信用户账号ID</td> </tr> </tbody> </table>

**2. 在其他场景下** :   只需传入下面的参数，其他信息不支持设置。
<table> <thead> <tr> <th>参数</th> <th>是否必填</th> <th>含义</th> </tr> </thead> <tbody> <tr> <td>DisplayName</td> <td>是</td> <td>用户的真实名字</td> </tr> <tr> <td>Mobile</td> <td>是</td> <td>用户手机号码</td> </tr> <tr> <td>OpenId</td> <td>否</td> <td>用户的自定义ID</td> </tr> <tr> <td>Email</td> <td>否</td> <td>用户的邮箱</td> </tr> <tr> <td>Department.DepartmentId</td> <td>否</td> <td>用户加入后的部门ID</td> </tr> </tbody> </table>


注: `每个手机号每天最多使用3次`
                     * @param _employees 待创建员工的信息最多不超过20个。

**1. 在创建企业微信员工的场景下** :  只需传入下面的参数，其他信息不支持设置。
<table> <thead> <tr> <th>参数</th> <th>是否必填</th> <th>含义</th> </tr> </thead> <tbody> <tr> <td>WeworkOpenId</td> <td>是</td> <td>企业微信用户账号ID</td> </tr> </tbody> </table>

**2. 在其他场景下** :   只需传入下面的参数，其他信息不支持设置。
<table> <thead> <tr> <th>参数</th> <th>是否必填</th> <th>含义</th> </tr> </thead> <tbody> <tr> <td>DisplayName</td> <td>是</td> <td>用户的真实名字</td> </tr> <tr> <td>Mobile</td> <td>是</td> <td>用户手机号码</td> </tr> <tr> <td>OpenId</td> <td>否</td> <td>用户的自定义ID</td> </tr> <tr> <td>Email</td> <td>否</td> <td>用户的邮箱</td> </tr> <tr> <td>Department.DepartmentId</td> <td>否</td> <td>用户加入后的部门ID</td> </tr> </tbody> </table>


注: `每个手机号每天最多使用3次`
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
                     * 获取员工邀请方式可通过以下方式进行设置：

**H5**：会生成H5的链接，点击链接进入H5的认证加入企业的逻辑。
**SMS（默认）**：会通过短信或企业微信消息进行邀请。如果非企业微信场景，则是企业微信消息。其他场景则是短信通知，短信中包含链接，点击后进入微信小程序进行认证加入企业的逻辑。
                     * @return InvitationNotifyType 员工邀请方式可通过以下方式进行设置：

**H5**：会生成H5的链接，点击链接进入H5的认证加入企业的逻辑。
**SMS（默认）**：会通过短信或企业微信消息进行邀请。如果非企业微信场景，则是企业微信消息。其他场景则是短信通知，短信中包含链接，点击后进入微信小程序进行认证加入企业的逻辑。
                     * 
                     */
                    std::string GetInvitationNotifyType() const;

                    /**
                     * 设置员工邀请方式可通过以下方式进行设置：

**H5**：会生成H5的链接，点击链接进入H5的认证加入企业的逻辑。
**SMS（默认）**：会通过短信或企业微信消息进行邀请。如果非企业微信场景，则是企业微信消息。其他场景则是短信通知，短信中包含链接，点击后进入微信小程序进行认证加入企业的逻辑。
                     * @param _invitationNotifyType 员工邀请方式可通过以下方式进行设置：

**H5**：会生成H5的链接，点击链接进入H5的认证加入企业的逻辑。
**SMS（默认）**：会通过短信或企业微信消息进行邀请。如果非企业微信场景，则是企业微信消息。其他场景则是短信通知，短信中包含链接，点击后进入微信小程序进行认证加入企业的逻辑。
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
                     * 获取回跳地址，为认证成功后页面进行回跳的URL，请确保回跳地址的可用性。

注：`只有在员工邀请方式（InvitationNotifyType参数）为H5场景下才生效， 其他方式下设置无效。`

                     * @return JumpUrl 回跳地址，为认证成功后页面进行回跳的URL，请确保回跳地址的可用性。

注：`只有在员工邀请方式（InvitationNotifyType参数）为H5场景下才生效， 其他方式下设置无效。`

                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置回跳地址，为认证成功后页面进行回跳的URL，请确保回跳地址的可用性。

注：`只有在员工邀请方式（InvitationNotifyType参数）为H5场景下才生效， 其他方式下设置无效。`

                     * @param _jumpUrl 回跳地址，为认证成功后页面进行回跳的URL，请确保回跳地址的可用性。

注：`只有在员工邀请方式（InvitationNotifyType参数）为H5场景下才生效， 其他方式下设置无效。`

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
                     * 执行本接口操作的员工信息。使用此接口时，必须填写userId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 待创建员工的信息最多不超过20个。

**1. 在创建企业微信员工的场景下** :  只需传入下面的参数，其他信息不支持设置。
<table> <thead> <tr> <th>参数</th> <th>是否必填</th> <th>含义</th> </tr> </thead> <tbody> <tr> <td>WeworkOpenId</td> <td>是</td> <td>企业微信用户账号ID</td> </tr> </tbody> </table>

**2. 在其他场景下** :   只需传入下面的参数，其他信息不支持设置。
<table> <thead> <tr> <th>参数</th> <th>是否必填</th> <th>含义</th> </tr> </thead> <tbody> <tr> <td>DisplayName</td> <td>是</td> <td>用户的真实名字</td> </tr> <tr> <td>Mobile</td> <td>是</td> <td>用户手机号码</td> </tr> <tr> <td>OpenId</td> <td>否</td> <td>用户的自定义ID</td> </tr> <tr> <td>Email</td> <td>否</td> <td>用户的邮箱</td> </tr> <tr> <td>Department.DepartmentId</td> <td>否</td> <td>用户加入后的部门ID</td> </tr> </tbody> </table>


注: `每个手机号每天最多使用3次`
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
                     * 员工邀请方式可通过以下方式进行设置：

**H5**：会生成H5的链接，点击链接进入H5的认证加入企业的逻辑。
**SMS（默认）**：会通过短信或企业微信消息进行邀请。如果非企业微信场景，则是企业微信消息。其他场景则是短信通知，短信中包含链接，点击后进入微信小程序进行认证加入企业的逻辑。
                     */
                    std::string m_invitationNotifyType;
                    bool m_invitationNotifyTypeHasBeenSet;

                    /**
                     * 回跳地址，为认证成功后页面进行回跳的URL，请确保回跳地址的可用性。

注：`只有在员工邀请方式（InvitationNotifyType参数）为H5场景下才生效， 其他方式下设置无效。`

                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONEMPLOYEESREQUEST_H_
