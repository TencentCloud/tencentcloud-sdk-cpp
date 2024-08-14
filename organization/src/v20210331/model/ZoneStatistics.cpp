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

#include <tencentcloud/organization/v20210331/model/ZoneStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ZoneStatistics::ZoneStatistics() :
    m_userQuotaHasBeenSet(false),
    m_groupQuotaHasBeenSet(false),
    m_roleConfigurationQuotaHasBeenSet(false),
    m_systemPolicyPerRoleConfigurationQuotaHasBeenSet(false),
    m_userCountHasBeenSet(false),
    m_groupCountHasBeenSet(false),
    m_roleConfigurationCountHasBeenSet(false),
    m_userProvisioningCountHasBeenSet(false),
    m_roleConfigurationSyncCountHasBeenSet(false)
{
}

CoreInternalOutcome ZoneStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserQuota") && !value["UserQuota"].IsNull())
    {
        if (!value["UserQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStatistics.UserQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userQuota = value["UserQuota"].GetInt64();
        m_userQuotaHasBeenSet = true;
    }

    if (value.HasMember("GroupQuota") && !value["GroupQuota"].IsNull())
    {
        if (!value["GroupQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStatistics.GroupQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupQuota = value["GroupQuota"].GetInt64();
        m_groupQuotaHasBeenSet = true;
    }

    if (value.HasMember("RoleConfigurationQuota") && !value["RoleConfigurationQuota"].IsNull())
    {
        if (!value["RoleConfigurationQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStatistics.RoleConfigurationQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roleConfigurationQuota = value["RoleConfigurationQuota"].GetInt64();
        m_roleConfigurationQuotaHasBeenSet = true;
    }

    if (value.HasMember("SystemPolicyPerRoleConfigurationQuota") && !value["SystemPolicyPerRoleConfigurationQuota"].IsNull())
    {
        if (!value["SystemPolicyPerRoleConfigurationQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStatistics.SystemPolicyPerRoleConfigurationQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_systemPolicyPerRoleConfigurationQuota = value["SystemPolicyPerRoleConfigurationQuota"].GetInt64();
        m_systemPolicyPerRoleConfigurationQuotaHasBeenSet = true;
    }

    if (value.HasMember("UserCount") && !value["UserCount"].IsNull())
    {
        if (!value["UserCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStatistics.UserCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userCount = value["UserCount"].GetInt64();
        m_userCountHasBeenSet = true;
    }

    if (value.HasMember("GroupCount") && !value["GroupCount"].IsNull())
    {
        if (!value["GroupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStatistics.GroupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupCount = value["GroupCount"].GetInt64();
        m_groupCountHasBeenSet = true;
    }

    if (value.HasMember("RoleConfigurationCount") && !value["RoleConfigurationCount"].IsNull())
    {
        if (!value["RoleConfigurationCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStatistics.RoleConfigurationCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roleConfigurationCount = value["RoleConfigurationCount"].GetInt64();
        m_roleConfigurationCountHasBeenSet = true;
    }

    if (value.HasMember("UserProvisioningCount") && !value["UserProvisioningCount"].IsNull())
    {
        if (!value["UserProvisioningCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStatistics.UserProvisioningCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userProvisioningCount = value["UserProvisioningCount"].GetInt64();
        m_userProvisioningCountHasBeenSet = true;
    }

    if (value.HasMember("RoleConfigurationSyncCount") && !value["RoleConfigurationSyncCount"].IsNull())
    {
        if (!value["RoleConfigurationSyncCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStatistics.RoleConfigurationSyncCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roleConfigurationSyncCount = value["RoleConfigurationSyncCount"].GetInt64();
        m_roleConfigurationSyncCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userQuota, allocator);
    }

    if (m_groupQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupQuota, allocator);
    }

    if (m_roleConfigurationQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleConfigurationQuota, allocator);
    }

    if (m_systemPolicyPerRoleConfigurationQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemPolicyPerRoleConfigurationQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemPolicyPerRoleConfigurationQuota, allocator);
    }

    if (m_userCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userCount, allocator);
    }

    if (m_groupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupCount, allocator);
    }

    if (m_roleConfigurationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleConfigurationCount, allocator);
    }

    if (m_userProvisioningCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserProvisioningCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userProvisioningCount, allocator);
    }

    if (m_roleConfigurationSyncCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationSyncCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleConfigurationSyncCount, allocator);
    }

}


int64_t ZoneStatistics::GetUserQuota() const
{
    return m_userQuota;
}

void ZoneStatistics::SetUserQuota(const int64_t& _userQuota)
{
    m_userQuota = _userQuota;
    m_userQuotaHasBeenSet = true;
}

bool ZoneStatistics::UserQuotaHasBeenSet() const
{
    return m_userQuotaHasBeenSet;
}

int64_t ZoneStatistics::GetGroupQuota() const
{
    return m_groupQuota;
}

void ZoneStatistics::SetGroupQuota(const int64_t& _groupQuota)
{
    m_groupQuota = _groupQuota;
    m_groupQuotaHasBeenSet = true;
}

bool ZoneStatistics::GroupQuotaHasBeenSet() const
{
    return m_groupQuotaHasBeenSet;
}

int64_t ZoneStatistics::GetRoleConfigurationQuota() const
{
    return m_roleConfigurationQuota;
}

void ZoneStatistics::SetRoleConfigurationQuota(const int64_t& _roleConfigurationQuota)
{
    m_roleConfigurationQuota = _roleConfigurationQuota;
    m_roleConfigurationQuotaHasBeenSet = true;
}

bool ZoneStatistics::RoleConfigurationQuotaHasBeenSet() const
{
    return m_roleConfigurationQuotaHasBeenSet;
}

int64_t ZoneStatistics::GetSystemPolicyPerRoleConfigurationQuota() const
{
    return m_systemPolicyPerRoleConfigurationQuota;
}

void ZoneStatistics::SetSystemPolicyPerRoleConfigurationQuota(const int64_t& _systemPolicyPerRoleConfigurationQuota)
{
    m_systemPolicyPerRoleConfigurationQuota = _systemPolicyPerRoleConfigurationQuota;
    m_systemPolicyPerRoleConfigurationQuotaHasBeenSet = true;
}

bool ZoneStatistics::SystemPolicyPerRoleConfigurationQuotaHasBeenSet() const
{
    return m_systemPolicyPerRoleConfigurationQuotaHasBeenSet;
}

int64_t ZoneStatistics::GetUserCount() const
{
    return m_userCount;
}

void ZoneStatistics::SetUserCount(const int64_t& _userCount)
{
    m_userCount = _userCount;
    m_userCountHasBeenSet = true;
}

bool ZoneStatistics::UserCountHasBeenSet() const
{
    return m_userCountHasBeenSet;
}

int64_t ZoneStatistics::GetGroupCount() const
{
    return m_groupCount;
}

void ZoneStatistics::SetGroupCount(const int64_t& _groupCount)
{
    m_groupCount = _groupCount;
    m_groupCountHasBeenSet = true;
}

bool ZoneStatistics::GroupCountHasBeenSet() const
{
    return m_groupCountHasBeenSet;
}

int64_t ZoneStatistics::GetRoleConfigurationCount() const
{
    return m_roleConfigurationCount;
}

void ZoneStatistics::SetRoleConfigurationCount(const int64_t& _roleConfigurationCount)
{
    m_roleConfigurationCount = _roleConfigurationCount;
    m_roleConfigurationCountHasBeenSet = true;
}

bool ZoneStatistics::RoleConfigurationCountHasBeenSet() const
{
    return m_roleConfigurationCountHasBeenSet;
}

int64_t ZoneStatistics::GetUserProvisioningCount() const
{
    return m_userProvisioningCount;
}

void ZoneStatistics::SetUserProvisioningCount(const int64_t& _userProvisioningCount)
{
    m_userProvisioningCount = _userProvisioningCount;
    m_userProvisioningCountHasBeenSet = true;
}

bool ZoneStatistics::UserProvisioningCountHasBeenSet() const
{
    return m_userProvisioningCountHasBeenSet;
}

int64_t ZoneStatistics::GetRoleConfigurationSyncCount() const
{
    return m_roleConfigurationSyncCount;
}

void ZoneStatistics::SetRoleConfigurationSyncCount(const int64_t& _roleConfigurationSyncCount)
{
    m_roleConfigurationSyncCount = _roleConfigurationSyncCount;
    m_roleConfigurationSyncCountHasBeenSet = true;
}

bool ZoneStatistics::RoleConfigurationSyncCountHasBeenSet() const
{
    return m_roleConfigurationSyncCountHasBeenSet;
}

