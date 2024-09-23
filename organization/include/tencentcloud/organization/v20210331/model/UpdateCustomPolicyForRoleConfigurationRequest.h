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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATECUSTOMPOLICYFORROLECONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATECUSTOMPOLICYFORROLECONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * UpdateCustomPolicyForRoleConfiguration请求参数结构体
                */
                class UpdateCustomPolicyForRoleConfigurationRequest : public AbstractModel
                {
                public:
                    UpdateCustomPolicyForRoleConfigurationRequest();
                    ~UpdateCustomPolicyForRoleConfigurationRequest() = default;
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
                     * 获取权限策略名称，长度最大为 32 个字符。
                     * @return CustomPolicyName 权限策略名称，长度最大为 32 个字符。
                     * 
                     */
                    std::string GetCustomPolicyName() const;

                    /**
                     * 设置权限策略名称，长度最大为 32 个字符。
                     * @param _customPolicyName 权限策略名称，长度最大为 32 个字符。
                     * 
                     */
                    void SetCustomPolicyName(const std::string& _customPolicyName);

                    /**
                     * 判断参数 CustomPolicyName 是否已赋值
                     * @return CustomPolicyName 是否已赋值
                     * 
                     */
                    bool CustomPolicyNameHasBeenSet() const;

                    /**
                     * 获取自定义策略内容。长度：最大 4096 个字符。当RolePolicyType为Inline时，该参数必须配置。关于权限策略的语法和结构，请参见权限策略语法和结构。
                     * @return NewCustomPolicyDocument 自定义策略内容。长度：最大 4096 个字符。当RolePolicyType为Inline时，该参数必须配置。关于权限策略的语法和结构，请参见权限策略语法和结构。
                     * 
                     */
                    std::string GetNewCustomPolicyDocument() const;

                    /**
                     * 设置自定义策略内容。长度：最大 4096 个字符。当RolePolicyType为Inline时，该参数必须配置。关于权限策略的语法和结构，请参见权限策略语法和结构。
                     * @param _newCustomPolicyDocument 自定义策略内容。长度：最大 4096 个字符。当RolePolicyType为Inline时，该参数必须配置。关于权限策略的语法和结构，请参见权限策略语法和结构。
                     * 
                     */
                    void SetNewCustomPolicyDocument(const std::string& _newCustomPolicyDocument);

                    /**
                     * 判断参数 NewCustomPolicyDocument 是否已赋值
                     * @return NewCustomPolicyDocument 是否已赋值
                     * 
                     */
                    bool NewCustomPolicyDocumentHasBeenSet() const;

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
                     * 权限策略名称，长度最大为 32 个字符。
                     */
                    std::string m_customPolicyName;
                    bool m_customPolicyNameHasBeenSet;

                    /**
                     * 自定义策略内容。长度：最大 4096 个字符。当RolePolicyType为Inline时，该参数必须配置。关于权限策略的语法和结构，请参见权限策略语法和结构。
                     */
                    std::string m_newCustomPolicyDocument;
                    bool m_newCustomPolicyDocumentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATECUSTOMPOLICYFORROLECONFIGURATIONREQUEST_H_
