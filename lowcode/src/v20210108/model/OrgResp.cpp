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

#include <tencentcloud/lowcode/v20210108/model/OrgResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

OrgResp::OrgResp() :
    m_orgIdHasBeenSet(false),
    m_orgNameHasBeenSet(false),
    m_orgIdentityHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_primaryColumnHasBeenSet(false)
{
}

CoreInternalOutcome OrgResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrgId") && !value["OrgId"].IsNull())
    {
        if (!value["OrgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgResp.OrgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgId = string(value["OrgId"].GetString());
        m_orgIdHasBeenSet = true;
    }

    if (value.HasMember("OrgName") && !value["OrgName"].IsNull())
    {
        if (!value["OrgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgResp.OrgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgName = string(value["OrgName"].GetString());
        m_orgNameHasBeenSet = true;
    }

    if (value.HasMember("OrgIdentity") && !value["OrgIdentity"].IsNull())
    {
        if (!value["OrgIdentity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgResp.OrgIdentity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgIdentity = string(value["OrgIdentity"].GetString());
        m_orgIdentityHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgResp.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("PrimaryColumn") && !value["PrimaryColumn"].IsNull())
    {
        if (!value["PrimaryColumn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgResp.PrimaryColumn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryColumn = string(value["PrimaryColumn"].GetString());
        m_primaryColumnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrgResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgId.c_str(), allocator).Move(), allocator);
    }

    if (m_orgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgName.c_str(), allocator).Move(), allocator);
    }

    if (m_orgIdentityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgIdentity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgIdentity.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryColumnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryColumn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryColumn.c_str(), allocator).Move(), allocator);
    }

}


string OrgResp::GetOrgId() const
{
    return m_orgId;
}

void OrgResp::SetOrgId(const string& _orgId)
{
    m_orgId = _orgId;
    m_orgIdHasBeenSet = true;
}

bool OrgResp::OrgIdHasBeenSet() const
{
    return m_orgIdHasBeenSet;
}

string OrgResp::GetOrgName() const
{
    return m_orgName;
}

void OrgResp::SetOrgName(const string& _orgName)
{
    m_orgName = _orgName;
    m_orgNameHasBeenSet = true;
}

bool OrgResp::OrgNameHasBeenSet() const
{
    return m_orgNameHasBeenSet;
}

string OrgResp::GetOrgIdentity() const
{
    return m_orgIdentity;
}

void OrgResp::SetOrgIdentity(const string& _orgIdentity)
{
    m_orgIdentity = _orgIdentity;
    m_orgIdentityHasBeenSet = true;
}

bool OrgResp::OrgIdentityHasBeenSet() const
{
    return m_orgIdentityHasBeenSet;
}

string OrgResp::GetLevel() const
{
    return m_level;
}

void OrgResp::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool OrgResp::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string OrgResp::GetPrimaryColumn() const
{
    return m_primaryColumn;
}

void OrgResp::SetPrimaryColumn(const string& _primaryColumn)
{
    m_primaryColumn = _primaryColumn;
    m_primaryColumnHasBeenSet = true;
}

bool OrgResp::PrimaryColumnHasBeenSet() const
{
    return m_primaryColumnHasBeenSet;
}

