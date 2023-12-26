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

#include <tencentcloud/cat/v20180409/model/DescribeDetailedSingleProbeDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

DescribeDetailedSingleProbeDataRequest::DescribeDetailedSingleProbeDataRequest() :
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_sortFieldHasBeenSet(false),
    m_ascendingHasBeenSet(false),
    m_selectedFieldsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_taskIDHasBeenSet(false),
    m_operatorsHasBeenSet(false),
    m_districtsHasBeenSet(false),
    m_errorTypesHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_scrollIDHasBeenSet(false),
    m_queryFlagHasBeenSet(false)
{
}

string DescribeDetailedSingleProbeDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_beginTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_sortFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortField.c_str(), allocator).Move(), allocator);
    }

    if (m_ascendingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ascending";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ascending, allocator);
    }

    if (m_selectedFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_selectedFields.begin(); itr != m_selectedFields.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskID.begin(); itr != m_taskID.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operatorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operators";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operators.begin(); itr != m_operators.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_districtsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Districts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_districts.begin(); itr != m_districts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_errorTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_errorTypes.begin(); itr != m_errorTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_city.begin(); itr != m_city.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scrollIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrollID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scrollID.c_str(), allocator).Move(), allocator);
    }

    if (m_queryFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryFlag.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeDetailedSingleProbeDataRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeDetailedSingleProbeDataRequest::SetBeginTime(const uint64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeDetailedSingleProbeDataRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

uint64_t DescribeDetailedSingleProbeDataRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDetailedSingleProbeDataRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDetailedSingleProbeDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeDetailedSingleProbeDataRequest::GetTaskType() const
{
    return m_taskType;
}

void DescribeDetailedSingleProbeDataRequest::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DescribeDetailedSingleProbeDataRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string DescribeDetailedSingleProbeDataRequest::GetSortField() const
{
    return m_sortField;
}

void DescribeDetailedSingleProbeDataRequest::SetSortField(const string& _sortField)
{
    m_sortField = _sortField;
    m_sortFieldHasBeenSet = true;
}

bool DescribeDetailedSingleProbeDataRequest::SortFieldHasBeenSet() const
{
    return m_sortFieldHasBeenSet;
}

bool DescribeDetailedSingleProbeDataRequest::GetAscending() const
{
    return m_ascending;
}

void DescribeDetailedSingleProbeDataRequest::SetAscending(const bool& _ascending)
{
    m_ascending = _ascending;
    m_ascendingHasBeenSet = true;
}

bool DescribeDetailedSingleProbeDataRequest::AscendingHasBeenSet() const
{
    return m_ascendingHasBeenSet;
}

vector<string> DescribeDetailedSingleProbeDataRequest::GetSelectedFields() const
{
    return m_selectedFields;
}

void DescribeDetailedSingleProbeDataRequest::SetSelectedFields(const vector<string>& _selectedFields)
{
    m_selectedFields = _selectedFields;
    m_selectedFieldsHasBeenSet = true;
}

bool DescribeDetailedSingleProbeDataRequest::SelectedFieldsHasBeenSet() const
{
    return m_selectedFieldsHasBeenSet;
}

int64_t DescribeDetailedSingleProbeDataRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDetailedSingleProbeDataRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDetailedSingleProbeDataRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDetailedSingleProbeDataRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDetailedSingleProbeDataRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDetailedSingleProbeDataRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeDetailedSingleProbeDataRequest::GetTaskID() const
{
    return m_taskID;
}

void DescribeDetailedSingleProbeDataRequest::SetTaskID(const vector<string>& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool DescribeDetailedSingleProbeDataRequest::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

vector<string> DescribeDetailedSingleProbeDataRequest::GetOperators() const
{
    return m_operators;
}

void DescribeDetailedSingleProbeDataRequest::SetOperators(const vector<string>& _operators)
{
    m_operators = _operators;
    m_operatorsHasBeenSet = true;
}

bool DescribeDetailedSingleProbeDataRequest::OperatorsHasBeenSet() const
{
    return m_operatorsHasBeenSet;
}

vector<string> DescribeDetailedSingleProbeDataRequest::GetDistricts() const
{
    return m_districts;
}

void DescribeDetailedSingleProbeDataRequest::SetDistricts(const vector<string>& _districts)
{
    m_districts = _districts;
    m_districtsHasBeenSet = true;
}

bool DescribeDetailedSingleProbeDataRequest::DistrictsHasBeenSet() const
{
    return m_districtsHasBeenSet;
}

vector<string> DescribeDetailedSingleProbeDataRequest::GetErrorTypes() const
{
    return m_errorTypes;
}

void DescribeDetailedSingleProbeDataRequest::SetErrorTypes(const vector<string>& _errorTypes)
{
    m_errorTypes = _errorTypes;
    m_errorTypesHasBeenSet = true;
}

bool DescribeDetailedSingleProbeDataRequest::ErrorTypesHasBeenSet() const
{
    return m_errorTypesHasBeenSet;
}

vector<string> DescribeDetailedSingleProbeDataRequest::GetCity() const
{
    return m_city;
}

void DescribeDetailedSingleProbeDataRequest::SetCity(const vector<string>& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool DescribeDetailedSingleProbeDataRequest::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string DescribeDetailedSingleProbeDataRequest::GetScrollID() const
{
    return m_scrollID;
}

void DescribeDetailedSingleProbeDataRequest::SetScrollID(const string& _scrollID)
{
    m_scrollID = _scrollID;
    m_scrollIDHasBeenSet = true;
}

bool DescribeDetailedSingleProbeDataRequest::ScrollIDHasBeenSet() const
{
    return m_scrollIDHasBeenSet;
}

string DescribeDetailedSingleProbeDataRequest::GetQueryFlag() const
{
    return m_queryFlag;
}

void DescribeDetailedSingleProbeDataRequest::SetQueryFlag(const string& _queryFlag)
{
    m_queryFlag = _queryFlag;
    m_queryFlagHasBeenSet = true;
}

bool DescribeDetailedSingleProbeDataRequest::QueryFlagHasBeenSet() const
{
    return m_queryFlagHasBeenSet;
}


