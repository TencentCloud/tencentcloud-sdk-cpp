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

#include <tencentcloud/emr/v20190103/model/DescribeInstanceOplogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeInstanceOplogRequest::DescribeInstanceOplogRequest() :
    m_instanceIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_searchFieldsHasBeenSet(false),
    m_operandHasBeenSet(false),
    m_securityLevelHasBeenSet(false)
{
}

string DescribeInstanceOplogRequest::ToJsonString() const
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

    if (m_searchFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_searchFields.begin(); itr != m_searchFields.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_operandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operand";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operand.c_str(), allocator).Move(), allocator);
    }

    if (m_securityLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityLevel.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstanceOplogRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeInstanceOplogRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeInstanceOplogRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeInstanceOplogRequest::GetOffset() const
{
    return m_offset;
}

void DescribeInstanceOplogRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeInstanceOplogRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeInstanceOplogRequest::GetLimit() const
{
    return m_limit;
}

void DescribeInstanceOplogRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeInstanceOplogRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeInstanceOplogRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeInstanceOplogRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeInstanceOplogRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeInstanceOplogRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeInstanceOplogRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeInstanceOplogRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<SearchItem> DescribeInstanceOplogRequest::GetSearchFields() const
{
    return m_searchFields;
}

void DescribeInstanceOplogRequest::SetSearchFields(const vector<SearchItem>& _searchFields)
{
    m_searchFields = _searchFields;
    m_searchFieldsHasBeenSet = true;
}

bool DescribeInstanceOplogRequest::SearchFieldsHasBeenSet() const
{
    return m_searchFieldsHasBeenSet;
}

string DescribeInstanceOplogRequest::GetOperand() const
{
    return m_operand;
}

void DescribeInstanceOplogRequest::SetOperand(const string& _operand)
{
    m_operand = _operand;
    m_operandHasBeenSet = true;
}

bool DescribeInstanceOplogRequest::OperandHasBeenSet() const
{
    return m_operandHasBeenSet;
}

string DescribeInstanceOplogRequest::GetSecurityLevel() const
{
    return m_securityLevel;
}

void DescribeInstanceOplogRequest::SetSecurityLevel(const string& _securityLevel)
{
    m_securityLevel = _securityLevel;
    m_securityLevelHasBeenSet = true;
}

bool DescribeInstanceOplogRequest::SecurityLevelHasBeenSet() const
{
    return m_securityLevelHasBeenSet;
}


