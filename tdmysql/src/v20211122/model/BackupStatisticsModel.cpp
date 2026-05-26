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

#include <tencentcloud/tdmysql/v20211122/model/BackupStatisticsModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

BackupStatisticsModel::BackupStatisticsModel() :
    m_averageSizePerDayHasBeenSet(false),
    m_dataBackupSizeHasBeenSet(false),
    m_logBackupSizeHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_totalSizeHasBeenSet(false)
{
}

CoreInternalOutcome BackupStatisticsModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AverageSizePerDay") && !value["AverageSizePerDay"].IsNull())
    {
        if (!value["AverageSizePerDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatisticsModel.AverageSizePerDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_averageSizePerDay = value["AverageSizePerDay"].GetInt64();
        m_averageSizePerDayHasBeenSet = true;
    }

    if (value.HasMember("DataBackupSize") && !value["DataBackupSize"].IsNull())
    {
        if (!value["DataBackupSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatisticsModel.DataBackupSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupSize = value["DataBackupSize"].GetInt64();
        m_dataBackupSizeHasBeenSet = true;
    }

    if (value.HasMember("LogBackupSize") && !value["LogBackupSize"].IsNull())
    {
        if (!value["LogBackupSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatisticsModel.LogBackupSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logBackupSize = value["LogBackupSize"].GetInt64();
        m_logBackupSizeHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatisticsModel.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TotalSize") && !value["TotalSize"].IsNull())
    {
        if (!value["TotalSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatisticsModel.TotalSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = value["TotalSize"].GetInt64();
        m_totalSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupStatisticsModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_averageSizePerDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageSizePerDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageSizePerDay, allocator);
    }

    if (m_dataBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataBackupSize, allocator);
    }

    if (m_logBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logBackupSize, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_totalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSize, allocator);
    }

}


int64_t BackupStatisticsModel::GetAverageSizePerDay() const
{
    return m_averageSizePerDay;
}

void BackupStatisticsModel::SetAverageSizePerDay(const int64_t& _averageSizePerDay)
{
    m_averageSizePerDay = _averageSizePerDay;
    m_averageSizePerDayHasBeenSet = true;
}

bool BackupStatisticsModel::AverageSizePerDayHasBeenSet() const
{
    return m_averageSizePerDayHasBeenSet;
}

int64_t BackupStatisticsModel::GetDataBackupSize() const
{
    return m_dataBackupSize;
}

void BackupStatisticsModel::SetDataBackupSize(const int64_t& _dataBackupSize)
{
    m_dataBackupSize = _dataBackupSize;
    m_dataBackupSizeHasBeenSet = true;
}

bool BackupStatisticsModel::DataBackupSizeHasBeenSet() const
{
    return m_dataBackupSizeHasBeenSet;
}

int64_t BackupStatisticsModel::GetLogBackupSize() const
{
    return m_logBackupSize;
}

void BackupStatisticsModel::SetLogBackupSize(const int64_t& _logBackupSize)
{
    m_logBackupSize = _logBackupSize;
    m_logBackupSizeHasBeenSet = true;
}

bool BackupStatisticsModel::LogBackupSizeHasBeenSet() const
{
    return m_logBackupSizeHasBeenSet;
}

int64_t BackupStatisticsModel::GetTotalCount() const
{
    return m_totalCount;
}

void BackupStatisticsModel::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool BackupStatisticsModel::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t BackupStatisticsModel::GetTotalSize() const
{
    return m_totalSize;
}

void BackupStatisticsModel::SetTotalSize(const int64_t& _totalSize)
{
    m_totalSize = _totalSize;
    m_totalSizeHasBeenSet = true;
}

bool BackupStatisticsModel::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

