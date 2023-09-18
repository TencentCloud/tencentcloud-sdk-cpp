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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONDEPARTMENTREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONDEPARTMENTREQUEST_H_

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
                * CreateIntegrationDepartment请求参数结构体
                */
                class CreateIntegrationDepartmentRequest : public AbstractModel
                {
                public:
                    CreateIntegrationDepartmentRequest();
                    ~CreateIntegrationDepartmentRequest() = default;
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
                     * 获取部门名称，最大长度为50个字符。
                     * @return DeptName 部门名称，最大长度为50个字符。
                     * 
                     */
                    std::string GetDeptName() const;

                    /**
                     * 设置部门名称，最大长度为50个字符。
                     * @param _deptName 部门名称，最大长度为50个字符。
                     * 
                     */
                    void SetDeptName(const std::string& _deptName);

                    /**
                     * 判断参数 DeptName 是否已赋值
                     * @return DeptName 是否已赋值
                     * 
                     */
                    bool DeptNameHasBeenSet() const;

                    /**
                     * 获取代理企业和员工的信息。 在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。 在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。 在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。 在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
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
                     * 获取电子签父部门ID。
注：`如果同时指定了ParentDeptId与ParentDeptOpenId参数，系统将优先使用ParentDeptId。当二者都未指定时，创建的新部门将自动填充至根节点部门下。`
                     * @return ParentDeptId 电子签父部门ID。
注：`如果同时指定了ParentDeptId与ParentDeptOpenId参数，系统将优先使用ParentDeptId。当二者都未指定时，创建的新部门将自动填充至根节点部门下。`
                     * 
                     */
                    std::string GetParentDeptId() const;

                    /**
                     * 设置电子签父部门ID。
注：`如果同时指定了ParentDeptId与ParentDeptOpenId参数，系统将优先使用ParentDeptId。当二者都未指定时，创建的新部门将自动填充至根节点部门下。`
                     * @param _parentDeptId 电子签父部门ID。
注：`如果同时指定了ParentDeptId与ParentDeptOpenId参数，系统将优先使用ParentDeptId。当二者都未指定时，创建的新部门将自动填充至根节点部门下。`
                     * 
                     */
                    void SetParentDeptId(const std::string& _parentDeptId);

                    /**
                     * 判断参数 ParentDeptId 是否已赋值
                     * @return ParentDeptId 是否已赋值
                     * 
                     */
                    bool ParentDeptIdHasBeenSet() const;

                    /**
                     * 获取第三方平台中父部门ID。
注：`如果同时指定了ParentDeptId与ParentDeptOpenId参数，系统将优先使用ParentDeptId。当二者都未指定时，创建的新部门将自动填充至根节点部门下。`
                     * @return ParentDeptOpenId 第三方平台中父部门ID。
注：`如果同时指定了ParentDeptId与ParentDeptOpenId参数，系统将优先使用ParentDeptId。当二者都未指定时，创建的新部门将自动填充至根节点部门下。`
                     * 
                     */
                    std::string GetParentDeptOpenId() const;

                    /**
                     * 设置第三方平台中父部门ID。
注：`如果同时指定了ParentDeptId与ParentDeptOpenId参数，系统将优先使用ParentDeptId。当二者都未指定时，创建的新部门将自动填充至根节点部门下。`
                     * @param _parentDeptOpenId 第三方平台中父部门ID。
注：`如果同时指定了ParentDeptId与ParentDeptOpenId参数，系统将优先使用ParentDeptId。当二者都未指定时，创建的新部门将自动填充至根节点部门下。`
                     * 
                     */
                    void SetParentDeptOpenId(const std::string& _parentDeptOpenId);

                    /**
                     * 判断参数 ParentDeptOpenId 是否已赋值
                     * @return ParentDeptOpenId 是否已赋值
                     * 
                     */
                    bool ParentDeptOpenIdHasBeenSet() const;

                    /**
                     * 获取客户系统部门ID，最大长度为64个字符。
                     * @return DeptOpenId 客户系统部门ID，最大长度为64个字符。
                     * 
                     */
                    std::string GetDeptOpenId() const;

                    /**
                     * 设置客户系统部门ID，最大长度为64个字符。
                     * @param _deptOpenId 客户系统部门ID，最大长度为64个字符。
                     * 
                     */
                    void SetDeptOpenId(const std::string& _deptOpenId);

                    /**
                     * 判断参数 DeptOpenId 是否已赋值
                     * @return DeptOpenId 是否已赋值
                     * 
                     */
                    bool DeptOpenIdHasBeenSet() const;

                    /**
                     * 获取排序号，支持设置的数值范围为1~30000。同一父部门下，排序号越大，部门顺序越靠前。
                     * @return OrderNo 排序号，支持设置的数值范围为1~30000。同一父部门下，排序号越大，部门顺序越靠前。
                     * 
                     */
                    uint64_t GetOrderNo() const;

                    /**
                     * 设置排序号，支持设置的数值范围为1~30000。同一父部门下，排序号越大，部门顺序越靠前。
                     * @param _orderNo 排序号，支持设置的数值范围为1~30000。同一父部门下，排序号越大，部门顺序越靠前。
                     * 
                     */
                    void SetOrderNo(const uint64_t& _orderNo);

                    /**
                     * 判断参数 OrderNo 是否已赋值
                     * @return OrderNo 是否已赋值
                     * 
                     */
                    bool OrderNoHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得组织架构管理权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 部门名称，最大长度为50个字符。
                     */
                    std::string m_deptName;
                    bool m_deptNameHasBeenSet;

                    /**
                     * 代理企业和员工的信息。 在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 电子签父部门ID。
注：`如果同时指定了ParentDeptId与ParentDeptOpenId参数，系统将优先使用ParentDeptId。当二者都未指定时，创建的新部门将自动填充至根节点部门下。`
                     */
                    std::string m_parentDeptId;
                    bool m_parentDeptIdHasBeenSet;

                    /**
                     * 第三方平台中父部门ID。
注：`如果同时指定了ParentDeptId与ParentDeptOpenId参数，系统将优先使用ParentDeptId。当二者都未指定时，创建的新部门将自动填充至根节点部门下。`
                     */
                    std::string m_parentDeptOpenId;
                    bool m_parentDeptOpenIdHasBeenSet;

                    /**
                     * 客户系统部门ID，最大长度为64个字符。
                     */
                    std::string m_deptOpenId;
                    bool m_deptOpenIdHasBeenSet;

                    /**
                     * 排序号，支持设置的数值范围为1~30000。同一父部门下，排序号越大，部门顺序越靠前。
                     */
                    uint64_t m_orderNo;
                    bool m_orderNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONDEPARTMENTREQUEST_H_
