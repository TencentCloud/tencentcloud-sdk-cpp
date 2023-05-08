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

#include <tencentcloud/cwp/v20180228/model/ProtectEventLists.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ProtectEventLists::ProtectEventLists() :
    m_hostNameHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_eventDirHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_restoreTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_quuidHasBeenSet(false)
{
}

CoreInternalOutcome ProtectEventLists::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectEventLists.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectEventLists.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("EventDir") && !value["EventDir"].IsNull())
    {
        if (!value["EventDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectEventLists.EventDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventDir = string(value["EventDir"].GetString());
        m_eventDirHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectEventLists.EventType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetUint64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("EventStatus") && !value["EventStatus"].IsNull())
    {
        if (!value["EventStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectEventLists.EventStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventStatus = value["EventStatus"].GetUint64();
        m_eventStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectEventLists.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RestoreTime") && !value["RestoreTime"].IsNull())
    {
        if (!value["RestoreTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectEventLists.RestoreTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restoreTime = string(value["RestoreTime"].GetString());
        m_restoreTimeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectEventLists.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectEventLists.FileType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = value["FileType"].GetUint64();
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectEventLists.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectEventLists.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectEventLists::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_eventDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventDir.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType, allocator);
    }

    if (m_eventStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventStatus, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_restoreTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restoreTime.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileType, allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

}


string ProtectEventLists::GetHostName() const
{
    return m_hostName;
}

void ProtectEventLists::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool ProtectEventLists::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string ProtectEventLists::GetHostIp() const
{
    return m_hostIp;
}

void ProtectEventLists::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool ProtectEventLists::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string ProtectEventLists::GetEventDir() const
{
    return m_eventDir;
}

void ProtectEventLists::SetEventDir(const string& _eventDir)
{
    m_eventDir = _eventDir;
    m_eventDirHasBeenSet = true;
}

bool ProtectEventLists::EventDirHasBeenSet() const
{
    return m_eventDirHasBeenSet;
}

uint64_t ProtectEventLists::GetEventType() const
{
    return m_eventType;
}

void ProtectEventLists::SetEventType(const uint64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool ProtectEventLists::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

uint64_t ProtectEventLists::GetEventStatus() const
{
    return m_eventStatus;
}

void ProtectEventLists::SetEventStatus(const uint64_t& _eventStatus)
{
    m_eventStatus = _eventStatus;
    m_eventStatusHasBeenSet = true;
}

bool ProtectEventLists::EventStatusHasBeenSet() const
{
    return m_eventStatusHasBeenSet;
}

string ProtectEventLists::GetCreateTime() const
{
    return m_createTime;
}

void ProtectEventLists::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProtectEventLists::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ProtectEventLists::GetRestoreTime() const
{
    return m_restoreTime;
}

void ProtectEventLists::SetRestoreTime(const string& _restoreTime)
{
    m_restoreTime = _restoreTime;
    m_restoreTimeHasBeenSet = true;
}

bool ProtectEventLists::RestoreTimeHasBeenSet() const
{
    return m_restoreTimeHasBeenSet;
}

uint64_t ProtectEventLists::GetId() const
{
    return m_id;
}

void ProtectEventLists::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ProtectEventLists::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t ProtectEventLists::GetFileType() const
{
    return m_fileType;
}

void ProtectEventLists::SetFileType(const uint64_t& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool ProtectEventLists::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

MachineExtraInfo ProtectEventLists::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void ProtectEventLists::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool ProtectEventLists::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

string ProtectEventLists::GetQuuid() const
{
    return m_quuid;
}

void ProtectEventLists::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool ProtectEventLists::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

