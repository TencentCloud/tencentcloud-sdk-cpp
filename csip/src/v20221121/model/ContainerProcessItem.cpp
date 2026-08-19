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

#include <tencentcloud/csip/v20221121/model/ContainerProcessItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ContainerProcessItem::ContainerProcessItem() :
    m_processNameHasBeenSet(false),
    m_pIDHasBeenSet(false),
    m_containerPIDHasBeenSet(false),
    m_processPathHasBeenSet(false),
    m_runAsHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

CoreInternalOutcome ContainerProcessItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerProcessItem.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("PID") && !value["PID"].IsNull())
    {
        if (!value["PID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerProcessItem.PID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pID = value["PID"].GetInt64();
        m_pIDHasBeenSet = true;
    }

    if (value.HasMember("ContainerPID") && !value["ContainerPID"].IsNull())
    {
        if (!value["ContainerPID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerProcessItem.ContainerPID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerPID = value["ContainerPID"].GetInt64();
        m_containerPIDHasBeenSet = true;
    }

    if (value.HasMember("ProcessPath") && !value["ProcessPath"].IsNull())
    {
        if (!value["ProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerProcessItem.ProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processPath = string(value["ProcessPath"].GetString());
        m_processPathHasBeenSet = true;
    }

    if (value.HasMember("RunAs") && !value["RunAs"].IsNull())
    {
        if (!value["RunAs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerProcessItem.RunAs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runAs = string(value["RunAs"].GetString());
        m_runAsHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerProcessItem.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerProcessItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_pIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pID, allocator);
    }

    if (m_containerPIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerPID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerPID, allocator);
    }

    if (m_processPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processPath.c_str(), allocator).Move(), allocator);
    }

    if (m_runAsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunAs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runAs.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

}


string ContainerProcessItem::GetProcessName() const
{
    return m_processName;
}

void ContainerProcessItem::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool ContainerProcessItem::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

int64_t ContainerProcessItem::GetPID() const
{
    return m_pID;
}

void ContainerProcessItem::SetPID(const int64_t& _pID)
{
    m_pID = _pID;
    m_pIDHasBeenSet = true;
}

bool ContainerProcessItem::PIDHasBeenSet() const
{
    return m_pIDHasBeenSet;
}

int64_t ContainerProcessItem::GetContainerPID() const
{
    return m_containerPID;
}

void ContainerProcessItem::SetContainerPID(const int64_t& _containerPID)
{
    m_containerPID = _containerPID;
    m_containerPIDHasBeenSet = true;
}

bool ContainerProcessItem::ContainerPIDHasBeenSet() const
{
    return m_containerPIDHasBeenSet;
}

string ContainerProcessItem::GetProcessPath() const
{
    return m_processPath;
}

void ContainerProcessItem::SetProcessPath(const string& _processPath)
{
    m_processPath = _processPath;
    m_processPathHasBeenSet = true;
}

bool ContainerProcessItem::ProcessPathHasBeenSet() const
{
    return m_processPathHasBeenSet;
}

string ContainerProcessItem::GetRunAs() const
{
    return m_runAs;
}

void ContainerProcessItem::SetRunAs(const string& _runAs)
{
    m_runAs = _runAs;
    m_runAsHasBeenSet = true;
}

bool ContainerProcessItem::RunAsHasBeenSet() const
{
    return m_runAsHasBeenSet;
}

string ContainerProcessItem::GetStartTime() const
{
    return m_startTime;
}

void ContainerProcessItem::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ContainerProcessItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

