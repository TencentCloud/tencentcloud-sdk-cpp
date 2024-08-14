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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ZONESTATISTICS_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ZONESTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * CIC的空间统计
                */
                class ZoneStatistics : public AbstractModel
                {
                public:
                    ZoneStatistics();
                    ~ZoneStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户配额。
                     * @return UserQuota 用户配额。
                     * 
                     */
                    int64_t GetUserQuota() const;

                    /**
                     * 设置用户配额。
                     * @param _userQuota 用户配额。
                     * 
                     */
                    void SetUserQuota(const int64_t& _userQuota);

                    /**
                     * 判断参数 UserQuota 是否已赋值
                     * @return UserQuota 是否已赋值
                     * 
                     */
                    bool UserQuotaHasBeenSet() const;

                    /**
                     * 获取用户组配额。
                     * @return GroupQuota 用户组配额。
                     * 
                     */
                    int64_t GetGroupQuota() const;

                    /**
                     * 设置用户组配额。
                     * @param _groupQuota 用户组配额。
                     * 
                     */
                    void SetGroupQuota(const int64_t& _groupQuota);

                    /**
                     * 判断参数 GroupQuota 是否已赋值
                     * @return GroupQuota 是否已赋值
                     * 
                     */
                    bool GroupQuotaHasBeenSet() const;

                    /**
                     * 获取权限配置配额。
                     * @return RoleConfigurationQuota 权限配置配额。
                     * 
                     */
                    int64_t GetRoleConfigurationQuota() const;

                    /**
                     * 设置权限配置配额。
                     * @param _roleConfigurationQuota 权限配置配额。
                     * 
                     */
                    void SetRoleConfigurationQuota(const int64_t& _roleConfigurationQuota);

                    /**
                     * 判断参数 RoleConfigurationQuota 是否已赋值
                     * @return RoleConfigurationQuota 是否已赋值
                     * 
                     */
                    bool RoleConfigurationQuotaHasBeenSet() const;

                    /**
                     * 获取权限配置绑定的系统策略配额。
                     * @return SystemPolicyPerRoleConfigurationQuota 权限配置绑定的系统策略配额。
                     * 
                     */
                    int64_t GetSystemPolicyPerRoleConfigurationQuota() const;

                    /**
                     * 设置权限配置绑定的系统策略配额。
                     * @param _systemPolicyPerRoleConfigurationQuota 权限配置绑定的系统策略配额。
                     * 
                     */
                    void SetSystemPolicyPerRoleConfigurationQuota(const int64_t& _systemPolicyPerRoleConfigurationQuota);

                    /**
                     * 判断参数 SystemPolicyPerRoleConfigurationQuota 是否已赋值
                     * @return SystemPolicyPerRoleConfigurationQuota 是否已赋值
                     * 
                     */
                    bool SystemPolicyPerRoleConfigurationQuotaHasBeenSet() const;

                    /**
                     * 获取用户数。
                     * @return UserCount 用户数。
                     * 
                     */
                    int64_t GetUserCount() const;

                    /**
                     * 设置用户数。
                     * @param _userCount 用户数。
                     * 
                     */
                    void SetUserCount(const int64_t& _userCount);

                    /**
                     * 判断参数 UserCount 是否已赋值
                     * @return UserCount 是否已赋值
                     * 
                     */
                    bool UserCountHasBeenSet() const;

                    /**
                     * 获取用户组数。
                     * @return GroupCount 用户组数。
                     * 
                     */
                    int64_t GetGroupCount() const;

                    /**
                     * 设置用户组数。
                     * @param _groupCount 用户组数。
                     * 
                     */
                    void SetGroupCount(const int64_t& _groupCount);

                    /**
                     * 判断参数 GroupCount 是否已赋值
                     * @return GroupCount 是否已赋值
                     * 
                     */
                    bool GroupCountHasBeenSet() const;

                    /**
                     * 获取权限配置数
                     * @return RoleConfigurationCount 权限配置数
                     * 
                     */
                    int64_t GetRoleConfigurationCount() const;

                    /**
                     * 设置权限配置数
                     * @param _roleConfigurationCount 权限配置数
                     * 
                     */
                    void SetRoleConfigurationCount(const int64_t& _roleConfigurationCount);

                    /**
                     * 判断参数 RoleConfigurationCount 是否已赋值
                     * @return RoleConfigurationCount 是否已赋值
                     * 
                     */
                    bool RoleConfigurationCountHasBeenSet() const;

                    /**
                     * 获取同步用户数。
                     * @return UserProvisioningCount 同步用户数。
                     * 
                     */
                    int64_t GetUserProvisioningCount() const;

                    /**
                     * 设置同步用户数。
                     * @param _userProvisioningCount 同步用户数。
                     * 
                     */
                    void SetUserProvisioningCount(const int64_t& _userProvisioningCount);

                    /**
                     * 判断参数 UserProvisioningCount 是否已赋值
                     * @return UserProvisioningCount 是否已赋值
                     * 
                     */
                    bool UserProvisioningCountHasBeenSet() const;

                    /**
                     * 获取同步角色数。
                     * @return RoleConfigurationSyncCount 同步角色数。
                     * 
                     */
                    int64_t GetRoleConfigurationSyncCount() const;

                    /**
                     * 设置同步角色数。
                     * @param _roleConfigurationSyncCount 同步角色数。
                     * 
                     */
                    void SetRoleConfigurationSyncCount(const int64_t& _roleConfigurationSyncCount);

                    /**
                     * 判断参数 RoleConfigurationSyncCount 是否已赋值
                     * @return RoleConfigurationSyncCount 是否已赋值
                     * 
                     */
                    bool RoleConfigurationSyncCountHasBeenSet() const;

                private:

                    /**
                     * 用户配额。
                     */
                    int64_t m_userQuota;
                    bool m_userQuotaHasBeenSet;

                    /**
                     * 用户组配额。
                     */
                    int64_t m_groupQuota;
                    bool m_groupQuotaHasBeenSet;

                    /**
                     * 权限配置配额。
                     */
                    int64_t m_roleConfigurationQuota;
                    bool m_roleConfigurationQuotaHasBeenSet;

                    /**
                     * 权限配置绑定的系统策略配额。
                     */
                    int64_t m_systemPolicyPerRoleConfigurationQuota;
                    bool m_systemPolicyPerRoleConfigurationQuotaHasBeenSet;

                    /**
                     * 用户数。
                     */
                    int64_t m_userCount;
                    bool m_userCountHasBeenSet;

                    /**
                     * 用户组数。
                     */
                    int64_t m_groupCount;
                    bool m_groupCountHasBeenSet;

                    /**
                     * 权限配置数
                     */
                    int64_t m_roleConfigurationCount;
                    bool m_roleConfigurationCountHasBeenSet;

                    /**
                     * 同步用户数。
                     */
                    int64_t m_userProvisioningCount;
                    bool m_userProvisioningCountHasBeenSet;

                    /**
                     * 同步角色数。
                     */
                    int64_t m_roleConfigurationSyncCount;
                    bool m_roleConfigurationSyncCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ZONESTATISTICS_H_
