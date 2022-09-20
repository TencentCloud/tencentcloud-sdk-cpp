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

#include <tencentcloud/teo/v20220901/model/WafGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

WafGroupInfo::WafGroupInfo() :
    m_wafGroupDetailsHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_actHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_switchHasBeenSet(false)
{
}

CoreInternalOutcome WafGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WafGroupDetails") && !value["WafGroupDetails"].IsNull())
    {
        if (!value["WafGroupDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WafGroupInfo.WafGroupDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["WafGroupDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WafGroupDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_wafGroupDetails.push_back(item);
        }
        m_wafGroupDetailsHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupInfo.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Act") && !value["Act"].IsNull())
    {
        if (!value["Act"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupInfo.Act` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_act = string(value["Act"].GetString());
        m_actHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupInfo.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupInfo.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WafGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wafGroupDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WafGroupDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_wafGroupDetails.begin(); itr != m_wafGroupDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_actHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Act";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_act.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

}


vector<WafGroupDetail> WafGroupInfo::GetWafGroupDetails() const
{
    return m_wafGroupDetails;
}

void WafGroupInfo::SetWafGroupDetails(const vector<WafGroupDetail>& _wafGroupDetails)
{
    m_wafGroupDetails = _wafGroupDetails;
    m_wafGroupDetailsHasBeenSet = true;
}

bool WafGroupInfo::WafGroupDetailsHasBeenSet() const
{
    return m_wafGroupDetailsHasBeenSet;
}

string WafGroupInfo::GetLevel() const
{
    return m_level;
}

void WafGroupInfo::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool WafGroupInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string WafGroupInfo::GetAct() const
{
    return m_act;
}

void WafGroupInfo::SetAct(const string& _act)
{
    m_act = _act;
    m_actHasBeenSet = true;
}

bool WafGroupInfo::ActHasBeenSet() const
{
    return m_actHasBeenSet;
}

string WafGroupInfo::GetMode() const
{
    return m_mode;
}

void WafGroupInfo::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool WafGroupInfo::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string WafGroupInfo::GetSwitch() const
{
    return m_switch;
}

void WafGroupInfo::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool WafGroupInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

