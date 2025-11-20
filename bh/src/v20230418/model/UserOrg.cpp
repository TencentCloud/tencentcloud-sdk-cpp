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

#include <tencentcloud/bh/v20230418/model/UserOrg.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

UserOrg::UserOrg() :
    m_orgIdHasBeenSet(false),
    m_orgNameHasBeenSet(false),
    m_orgIdPathHasBeenSet(false),
    m_orgNamePathHasBeenSet(false),
    m_userTotalHasBeenSet(false)
{
}

CoreInternalOutcome UserOrg::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrgId") && !value["OrgId"].IsNull())
    {
        if (!value["OrgId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserOrg.OrgId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orgId = value["OrgId"].GetUint64();
        m_orgIdHasBeenSet = true;
    }

    if (value.HasMember("OrgName") && !value["OrgName"].IsNull())
    {
        if (!value["OrgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserOrg.OrgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgName = string(value["OrgName"].GetString());
        m_orgNameHasBeenSet = true;
    }

    if (value.HasMember("OrgIdPath") && !value["OrgIdPath"].IsNull())
    {
        if (!value["OrgIdPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserOrg.OrgIdPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgIdPath = string(value["OrgIdPath"].GetString());
        m_orgIdPathHasBeenSet = true;
    }

    if (value.HasMember("OrgNamePath") && !value["OrgNamePath"].IsNull())
    {
        if (!value["OrgNamePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserOrg.OrgNamePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgNamePath = string(value["OrgNamePath"].GetString());
        m_orgNamePathHasBeenSet = true;
    }

    if (value.HasMember("UserTotal") && !value["UserTotal"].IsNull())
    {
        if (!value["UserTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserOrg.UserTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userTotal = value["UserTotal"].GetUint64();
        m_userTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserOrg::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orgId, allocator);
    }

    if (m_orgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgName.c_str(), allocator).Move(), allocator);
    }

    if (m_orgIdPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgIdPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgIdPath.c_str(), allocator).Move(), allocator);
    }

    if (m_orgNamePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNamePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgNamePath.c_str(), allocator).Move(), allocator);
    }

    if (m_userTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userTotal, allocator);
    }

}


uint64_t UserOrg::GetOrgId() const
{
    return m_orgId;
}

void UserOrg::SetOrgId(const uint64_t& _orgId)
{
    m_orgId = _orgId;
    m_orgIdHasBeenSet = true;
}

bool UserOrg::OrgIdHasBeenSet() const
{
    return m_orgIdHasBeenSet;
}

string UserOrg::GetOrgName() const
{
    return m_orgName;
}

void UserOrg::SetOrgName(const string& _orgName)
{
    m_orgName = _orgName;
    m_orgNameHasBeenSet = true;
}

bool UserOrg::OrgNameHasBeenSet() const
{
    return m_orgNameHasBeenSet;
}

string UserOrg::GetOrgIdPath() const
{
    return m_orgIdPath;
}

void UserOrg::SetOrgIdPath(const string& _orgIdPath)
{
    m_orgIdPath = _orgIdPath;
    m_orgIdPathHasBeenSet = true;
}

bool UserOrg::OrgIdPathHasBeenSet() const
{
    return m_orgIdPathHasBeenSet;
}

string UserOrg::GetOrgNamePath() const
{
    return m_orgNamePath;
}

void UserOrg::SetOrgNamePath(const string& _orgNamePath)
{
    m_orgNamePath = _orgNamePath;
    m_orgNamePathHasBeenSet = true;
}

bool UserOrg::OrgNamePathHasBeenSet() const
{
    return m_orgNamePathHasBeenSet;
}

uint64_t UserOrg::GetUserTotal() const
{
    return m_userTotal;
}

void UserOrg::SetUserTotal(const uint64_t& _userTotal)
{
    m_userTotal = _userTotal;
    m_userTotalHasBeenSet = true;
}

bool UserOrg::UserTotalHasBeenSet() const
{
    return m_userTotalHasBeenSet;
}

