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

#include <tencentcloud/emr/v20190103/model/DescribeEmrApplicationStaticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeEmrApplicationStaticsRequest::DescribeEmrApplicationStaticsRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_queuesHasBeenSet(false),
    m_usersHasBeenSet(false),
    m_applicationTypesHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_isAscHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeEmrApplicationStaticsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_queuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queues";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_queues.begin(); itr != m_queues.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_usersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Users";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_users.begin(); itr != m_users.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_applicationTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_applicationTypes.begin(); itr != m_applicationTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupBy.begin(); itr != m_groupBy.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_isAscHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAsc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAsc, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeEmrApplicationStaticsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeEmrApplicationStaticsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeEmrApplicationStaticsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeEmrApplicationStaticsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeEmrApplicationStaticsRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeEmrApplicationStaticsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeEmrApplicationStaticsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeEmrApplicationStaticsRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeEmrApplicationStaticsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeEmrApplicationStaticsRequest::GetQueues() const
{
    return m_queues;
}

void DescribeEmrApplicationStaticsRequest::SetQueues(const vector<string>& _queues)
{
    m_queues = _queues;
    m_queuesHasBeenSet = true;
}

bool DescribeEmrApplicationStaticsRequest::QueuesHasBeenSet() const
{
    return m_queuesHasBeenSet;
}

vector<string> DescribeEmrApplicationStaticsRequest::GetUsers() const
{
    return m_users;
}

void DescribeEmrApplicationStaticsRequest::SetUsers(const vector<string>& _users)
{
    m_users = _users;
    m_usersHasBeenSet = true;
}

bool DescribeEmrApplicationStaticsRequest::UsersHasBeenSet() const
{
    return m_usersHasBeenSet;
}

vector<string> DescribeEmrApplicationStaticsRequest::GetApplicationTypes() const
{
    return m_applicationTypes;
}

void DescribeEmrApplicationStaticsRequest::SetApplicationTypes(const vector<string>& _applicationTypes)
{
    m_applicationTypes = _applicationTypes;
    m_applicationTypesHasBeenSet = true;
}

bool DescribeEmrApplicationStaticsRequest::ApplicationTypesHasBeenSet() const
{
    return m_applicationTypesHasBeenSet;
}

vector<string> DescribeEmrApplicationStaticsRequest::GetGroupBy() const
{
    return m_groupBy;
}

void DescribeEmrApplicationStaticsRequest::SetGroupBy(const vector<string>& _groupBy)
{
    m_groupBy = _groupBy;
    m_groupByHasBeenSet = true;
}

bool DescribeEmrApplicationStaticsRequest::GroupByHasBeenSet() const
{
    return m_groupByHasBeenSet;
}

string DescribeEmrApplicationStaticsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeEmrApplicationStaticsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeEmrApplicationStaticsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

int64_t DescribeEmrApplicationStaticsRequest::GetIsAsc() const
{
    return m_isAsc;
}

void DescribeEmrApplicationStaticsRequest::SetIsAsc(const int64_t& _isAsc)
{
    m_isAsc = _isAsc;
    m_isAscHasBeenSet = true;
}

bool DescribeEmrApplicationStaticsRequest::IsAscHasBeenSet() const
{
    return m_isAscHasBeenSet;
}

int64_t DescribeEmrApplicationStaticsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeEmrApplicationStaticsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeEmrApplicationStaticsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeEmrApplicationStaticsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeEmrApplicationStaticsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeEmrApplicationStaticsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


