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
                     * 获取<p>空间 ID</p>
                     * @return ZoneId <p>空间 ID</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>空间 ID</p>
                     * @param _zoneId <p>空间 ID</p>
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
                     * 获取<p>权限配置 ID</p>
                     * @return RoleConfigurationId <p>权限配置 ID</p>
                     * 
                     */
                    std::string GetRoleConfigurationId() const;

                    /**
                     * 设置<p>权限配置 ID</p>
                     * @param _roleConfigurationId <p>权限配置 ID</p>
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
                     * 获取<p>权限策略类型。取值：  System：系统策略。复用 CAM 的系统策略。 Custom: 自定义策略。按照 CAM 权限策略语法和结构编写的自定义策略。</p>
                     * @return RolePolicyType <p>权限策略类型。取值：  System：系统策略。复用 CAM 的系统策略。 Custom: 自定义策略。按照 CAM 权限策略语法和结构编写的自定义策略。</p>
                     * 
                     */
                    std::string GetRolePolicyType() const;

                    /**
                     * 设置<p>权限策略类型。取值：  System：系统策略。复用 CAM 的系统策略。 Custom: 自定义策略。按照 CAM 权限策略语法和结构编写的自定义策略。</p>
                     * @param _rolePolicyType <p>权限策略类型。取值：  System：系统策略。复用 CAM 的系统策略。 Custom: 自定义策略。按照 CAM 权限策略语法和结构编写的自定义策略。</p>
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
                     * 获取<p>权限策略名称，长度最大为 20策略，每个策略长度最大32个字符。如果要添加系统策略，建议使用RolePolicies参数。自定义策略时，数组长度最大为1。</p>
                     * @return RolePolicyNames <p>权限策略名称，长度最大为 20策略，每个策略长度最大32个字符。如果要添加系统策略，建议使用RolePolicies参数。自定义策略时，数组长度最大为1。</p>
                     * 
                     */
                    std::vector<std::string> GetRolePolicyNames() const;

                    /**
                     * 设置<p>权限策略名称，长度最大为 20策略，每个策略长度最大32个字符。如果要添加系统策略，建议使用RolePolicies参数。自定义策略时，数组长度最大为1。</p>
                     * @param _rolePolicyNames <p>权限策略名称，长度最大为 20策略，每个策略长度最大32个字符。如果要添加系统策略，建议使用RolePolicies参数。自定义策略时，数组长度最大为1。</p>
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
                     * 获取<p>添加的系统策略详情。</p>
                     * @return RolePolicies <p>添加的系统策略详情。</p>
                     * 
                     */
                    std::vector<PolicyDetail> GetRolePolicies() const;

                    /**
                     * 设置<p>添加的系统策略详情。</p>
                     * @param _rolePolicies <p>添加的系统策略详情。</p>
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
                     * 获取<p>自定义策略内容。长度：最大 4096 个字符。当RolePolicyType为Inline时，该参数必须配置。关于权限策略的语法和结构，请参见权限策略语法和结构。</p>
                     * @return CustomPolicyDocument <p>自定义策略内容。长度：最大 4096 个字符。当RolePolicyType为Inline时，该参数必须配置。关于权限策略的语法和结构，请参见权限策略语法和结构。</p>
                     * 
                     */
                    std::string GetCustomPolicyDocument() const;

                    /**
                     * 设置<p>自定义策略内容。长度：最大 4096 个字符。当RolePolicyType为Inline时，该参数必须配置。关于权限策略的语法和结构，请参见权限策略语法和结构。</p>
                     * @param _customPolicyDocument <p>自定义策略内容。长度：最大 4096 个字符。当RolePolicyType为Inline时，该参数必须配置。关于权限策略的语法和结构，请参见权限策略语法和结构。</p>
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
                     * 获取<p>自定义策略内容列表（跟RolePolicyNames一一对应）</p>
                     * @return CustomPolicyDocuments <p>自定义策略内容列表（跟RolePolicyNames一一对应）</p>
                     * 
                     */
                    std::vector<std::string> GetCustomPolicyDocuments() const;

                    /**
                     * 设置<p>自定义策略内容列表（跟RolePolicyNames一一对应）</p>
                     * @param _customPolicyDocuments <p>自定义策略内容列表（跟RolePolicyNames一一对应）</p>
                     * 
                     */
                    void SetCustomPolicyDocuments(const std::vector<std::string>& _customPolicyDocuments);

                    /**
                     * 判断参数 CustomPolicyDocuments 是否已赋值
                     * @return CustomPolicyDocuments 是否已赋值
                     * 
                     */
                    bool CustomPolicyDocumentsHasBeenSet() const;

                    /**
                     * 获取<p>是否公共策略</p><p>枚举值：</p><ul><li>1： 是</li><li>0： 不是</li></ul><p>默认值：1</p>
                     * @return PolicyType <p>是否公共策略</p><p>枚举值：</p><ul><li>1： 是</li><li>0： 不是</li></ul><p>默认值：1</p>
                     * 
                     */
                    int64_t GetPolicyType() const;

                    /**
                     * 设置<p>是否公共策略</p><p>枚举值：</p><ul><li>1： 是</li><li>0： 不是</li></ul><p>默认值：1</p>
                     * @param _policyType <p>是否公共策略</p><p>枚举值：</p><ul><li>1： 是</li><li>0： 不是</li></ul><p>默认值：1</p>
                     * 
                     */
                    void SetPolicyType(const int64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                private:

                    /**
                     * <p>空间 ID</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>权限配置 ID</p>
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * <p>权限策略类型。取值：  System：系统策略。复用 CAM 的系统策略。 Custom: 自定义策略。按照 CAM 权限策略语法和结构编写的自定义策略。</p>
                     */
                    std::string m_rolePolicyType;
                    bool m_rolePolicyTypeHasBeenSet;

                    /**
                     * <p>权限策略名称，长度最大为 20策略，每个策略长度最大32个字符。如果要添加系统策略，建议使用RolePolicies参数。自定义策略时，数组长度最大为1。</p>
                     */
                    std::vector<std::string> m_rolePolicyNames;
                    bool m_rolePolicyNamesHasBeenSet;

                    /**
                     * <p>添加的系统策略详情。</p>
                     */
                    std::vector<PolicyDetail> m_rolePolicies;
                    bool m_rolePoliciesHasBeenSet;

                    /**
                     * <p>自定义策略内容。长度：最大 4096 个字符。当RolePolicyType为Inline时，该参数必须配置。关于权限策略的语法和结构，请参见权限策略语法和结构。</p>
                     */
                    std::string m_customPolicyDocument;
                    bool m_customPolicyDocumentHasBeenSet;

                    /**
                     * <p>自定义策略内容列表（跟RolePolicyNames一一对应）</p>
                     */
                    std::vector<std::string> m_customPolicyDocuments;
                    bool m_customPolicyDocumentsHasBeenSet;

                    /**
                     * <p>是否公共策略</p><p>枚举值：</p><ul><li>1： 是</li><li>0： 不是</li></ul><p>默认值：1</p>
                     */
                    int64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDPERMISSIONPOLICYTOROLECONFIGURATIONREQUEST_H_
