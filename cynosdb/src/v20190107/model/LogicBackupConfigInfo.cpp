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

#include <tencentcloud/cynosdb/v20190107/model/LogicBackupConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

LogicBackupConfigInfo::LogicBackupConfigInfo() :
    m_logicBackupEnableHasBeenSet(false),
    m_logicBackupTimeBegHasBeenSet(false),
    m_logicBackupTimeEndHasBeenSet(false),
    m_logicReserveDurationHasBeenSet(false),
    m_logicCrossRegionsEnableHasBeenSet(false),
    m_logicCrossRegionsHasBeenSet(false)
{
}

CoreInternalOutcome LogicBackupConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogicBackupEnable") && !value["LogicBackupEnable"].IsNull())
    {
        if (!value["LogicBackupEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogicBackupConfigInfo.LogicBackupEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicBackupEnable = string(value["LogicBackupEnable"].GetString());
        m_logicBackupEnableHasBeenSet = true;
    }

    if (value.HasMember("LogicBackupTimeBeg") && !value["LogicBackupTimeBeg"].IsNull())
    {
        if (!value["LogicBackupTimeBeg"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogicBackupConfigInfo.LogicBackupTimeBeg` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logicBackupTimeBeg = value["LogicBackupTimeBeg"].GetUint64();
        m_logicBackupTimeBegHasBeenSet = true;
    }

    if (value.HasMember("LogicBackupTimeEnd") && !value["LogicBackupTimeEnd"].IsNull())
    {
        if (!value["LogicBackupTimeEnd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogicBackupConfigInfo.LogicBackupTimeEnd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logicBackupTimeEnd = value["LogicBackupTimeEnd"].GetUint64();
        m_logicBackupTimeEndHasBeenSet = true;
    }

    if (value.HasMember("LogicReserveDuration") && !value["LogicReserveDuration"].IsNull())
    {
        if (!value["LogicReserveDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogicBackupConfigInfo.LogicReserveDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logicReserveDuration = value["LogicReserveDuration"].GetUint64();
        m_logicReserveDurationHasBeenSet = true;
    }

    if (value.HasMember("LogicCrossRegionsEnable") && !value["LogicCrossRegionsEnable"].IsNull())
    {
        if (!value["LogicCrossRegionsEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogicBackupConfigInfo.LogicCrossRegionsEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicCrossRegionsEnable = string(value["LogicCrossRegionsEnable"].GetString());
        m_logicCrossRegionsEnableHasBeenSet = true;
    }

    if (value.HasMember("LogicCrossRegions") && !value["LogicCrossRegions"].IsNull())
    {
        if (!value["LogicCrossRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogicBackupConfigInfo.LogicCrossRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["LogicCrossRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_logicCrossRegions.push_back((*itr).GetString());
        }
        m_logicCrossRegionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogicBackupConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logicBackupEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicBackupEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logicBackupEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_logicBackupTimeBegHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicBackupTimeBeg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logicBackupTimeBeg, allocator);
    }

    if (m_logicBackupTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicBackupTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logicBackupTimeEnd, allocator);
    }

    if (m_logicReserveDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicReserveDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logicReserveDuration, allocator);
    }

    if (m_logicCrossRegionsEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicCrossRegionsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logicCrossRegionsEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_logicCrossRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicCrossRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logicCrossRegions.begin(); itr != m_logicCrossRegions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string LogicBackupConfigInfo::GetLogicBackupEnable() const
{
    return m_logicBackupEnable;
}

void LogicBackupConfigInfo::SetLogicBackupEnable(const string& _logicBackupEnable)
{
    m_logicBackupEnable = _logicBackupEnable;
    m_logicBackupEnableHasBeenSet = true;
}

bool LogicBackupConfigInfo::LogicBackupEnableHasBeenSet() const
{
    return m_logicBackupEnableHasBeenSet;
}

uint64_t LogicBackupConfigInfo::GetLogicBackupTimeBeg() const
{
    return m_logicBackupTimeBeg;
}

void LogicBackupConfigInfo::SetLogicBackupTimeBeg(const uint64_t& _logicBackupTimeBeg)
{
    m_logicBackupTimeBeg = _logicBackupTimeBeg;
    m_logicBackupTimeBegHasBeenSet = true;
}

bool LogicBackupConfigInfo::LogicBackupTimeBegHasBeenSet() const
{
    return m_logicBackupTimeBegHasBeenSet;
}

uint64_t LogicBackupConfigInfo::GetLogicBackupTimeEnd() const
{
    return m_logicBackupTimeEnd;
}

void LogicBackupConfigInfo::SetLogicBackupTimeEnd(const uint64_t& _logicBackupTimeEnd)
{
    m_logicBackupTimeEnd = _logicBackupTimeEnd;
    m_logicBackupTimeEndHasBeenSet = true;
}

bool LogicBackupConfigInfo::LogicBackupTimeEndHasBeenSet() const
{
    return m_logicBackupTimeEndHasBeenSet;
}

uint64_t LogicBackupConfigInfo::GetLogicReserveDuration() const
{
    return m_logicReserveDuration;
}

void LogicBackupConfigInfo::SetLogicReserveDuration(const uint64_t& _logicReserveDuration)
{
    m_logicReserveDuration = _logicReserveDuration;
    m_logicReserveDurationHasBeenSet = true;
}

bool LogicBackupConfigInfo::LogicReserveDurationHasBeenSet() const
{
    return m_logicReserveDurationHasBeenSet;
}

string LogicBackupConfigInfo::GetLogicCrossRegionsEnable() const
{
    return m_logicCrossRegionsEnable;
}

void LogicBackupConfigInfo::SetLogicCrossRegionsEnable(const string& _logicCrossRegionsEnable)
{
    m_logicCrossRegionsEnable = _logicCrossRegionsEnable;
    m_logicCrossRegionsEnableHasBeenSet = true;
}

bool LogicBackupConfigInfo::LogicCrossRegionsEnableHasBeenSet() const
{
    return m_logicCrossRegionsEnableHasBeenSet;
}

vector<string> LogicBackupConfigInfo::GetLogicCrossRegions() const
{
    return m_logicCrossRegions;
}

void LogicBackupConfigInfo::SetLogicCrossRegions(const vector<string>& _logicCrossRegions)
{
    m_logicCrossRegions = _logicCrossRegions;
    m_logicCrossRegionsHasBeenSet = true;
}

bool LogicBackupConfigInfo::LogicCrossRegionsHasBeenSet() const
{
    return m_logicCrossRegionsHasBeenSet;
}

