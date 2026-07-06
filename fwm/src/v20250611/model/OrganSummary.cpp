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

#include <tencentcloud/fwm/v20250611/model/OrganSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

OrganSummary::OrganSummary() :
    m_groupNameHasBeenSet(false),
    m_adminInfoHasBeenSet(false),
    m_adminCountHasBeenSet(false),
    m_joinedMemberCountHasBeenSet(false),
    m_memberLimitHasBeenSet(false),
    m_memberLimitDisplayHasBeenSet(false),
    m_cfwSharerCountHasBeenSet(false),
    m_cfwUserCountHasBeenSet(false),
    m_departmentsHasBeenSet(false),
    m_managedMemberCountHasBeenSet(false),
    m_managedProductCountHasBeenSet(false),
    m_cfwManageCountHasBeenSet(false)
{
}

CoreInternalOutcome OrganSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganSummary.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("AdminInfo") && !value["AdminInfo"].IsNull())
    {
        if (!value["AdminInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OrganSummary.AdminInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_adminInfo.Deserialize(value["AdminInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adminInfoHasBeenSet = true;
    }

    if (value.HasMember("AdminCount") && !value["AdminCount"].IsNull())
    {
        if (!value["AdminCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganSummary.AdminCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_adminCount = value["AdminCount"].GetInt64();
        m_adminCountHasBeenSet = true;
    }

    if (value.HasMember("JoinedMemberCount") && !value["JoinedMemberCount"].IsNull())
    {
        if (!value["JoinedMemberCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganSummary.JoinedMemberCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_joinedMemberCount = value["JoinedMemberCount"].GetInt64();
        m_joinedMemberCountHasBeenSet = true;
    }

    if (value.HasMember("MemberLimit") && !value["MemberLimit"].IsNull())
    {
        if (!value["MemberLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganSummary.MemberLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberLimit = value["MemberLimit"].GetInt64();
        m_memberLimitHasBeenSet = true;
    }

    if (value.HasMember("MemberLimitDisplay") && !value["MemberLimitDisplay"].IsNull())
    {
        if (!value["MemberLimitDisplay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganSummary.MemberLimitDisplay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberLimitDisplay = string(value["MemberLimitDisplay"].GetString());
        m_memberLimitDisplayHasBeenSet = true;
    }

    if (value.HasMember("CfwSharerCount") && !value["CfwSharerCount"].IsNull())
    {
        if (!value["CfwSharerCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganSummary.CfwSharerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cfwSharerCount = value["CfwSharerCount"].GetInt64();
        m_cfwSharerCountHasBeenSet = true;
    }

    if (value.HasMember("CfwUserCount") && !value["CfwUserCount"].IsNull())
    {
        if (!value["CfwUserCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganSummary.CfwUserCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cfwUserCount = value["CfwUserCount"].GetInt64();
        m_cfwUserCountHasBeenSet = true;
    }

    if (value.HasMember("Departments") && !value["Departments"].IsNull())
    {
        if (!value["Departments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrganSummary.Departments` is not array type"));

        const rapidjson::Value &tmpValue = value["Departments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_departments.push_back((*itr).GetString());
        }
        m_departmentsHasBeenSet = true;
    }

    if (value.HasMember("ManagedMemberCount") && !value["ManagedMemberCount"].IsNull())
    {
        if (!value["ManagedMemberCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganSummary.ManagedMemberCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_managedMemberCount = value["ManagedMemberCount"].GetInt64();
        m_managedMemberCountHasBeenSet = true;
    }

    if (value.HasMember("ManagedProductCount") && !value["ManagedProductCount"].IsNull())
    {
        if (!value["ManagedProductCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganSummary.ManagedProductCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_managedProductCount = value["ManagedProductCount"].GetInt64();
        m_managedProductCountHasBeenSet = true;
    }

    if (value.HasMember("CfwManageCount") && !value["CfwManageCount"].IsNull())
    {
        if (!value["CfwManageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganSummary.CfwManageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cfwManageCount = value["CfwManageCount"].GetInt64();
        m_cfwManageCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrganSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_adminInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_adminCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adminCount, allocator);
    }

    if (m_joinedMemberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinedMemberCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_joinedMemberCount, allocator);
    }

    if (m_memberLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberLimit, allocator);
    }

    if (m_memberLimitDisplayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberLimitDisplay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberLimitDisplay.c_str(), allocator).Move(), allocator);
    }

    if (m_cfwSharerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwSharerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cfwSharerCount, allocator);
    }

    if (m_cfwUserCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwUserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cfwUserCount, allocator);
    }

    if (m_departmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Departments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_departments.begin(); itr != m_departments.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_managedMemberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagedMemberCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_managedMemberCount, allocator);
    }

    if (m_managedProductCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagedProductCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_managedProductCount, allocator);
    }

    if (m_cfwManageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwManageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cfwManageCount, allocator);
    }

}


string OrganSummary::GetGroupName() const
{
    return m_groupName;
}

void OrganSummary::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool OrganSummary::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

MemberInfo OrganSummary::GetAdminInfo() const
{
    return m_adminInfo;
}

void OrganSummary::SetAdminInfo(const MemberInfo& _adminInfo)
{
    m_adminInfo = _adminInfo;
    m_adminInfoHasBeenSet = true;
}

bool OrganSummary::AdminInfoHasBeenSet() const
{
    return m_adminInfoHasBeenSet;
}

int64_t OrganSummary::GetAdminCount() const
{
    return m_adminCount;
}

void OrganSummary::SetAdminCount(const int64_t& _adminCount)
{
    m_adminCount = _adminCount;
    m_adminCountHasBeenSet = true;
}

bool OrganSummary::AdminCountHasBeenSet() const
{
    return m_adminCountHasBeenSet;
}

int64_t OrganSummary::GetJoinedMemberCount() const
{
    return m_joinedMemberCount;
}

void OrganSummary::SetJoinedMemberCount(const int64_t& _joinedMemberCount)
{
    m_joinedMemberCount = _joinedMemberCount;
    m_joinedMemberCountHasBeenSet = true;
}

bool OrganSummary::JoinedMemberCountHasBeenSet() const
{
    return m_joinedMemberCountHasBeenSet;
}

int64_t OrganSummary::GetMemberLimit() const
{
    return m_memberLimit;
}

void OrganSummary::SetMemberLimit(const int64_t& _memberLimit)
{
    m_memberLimit = _memberLimit;
    m_memberLimitHasBeenSet = true;
}

bool OrganSummary::MemberLimitHasBeenSet() const
{
    return m_memberLimitHasBeenSet;
}

string OrganSummary::GetMemberLimitDisplay() const
{
    return m_memberLimitDisplay;
}

void OrganSummary::SetMemberLimitDisplay(const string& _memberLimitDisplay)
{
    m_memberLimitDisplay = _memberLimitDisplay;
    m_memberLimitDisplayHasBeenSet = true;
}

bool OrganSummary::MemberLimitDisplayHasBeenSet() const
{
    return m_memberLimitDisplayHasBeenSet;
}

int64_t OrganSummary::GetCfwSharerCount() const
{
    return m_cfwSharerCount;
}

void OrganSummary::SetCfwSharerCount(const int64_t& _cfwSharerCount)
{
    m_cfwSharerCount = _cfwSharerCount;
    m_cfwSharerCountHasBeenSet = true;
}

bool OrganSummary::CfwSharerCountHasBeenSet() const
{
    return m_cfwSharerCountHasBeenSet;
}

int64_t OrganSummary::GetCfwUserCount() const
{
    return m_cfwUserCount;
}

void OrganSummary::SetCfwUserCount(const int64_t& _cfwUserCount)
{
    m_cfwUserCount = _cfwUserCount;
    m_cfwUserCountHasBeenSet = true;
}

bool OrganSummary::CfwUserCountHasBeenSet() const
{
    return m_cfwUserCountHasBeenSet;
}

vector<string> OrganSummary::GetDepartments() const
{
    return m_departments;
}

void OrganSummary::SetDepartments(const vector<string>& _departments)
{
    m_departments = _departments;
    m_departmentsHasBeenSet = true;
}

bool OrganSummary::DepartmentsHasBeenSet() const
{
    return m_departmentsHasBeenSet;
}

int64_t OrganSummary::GetManagedMemberCount() const
{
    return m_managedMemberCount;
}

void OrganSummary::SetManagedMemberCount(const int64_t& _managedMemberCount)
{
    m_managedMemberCount = _managedMemberCount;
    m_managedMemberCountHasBeenSet = true;
}

bool OrganSummary::ManagedMemberCountHasBeenSet() const
{
    return m_managedMemberCountHasBeenSet;
}

int64_t OrganSummary::GetManagedProductCount() const
{
    return m_managedProductCount;
}

void OrganSummary::SetManagedProductCount(const int64_t& _managedProductCount)
{
    m_managedProductCount = _managedProductCount;
    m_managedProductCountHasBeenSet = true;
}

bool OrganSummary::ManagedProductCountHasBeenSet() const
{
    return m_managedProductCountHasBeenSet;
}

int64_t OrganSummary::GetCfwManageCount() const
{
    return m_cfwManageCount;
}

void OrganSummary::SetCfwManageCount(const int64_t& _cfwManageCount)
{
    m_cfwManageCount = _cfwManageCount;
    m_cfwManageCountHasBeenSet = true;
}

bool OrganSummary::CfwManageCountHasBeenSet() const
{
    return m_cfwManageCountHasBeenSet;
}

