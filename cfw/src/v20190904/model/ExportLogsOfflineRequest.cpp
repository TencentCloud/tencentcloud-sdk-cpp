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

#include <tencentcloud/cfw/v20190904/model/ExportLogsOfflineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ExportLogsOfflineRequest::ExportLogsOfflineRequest() :
    m_indexHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_dataFormatHasBeenSet(false),
    m_compressionFormatHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_storageDaysHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_taskTypeHasBeenSet(false)
{
}

string ExportLogsOfflineRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_compressionFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompressionFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compressionFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_length, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_storageDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageDays, allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExportLogsOfflineRequest::GetIndex() const
{
    return m_index;
}

void ExportLogsOfflineRequest::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool ExportLogsOfflineRequest::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string ExportLogsOfflineRequest::GetStartTime() const
{
    return m_startTime;
}

void ExportLogsOfflineRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ExportLogsOfflineRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ExportLogsOfflineRequest::GetEndTime() const
{
    return m_endTime;
}

void ExportLogsOfflineRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ExportLogsOfflineRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ExportLogsOfflineRequest::GetTaskName() const
{
    return m_taskName;
}

void ExportLogsOfflineRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ExportLogsOfflineRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string ExportLogsOfflineRequest::GetDataFormat() const
{
    return m_dataFormat;
}

void ExportLogsOfflineRequest::SetDataFormat(const string& _dataFormat)
{
    m_dataFormat = _dataFormat;
    m_dataFormatHasBeenSet = true;
}

bool ExportLogsOfflineRequest::DataFormatHasBeenSet() const
{
    return m_dataFormatHasBeenSet;
}

string ExportLogsOfflineRequest::GetCompressionFormat() const
{
    return m_compressionFormat;
}

void ExportLogsOfflineRequest::SetCompressionFormat(const string& _compressionFormat)
{
    m_compressionFormat = _compressionFormat;
    m_compressionFormatHasBeenSet = true;
}

bool ExportLogsOfflineRequest::CompressionFormatHasBeenSet() const
{
    return m_compressionFormatHasBeenSet;
}

string ExportLogsOfflineRequest::GetOrder() const
{
    return m_order;
}

void ExportLogsOfflineRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool ExportLogsOfflineRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

int64_t ExportLogsOfflineRequest::GetLength() const
{
    return m_length;
}

void ExportLogsOfflineRequest::SetLength(const int64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool ExportLogsOfflineRequest::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

vector<CommonFilter> ExportLogsOfflineRequest::GetFilters() const
{
    return m_filters;
}

void ExportLogsOfflineRequest::SetFilters(const vector<CommonFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ExportLogsOfflineRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string ExportLogsOfflineRequest::GetBucketName() const
{
    return m_bucketName;
}

void ExportLogsOfflineRequest::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool ExportLogsOfflineRequest::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string ExportLogsOfflineRequest::GetBucketRegion() const
{
    return m_bucketRegion;
}

void ExportLogsOfflineRequest::SetBucketRegion(const string& _bucketRegion)
{
    m_bucketRegion = _bucketRegion;
    m_bucketRegionHasBeenSet = true;
}

bool ExportLogsOfflineRequest::BucketRegionHasBeenSet() const
{
    return m_bucketRegionHasBeenSet;
}

int64_t ExportLogsOfflineRequest::GetStorageDays() const
{
    return m_storageDays;
}

void ExportLogsOfflineRequest::SetStorageDays(const int64_t& _storageDays)
{
    m_storageDays = _storageDays;
    m_storageDaysHasBeenSet = true;
}

bool ExportLogsOfflineRequest::StorageDaysHasBeenSet() const
{
    return m_storageDaysHasBeenSet;
}

string ExportLogsOfflineRequest::GetQuery() const
{
    return m_query;
}

void ExportLogsOfflineRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool ExportLogsOfflineRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

string ExportLogsOfflineRequest::GetTaskType() const
{
    return m_taskType;
}

void ExportLogsOfflineRequest::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool ExportLogsOfflineRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}


