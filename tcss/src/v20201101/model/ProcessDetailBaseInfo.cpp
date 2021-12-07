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

#include <tencentcloud/tcss/v20201101/model/ProcessDetailBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ProcessDetailBaseInfo::ProcessDetailBaseInfo() :
    m_processNameHasBeenSet(false),
    m_processIdHasBeenSet(false),
    m_processStartUserHasBeenSet(false),
    m_processUserGroupHasBeenSet(false),
    m_processPathHasBeenSet(false),
    m_processParamHasBeenSet(false)
{
}

CoreInternalOutcome ProcessDetailBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetailBaseInfo.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("ProcessId") && !value["ProcessId"].IsNull())
    {
        if (!value["ProcessId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetailBaseInfo.ProcessId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processId = value["ProcessId"].GetUint64();
        m_processIdHasBeenSet = true;
    }

    if (value.HasMember("ProcessStartUser") && !value["ProcessStartUser"].IsNull())
    {
        if (!value["ProcessStartUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetailBaseInfo.ProcessStartUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processStartUser = string(value["ProcessStartUser"].GetString());
        m_processStartUserHasBeenSet = true;
    }

    if (value.HasMember("ProcessUserGroup") && !value["ProcessUserGroup"].IsNull())
    {
        if (!value["ProcessUserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetailBaseInfo.ProcessUserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processUserGroup = string(value["ProcessUserGroup"].GetString());
        m_processUserGroupHasBeenSet = true;
    }

    if (value.HasMember("ProcessPath") && !value["ProcessPath"].IsNull())
    {
        if (!value["ProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetailBaseInfo.ProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processPath = string(value["ProcessPath"].GetString());
        m_processPathHasBeenSet = true;
    }

    if (value.HasMember("ProcessParam") && !value["ProcessParam"].IsNull())
    {
        if (!value["ProcessParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetailBaseInfo.ProcessParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processParam = string(value["ProcessParam"].GetString());
        m_processParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcessDetailBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_processIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processId, allocator);
    }

    if (m_processStartUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessStartUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processStartUser.c_str(), allocator).Move(), allocator);
    }

    if (m_processUserGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessUserGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processUserGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_processPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processPath.c_str(), allocator).Move(), allocator);
    }

    if (m_processParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processParam.c_str(), allocator).Move(), allocator);
    }

}


string ProcessDetailBaseInfo::GetProcessName() const
{
    return m_processName;
}

void ProcessDetailBaseInfo::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool ProcessDetailBaseInfo::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

uint64_t ProcessDetailBaseInfo::GetProcessId() const
{
    return m_processId;
}

void ProcessDetailBaseInfo::SetProcessId(const uint64_t& _processId)
{
    m_processId = _processId;
    m_processIdHasBeenSet = true;
}

bool ProcessDetailBaseInfo::ProcessIdHasBeenSet() const
{
    return m_processIdHasBeenSet;
}

string ProcessDetailBaseInfo::GetProcessStartUser() const
{
    return m_processStartUser;
}

void ProcessDetailBaseInfo::SetProcessStartUser(const string& _processStartUser)
{
    m_processStartUser = _processStartUser;
    m_processStartUserHasBeenSet = true;
}

bool ProcessDetailBaseInfo::ProcessStartUserHasBeenSet() const
{
    return m_processStartUserHasBeenSet;
}

string ProcessDetailBaseInfo::GetProcessUserGroup() const
{
    return m_processUserGroup;
}

void ProcessDetailBaseInfo::SetProcessUserGroup(const string& _processUserGroup)
{
    m_processUserGroup = _processUserGroup;
    m_processUserGroupHasBeenSet = true;
}

bool ProcessDetailBaseInfo::ProcessUserGroupHasBeenSet() const
{
    return m_processUserGroupHasBeenSet;
}

string ProcessDetailBaseInfo::GetProcessPath() const
{
    return m_processPath;
}

void ProcessDetailBaseInfo::SetProcessPath(const string& _processPath)
{
    m_processPath = _processPath;
    m_processPathHasBeenSet = true;
}

bool ProcessDetailBaseInfo::ProcessPathHasBeenSet() const
{
    return m_processPathHasBeenSet;
}

string ProcessDetailBaseInfo::GetProcessParam() const
{
    return m_processParam;
}

void ProcessDetailBaseInfo::SetProcessParam(const string& _processParam)
{
    m_processParam = _processParam;
    m_processParamHasBeenSet = true;
}

bool ProcessDetailBaseInfo::ProcessParamHasBeenSet() const
{
    return m_processParamHasBeenSet;
}

