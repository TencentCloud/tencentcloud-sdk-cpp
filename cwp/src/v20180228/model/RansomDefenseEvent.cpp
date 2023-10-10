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

#include <tencentcloud/cwp/v20180228/model/RansomDefenseEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RansomDefenseEvent::RansomDefenseEvent() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_baitFilePathHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_pidParamHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_fileMd5HasBeenSet(false),
    m_typeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_psTreeHasBeenSet(false),
    m_processStartTimeHasBeenSet(false),
    m_snapshotNumHasBeenSet(false)
{
}

CoreInternalOutcome RansomDefenseEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BaitFilePath") && !value["BaitFilePath"].IsNull())
    {
        if (!value["BaitFilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.BaitFilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baitFilePath = string(value["BaitFilePath"].GetString());
        m_baitFilePathHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.Pid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetUint64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("PidParam") && !value["PidParam"].IsNull())
    {
        if (!value["PidParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.PidParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pidParam = string(value["PidParam"].GetString());
        m_pidParamHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.FileSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetUint64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FileMd5") && !value["FileMd5"].IsNull())
    {
        if (!value["FileMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.FileMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMd5 = string(value["FileMd5"].GetString());
        m_fileMd5HasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.StrategyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = value["StrategyId"].GetUint64();
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("PsTree") && !value["PsTree"].IsNull())
    {
        if (!value["PsTree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.PsTree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_psTree = string(value["PsTree"].GetString());
        m_psTreeHasBeenSet = true;
    }

    if (value.HasMember("ProcessStartTime") && !value["ProcessStartTime"].IsNull())
    {
        if (!value["ProcessStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.ProcessStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processStartTime = string(value["ProcessStartTime"].GetString());
        m_processStartTimeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotNum") && !value["SnapshotNum"].IsNull())
    {
        if (!value["SnapshotNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseEvent.SnapshotNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotNum = value["SnapshotNum"].GetUint64();
        m_snapshotNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RansomDefenseEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_baitFilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaitFilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baitFilePath.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_pidParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PidParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pidParam.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_fileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyId, allocator);
    }

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_wanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_psTreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PsTree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_psTree.c_str(), allocator).Move(), allocator);
    }

    if (m_processStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotNum, allocator);
    }

}


uint64_t RansomDefenseEvent::GetId() const
{
    return m_id;
}

void RansomDefenseEvent::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RansomDefenseEvent::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RansomDefenseEvent::GetUuid() const
{
    return m_uuid;
}

void RansomDefenseEvent::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool RansomDefenseEvent::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string RansomDefenseEvent::GetQuuid() const
{
    return m_quuid;
}

void RansomDefenseEvent::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool RansomDefenseEvent::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string RansomDefenseEvent::GetHostName() const
{
    return m_hostName;
}

void RansomDefenseEvent::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool RansomDefenseEvent::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

uint64_t RansomDefenseEvent::GetStatus() const
{
    return m_status;
}

void RansomDefenseEvent::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RansomDefenseEvent::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RansomDefenseEvent::GetBaitFilePath() const
{
    return m_baitFilePath;
}

void RansomDefenseEvent::SetBaitFilePath(const string& _baitFilePath)
{
    m_baitFilePath = _baitFilePath;
    m_baitFilePathHasBeenSet = true;
}

bool RansomDefenseEvent::BaitFilePathHasBeenSet() const
{
    return m_baitFilePathHasBeenSet;
}

string RansomDefenseEvent::GetFilePath() const
{
    return m_filePath;
}

void RansomDefenseEvent::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool RansomDefenseEvent::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

uint64_t RansomDefenseEvent::GetPid() const
{
    return m_pid;
}

void RansomDefenseEvent::SetPid(const uint64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool RansomDefenseEvent::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string RansomDefenseEvent::GetPidParam() const
{
    return m_pidParam;
}

void RansomDefenseEvent::SetPidParam(const string& _pidParam)
{
    m_pidParam = _pidParam;
    m_pidParamHasBeenSet = true;
}

bool RansomDefenseEvent::PidParamHasBeenSet() const
{
    return m_pidParamHasBeenSet;
}

uint64_t RansomDefenseEvent::GetFileSize() const
{
    return m_fileSize;
}

void RansomDefenseEvent::SetFileSize(const uint64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool RansomDefenseEvent::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string RansomDefenseEvent::GetFileMd5() const
{
    return m_fileMd5;
}

void RansomDefenseEvent::SetFileMd5(const string& _fileMd5)
{
    m_fileMd5 = _fileMd5;
    m_fileMd5HasBeenSet = true;
}

bool RansomDefenseEvent::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

uint64_t RansomDefenseEvent::GetType() const
{
    return m_type;
}

void RansomDefenseEvent::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RansomDefenseEvent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string RansomDefenseEvent::GetCreateTime() const
{
    return m_createTime;
}

void RansomDefenseEvent::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RansomDefenseEvent::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RansomDefenseEvent::GetInstanceId() const
{
    return m_instanceId;
}

void RansomDefenseEvent::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RansomDefenseEvent::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RansomDefenseEvent::GetModifyTime() const
{
    return m_modifyTime;
}

void RansomDefenseEvent::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool RansomDefenseEvent::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t RansomDefenseEvent::GetStrategyId() const
{
    return m_strategyId;
}

void RansomDefenseEvent::SetStrategyId(const uint64_t& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool RansomDefenseEvent::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string RansomDefenseEvent::GetStrategyName() const
{
    return m_strategyName;
}

void RansomDefenseEvent::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool RansomDefenseEvent::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

string RansomDefenseEvent::GetHostIp() const
{
    return m_hostIp;
}

void RansomDefenseEvent::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool RansomDefenseEvent::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string RansomDefenseEvent::GetWanIp() const
{
    return m_wanIp;
}

void RansomDefenseEvent::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool RansomDefenseEvent::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

string RansomDefenseEvent::GetPsTree() const
{
    return m_psTree;
}

void RansomDefenseEvent::SetPsTree(const string& _psTree)
{
    m_psTree = _psTree;
    m_psTreeHasBeenSet = true;
}

bool RansomDefenseEvent::PsTreeHasBeenSet() const
{
    return m_psTreeHasBeenSet;
}

string RansomDefenseEvent::GetProcessStartTime() const
{
    return m_processStartTime;
}

void RansomDefenseEvent::SetProcessStartTime(const string& _processStartTime)
{
    m_processStartTime = _processStartTime;
    m_processStartTimeHasBeenSet = true;
}

bool RansomDefenseEvent::ProcessStartTimeHasBeenSet() const
{
    return m_processStartTimeHasBeenSet;
}

uint64_t RansomDefenseEvent::GetSnapshotNum() const
{
    return m_snapshotNum;
}

void RansomDefenseEvent::SetSnapshotNum(const uint64_t& _snapshotNum)
{
    m_snapshotNum = _snapshotNum;
    m_snapshotNumHasBeenSet = true;
}

bool RansomDefenseEvent::SnapshotNumHasBeenSet() const
{
    return m_snapshotNumHasBeenSet;
}

