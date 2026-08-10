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

#include <tencentcloud/csip/v20221121/model/VulFixTaskDetailItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulFixTaskDetailItem::VulFixTaskDetailItem() :
    m_idHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_vulIdHasBeenSet(false),
    m_kBIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_fixStatusHasBeenSet(false),
    m_snapshotStatusHasBeenSet(false),
    m_exceptionMessageHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_snapshotExpireTimeHasBeenSet(false),
    m_snapshotFailReasonHasBeenSet(false)
{
}

CoreInternalOutcome VulFixTaskDetailItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.VulId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetInt64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("KBId") && !value["KBId"].IsNull())
    {
        if (!value["KBId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.KBId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_kBId = value["KBId"].GetInt64();
        m_kBIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FixStatus") && !value["FixStatus"].IsNull())
    {
        if (!value["FixStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.FixStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fixStatus = value["FixStatus"].GetInt64();
        m_fixStatusHasBeenSet = true;
    }

    if (value.HasMember("SnapshotStatus") && !value["SnapshotStatus"].IsNull())
    {
        if (!value["SnapshotStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.SnapshotStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotStatus = value["SnapshotStatus"].GetInt64();
        m_snapshotStatusHasBeenSet = true;
    }

    if (value.HasMember("ExceptionMessage") && !value["ExceptionMessage"].IsNull())
    {
        if (!value["ExceptionMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.ExceptionMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionMessage = string(value["ExceptionMessage"].GetString());
        m_exceptionMessageHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotCreateTime") && !value["SnapshotCreateTime"].IsNull())
    {
        if (!value["SnapshotCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.SnapshotCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotCreateTime = string(value["SnapshotCreateTime"].GetString());
        m_snapshotCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotExpireTime") && !value["SnapshotExpireTime"].IsNull())
    {
        if (!value["SnapshotExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.SnapshotExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotExpireTime = string(value["SnapshotExpireTime"].GetString());
        m_snapshotExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotFailReason") && !value["SnapshotFailReason"].IsNull())
    {
        if (!value["SnapshotFailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskDetailItem.SnapshotFailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotFailReason = string(value["SnapshotFailReason"].GetString());
        m_snapshotFailReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulFixTaskDetailItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_kBIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KBId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kBId, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_fixStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixStatus, allocator);
    }

    if (m_snapshotStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotStatus, allocator);
    }

    if (m_exceptionMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exceptionMessage.c_str(), allocator).Move(), allocator);
    }

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

    if (m_snapshotCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotFailReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotFailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotFailReason.c_str(), allocator).Move(), allocator);
    }

}


int64_t VulFixTaskDetailItem::GetId() const
{
    return m_id;
}

void VulFixTaskDetailItem::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool VulFixTaskDetailItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t VulFixTaskDetailItem::GetTaskId() const
{
    return m_taskId;
}

void VulFixTaskDetailItem::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool VulFixTaskDetailItem::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t VulFixTaskDetailItem::GetVulId() const
{
    return m_vulId;
}

void VulFixTaskDetailItem::SetVulId(const int64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool VulFixTaskDetailItem::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

int64_t VulFixTaskDetailItem::GetKBId() const
{
    return m_kBId;
}

void VulFixTaskDetailItem::SetKBId(const int64_t& _kBId)
{
    m_kBId = _kBId;
    m_kBIdHasBeenSet = true;
}

bool VulFixTaskDetailItem::KBIdHasBeenSet() const
{
    return m_kBIdHasBeenSet;
}

string VulFixTaskDetailItem::GetInstanceId() const
{
    return m_instanceId;
}

void VulFixTaskDetailItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool VulFixTaskDetailItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string VulFixTaskDetailItem::GetMachineName() const
{
    return m_machineName;
}

void VulFixTaskDetailItem::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool VulFixTaskDetailItem::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string VulFixTaskDetailItem::GetMachineIp() const
{
    return m_machineIp;
}

void VulFixTaskDetailItem::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool VulFixTaskDetailItem::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string VulFixTaskDetailItem::GetVulName() const
{
    return m_vulName;
}

void VulFixTaskDetailItem::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulFixTaskDetailItem::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

int64_t VulFixTaskDetailItem::GetStatus() const
{
    return m_status;
}

void VulFixTaskDetailItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VulFixTaskDetailItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t VulFixTaskDetailItem::GetFixStatus() const
{
    return m_fixStatus;
}

void VulFixTaskDetailItem::SetFixStatus(const int64_t& _fixStatus)
{
    m_fixStatus = _fixStatus;
    m_fixStatusHasBeenSet = true;
}

bool VulFixTaskDetailItem::FixStatusHasBeenSet() const
{
    return m_fixStatusHasBeenSet;
}

int64_t VulFixTaskDetailItem::GetSnapshotStatus() const
{
    return m_snapshotStatus;
}

void VulFixTaskDetailItem::SetSnapshotStatus(const int64_t& _snapshotStatus)
{
    m_snapshotStatus = _snapshotStatus;
    m_snapshotStatusHasBeenSet = true;
}

bool VulFixTaskDetailItem::SnapshotStatusHasBeenSet() const
{
    return m_snapshotStatusHasBeenSet;
}

string VulFixTaskDetailItem::GetExceptionMessage() const
{
    return m_exceptionMessage;
}

void VulFixTaskDetailItem::SetExceptionMessage(const string& _exceptionMessage)
{
    m_exceptionMessage = _exceptionMessage;
    m_exceptionMessageHasBeenSet = true;
}

bool VulFixTaskDetailItem::ExceptionMessageHasBeenSet() const
{
    return m_exceptionMessageHasBeenSet;
}

string VulFixTaskDetailItem::GetStartTime() const
{
    return m_startTime;
}

void VulFixTaskDetailItem::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool VulFixTaskDetailItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string VulFixTaskDetailItem::GetEndTime() const
{
    return m_endTime;
}

void VulFixTaskDetailItem::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool VulFixTaskDetailItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string VulFixTaskDetailItem::GetSnapshotCreateTime() const
{
    return m_snapshotCreateTime;
}

void VulFixTaskDetailItem::SetSnapshotCreateTime(const string& _snapshotCreateTime)
{
    m_snapshotCreateTime = _snapshotCreateTime;
    m_snapshotCreateTimeHasBeenSet = true;
}

bool VulFixTaskDetailItem::SnapshotCreateTimeHasBeenSet() const
{
    return m_snapshotCreateTimeHasBeenSet;
}

string VulFixTaskDetailItem::GetSnapshotExpireTime() const
{
    return m_snapshotExpireTime;
}

void VulFixTaskDetailItem::SetSnapshotExpireTime(const string& _snapshotExpireTime)
{
    m_snapshotExpireTime = _snapshotExpireTime;
    m_snapshotExpireTimeHasBeenSet = true;
}

bool VulFixTaskDetailItem::SnapshotExpireTimeHasBeenSet() const
{
    return m_snapshotExpireTimeHasBeenSet;
}

string VulFixTaskDetailItem::GetSnapshotFailReason() const
{
    return m_snapshotFailReason;
}

void VulFixTaskDetailItem::SetSnapshotFailReason(const string& _snapshotFailReason)
{
    m_snapshotFailReason = _snapshotFailReason;
    m_snapshotFailReasonHasBeenSet = true;
}

bool VulFixTaskDetailItem::SnapshotFailReasonHasBeenSet() const
{
    return m_snapshotFailReasonHasBeenSet;
}

