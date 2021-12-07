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

#include <tencentcloud/tcss/v20201101/model/ProcessDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ProcessDetailInfo::ProcessDetailInfo() :
    m_processNameHasBeenSet(false),
    m_processAuthorityHasBeenSet(false),
    m_processIdHasBeenSet(false),
    m_processStartUserHasBeenSet(false),
    m_processUserGroupHasBeenSet(false),
    m_processPathHasBeenSet(false),
    m_processTreeHasBeenSet(false),
    m_processMd5HasBeenSet(false),
    m_processParamHasBeenSet(false)
{
}

CoreInternalOutcome ProcessDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetailInfo.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("ProcessAuthority") && !value["ProcessAuthority"].IsNull())
    {
        if (!value["ProcessAuthority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetailInfo.ProcessAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processAuthority = string(value["ProcessAuthority"].GetString());
        m_processAuthorityHasBeenSet = true;
    }

    if (value.HasMember("ProcessId") && !value["ProcessId"].IsNull())
    {
        if (!value["ProcessId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetailInfo.ProcessId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processId = value["ProcessId"].GetUint64();
        m_processIdHasBeenSet = true;
    }

    if (value.HasMember("ProcessStartUser") && !value["ProcessStartUser"].IsNull())
    {
        if (!value["ProcessStartUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetailInfo.ProcessStartUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processStartUser = string(value["ProcessStartUser"].GetString());
        m_processStartUserHasBeenSet = true;
    }

    if (value.HasMember("ProcessUserGroup") && !value["ProcessUserGroup"].IsNull())
    {
        if (!value["ProcessUserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetailInfo.ProcessUserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processUserGroup = string(value["ProcessUserGroup"].GetString());
        m_processUserGroupHasBeenSet = true;
    }

    if (value.HasMember("ProcessPath") && !value["ProcessPath"].IsNull())
    {
        if (!value["ProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetailInfo.ProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processPath = string(value["ProcessPath"].GetString());
        m_processPathHasBeenSet = true;
    }

    if (value.HasMember("ProcessTree") && !value["ProcessTree"].IsNull())
    {
        if (!value["ProcessTree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetailInfo.ProcessTree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processTree = string(value["ProcessTree"].GetString());
        m_processTreeHasBeenSet = true;
    }

    if (value.HasMember("ProcessMd5") && !value["ProcessMd5"].IsNull())
    {
        if (!value["ProcessMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetailInfo.ProcessMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processMd5 = string(value["ProcessMd5"].GetString());
        m_processMd5HasBeenSet = true;
    }

    if (value.HasMember("ProcessParam") && !value["ProcessParam"].IsNull())
    {
        if (!value["ProcessParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetailInfo.ProcessParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processParam = string(value["ProcessParam"].GetString());
        m_processParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcessDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_processAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processAuthority.c_str(), allocator).Move(), allocator);
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

    if (m_processTreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessTree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processTree.c_str(), allocator).Move(), allocator);
    }

    if (m_processMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_processParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processParam.c_str(), allocator).Move(), allocator);
    }

}


string ProcessDetailInfo::GetProcessName() const
{
    return m_processName;
}

void ProcessDetailInfo::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool ProcessDetailInfo::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string ProcessDetailInfo::GetProcessAuthority() const
{
    return m_processAuthority;
}

void ProcessDetailInfo::SetProcessAuthority(const string& _processAuthority)
{
    m_processAuthority = _processAuthority;
    m_processAuthorityHasBeenSet = true;
}

bool ProcessDetailInfo::ProcessAuthorityHasBeenSet() const
{
    return m_processAuthorityHasBeenSet;
}

uint64_t ProcessDetailInfo::GetProcessId() const
{
    return m_processId;
}

void ProcessDetailInfo::SetProcessId(const uint64_t& _processId)
{
    m_processId = _processId;
    m_processIdHasBeenSet = true;
}

bool ProcessDetailInfo::ProcessIdHasBeenSet() const
{
    return m_processIdHasBeenSet;
}

string ProcessDetailInfo::GetProcessStartUser() const
{
    return m_processStartUser;
}

void ProcessDetailInfo::SetProcessStartUser(const string& _processStartUser)
{
    m_processStartUser = _processStartUser;
    m_processStartUserHasBeenSet = true;
}

bool ProcessDetailInfo::ProcessStartUserHasBeenSet() const
{
    return m_processStartUserHasBeenSet;
}

string ProcessDetailInfo::GetProcessUserGroup() const
{
    return m_processUserGroup;
}

void ProcessDetailInfo::SetProcessUserGroup(const string& _processUserGroup)
{
    m_processUserGroup = _processUserGroup;
    m_processUserGroupHasBeenSet = true;
}

bool ProcessDetailInfo::ProcessUserGroupHasBeenSet() const
{
    return m_processUserGroupHasBeenSet;
}

string ProcessDetailInfo::GetProcessPath() const
{
    return m_processPath;
}

void ProcessDetailInfo::SetProcessPath(const string& _processPath)
{
    m_processPath = _processPath;
    m_processPathHasBeenSet = true;
}

bool ProcessDetailInfo::ProcessPathHasBeenSet() const
{
    return m_processPathHasBeenSet;
}

string ProcessDetailInfo::GetProcessTree() const
{
    return m_processTree;
}

void ProcessDetailInfo::SetProcessTree(const string& _processTree)
{
    m_processTree = _processTree;
    m_processTreeHasBeenSet = true;
}

bool ProcessDetailInfo::ProcessTreeHasBeenSet() const
{
    return m_processTreeHasBeenSet;
}

string ProcessDetailInfo::GetProcessMd5() const
{
    return m_processMd5;
}

void ProcessDetailInfo::SetProcessMd5(const string& _processMd5)
{
    m_processMd5 = _processMd5;
    m_processMd5HasBeenSet = true;
}

bool ProcessDetailInfo::ProcessMd5HasBeenSet() const
{
    return m_processMd5HasBeenSet;
}

string ProcessDetailInfo::GetProcessParam() const
{
    return m_processParam;
}

void ProcessDetailInfo::SetProcessParam(const string& _processParam)
{
    m_processParam = _processParam;
    m_processParamHasBeenSet = true;
}

bool ProcessDetailInfo::ProcessParamHasBeenSet() const
{
    return m_processParamHasBeenSet;
}

