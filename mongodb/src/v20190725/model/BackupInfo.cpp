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

#include <tencentcloud/mongodb/v20190725/model/BackupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

BackupInfo::BackupInfo() :
    m_instanceIdHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_backupDescHasBeenSet(false),
    m_backupSizeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_backIdHasBeenSet(false),
    m_deleteTimeHasBeenSet(false),
    m_backupRegionHasBeenSet(false)
{
}

CoreInternalOutcome BackupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("BackupType") && !value["BackupType"].IsNull())
    {
        if (!value["BackupType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.BackupType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = value["BackupType"].GetUint64();
        m_backupTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupName") && !value["BackupName"].IsNull())
    {
        if (!value["BackupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.BackupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupName = string(value["BackupName"].GetString());
        m_backupNameHasBeenSet = true;
    }

    if (value.HasMember("BackupDesc") && !value["BackupDesc"].IsNull())
    {
        if (!value["BackupDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.BackupDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupDesc = string(value["BackupDesc"].GetString());
        m_backupDescHasBeenSet = true;
    }

    if (value.HasMember("BackupSize") && !value["BackupSize"].IsNull())
    {
        if (!value["BackupSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.BackupSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSize = value["BackupSize"].GetUint64();
        m_backupSizeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BackupMethod") && !value["BackupMethod"].IsNull())
    {
        if (!value["BackupMethod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.BackupMethod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = value["BackupMethod"].GetUint64();
        m_backupMethodHasBeenSet = true;
    }

    if (value.HasMember("BackId") && !value["BackId"].IsNull())
    {
        if (!value["BackId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.BackId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backId = value["BackId"].GetInt64();
        m_backIdHasBeenSet = true;
    }

    if (value.HasMember("DeleteTime") && !value["DeleteTime"].IsNull())
    {
        if (!value["DeleteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.DeleteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteTime = string(value["DeleteTime"].GetString());
        m_deleteTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupRegion") && !value["BackupRegion"].IsNull())
    {
        if (!value["BackupRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.BackupRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupRegion = string(value["BackupRegion"].GetString());
        m_backupRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupType, allocator);
    }

    if (m_backupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSize, allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupMethod, allocator);
    }

    if (m_backIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backId, allocator);
    }

    if (m_deleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleteTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupRegion.c_str(), allocator).Move(), allocator);
    }

}


string BackupInfo::GetInstanceId() const
{
    return m_instanceId;
}

void BackupInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BackupInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t BackupInfo::GetBackupType() const
{
    return m_backupType;
}

void BackupInfo::SetBackupType(const uint64_t& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool BackupInfo::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

string BackupInfo::GetBackupName() const
{
    return m_backupName;
}

void BackupInfo::SetBackupName(const string& _backupName)
{
    m_backupName = _backupName;
    m_backupNameHasBeenSet = true;
}

bool BackupInfo::BackupNameHasBeenSet() const
{
    return m_backupNameHasBeenSet;
}

string BackupInfo::GetBackupDesc() const
{
    return m_backupDesc;
}

void BackupInfo::SetBackupDesc(const string& _backupDesc)
{
    m_backupDesc = _backupDesc;
    m_backupDescHasBeenSet = true;
}

bool BackupInfo::BackupDescHasBeenSet() const
{
    return m_backupDescHasBeenSet;
}

uint64_t BackupInfo::GetBackupSize() const
{
    return m_backupSize;
}

void BackupInfo::SetBackupSize(const uint64_t& _backupSize)
{
    m_backupSize = _backupSize;
    m_backupSizeHasBeenSet = true;
}

bool BackupInfo::BackupSizeHasBeenSet() const
{
    return m_backupSizeHasBeenSet;
}

string BackupInfo::GetStartTime() const
{
    return m_startTime;
}

void BackupInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BackupInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BackupInfo::GetEndTime() const
{
    return m_endTime;
}

void BackupInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BackupInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t BackupInfo::GetStatus() const
{
    return m_status;
}

void BackupInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BackupInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t BackupInfo::GetBackupMethod() const
{
    return m_backupMethod;
}

void BackupInfo::SetBackupMethod(const uint64_t& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool BackupInfo::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

int64_t BackupInfo::GetBackId() const
{
    return m_backId;
}

void BackupInfo::SetBackId(const int64_t& _backId)
{
    m_backId = _backId;
    m_backIdHasBeenSet = true;
}

bool BackupInfo::BackIdHasBeenSet() const
{
    return m_backIdHasBeenSet;
}

string BackupInfo::GetDeleteTime() const
{
    return m_deleteTime;
}

void BackupInfo::SetDeleteTime(const string& _deleteTime)
{
    m_deleteTime = _deleteTime;
    m_deleteTimeHasBeenSet = true;
}

bool BackupInfo::DeleteTimeHasBeenSet() const
{
    return m_deleteTimeHasBeenSet;
}

string BackupInfo::GetBackupRegion() const
{
    return m_backupRegion;
}

void BackupInfo::SetBackupRegion(const string& _backupRegion)
{
    m_backupRegion = _backupRegion;
    m_backupRegionHasBeenSet = true;
}

bool BackupInfo::BackupRegionHasBeenSet() const
{
    return m_backupRegionHasBeenSet;
}

