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

#include <tencentcloud/tdmysql/v20211122/model/LogBackupStatisticsModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

LogBackupStatisticsModel::LogBackupStatisticsModel() :
    m_averageSizePerBackupHasBeenSet(false),
    m_averageSizePerDayHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_totalSizeHasBeenSet(false)
{
}

CoreInternalOutcome LogBackupStatisticsModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AverageSizePerBackup") && !value["AverageSizePerBackup"].IsNull())
    {
        if (!value["AverageSizePerBackup"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackupStatisticsModel.AverageSizePerBackup` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_averageSizePerBackup = value["AverageSizePerBackup"].GetInt64();
        m_averageSizePerBackupHasBeenSet = true;
    }

    if (value.HasMember("AverageSizePerDay") && !value["AverageSizePerDay"].IsNull())
    {
        if (!value["AverageSizePerDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackupStatisticsModel.AverageSizePerDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_averageSizePerDay = value["AverageSizePerDay"].GetInt64();
        m_averageSizePerDayHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackupStatisticsModel.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TotalSize") && !value["TotalSize"].IsNull())
    {
        if (!value["TotalSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackupStatisticsModel.TotalSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = value["TotalSize"].GetInt64();
        m_totalSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogBackupStatisticsModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_averageSizePerBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageSizePerBackup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageSizePerBackup, allocator);
    }

    if (m_averageSizePerDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageSizePerDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageSizePerDay, allocator);
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


int64_t LogBackupStatisticsModel::GetAverageSizePerBackup() const
{
    return m_averageSizePerBackup;
}

void LogBackupStatisticsModel::SetAverageSizePerBackup(const int64_t& _averageSizePerBackup)
{
    m_averageSizePerBackup = _averageSizePerBackup;
    m_averageSizePerBackupHasBeenSet = true;
}

bool LogBackupStatisticsModel::AverageSizePerBackupHasBeenSet() const
{
    return m_averageSizePerBackupHasBeenSet;
}

int64_t LogBackupStatisticsModel::GetAverageSizePerDay() const
{
    return m_averageSizePerDay;
}

void LogBackupStatisticsModel::SetAverageSizePerDay(const int64_t& _averageSizePerDay)
{
    m_averageSizePerDay = _averageSizePerDay;
    m_averageSizePerDayHasBeenSet = true;
}

bool LogBackupStatisticsModel::AverageSizePerDayHasBeenSet() const
{
    return m_averageSizePerDayHasBeenSet;
}

int64_t LogBackupStatisticsModel::GetTotalCount() const
{
    return m_totalCount;
}

void LogBackupStatisticsModel::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool LogBackupStatisticsModel::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t LogBackupStatisticsModel::GetTotalSize() const
{
    return m_totalSize;
}

void LogBackupStatisticsModel::SetTotalSize(const int64_t& _totalSize)
{
    m_totalSize = _totalSize;
    m_totalSizeHasBeenSet = true;
}

bool LogBackupStatisticsModel::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

