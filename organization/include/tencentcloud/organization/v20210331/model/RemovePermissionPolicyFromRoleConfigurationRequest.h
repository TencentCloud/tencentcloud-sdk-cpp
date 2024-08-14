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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_REMOVEPERMISSIONPOLICYFROMROLECONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_REMOVEPERMISSIONPOLICYFROMROLECONFIGURATIONREQUEST_H_

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
                * RemovePermissionPolicyFromRoleConfiguration请求参数结构体
                */
                class RemovePermissionPolicyFromRoleConfigurationRequest : public AbstractModel
                {
                public:
                    RemovePermissionPolicyFromRoleConfigurationRequest();
                    ~RemovePermissionPolicyFromRoleConfigurationRequest() = default;
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
                     * 获取权限策略名称，长度最大为 32 个字符。
                     * @return RolePolicyName 权限策略名称，长度最大为 32 个字符。
                     * 
                     */
                    std::string GetRolePolicyName() const;

                    /**
                     * 设置权限策略名称，长度最大为 32 个字符。
                     * @param _rolePolicyName 权限策略名称，长度最大为 32 个字符。
                     * 
                     */
                    void SetRolePolicyName(const std::string& _rolePolicyName);

                    /**
                     * 判断参数 RolePolicyName 是否已赋值
                     * @return RolePolicyName 是否已赋值
                     * 
                     */
                    bool RolePolicyNameHasBeenSet() const;

                    /**
                     * 获取策略ID。
                     * @return RolePolicyId 策略ID。
                     * 
                     */
                    int64_t GetRolePolicyId() const;

                    /**
                     * 设置策略ID。
                     * @param _rolePolicyId 策略ID。
                     * 
                     */
                    void SetRolePolicyId(const int64_t& _rolePolicyId);

                    /**
                     * 判断参数 RolePolicyId 是否已赋值
                     * @return RolePolicyId 是否已赋值
                     * 
                     */
                    bool RolePolicyIdHasBeenSet() const;

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
                     * 权限策略名称，长度最大为 32 个字符。
                     */
                    std::string m_rolePolicyName;
                    bool m_rolePolicyNameHasBeenSet;

                    /**
                     * 策略ID。
                     */
                    int64_t m_rolePolicyId;
                    bool m_rolePolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_REMOVEPERMISSIONPOLICYFROMROLECONFIGURATIONREQUEST_H_
