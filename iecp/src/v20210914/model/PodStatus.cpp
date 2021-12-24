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

#include <tencentcloud/iecp/v20210914/model/PodStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

PodStatus::PodStatus() :
    m_nameHasBeenSet(false),
    m_nameSpaceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_runSecHasBeenSet(false),
    m_restartCountHasBeenSet(false)
{
}

CoreInternalOutcome PodStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodStatus.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("NameSpace") && !value["NameSpace"].IsNull())
    {
        if (!value["NameSpace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodStatus.NameSpace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameSpace = string(value["NameSpace"].GetString());
        m_nameSpaceHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodStatus.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodStatus.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("RunSec") && !value["RunSec"].IsNull())
    {
        if (!value["RunSec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PodStatus.RunSec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runSec = value["RunSec"].GetInt64();
        m_runSecHasBeenSet = true;
    }

    if (value.HasMember("RestartCount") && !value["RestartCount"].IsNull())
    {
        if (!value["RestartCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PodStatus.RestartCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restartCount = value["RestartCount"].GetInt64();
        m_restartCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PodStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_nameSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameSpace.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runSec, allocator);
    }

    if (m_restartCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restartCount, allocator);
    }

}


string PodStatus::GetName() const
{
    return m_name;
}

void PodStatus::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PodStatus::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PodStatus::GetNameSpace() const
{
    return m_nameSpace;
}

void PodStatus::SetNameSpace(const string& _nameSpace)
{
    m_nameSpace = _nameSpace;
    m_nameSpaceHasBeenSet = true;
}

bool PodStatus::NameSpaceHasBeenSet() const
{
    return m_nameSpaceHasBeenSet;
}

string PodStatus::GetStatus() const
{
    return m_status;
}

void PodStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PodStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PodStatus::GetIP() const
{
    return m_iP;
}

void PodStatus::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool PodStatus::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string PodStatus::GetStartTime() const
{
    return m_startTime;
}

void PodStatus::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool PodStatus::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t PodStatus::GetRunSec() const
{
    return m_runSec;
}

void PodStatus::SetRunSec(const int64_t& _runSec)
{
    m_runSec = _runSec;
    m_runSecHasBeenSet = true;
}

bool PodStatus::RunSecHasBeenSet() const
{
    return m_runSecHasBeenSet;
}

int64_t PodStatus::GetRestartCount() const
{
    return m_restartCount;
}

void PodStatus::SetRestartCount(const int64_t& _restartCount)
{
    m_restartCount = _restartCount;
    m_restartCountHasBeenSet = true;
}

bool PodStatus::RestartCountHasBeenSet() const
{
    return m_restartCountHasBeenSet;
}

