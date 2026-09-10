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

#include <tencentcloud/cngw/v20230418/model/AIGWMCPToolVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWMCPToolVersion::AIGWMCPToolVersion() :
    m_createTimeHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_isActiveHasBeenSet(false),
    m_totalParamHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome AIGWMCPToolVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPToolVersion.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPToolVersion.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("IsActive") && !value["IsActive"].IsNull())
    {
        if (!value["IsActive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPToolVersion.IsActive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isActive = value["IsActive"].GetBool();
        m_isActiveHasBeenSet = true;
    }

    if (value.HasMember("TotalParam") && !value["TotalParam"].IsNull())
    {
        if (!value["TotalParam"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPToolVersion.TotalParam` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalParam = value["TotalParam"].GetUint64();
        m_totalParamHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPToolVersion.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWMCPToolVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_isActiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isActive, allocator);
    }

    if (m_totalParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalParam, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

}


string AIGWMCPToolVersion::GetCreateTime() const
{
    return m_createTime;
}

void AIGWMCPToolVersion::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AIGWMCPToolVersion::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AIGWMCPToolVersion::GetCreator() const
{
    return m_creator;
}

void AIGWMCPToolVersion::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool AIGWMCPToolVersion::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

bool AIGWMCPToolVersion::GetIsActive() const
{
    return m_isActive;
}

void AIGWMCPToolVersion::SetIsActive(const bool& _isActive)
{
    m_isActive = _isActive;
    m_isActiveHasBeenSet = true;
}

bool AIGWMCPToolVersion::IsActiveHasBeenSet() const
{
    return m_isActiveHasBeenSet;
}

uint64_t AIGWMCPToolVersion::GetTotalParam() const
{
    return m_totalParam;
}

void AIGWMCPToolVersion::SetTotalParam(const uint64_t& _totalParam)
{
    m_totalParam = _totalParam;
    m_totalParamHasBeenSet = true;
}

bool AIGWMCPToolVersion::TotalParamHasBeenSet() const
{
    return m_totalParamHasBeenSet;
}

string AIGWMCPToolVersion::GetVersion() const
{
    return m_version;
}

void AIGWMCPToolVersion::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool AIGWMCPToolVersion::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

