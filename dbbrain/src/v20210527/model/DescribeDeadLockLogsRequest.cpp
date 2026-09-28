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

#include <tencentcloud/dbbrain/v20210527/model/DescribeDeadLockLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeDeadLockLogsRequest::DescribeDeadLockLogsRequest() :
    m_productHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_includeXmlHasBeenSet(false),
    m_resultVersionHasBeenSet(false)
{
}

string DescribeDeadLockLogsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

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
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
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

    if (m_includeXmlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeXml";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeXml, allocator);
    }

    if (m_resultVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resultVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDeadLockLogsRequest::GetProduct() const
{
    return m_product;
}

void DescribeDeadLockLogsRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeDeadLockLogsRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeDeadLockLogsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDeadLockLogsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDeadLockLogsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeDeadLockLogsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDeadLockLogsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDeadLockLogsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDeadLockLogsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDeadLockLogsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDeadLockLogsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeDeadLockLogsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDeadLockLogsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDeadLockLogsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDeadLockLogsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDeadLockLogsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDeadLockLogsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeDeadLockLogsRequest::GetIncludeXml() const
{
    return m_includeXml;
}

void DescribeDeadLockLogsRequest::SetIncludeXml(const bool& _includeXml)
{
    m_includeXml = _includeXml;
    m_includeXmlHasBeenSet = true;
}

bool DescribeDeadLockLogsRequest::IncludeXmlHasBeenSet() const
{
    return m_includeXmlHasBeenSet;
}

string DescribeDeadLockLogsRequest::GetResultVersion() const
{
    return m_resultVersion;
}

void DescribeDeadLockLogsRequest::SetResultVersion(const string& _resultVersion)
{
    m_resultVersion = _resultVersion;
    m_resultVersionHasBeenSet = true;
}

bool DescribeDeadLockLogsRequest::ResultVersionHasBeenSet() const
{
    return m_resultVersionHasBeenSet;
}


