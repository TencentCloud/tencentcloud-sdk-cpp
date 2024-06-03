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

#include <tencentcloud/tsf/v20180326/model/DescribeStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeStatisticsRequest::DescribeStatisticsRequest() :
    m_typeHasBeenSet(false),
    m_timeStepHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_searchWordHasBeenSet(false),
    m_metricDimensionValuesHasBeenSet(false),
    m_bucketKeyHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_namespaceIdListHasBeenSet(false),
    m_configCenterInstanceIdHasBeenSet(false)
{
}

string DescribeStatisticsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_timeStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeStep";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeStep, allocator);
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

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderType, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_searchWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }

    if (m_metricDimensionValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricDimensionValues";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metricDimensionValues.begin(); itr != m_metricDimensionValues.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_bucketKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketKey.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_namespaceIdList.begin(); itr != m_namespaceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_configCenterInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigCenterInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configCenterInstanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStatisticsRequest::GetType() const
{
    return m_type;
}

void DescribeStatisticsRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeStatisticsRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t DescribeStatisticsRequest::GetTimeStep() const
{
    return m_timeStep;
}

void DescribeStatisticsRequest::SetTimeStep(const uint64_t& _timeStep)
{
    m_timeStep = _timeStep;
    m_timeStepHasBeenSet = true;
}

bool DescribeStatisticsRequest::TimeStepHasBeenSet() const
{
    return m_timeStepHasBeenSet;
}

uint64_t DescribeStatisticsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeStatisticsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeStatisticsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeStatisticsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeStatisticsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeStatisticsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeStatisticsRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void DescribeStatisticsRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool DescribeStatisticsRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string DescribeStatisticsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeStatisticsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeStatisticsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

uint64_t DescribeStatisticsRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeStatisticsRequest::SetOrderType(const uint64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeStatisticsRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string DescribeStatisticsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeStatisticsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeStatisticsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeStatisticsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeStatisticsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeStatisticsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeStatisticsRequest::GetServiceName() const
{
    return m_serviceName;
}

void DescribeStatisticsRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool DescribeStatisticsRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string DescribeStatisticsRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeStatisticsRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeStatisticsRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

vector<MetricDimensionValue> DescribeStatisticsRequest::GetMetricDimensionValues() const
{
    return m_metricDimensionValues;
}

void DescribeStatisticsRequest::SetMetricDimensionValues(const vector<MetricDimensionValue>& _metricDimensionValues)
{
    m_metricDimensionValues = _metricDimensionValues;
    m_metricDimensionValuesHasBeenSet = true;
}

bool DescribeStatisticsRequest::MetricDimensionValuesHasBeenSet() const
{
    return m_metricDimensionValuesHasBeenSet;
}

string DescribeStatisticsRequest::GetBucketKey() const
{
    return m_bucketKey;
}

void DescribeStatisticsRequest::SetBucketKey(const string& _bucketKey)
{
    m_bucketKey = _bucketKey;
    m_bucketKeyHasBeenSet = true;
}

bool DescribeStatisticsRequest::BucketKeyHasBeenSet() const
{
    return m_bucketKeyHasBeenSet;
}

string DescribeStatisticsRequest::GetDbName() const
{
    return m_dbName;
}

void DescribeStatisticsRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DescribeStatisticsRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

vector<string> DescribeStatisticsRequest::GetNamespaceIdList() const
{
    return m_namespaceIdList;
}

void DescribeStatisticsRequest::SetNamespaceIdList(const vector<string>& _namespaceIdList)
{
    m_namespaceIdList = _namespaceIdList;
    m_namespaceIdListHasBeenSet = true;
}

bool DescribeStatisticsRequest::NamespaceIdListHasBeenSet() const
{
    return m_namespaceIdListHasBeenSet;
}

string DescribeStatisticsRequest::GetConfigCenterInstanceId() const
{
    return m_configCenterInstanceId;
}

void DescribeStatisticsRequest::SetConfigCenterInstanceId(const string& _configCenterInstanceId)
{
    m_configCenterInstanceId = _configCenterInstanceId;
    m_configCenterInstanceIdHasBeenSet = true;
}

bool DescribeStatisticsRequest::ConfigCenterInstanceIdHasBeenSet() const
{
    return m_configCenterInstanceIdHasBeenSet;
}


