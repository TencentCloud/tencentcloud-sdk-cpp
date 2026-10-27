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

#include <tencentcloud/cvd/v20201104/model/SnapshotInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

SnapshotInfo::SnapshotInfo() :
    m_snapshotIdHasBeenSet(false),
    m_diskIdHasBeenSet(false),
    m_snapshotStateHasBeenSet(false),
    m_diskUsageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_deadlineTimeHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_isPermanentHasBeenSet(false),
    m_createTypeHasBeenSet(false),
    m_lastRollbackTimeHasBeenSet(false),
    m_lastRollbackStateHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SnapshotId") && !value["SnapshotId"].IsNull())
    {
        if (!value["SnapshotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.SnapshotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotId = string(value["SnapshotId"].GetString());
        m_snapshotIdHasBeenSet = true;
    }

    if (value.HasMember("DiskId") && !value["DiskId"].IsNull())
    {
        if (!value["DiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.DiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskId = string(value["DiskId"].GetString());
        m_diskIdHasBeenSet = true;
    }

    if (value.HasMember("SnapshotState") && !value["SnapshotState"].IsNull())
    {
        if (!value["SnapshotState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.SnapshotState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotState = string(value["SnapshotState"].GetString());
        m_snapshotStateHasBeenSet = true;
    }

    if (value.HasMember("DiskUsage") && !value["DiskUsage"].IsNull())
    {
        if (!value["DiskUsage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.DiskUsage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskUsage = string(value["DiskUsage"].GetString());
        m_diskUsageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DeadlineTime") && !value["DeadlineTime"].IsNull())
    {
        if (!value["DeadlineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.DeadlineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadlineTime = string(value["DeadlineTime"].GetString());
        m_deadlineTimeHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.Percent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetUint64();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("IsPermanent") && !value["IsPermanent"].IsNull())
    {
        if (!value["IsPermanent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.IsPermanent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPermanent = value["IsPermanent"].GetBool();
        m_isPermanentHasBeenSet = true;
    }

    if (value.HasMember("CreateType") && !value["CreateType"].IsNull())
    {
        if (!value["CreateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.CreateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createType = string(value["CreateType"].GetString());
        m_createTypeHasBeenSet = true;
    }

    if (value.HasMember("LastRollbackTime") && !value["LastRollbackTime"].IsNull())
    {
        if (!value["LastRollbackTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.LastRollbackTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastRollbackTime = string(value["LastRollbackTime"].GetString());
        m_lastRollbackTimeHasBeenSet = true;
    }

    if (value.HasMember("LastRollbackState") && !value["LastRollbackState"].IsNull())
    {
        if (!value["LastRollbackState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.LastRollbackState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastRollbackState = string(value["LastRollbackState"].GetString());
        m_lastRollbackStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotState.c_str(), allocator).Move(), allocator);
    }

    if (m_diskUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_isPermanentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPermanent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPermanent, allocator);
    }

    if (m_createTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createType.c_str(), allocator).Move(), allocator);
    }

    if (m_lastRollbackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRollbackTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastRollbackTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastRollbackStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRollbackState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastRollbackState.c_str(), allocator).Move(), allocator);
    }

}


string SnapshotInfo::GetSnapshotId() const
{
    return m_snapshotId;
}

void SnapshotInfo::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool SnapshotInfo::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

string SnapshotInfo::GetDiskId() const
{
    return m_diskId;
}

void SnapshotInfo::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool SnapshotInfo::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

string SnapshotInfo::GetSnapshotState() const
{
    return m_snapshotState;
}

void SnapshotInfo::SetSnapshotState(const string& _snapshotState)
{
    m_snapshotState = _snapshotState;
    m_snapshotStateHasBeenSet = true;
}

bool SnapshotInfo::SnapshotStateHasBeenSet() const
{
    return m_snapshotStateHasBeenSet;
}

string SnapshotInfo::GetDiskUsage() const
{
    return m_diskUsage;
}

void SnapshotInfo::SetDiskUsage(const string& _diskUsage)
{
    m_diskUsage = _diskUsage;
    m_diskUsageHasBeenSet = true;
}

bool SnapshotInfo::DiskUsageHasBeenSet() const
{
    return m_diskUsageHasBeenSet;
}

string SnapshotInfo::GetCreateTime() const
{
    return m_createTime;
}

void SnapshotInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SnapshotInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SnapshotInfo::GetDeadlineTime() const
{
    return m_deadlineTime;
}

void SnapshotInfo::SetDeadlineTime(const string& _deadlineTime)
{
    m_deadlineTime = _deadlineTime;
    m_deadlineTimeHasBeenSet = true;
}

bool SnapshotInfo::DeadlineTimeHasBeenSet() const
{
    return m_deadlineTimeHasBeenSet;
}

uint64_t SnapshotInfo::GetPercent() const
{
    return m_percent;
}

void SnapshotInfo::SetPercent(const uint64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool SnapshotInfo::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

bool SnapshotInfo::GetIsPermanent() const
{
    return m_isPermanent;
}

void SnapshotInfo::SetIsPermanent(const bool& _isPermanent)
{
    m_isPermanent = _isPermanent;
    m_isPermanentHasBeenSet = true;
}

bool SnapshotInfo::IsPermanentHasBeenSet() const
{
    return m_isPermanentHasBeenSet;
}

string SnapshotInfo::GetCreateType() const
{
    return m_createType;
}

void SnapshotInfo::SetCreateType(const string& _createType)
{
    m_createType = _createType;
    m_createTypeHasBeenSet = true;
}

bool SnapshotInfo::CreateTypeHasBeenSet() const
{
    return m_createTypeHasBeenSet;
}

string SnapshotInfo::GetLastRollbackTime() const
{
    return m_lastRollbackTime;
}

void SnapshotInfo::SetLastRollbackTime(const string& _lastRollbackTime)
{
    m_lastRollbackTime = _lastRollbackTime;
    m_lastRollbackTimeHasBeenSet = true;
}

bool SnapshotInfo::LastRollbackTimeHasBeenSet() const
{
    return m_lastRollbackTimeHasBeenSet;
}

string SnapshotInfo::GetLastRollbackState() const
{
    return m_lastRollbackState;
}

void SnapshotInfo::SetLastRollbackState(const string& _lastRollbackState)
{
    m_lastRollbackState = _lastRollbackState;
    m_lastRollbackStateHasBeenSet = true;
}

bool SnapshotInfo::LastRollbackStateHasBeenSet() const
{
    return m_lastRollbackStateHasBeenSet;
}

