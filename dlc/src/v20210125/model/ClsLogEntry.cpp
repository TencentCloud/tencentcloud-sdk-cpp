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

#include <tencentcloud/dlc/v20210125/model/ClsLogEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ClsLogEntry::ClsLogEntry() :
    m_timeHasBeenSet(false),
    m_logJsonHasBeenSet(false)
{
}

CoreInternalOutcome ClsLogEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogEntry.Time` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetInt64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("LogJson") && !value["LogJson"].IsNull())
    {
        if (!value["LogJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogEntry.LogJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logJson = string(value["LogJson"].GetString());
        m_logJsonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClsLogEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_logJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logJson.c_str(), allocator).Move(), allocator);
    }

}


int64_t ClsLogEntry::GetTime() const
{
    return m_time;
}

void ClsLogEntry::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool ClsLogEntry::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string ClsLogEntry::GetLogJson() const
{
    return m_logJson;
}

void ClsLogEntry::SetLogJson(const string& _logJson)
{
    m_logJson = _logJson;
    m_logJsonHasBeenSet = true;
}

bool ClsLogEntry::LogJsonHasBeenSet() const
{
    return m_logJsonHasBeenSet;
}

