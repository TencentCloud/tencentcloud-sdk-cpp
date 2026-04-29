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

#include <tencentcloud/ioa/v20220601/model/DescribeBusinessResourcesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeBusinessResourcesRequest::DescribeBusinessResourcesRequest() :
    m_areaIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_frontAddrHasBeenSet(false)
{
}

string DescribeBusinessResourcesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_areaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_areaId, allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keywords.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_condition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_frontAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontAddr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_frontAddr.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeBusinessResourcesRequest::GetAreaId() const
{
    return m_areaId;
}

void DescribeBusinessResourcesRequest::SetAreaId(const int64_t& _areaId)
{
    m_areaId = _areaId;
    m_areaIdHasBeenSet = true;
}

bool DescribeBusinessResourcesRequest::AreaIdHasBeenSet() const
{
    return m_areaIdHasBeenSet;
}

string DescribeBusinessResourcesRequest::GetServiceName() const
{
    return m_serviceName;
}

void DescribeBusinessResourcesRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool DescribeBusinessResourcesRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string DescribeBusinessResourcesRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeBusinessResourcesRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeBusinessResourcesRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeBusinessResourcesRequest::GetKeywords() const
{
    return m_keywords;
}

void DescribeBusinessResourcesRequest::SetKeywords(const string& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool DescribeBusinessResourcesRequest::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

string DescribeBusinessResourcesRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeBusinessResourcesRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeBusinessResourcesRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

Condition DescribeBusinessResourcesRequest::GetCondition() const
{
    return m_condition;
}

void DescribeBusinessResourcesRequest::SetCondition(const Condition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool DescribeBusinessResourcesRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

string DescribeBusinessResourcesRequest::GetAccessType() const
{
    return m_accessType;
}

void DescribeBusinessResourcesRequest::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool DescribeBusinessResourcesRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string DescribeBusinessResourcesRequest::GetFrontAddr() const
{
    return m_frontAddr;
}

void DescribeBusinessResourcesRequest::SetFrontAddr(const string& _frontAddr)
{
    m_frontAddr = _frontAddr;
    m_frontAddrHasBeenSet = true;
}

bool DescribeBusinessResourcesRequest::FrontAddrHasBeenSet() const
{
    return m_frontAddrHasBeenSet;
}


