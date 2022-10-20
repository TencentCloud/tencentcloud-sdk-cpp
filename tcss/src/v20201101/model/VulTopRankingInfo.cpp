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

#include <tencentcloud/tcss/v20201101/model/VulTopRankingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

VulTopRankingInfo::VulTopRankingInfo() :
    m_vulNameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_affectedImageCountHasBeenSet(false),
    m_affectedContainerCountHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_pocIDHasBeenSet(false)
{
}

CoreInternalOutcome VulTopRankingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulTopRankingInfo.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulTopRankingInfo.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("AffectedImageCount") && !value["AffectedImageCount"].IsNull())
    {
        if (!value["AffectedImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulTopRankingInfo.AffectedImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectedImageCount = value["AffectedImageCount"].GetInt64();
        m_affectedImageCountHasBeenSet = true;
    }

    if (value.HasMember("AffectedContainerCount") && !value["AffectedContainerCount"].IsNull())
    {
        if (!value["AffectedContainerCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulTopRankingInfo.AffectedContainerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectedContainerCount = value["AffectedContainerCount"].GetInt64();
        m_affectedContainerCountHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulTopRankingInfo.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("PocID") && !value["PocID"].IsNull())
    {
        if (!value["PocID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulTopRankingInfo.PocID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pocID = string(value["PocID"].GetString());
        m_pocIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulTopRankingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_affectedImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectedImageCount, allocator);
    }

    if (m_affectedContainerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedContainerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectedContainerCount, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_pocIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PocID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pocID.c_str(), allocator).Move(), allocator);
    }

}


string VulTopRankingInfo::GetVulName() const
{
    return m_vulName;
}

void VulTopRankingInfo::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulTopRankingInfo::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string VulTopRankingInfo::GetLevel() const
{
    return m_level;
}

void VulTopRankingInfo::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool VulTopRankingInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t VulTopRankingInfo::GetAffectedImageCount() const
{
    return m_affectedImageCount;
}

void VulTopRankingInfo::SetAffectedImageCount(const int64_t& _affectedImageCount)
{
    m_affectedImageCount = _affectedImageCount;
    m_affectedImageCountHasBeenSet = true;
}

bool VulTopRankingInfo::AffectedImageCountHasBeenSet() const
{
    return m_affectedImageCountHasBeenSet;
}

int64_t VulTopRankingInfo::GetAffectedContainerCount() const
{
    return m_affectedContainerCount;
}

void VulTopRankingInfo::SetAffectedContainerCount(const int64_t& _affectedContainerCount)
{
    m_affectedContainerCount = _affectedContainerCount;
    m_affectedContainerCountHasBeenSet = true;
}

bool VulTopRankingInfo::AffectedContainerCountHasBeenSet() const
{
    return m_affectedContainerCountHasBeenSet;
}

int64_t VulTopRankingInfo::GetID() const
{
    return m_iD;
}

void VulTopRankingInfo::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool VulTopRankingInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string VulTopRankingInfo::GetPocID() const
{
    return m_pocID;
}

void VulTopRankingInfo::SetPocID(const string& _pocID)
{
    m_pocID = _pocID;
    m_pocIDHasBeenSet = true;
}

bool VulTopRankingInfo::PocIDHasBeenSet() const
{
    return m_pocIDHasBeenSet;
}

