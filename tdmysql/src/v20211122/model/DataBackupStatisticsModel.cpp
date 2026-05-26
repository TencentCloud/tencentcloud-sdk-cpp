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

#include <tencentcloud/tdmysql/v20211122/model/DataBackupStatisticsModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

DataBackupStatisticsModel::DataBackupStatisticsModel() :
    m_autoBackupCountHasBeenSet(false),
    m_autoBackupSizeHasBeenSet(false),
    m_averageSizePerBackupHasBeenSet(false),
    m_averageSizePerDayHasBeenSet(false),
    m_manualBackupCountHasBeenSet(false),
    m_manualBackupSizeHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_totalSizeHasBeenSet(false)
{
}

CoreInternalOutcome DataBackupStatisticsModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoBackupCount") && !value["AutoBackupCount"].IsNull())
    {
        if (!value["AutoBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupStatisticsModel.AutoBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupCount = value["AutoBackupCount"].GetInt64();
        m_autoBackupCountHasBeenSet = true;
    }

    if (value.HasMember("AutoBackupSize") && !value["AutoBackupSize"].IsNull())
    {
        if (!value["AutoBackupSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupStatisticsModel.AutoBackupSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupSize = value["AutoBackupSize"].GetInt64();
        m_autoBackupSizeHasBeenSet = true;
    }

    if (value.HasMember("AverageSizePerBackup") && !value["AverageSizePerBackup"].IsNull())
    {
        if (!value["AverageSizePerBackup"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupStatisticsModel.AverageSizePerBackup` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_averageSizePerBackup = value["AverageSizePerBackup"].GetInt64();
        m_averageSizePerBackupHasBeenSet = true;
    }

    if (value.HasMember("AverageSizePerDay") && !value["AverageSizePerDay"].IsNull())
    {
        if (!value["AverageSizePerDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupStatisticsModel.AverageSizePerDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_averageSizePerDay = value["AverageSizePerDay"].GetInt64();
        m_averageSizePerDayHasBeenSet = true;
    }

    if (value.HasMember("ManualBackupCount") && !value["ManualBackupCount"].IsNull())
    {
        if (!value["ManualBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupStatisticsModel.ManualBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackupCount = value["ManualBackupCount"].GetInt64();
        m_manualBackupCountHasBeenSet = true;
    }

    if (value.HasMember("ManualBackupSize") && !value["ManualBackupSize"].IsNull())
    {
        if (!value["ManualBackupSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupStatisticsModel.ManualBackupSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackupSize = value["ManualBackupSize"].GetInt64();
        m_manualBackupSizeHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupStatisticsModel.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TotalSize") && !value["TotalSize"].IsNull())
    {
        if (!value["TotalSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupStatisticsModel.TotalSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = value["TotalSize"].GetInt64();
        m_totalSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataBackupStatisticsModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBackupCount, allocator);
    }

    if (m_autoBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBackupSize, allocator);
    }

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

    if (m_manualBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualBackupCount, allocator);
    }

    if (m_manualBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualBackupSize, allocator);
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


int64_t DataBackupStatisticsModel::GetAutoBackupCount() const
{
    return m_autoBackupCount;
}

void DataBackupStatisticsModel::SetAutoBackupCount(const int64_t& _autoBackupCount)
{
    m_autoBackupCount = _autoBackupCount;
    m_autoBackupCountHasBeenSet = true;
}

bool DataBackupStatisticsModel::AutoBackupCountHasBeenSet() const
{
    return m_autoBackupCountHasBeenSet;
}

int64_t DataBackupStatisticsModel::GetAutoBackupSize() const
{
    return m_autoBackupSize;
}

void DataBackupStatisticsModel::SetAutoBackupSize(const int64_t& _autoBackupSize)
{
    m_autoBackupSize = _autoBackupSize;
    m_autoBackupSizeHasBeenSet = true;
}

bool DataBackupStatisticsModel::AutoBackupSizeHasBeenSet() const
{
    return m_autoBackupSizeHasBeenSet;
}

int64_t DataBackupStatisticsModel::GetAverageSizePerBackup() const
{
    return m_averageSizePerBackup;
}

void DataBackupStatisticsModel::SetAverageSizePerBackup(const int64_t& _averageSizePerBackup)
{
    m_averageSizePerBackup = _averageSizePerBackup;
    m_averageSizePerBackupHasBeenSet = true;
}

bool DataBackupStatisticsModel::AverageSizePerBackupHasBeenSet() const
{
    return m_averageSizePerBackupHasBeenSet;
}

int64_t DataBackupStatisticsModel::GetAverageSizePerDay() const
{
    return m_averageSizePerDay;
}

void DataBackupStatisticsModel::SetAverageSizePerDay(const int64_t& _averageSizePerDay)
{
    m_averageSizePerDay = _averageSizePerDay;
    m_averageSizePerDayHasBeenSet = true;
}

bool DataBackupStatisticsModel::AverageSizePerDayHasBeenSet() const
{
    return m_averageSizePerDayHasBeenSet;
}

int64_t DataBackupStatisticsModel::GetManualBackupCount() const
{
    return m_manualBackupCount;
}

void DataBackupStatisticsModel::SetManualBackupCount(const int64_t& _manualBackupCount)
{
    m_manualBackupCount = _manualBackupCount;
    m_manualBackupCountHasBeenSet = true;
}

bool DataBackupStatisticsModel::ManualBackupCountHasBeenSet() const
{
    return m_manualBackupCountHasBeenSet;
}

int64_t DataBackupStatisticsModel::GetManualBackupSize() const
{
    return m_manualBackupSize;
}

void DataBackupStatisticsModel::SetManualBackupSize(const int64_t& _manualBackupSize)
{
    m_manualBackupSize = _manualBackupSize;
    m_manualBackupSizeHasBeenSet = true;
}

bool DataBackupStatisticsModel::ManualBackupSizeHasBeenSet() const
{
    return m_manualBackupSizeHasBeenSet;
}

int64_t DataBackupStatisticsModel::GetTotalCount() const
{
    return m_totalCount;
}

void DataBackupStatisticsModel::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool DataBackupStatisticsModel::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t DataBackupStatisticsModel::GetTotalSize() const
{
    return m_totalSize;
}

void DataBackupStatisticsModel::SetTotalSize(const int64_t& _totalSize)
{
    m_totalSize = _totalSize;
    m_totalSizeHasBeenSet = true;
}

bool DataBackupStatisticsModel::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

