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

#include <tencentcloud/wedata/v20210820/model/MakePlanAlarmRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

MakePlanAlarmRule::MakePlanAlarmRule() :
    m_alarmLevelHasBeenSet(false),
    m_alarmTypesHasBeenSet(false),
    m_extInfoHasBeenSet(false),
    m_alarmGroupHasBeenSet(false)
{
}

CoreInternalOutcome MakePlanAlarmRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanAlarmRule.AlarmLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = value["AlarmLevel"].GetInt64();
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("AlarmTypes") && !value["AlarmTypes"].IsNull())
    {
        if (!value["AlarmTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MakePlanAlarmRule.AlarmTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmTypes.push_back((*itr).GetString());
        }
        m_alarmTypesHasBeenSet = true;
    }

    if (value.HasMember("ExtInfo") && !value["ExtInfo"].IsNull())
    {
        if (!value["ExtInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanAlarmRule.ExtInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extInfo = string(value["ExtInfo"].GetString());
        m_extInfoHasBeenSet = true;
    }

    if (value.HasMember("AlarmGroup") && !value["AlarmGroup"].IsNull())
    {
        if (!value["AlarmGroup"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MakePlanAlarmRule.AlarmGroup` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmGroup"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alarmGroup.push_back(item);
        }
        m_alarmGroupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MakePlanAlarmRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_alarmTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmTypes.begin(); itr != m_alarmTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmGroup.begin(); itr != m_alarmGroup.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t MakePlanAlarmRule::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void MakePlanAlarmRule::SetAlarmLevel(const int64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool MakePlanAlarmRule::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

vector<string> MakePlanAlarmRule::GetAlarmTypes() const
{
    return m_alarmTypes;
}

void MakePlanAlarmRule::SetAlarmTypes(const vector<string>& _alarmTypes)
{
    m_alarmTypes = _alarmTypes;
    m_alarmTypesHasBeenSet = true;
}

bool MakePlanAlarmRule::AlarmTypesHasBeenSet() const
{
    return m_alarmTypesHasBeenSet;
}

string MakePlanAlarmRule::GetExtInfo() const
{
    return m_extInfo;
}

void MakePlanAlarmRule::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool MakePlanAlarmRule::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

vector<AlarmGroup> MakePlanAlarmRule::GetAlarmGroup() const
{
    return m_alarmGroup;
}

void MakePlanAlarmRule::SetAlarmGroup(const vector<AlarmGroup>& _alarmGroup)
{
    m_alarmGroup = _alarmGroup;
    m_alarmGroupHasBeenSet = true;
}

bool MakePlanAlarmRule::AlarmGroupHasBeenSet() const
{
    return m_alarmGroupHasBeenSet;
}

