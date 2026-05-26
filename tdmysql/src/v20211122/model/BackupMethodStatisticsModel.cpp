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

#include <tencentcloud/tdmysql/v20211122/model/BackupMethodStatisticsModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

BackupMethodStatisticsModel::BackupMethodStatisticsModel() :
    m_autoBackupSizeHasBeenSet(false),
    m_averageSizePerDayHasBeenSet(false),
    m_manualBackupSizeHasBeenSet(false),
    m_totalSizeHasBeenSet(false)
{
}

CoreInternalOutcome BackupMethodStatisticsModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoBackupSize") && !value["AutoBackupSize"].IsNull())
    {
        if (!value["AutoBackupSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupMethodStatisticsModel.AutoBackupSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupSize = value["AutoBackupSize"].GetInt64();
        m_autoBackupSizeHasBeenSet = true;
    }

    if (value.HasMember("AverageSizePerDay") && !value["AverageSizePerDay"].IsNull())
    {
        if (!value["AverageSizePerDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupMethodStatisticsModel.AverageSizePerDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_averageSizePerDay = value["AverageSizePerDay"].GetInt64();
        m_averageSizePerDayHasBeenSet = true;
    }

    if (value.HasMember("ManualBackupSize") && !value["ManualBackupSize"].IsNull())
    {
        if (!value["ManualBackupSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupMethodStatisticsModel.ManualBackupSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackupSize = value["ManualBackupSize"].GetInt64();
        m_manualBackupSizeHasBeenSet = true;
    }

    if (value.HasMember("TotalSize") && !value["TotalSize"].IsNull())
    {
        if (!value["TotalSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupMethodStatisticsModel.TotalSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = value["TotalSize"].GetInt64();
        m_totalSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupMethodStatisticsModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBackupSize, allocator);
    }

    if (m_averageSizePerDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageSizePerDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageSizePerDay, allocator);
    }

    if (m_manualBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualBackupSize, allocator);
    }

    if (m_totalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSize, allocator);
    }

}


int64_t BackupMethodStatisticsModel::GetAutoBackupSize() const
{
    return m_autoBackupSize;
}

void BackupMethodStatisticsModel::SetAutoBackupSize(const int64_t& _autoBackupSize)
{
    m_autoBackupSize = _autoBackupSize;
    m_autoBackupSizeHasBeenSet = true;
}

bool BackupMethodStatisticsModel::AutoBackupSizeHasBeenSet() const
{
    return m_autoBackupSizeHasBeenSet;
}

int64_t BackupMethodStatisticsModel::GetAverageSizePerDay() const
{
    return m_averageSizePerDay;
}

void BackupMethodStatisticsModel::SetAverageSizePerDay(const int64_t& _averageSizePerDay)
{
    m_averageSizePerDay = _averageSizePerDay;
    m_averageSizePerDayHasBeenSet = true;
}

bool BackupMethodStatisticsModel::AverageSizePerDayHasBeenSet() const
{
    return m_averageSizePerDayHasBeenSet;
}

int64_t BackupMethodStatisticsModel::GetManualBackupSize() const
{
    return m_manualBackupSize;
}

void BackupMethodStatisticsModel::SetManualBackupSize(const int64_t& _manualBackupSize)
{
    m_manualBackupSize = _manualBackupSize;
    m_manualBackupSizeHasBeenSet = true;
}

bool BackupMethodStatisticsModel::ManualBackupSizeHasBeenSet() const
{
    return m_manualBackupSizeHasBeenSet;
}

int64_t BackupMethodStatisticsModel::GetTotalSize() const
{
    return m_totalSize;
}

void BackupMethodStatisticsModel::SetTotalSize(const int64_t& _totalSize)
{
    m_totalSize = _totalSize;
    m_totalSizeHasBeenSet = true;
}

bool BackupMethodStatisticsModel::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

