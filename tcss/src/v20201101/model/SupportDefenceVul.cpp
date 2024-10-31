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

#include <tencentcloud/tcss/v20201101/model/SupportDefenceVul.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

SupportDefenceVul::SupportDefenceVul() :
    m_pocIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_cVSSV3ScoreHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_cVEIDHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_vulIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome SupportDefenceVul::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PocID") && !value["PocID"].IsNull())
    {
        if (!value["PocID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportDefenceVul.PocID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pocID = string(value["PocID"].GetString());
        m_pocIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportDefenceVul.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SupportDefenceVul.Tags` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `SupportDefenceVul.CVSSV3Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cVSSV3Score = value["CVSSV3Score"].GetDouble();
        m_cVSSV3ScoreHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportDefenceVul.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("CVEID") && !value["CVEID"].IsNull())
    {
        if (!value["CVEID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportDefenceVul.CVEID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEID = string(value["CVEID"].GetString());
        m_cVEIDHasBeenSet = true;
    }

    if (value.HasMember("SubmitTime") && !value["SubmitTime"].IsNull())
    {
        if (!value["SubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportDefenceVul.SubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitTime = string(value["SubmitTime"].GetString());
        m_submitTimeHasBeenSet = true;
    }

    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SupportDefenceVul.VulId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetInt64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SupportDefenceVul.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SupportDefenceVul::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pocIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PocID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pocID.c_str(), allocator).Move(), allocator);
    }

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

    if (m_submitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string SupportDefenceVul::GetPocID() const
{
    return m_pocID;
}

void SupportDefenceVul::SetPocID(const string& _pocID)
{
    m_pocID = _pocID;
    m_pocIDHasBeenSet = true;
}

bool SupportDefenceVul::PocIDHasBeenSet() const
{
    return m_pocIDHasBeenSet;
}

string SupportDefenceVul::GetName() const
{
    return m_name;
}

void SupportDefenceVul::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SupportDefenceVul::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> SupportDefenceVul::GetTags() const
{
    return m_tags;
}

void SupportDefenceVul::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SupportDefenceVul::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

double SupportDefenceVul::GetCVSSV3Score() const
{
    return m_cVSSV3Score;
}

void SupportDefenceVul::SetCVSSV3Score(const double& _cVSSV3Score)
{
    m_cVSSV3Score = _cVSSV3Score;
    m_cVSSV3ScoreHasBeenSet = true;
}

bool SupportDefenceVul::CVSSV3ScoreHasBeenSet() const
{
    return m_cVSSV3ScoreHasBeenSet;
}

string SupportDefenceVul::GetLevel() const
{
    return m_level;
}

void SupportDefenceVul::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool SupportDefenceVul::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string SupportDefenceVul::GetCVEID() const
{
    return m_cVEID;
}

void SupportDefenceVul::SetCVEID(const string& _cVEID)
{
    m_cVEID = _cVEID;
    m_cVEIDHasBeenSet = true;
}

bool SupportDefenceVul::CVEIDHasBeenSet() const
{
    return m_cVEIDHasBeenSet;
}

string SupportDefenceVul::GetSubmitTime() const
{
    return m_submitTime;
}

void SupportDefenceVul::SetSubmitTime(const string& _submitTime)
{
    m_submitTime = _submitTime;
    m_submitTimeHasBeenSet = true;
}

bool SupportDefenceVul::SubmitTimeHasBeenSet() const
{
    return m_submitTimeHasBeenSet;
}

int64_t SupportDefenceVul::GetVulId() const
{
    return m_vulId;
}

void SupportDefenceVul::SetVulId(const int64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool SupportDefenceVul::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

int64_t SupportDefenceVul::GetStatus() const
{
    return m_status;
}

void SupportDefenceVul::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SupportDefenceVul::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

