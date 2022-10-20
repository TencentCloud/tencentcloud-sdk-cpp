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

#include <tencentcloud/tcss/v20201101/model/EmergencyVulInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

EmergencyVulInfo::EmergencyVulInfo() :
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_cVSSV3ScoreHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_cVEIDHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_latestFoundTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_pocIDHasBeenSet(false),
    m_defenceStatusHasBeenSet(false),
    m_defenceScopeHasBeenSet(false),
    m_defenceHostCountHasBeenSet(false),
    m_defendedCountHasBeenSet(false)
{
}

CoreInternalOutcome EmergencyVulInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVulInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EmergencyVulInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("CVSSV3Score") && !value["CVSSV3Score"].IsNull())
    {
        if (!value["CVSSV3Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVulInfo.CVSSV3Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cVSSV3Score = value["CVSSV3Score"].GetDouble();
        m_cVSSV3ScoreHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVulInfo.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("CVEID") && !value["CVEID"].IsNull())
    {
        if (!value["CVEID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVulInfo.CVEID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEID = string(value["CVEID"].GetString());
        m_cVEIDHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVulInfo.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("SubmitTime") && !value["SubmitTime"].IsNull())
    {
        if (!value["SubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVulInfo.SubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitTime = string(value["SubmitTime"].GetString());
        m_submitTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestFoundTime") && !value["LatestFoundTime"].IsNull())
    {
        if (!value["LatestFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVulInfo.LatestFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFoundTime = string(value["LatestFoundTime"].GetString());
        m_latestFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVulInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVulInfo.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("PocID") && !value["PocID"].IsNull())
    {
        if (!value["PocID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVulInfo.PocID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pocID = string(value["PocID"].GetString());
        m_pocIDHasBeenSet = true;
    }

    if (value.HasMember("DefenceStatus") && !value["DefenceStatus"].IsNull())
    {
        if (!value["DefenceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVulInfo.DefenceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defenceStatus = string(value["DefenceStatus"].GetString());
        m_defenceStatusHasBeenSet = true;
    }

    if (value.HasMember("DefenceScope") && !value["DefenceScope"].IsNull())
    {
        if (!value["DefenceScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVulInfo.DefenceScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defenceScope = string(value["DefenceScope"].GetString());
        m_defenceScopeHasBeenSet = true;
    }

    if (value.HasMember("DefenceHostCount") && !value["DefenceHostCount"].IsNull())
    {
        if (!value["DefenceHostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVulInfo.DefenceHostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defenceHostCount = value["DefenceHostCount"].GetInt64();
        m_defenceHostCountHasBeenSet = true;
    }

    if (value.HasMember("DefendedCount") && !value["DefendedCount"].IsNull())
    {
        if (!value["DefendedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVulInfo.DefendedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defendedCount = value["DefendedCount"].GetInt64();
        m_defendedCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmergencyVulInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cVSSV3ScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVSSV3Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cVSSV3Score, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_cVEIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVEID.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_submitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestFoundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestFoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestFoundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_defenceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defenceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_defenceScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenceScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defenceScope.c_str(), allocator).Move(), allocator);
    }

    if (m_defenceHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenceHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defenceHostCount, allocator);
    }

    if (m_defendedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defendedCount, allocator);
    }

}


string EmergencyVulInfo::GetName() const
{
    return m_name;
}

void EmergencyVulInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EmergencyVulInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> EmergencyVulInfo::GetTags() const
{
    return m_tags;
}

void EmergencyVulInfo::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool EmergencyVulInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

double EmergencyVulInfo::GetCVSSV3Score() const
{
    return m_cVSSV3Score;
}

void EmergencyVulInfo::SetCVSSV3Score(const double& _cVSSV3Score)
{
    m_cVSSV3Score = _cVSSV3Score;
    m_cVSSV3ScoreHasBeenSet = true;
}

bool EmergencyVulInfo::CVSSV3ScoreHasBeenSet() const
{
    return m_cVSSV3ScoreHasBeenSet;
}

string EmergencyVulInfo::GetLevel() const
{
    return m_level;
}

void EmergencyVulInfo::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool EmergencyVulInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string EmergencyVulInfo::GetCVEID() const
{
    return m_cVEID;
}

void EmergencyVulInfo::SetCVEID(const string& _cVEID)
{
    m_cVEID = _cVEID;
    m_cVEIDHasBeenSet = true;
}

bool EmergencyVulInfo::CVEIDHasBeenSet() const
{
    return m_cVEIDHasBeenSet;
}

string EmergencyVulInfo::GetCategory() const
{
    return m_category;
}

void EmergencyVulInfo::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool EmergencyVulInfo::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string EmergencyVulInfo::GetSubmitTime() const
{
    return m_submitTime;
}

void EmergencyVulInfo::SetSubmitTime(const string& _submitTime)
{
    m_submitTime = _submitTime;
    m_submitTimeHasBeenSet = true;
}

bool EmergencyVulInfo::SubmitTimeHasBeenSet() const
{
    return m_submitTimeHasBeenSet;
}

string EmergencyVulInfo::GetLatestFoundTime() const
{
    return m_latestFoundTime;
}

void EmergencyVulInfo::SetLatestFoundTime(const string& _latestFoundTime)
{
    m_latestFoundTime = _latestFoundTime;
    m_latestFoundTimeHasBeenSet = true;
}

bool EmergencyVulInfo::LatestFoundTimeHasBeenSet() const
{
    return m_latestFoundTimeHasBeenSet;
}

string EmergencyVulInfo::GetStatus() const
{
    return m_status;
}

void EmergencyVulInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EmergencyVulInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t EmergencyVulInfo::GetID() const
{
    return m_iD;
}

void EmergencyVulInfo::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool EmergencyVulInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string EmergencyVulInfo::GetPocID() const
{
    return m_pocID;
}

void EmergencyVulInfo::SetPocID(const string& _pocID)
{
    m_pocID = _pocID;
    m_pocIDHasBeenSet = true;
}

bool EmergencyVulInfo::PocIDHasBeenSet() const
{
    return m_pocIDHasBeenSet;
}

string EmergencyVulInfo::GetDefenceStatus() const
{
    return m_defenceStatus;
}

void EmergencyVulInfo::SetDefenceStatus(const string& _defenceStatus)
{
    m_defenceStatus = _defenceStatus;
    m_defenceStatusHasBeenSet = true;
}

bool EmergencyVulInfo::DefenceStatusHasBeenSet() const
{
    return m_defenceStatusHasBeenSet;
}

string EmergencyVulInfo::GetDefenceScope() const
{
    return m_defenceScope;
}

void EmergencyVulInfo::SetDefenceScope(const string& _defenceScope)
{
    m_defenceScope = _defenceScope;
    m_defenceScopeHasBeenSet = true;
}

bool EmergencyVulInfo::DefenceScopeHasBeenSet() const
{
    return m_defenceScopeHasBeenSet;
}

int64_t EmergencyVulInfo::GetDefenceHostCount() const
{
    return m_defenceHostCount;
}

void EmergencyVulInfo::SetDefenceHostCount(const int64_t& _defenceHostCount)
{
    m_defenceHostCount = _defenceHostCount;
    m_defenceHostCountHasBeenSet = true;
}

bool EmergencyVulInfo::DefenceHostCountHasBeenSet() const
{
    return m_defenceHostCountHasBeenSet;
}

int64_t EmergencyVulInfo::GetDefendedCount() const
{
    return m_defendedCount;
}

void EmergencyVulInfo::SetDefendedCount(const int64_t& _defendedCount)
{
    m_defendedCount = _defendedCount;
    m_defendedCountHasBeenSet = true;
}

bool EmergencyVulInfo::DefendedCountHasBeenSet() const
{
    return m_defendedCountHasBeenSet;
}

