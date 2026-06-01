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

#include <tencentcloud/cfs/v20190719/model/CreateDataRetrievalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

CreateDataRetrievalRequest::CreateDataRetrievalRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_dataRetrievalNameHasBeenSet(false),
    m_compoundConditionHasBeenSet(false),
    m_queryConditionHasBeenSet(false),
    m_dayOfMonthHasBeenSet(false),
    m_dayOfWeekHasBeenSet(false),
    m_hourHasBeenSet(false)
{
}

string CreateDataRetrievalRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataRetrievalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRetrievalName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataRetrievalName.c_str(), allocator).Move(), allocator);
    }

    if (m_compoundConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompoundCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compoundCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_queryConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_dayOfMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayOfMonth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dayOfMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_dayOfWeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayOfWeek";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dayOfWeek.c_str(), allocator).Move(), allocator);
    }

    if (m_hourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hour";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hour.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDataRetrievalRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void CreateDataRetrievalRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool CreateDataRetrievalRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string CreateDataRetrievalRequest::GetDataRetrievalName() const
{
    return m_dataRetrievalName;
}

void CreateDataRetrievalRequest::SetDataRetrievalName(const string& _dataRetrievalName)
{
    m_dataRetrievalName = _dataRetrievalName;
    m_dataRetrievalNameHasBeenSet = true;
}

bool CreateDataRetrievalRequest::DataRetrievalNameHasBeenSet() const
{
    return m_dataRetrievalNameHasBeenSet;
}

string CreateDataRetrievalRequest::GetCompoundCondition() const
{
    return m_compoundCondition;
}

void CreateDataRetrievalRequest::SetCompoundCondition(const string& _compoundCondition)
{
    m_compoundCondition = _compoundCondition;
    m_compoundConditionHasBeenSet = true;
}

bool CreateDataRetrievalRequest::CompoundConditionHasBeenSet() const
{
    return m_compoundConditionHasBeenSet;
}

string CreateDataRetrievalRequest::GetQueryCondition() const
{
    return m_queryCondition;
}

void CreateDataRetrievalRequest::SetQueryCondition(const string& _queryCondition)
{
    m_queryCondition = _queryCondition;
    m_queryConditionHasBeenSet = true;
}

bool CreateDataRetrievalRequest::QueryConditionHasBeenSet() const
{
    return m_queryConditionHasBeenSet;
}

string CreateDataRetrievalRequest::GetDayOfMonth() const
{
    return m_dayOfMonth;
}

void CreateDataRetrievalRequest::SetDayOfMonth(const string& _dayOfMonth)
{
    m_dayOfMonth = _dayOfMonth;
    m_dayOfMonthHasBeenSet = true;
}

bool CreateDataRetrievalRequest::DayOfMonthHasBeenSet() const
{
    return m_dayOfMonthHasBeenSet;
}

string CreateDataRetrievalRequest::GetDayOfWeek() const
{
    return m_dayOfWeek;
}

void CreateDataRetrievalRequest::SetDayOfWeek(const string& _dayOfWeek)
{
    m_dayOfWeek = _dayOfWeek;
    m_dayOfWeekHasBeenSet = true;
}

bool CreateDataRetrievalRequest::DayOfWeekHasBeenSet() const
{
    return m_dayOfWeekHasBeenSet;
}

string CreateDataRetrievalRequest::GetHour() const
{
    return m_hour;
}

void CreateDataRetrievalRequest::SetHour(const string& _hour)
{
    m_hour = _hour;
    m_hourHasBeenSet = true;
}

bool CreateDataRetrievalRequest::HourHasBeenSet() const
{
    return m_hourHasBeenSet;
}


