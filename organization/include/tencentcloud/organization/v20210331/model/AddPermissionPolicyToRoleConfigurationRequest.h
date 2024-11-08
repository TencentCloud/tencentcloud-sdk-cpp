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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDPERMISSIONPOLICYTOROLECONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDPERMISSIONPOLICYTOROLECONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/PolicyDetail.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * AddPermissionPolicyToRoleConfiguration请求参数结构体
                */
                class AddPermissionPolicyToRoleConfigurationRequest : public AbstractModel
                {
                public:
                    AddPermissionPolicyToRoleConfigurationRequest();
                    ~AddPermissionPolicyToRoleConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间 ID
                     * @return ZoneId 空间 ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置空间 ID
                     * @param _zoneId 空间 ID
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取权限配置 ID
                     * @return RoleConfigurationId 权限配置 ID
                     * 
                     */
                    std::string GetRoleConfigurationId() const;

                    /**
                     * 设置权限配置 ID
                     * @param _roleConfigurationId 权限配置 ID
                     * 
                     */
                    void SetRoleConfigurationId(const std::string& _roleConfigurationId);

                    /**
                     * 判断参数 RoleConfigurationId 是否已赋值
                     * @return RoleConfigurationId 是否已赋值
                     * 
                     */
                    bool RoleConfigurationIdHasBeenSet() const;

                    /**
                     * 获取权限策略类型。取值：  System：系统策略。复用 CAM 的系统策略。 Custom: 自定义策略。按照 CAM 权限策略语法和结构编写的自定义策略。 
                     * @return RolePolicyType 权限策略类型。取值：  System：系统策略。复用 CAM 的系统策略。 Custom: 自定义策略。按照 CAM 权限策略语法和结构编写的自定义策略。 
                     * 
                     */
                    std::string GetRolePolicyType() const;

                    /**
                     * 设置权限策略类型。取值：  System：系统策略。复用 CAM 的系统策略。 Custom: 自定义策略。按照 CAM 权限策略语法和结构编写的自定义策略。 
                     * @param _rolePolicyType 权限策略类型。取值：  System：系统策略。复用 CAM 的系统策略。 Custom: 自定义策略。按照 CAM 权限策略语法和结构编写的自定义策略。 
                     * 
                     */
                    void SetRolePolicyType(const std::string& _rolePolicyType);

                    /**
                     * 判断参数 RolePolicyType 是否已赋值
                     * @return RolePolicyType 是否已赋值
                     * 
                     */
                    bool RolePolicyTypeHasBeenSet() const;

                    /**
                     * 获取权限策略名称，长度最大为 20策略，每个策略长度最大32个字符。如果要添加系统策略，建议使用RolePolicies参数。自定义策略时，数组长度最大为1。
                     * @return RolePolicyNames 权限策略名称，长度最大为 20策略，每个策略长度最大32个字符。如果要添加系统策略，建议使用RolePolicies参数。自定义策略时，数组长度最大为1。
                     * 
                     */
                    std::vector<std::string> GetRolePolicyNames() const;

                    /**
                     * 设置权限策略名称，长度最大为 20策略，每个策略长度最大32个字符。如果要添加系统策略，建议使用RolePolicies参数。自定义策略时，数组长度最大为1。
                     * @param _rolePolicyNames 权限策略名称，长度最大为 20策略，每个策略长度最大32个字符。如果要添加系统策略，建议使用RolePolicies参数。自定义策略时，数组长度最大为1。
                     * 
                     */
                    void SetRolePolicyNames(const std::vector<std::string>& _rolePolicyNames);

                    /**
                     * 判断参数 RolePolicyNames 是否已赋值
                     * @return RolePolicyNames 是否已赋值
                     * 
                     */
                    bool RolePolicyNamesHasBeenSet() const;

                    /**
                     * 获取添加的系统策略详情。
                     * @return RolePolicies 添加的系统策略详情。
                     * 
                     */
                    std::vector<PolicyDetail> GetRolePolicies() const;

                    /**
                     * 设置添加的系统策略详情。
                     * @param _rolePolicies 添加的系统策略详情。
                     * 
                     */
                    void SetRolePolicies(const std::vector<PolicyDetail>& _rolePolicies);

                    /**
                     * 判断参数 RolePolicies 是否已赋值
                     * @return RolePolicies 是否已赋值
                     * 
                     */
                    bool RolePoliciesHasBeenSet() const;

                    /**
                     * 获取自定义策略内容。长度：最大 4096 个字符。当RolePolicyType为Inline时，该参数必须配置。关于权限策略的语法和结构，请参见权限策略语法和结构。
                     * @return CustomPolicyDocument 自定义策略内容。长度：最大 4096 个字符。当RolePolicyType为Inline时，该参数必须配置。关于权限策略的语法和结构，请参见权限策略语法和结构。
                     * 
                     */
                    std::string GetCustomPolicyDocument() const;

                    /**
                     * 设置自定义策略内容。长度：最大 4096 个字符。当RolePolicyType为Inline时，该参数必须配置。关于权限策略的语法和结构，请参见权限策略语法和结构。
                     * @param _customPolicyDocument 自定义策略内容。长度：最大 4096 个字符。当RolePolicyType为Inline时，该参数必须配置。关于权限策略的语法和结构，请参见权限策略语法和结构。
                     * 
                     */
                    void SetCustomPolicyDocument(const std::string& _customPolicyDocument);

                    /**
                     * 判断参数 CustomPolicyDocument 是否已赋值
                     * @return CustomPolicyDocument 是否已赋值
                     * 
                     */
                    bool CustomPolicyDocumentHasBeenSet() const;

                    /**
                     * 获取自定义策略内容列表（跟RolePolicyNames一一对应）
                     * @return CustomPolicyDocuments 自定义策略内容列表（跟RolePolicyNames一一对应）
                     * 
                     */
                    std::vector<std::string> GetCustomPolicyDocuments() const;

                    /**
                     * 设置自定义策略内容列表（跟RolePolicyNames一一对应）
                     * @param _customPolicyDocuments 自定义策略内容列表（跟RolePolicyNames一一对应）
                     * 
                     */
                    void SetCustomPolicyDocuments(const std::vector<std::string>& _customPolicyDocuments);

                    /**
                     * 判断参数 CustomPolicyDocuments 是否已赋值
                     * @return CustomPolicyDocuments 是否已赋值
                     * 
                     */
                    bool CustomPolicyDocumentsHasBeenSet() const;

                private:

                    /**
                     * 空间 ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 权限配置 ID
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * 权限策略类型。取值：  System：系统策略。复用 CAM 的系统策略。 Custom: 自定义策略。按照 CAM 权限策略语法和结构编写的自定义策略。 
                     */
                    std::string m_rolePolicyType;
                    bool m_rolePolicyTypeHasBeenSet;

                    /**
                     * 权限策略名称，长度最大为 20策略，每个策略长度最大32个字符。如果要添加系统策略，建议使用RolePolicies参数。自定义策略时，数组长度最大为1。
                     */
                    std::vector<std::string> m_rolePolicyNames;
                    bool m_rolePolicyNamesHasBeenSet;

                    /**
                     * 添加的系统策略详情。
                     */
                    std::vector<PolicyDetail> m_rolePolicies;
                    bool m_rolePoliciesHasBeenSet;

                    /**
                     * 自定义策略内容。长度：最大 4096 个字符。当RolePolicyType为Inline时，该参数必须配置。关于权限策略的语法和结构，请参见权限策略语法和结构。
                     */
                    std::string m_customPolicyDocument;
                    bool m_customPolicyDocumentHasBeenSet;

                    /**
                     * 自定义策略内容列表（跟RolePolicyNames一一对应）
                     */
                    std::vector<std::string> m_customPolicyDocuments;
                    bool m_customPolicyDocumentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDPERMISSIONPOLICYTOROLECONFIGURATIONREQUEST_H_
