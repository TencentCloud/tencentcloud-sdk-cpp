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

#include <tencentcloud/cdb/v20170320/model/BackupSummaryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

BackupSummaryItem::BackupSummaryItem() :
    m_instanceIdHasBeenSet(false),
    m_autoBackupCountHasBeenSet(false),
    m_autoBackupVolumeHasBeenSet(false),
    m_manualBackupCountHasBeenSet(false),
    m_manualBackupVolumeHasBeenSet(false),
    m_dataBackupCountHasBeenSet(false),
    m_dataBackupVolumeHasBeenSet(false),
    m_binlogBackupCountHasBeenSet(false),
    m_binlogBackupVolumeHasBeenSet(false),
    m_backupVolumeHasBeenSet(false)
{
}

CoreInternalOutcome BackupSummaryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummaryItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AutoBackupCount") && !value["AutoBackupCount"].IsNull())
    {
        if (!value["AutoBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummaryItem.AutoBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupCount = value["AutoBackupCount"].GetInt64();
        m_autoBackupCountHasBeenSet = true;
    }

    if (value.HasMember("AutoBackupVolume") && !value["AutoBackupVolume"].IsNull())
    {
        if (!value["AutoBackupVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummaryItem.AutoBackupVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupVolume = value["AutoBackupVolume"].GetInt64();
        m_autoBackupVolumeHasBeenSet = true;
    }

    if (value.HasMember("ManualBackupCount") && !value["ManualBackupCount"].IsNull())
    {
        if (!value["ManualBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummaryItem.ManualBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackupCount = value["ManualBackupCount"].GetInt64();
        m_manualBackupCountHasBeenSet = true;
    }

    if (value.HasMember("ManualBackupVolume") && !value["ManualBackupVolume"].IsNull())
    {
        if (!value["ManualBackupVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummaryItem.ManualBackupVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackupVolume = value["ManualBackupVolume"].GetInt64();
        m_manualBackupVolumeHasBeenSet = true;
    }

    if (value.HasMember("DataBackupCount") && !value["DataBackupCount"].IsNull())
    {
        if (!value["DataBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummaryItem.DataBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupCount = value["DataBackupCount"].GetInt64();
        m_dataBackupCountHasBeenSet = true;
    }

    if (value.HasMember("DataBackupVolume") && !value["DataBackupVolume"].IsNull())
    {
        if (!value["DataBackupVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummaryItem.DataBackupVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupVolume = value["DataBackupVolume"].GetInt64();
        m_dataBackupVolumeHasBeenSet = true;
    }

    if (value.HasMember("BinlogBackupCount") && !value["BinlogBackupCount"].IsNull())
    {
        if (!value["BinlogBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummaryItem.BinlogBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogBackupCount = value["BinlogBackupCount"].GetInt64();
        m_binlogBackupCountHasBeenSet = true;
    }

    if (value.HasMember("BinlogBackupVolume") && !value["BinlogBackupVolume"].IsNull())
    {
        if (!value["BinlogBackupVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummaryItem.BinlogBackupVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogBackupVolume = value["BinlogBackupVolume"].GetInt64();
        m_binlogBackupVolumeHasBeenSet = true;
    }

    if (value.HasMember("BackupVolume") && !value["BackupVolume"].IsNull())
    {
        if (!value["BackupVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSummaryItem.BackupVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupVolume = value["BackupVolume"].GetInt64();
        m_backupVolumeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupSummaryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBackupCount, allocator);
    }

    if (m_autoBackupVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBackupVolume, allocator);
    }

    if (m_manualBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualBackupCount, allocator);
    }

    if (m_manualBackupVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackupVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualBackupVolume, allocator);
    }

    if (m_dataBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataBackupCount, allocator);
    }

    if (m_dataBackupVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackupVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataBackupVolume, allocator);
    }

    if (m_binlogBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_binlogBackupCount, allocator);
    }

    if (m_binlogBackupVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogBackupVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_binlogBackupVolume, allocator);
    }

    if (m_backupVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupVolume, allocator);
    }

}


string BackupSummaryItem::GetInstanceId() const
{
    return m_instanceId;
}

void BackupSummaryItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BackupSummaryItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t BackupSummaryItem::GetAutoBackupCount() const
{
    return m_autoBackupCount;
}

void BackupSummaryItem::SetAutoBackupCount(const int64_t& _autoBackupCount)
{
    m_autoBackupCount = _autoBackupCount;
    m_autoBackupCountHasBeenSet = true;
}

bool BackupSummaryItem::AutoBackupCountHasBeenSet() const
{
    return m_autoBackupCountHasBeenSet;
}

int64_t BackupSummaryItem::GetAutoBackupVolume() const
{
    return m_autoBackupVolume;
}

void BackupSummaryItem::SetAutoBackupVolume(const int64_t& _autoBackupVolume)
{
    m_autoBackupVolume = _autoBackupVolume;
    m_autoBackupVolumeHasBeenSet = true;
}

bool BackupSummaryItem::AutoBackupVolumeHasBeenSet() const
{
    return m_autoBackupVolumeHasBeenSet;
}

int64_t BackupSummaryItem::GetManualBackupCount() const
{
    return m_manualBackupCount;
}

void BackupSummaryItem::SetManualBackupCount(const int64_t& _manualBackupCount)
{
    m_manualBackupCount = _manualBackupCount;
    m_manualBackupCountHasBeenSet = true;
}

bool BackupSummaryItem::ManualBackupCountHasBeenSet() const
{
    return m_manualBackupCountHasBeenSet;
}

int64_t BackupSummaryItem::GetManualBackupVolume() const
{
    return m_manualBackupVolume;
}

void BackupSummaryItem::SetManualBackupVolume(const int64_t& _manualBackupVolume)
{
    m_manualBackupVolume = _manualBackupVolume;
    m_manualBackupVolumeHasBeenSet = true;
}

bool BackupSummaryItem::ManualBackupVolumeHasBeenSet() const
{
    return m_manualBackupVolumeHasBeenSet;
}

int64_t BackupSummaryItem::GetDataBackupCount() const
{
    return m_dataBackupCount;
}

void BackupSummaryItem::SetDataBackupCount(const int64_t& _dataBackupCount)
{
    m_dataBackupCount = _dataBackupCount;
    m_dataBackupCountHasBeenSet = true;
}

bool BackupSummaryItem::DataBackupCountHasBeenSet() const
{
    return m_dataBackupCountHasBeenSet;
}

int64_t BackupSummaryItem::GetDataBackupVolume() const
{
    return m_dataBackupVolume;
}

void BackupSummaryItem::SetDataBackupVolume(const int64_t& _dataBackupVolume)
{
    m_dataBackupVolume = _dataBackupVolume;
    m_dataBackupVolumeHasBeenSet = true;
}

bool BackupSummaryItem::DataBackupVolumeHasBeenSet() const
{
    return m_dataBackupVolumeHasBeenSet;
}

int64_t BackupSummaryItem::GetBinlogBackupCount() const
{
    return m_binlogBackupCount;
}

void BackupSummaryItem::SetBinlogBackupCount(const int64_t& _binlogBackupCount)
{
    m_binlogBackupCount = _binlogBackupCount;
    m_binlogBackupCountHasBeenSet = true;
}

bool BackupSummaryItem::BinlogBackupCountHasBeenSet() const
{
    return m_binlogBackupCountHasBeenSet;
}

int64_t BackupSummaryItem::GetBinlogBackupVolume() const
{
    return m_binlogBackupVolume;
}

void BackupSummaryItem::SetBinlogBackupVolume(const int64_t& _binlogBackupVolume)
{
    m_binlogBackupVolume = _binlogBackupVolume;
    m_binlogBackupVolumeHasBeenSet = true;
}

bool BackupSummaryItem::BinlogBackupVolumeHasBeenSet() const
{
    return m_binlogBackupVolumeHasBeenSet;
}

int64_t BackupSummaryItem::GetBackupVolume() const
{
    return m_backupVolume;
}

void BackupSummaryItem::SetBackupVolume(const int64_t& _backupVolume)
{
    m_backupVolume = _backupVolume;
    m_backupVolumeHasBeenSet = true;
}

bool BackupSummaryItem::BackupVolumeHasBeenSet() const
{
    return m_backupVolumeHasBeenSet;
}

