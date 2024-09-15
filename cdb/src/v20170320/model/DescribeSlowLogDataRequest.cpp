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

#include <tencentcloud/cdb/v20170320/model/DescribeSlowLogDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeSlowLogDataRequest::DescribeSlowLogDataRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_userHostsHasBeenSet(false),
    m_userNamesHasBeenSet(false),
    m_dataBasesHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_instTypeHasBeenSet(false),
    m_opResourceIdHasBeenSet(false)
{
}

string DescribeSlowLogDataRequest::ToJsonString() const
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

    if (m_userHostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserHosts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userHosts.begin(); itr != m_userHosts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userNames.begin(); itr != m_userNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataBasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBases";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataBases.begin(); itr != m_dataBases.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sortByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
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

    if (m_instTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instType.c_str(), allocator).Move(), allocator);
    }

    if (m_opResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_opResourceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSlowLogDataRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeSlowLogDataRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeSlowLogDataRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DescribeSlowLogDataRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeSlowLogDataRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeSlowLogDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeSlowLogDataRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeSlowLogDataRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeSlowLogDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeSlowLogDataRequest::GetUserHosts() const
{
    return m_userHosts;
}

void DescribeSlowLogDataRequest::SetUserHosts(const vector<string>& _userHosts)
{
    m_userHosts = _userHosts;
    m_userHostsHasBeenSet = true;
}

bool DescribeSlowLogDataRequest::UserHostsHasBeenSet() const
{
    return m_userHostsHasBeenSet;
}

vector<string> DescribeSlowLogDataRequest::GetUserNames() const
{
    return m_userNames;
}

void DescribeSlowLogDataRequest::SetUserNames(const vector<string>& _userNames)
{
    m_userNames = _userNames;
    m_userNamesHasBeenSet = true;
}

bool DescribeSlowLogDataRequest::UserNamesHasBeenSet() const
{
    return m_userNamesHasBeenSet;
}

vector<string> DescribeSlowLogDataRequest::GetDataBases() const
{
    return m_dataBases;
}

void DescribeSlowLogDataRequest::SetDataBases(const vector<string>& _dataBases)
{
    m_dataBases = _dataBases;
    m_dataBasesHasBeenSet = true;
}

bool DescribeSlowLogDataRequest::DataBasesHasBeenSet() const
{
    return m_dataBasesHasBeenSet;
}

string DescribeSlowLogDataRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeSlowLogDataRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeSlowLogDataRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

string DescribeSlowLogDataRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeSlowLogDataRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeSlowLogDataRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

int64_t DescribeSlowLogDataRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSlowLogDataRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSlowLogDataRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeSlowLogDataRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSlowLogDataRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSlowLogDataRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeSlowLogDataRequest::GetInstType() const
{
    return m_instType;
}

void DescribeSlowLogDataRequest::SetInstType(const string& _instType)
{
    m_instType = _instType;
    m_instTypeHasBeenSet = true;
}

bool DescribeSlowLogDataRequest::InstTypeHasBeenSet() const
{
    return m_instTypeHasBeenSet;
}

string DescribeSlowLogDataRequest::GetOpResourceId() const
{
    return m_opResourceId;
}

void DescribeSlowLogDataRequest::SetOpResourceId(const string& _opResourceId)
{
    m_opResourceId = _opResourceId;
    m_opResourceIdHasBeenSet = true;
}

bool DescribeSlowLogDataRequest::OpResourceIdHasBeenSet() const
{
    return m_opResourceIdHasBeenSet;
}


