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

#include <tencentcloud/ecdn/v20191012/model/DomainLogs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecdn::V20191012::Model;
using namespace std;

DomainLogs::DomainLogs() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_logPathHasBeenSet(false)
{
}

CoreInternalOutcome DomainLogs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainLogs.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainLogs.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("LogPath") && !value["LogPath"].IsNull())
    {
        if (!value["LogPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainLogs.LogPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logPath = string(value["LogPath"].GetString());
        m_logPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainLogs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_logPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logPath.c_str(), allocator).Move(), allocator);
    }

}


string DomainLogs::GetStartTime() const
{
    return m_startTime;
}

void DomainLogs::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DomainLogs::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DomainLogs::GetEndTime() const
{
    return m_endTime;
}

void DomainLogs::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DomainLogs::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DomainLogs::GetLogPath() const
{
    return m_logPath;
}

void DomainLogs::SetLogPath(const string& _logPath)
{
    m_logPath = _logPath;
    m_logPathHasBeenSet = true;
}

bool DomainLogs::LogPathHasBeenSet() const
{
    return m_logPathHasBeenSet;
}

