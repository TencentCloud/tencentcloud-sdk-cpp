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

#include <tencentcloud/ctem/v20231128/model/DisplayVul.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayVul::DisplayVul() :
    m_idHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_repairStatusHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_discoverTimeHasBeenSet(false),
    m_aiJudgeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastCheckTimeHasBeenSet(false)
{
}

CoreInternalOutcome DisplayVul::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayVul.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayVul.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayVul.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayVul.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayVul.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayVul.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayVul.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RepairStatus") && !value["RepairStatus"].IsNull())
    {
        if (!value["RepairStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayVul.RepairStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_repairStatus = value["RepairStatus"].GetInt64();
        m_repairStatusHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayVul.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("DiscoverTime") && !value["DiscoverTime"].IsNull())
    {
        if (!value["DiscoverTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayVul.DiscoverTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discoverTime = string(value["DiscoverTime"].GetString());
        m_discoverTimeHasBeenSet = true;
    }

    if (value.HasMember("AiJudge") && !value["AiJudge"].IsNull())
    {
        if (!value["AiJudge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayVul.AiJudge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aiJudge = string(value["AiJudge"].GetString());
        m_aiJudgeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayVul.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LastCheckTime") && !value["LastCheckTime"].IsNull())
    {
        if (!value["LastCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayVul.LastCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCheckTime = string(value["LastCheckTime"].GetString());
        m_lastCheckTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayVul::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_displayToolCommonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayToolCommon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displayToolCommon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_repairStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepairStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_repairStatus, allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_discoverTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscoverTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discoverTime.c_str(), allocator).Move(), allocator);
    }

    if (m_aiJudgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiJudge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aiJudge.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_lastCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCheckTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t DisplayVul::GetId() const
{
    return m_id;
}

void DisplayVul::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayVul::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

DisplayToolCommon DisplayVul::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayVul::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayVul::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplayVul::GetIp() const
{
    return m_ip;
}

void DisplayVul::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DisplayVul::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t DisplayVul::GetPort() const
{
    return m_port;
}

void DisplayVul::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DisplayVul::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string DisplayVul::GetUrl() const
{
    return m_url;
}

void DisplayVul::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DisplayVul::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

int64_t DisplayVul::GetLevel() const
{
    return m_level;
}

void DisplayVul::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DisplayVul::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string DisplayVul::GetName() const
{
    return m_name;
}

void DisplayVul::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DisplayVul::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DisplayVul::GetRepairStatus() const
{
    return m_repairStatus;
}

void DisplayVul::SetRepairStatus(const int64_t& _repairStatus)
{
    m_repairStatus = _repairStatus;
    m_repairStatusHasBeenSet = true;
}

bool DisplayVul::RepairStatusHasBeenSet() const
{
    return m_repairStatusHasBeenSet;
}

string DisplayVul::GetSuggestion() const
{
    return m_suggestion;
}

void DisplayVul::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool DisplayVul::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string DisplayVul::GetDiscoverTime() const
{
    return m_discoverTime;
}

void DisplayVul::SetDiscoverTime(const string& _discoverTime)
{
    m_discoverTime = _discoverTime;
    m_discoverTimeHasBeenSet = true;
}

bool DisplayVul::DiscoverTimeHasBeenSet() const
{
    return m_discoverTimeHasBeenSet;
}

string DisplayVul::GetAiJudge() const
{
    return m_aiJudge;
}

void DisplayVul::SetAiJudge(const string& _aiJudge)
{
    m_aiJudge = _aiJudge;
    m_aiJudgeHasBeenSet = true;
}

bool DisplayVul::AiJudgeHasBeenSet() const
{
    return m_aiJudgeHasBeenSet;
}

string DisplayVul::GetStatus() const
{
    return m_status;
}

void DisplayVul::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DisplayVul::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DisplayVul::GetLastCheckTime() const
{
    return m_lastCheckTime;
}

void DisplayVul::SetLastCheckTime(const string& _lastCheckTime)
{
    m_lastCheckTime = _lastCheckTime;
    m_lastCheckTimeHasBeenSet = true;
}

bool DisplayVul::LastCheckTimeHasBeenSet() const
{
    return m_lastCheckTimeHasBeenSet;
}

