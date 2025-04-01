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

#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogQueryTimeStatsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeSlowLogQueryTimeStatsRequest::DescribeSlowLogQueryTimeStatsRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_productHasBeenSet(false),
    m_instanceProxyIdHasBeenSet(false),
    m_instanceNodeIdHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string DescribeSlowLogQueryTimeStatsRequest::ToJsonString() const
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
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceProxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceProxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSlowLogQueryTimeStatsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeSlowLogQueryTimeStatsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeSlowLogQueryTimeStatsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeSlowLogQueryTimeStatsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeSlowLogQueryTimeStatsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeSlowLogQueryTimeStatsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeSlowLogQueryTimeStatsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeSlowLogQueryTimeStatsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeSlowLogQueryTimeStatsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeSlowLogQueryTimeStatsRequest::GetProduct() const
{
    return m_product;
}

void DescribeSlowLogQueryTimeStatsRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeSlowLogQueryTimeStatsRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeSlowLogQueryTimeStatsRequest::GetInstanceProxyId() const
{
    return m_instanceProxyId;
}

void DescribeSlowLogQueryTimeStatsRequest::SetInstanceProxyId(const string& _instanceProxyId)
{
    m_instanceProxyId = _instanceProxyId;
    m_instanceProxyIdHasBeenSet = true;
}

bool DescribeSlowLogQueryTimeStatsRequest::InstanceProxyIdHasBeenSet() const
{
    return m_instanceProxyIdHasBeenSet;
}

string DescribeSlowLogQueryTimeStatsRequest::GetInstanceNodeId() const
{
    return m_instanceNodeId;
}

void DescribeSlowLogQueryTimeStatsRequest::SetInstanceNodeId(const string& _instanceNodeId)
{
    m_instanceNodeId = _instanceNodeId;
    m_instanceNodeIdHasBeenSet = true;
}

bool DescribeSlowLogQueryTimeStatsRequest::InstanceNodeIdHasBeenSet() const
{
    return m_instanceNodeIdHasBeenSet;
}

string DescribeSlowLogQueryTimeStatsRequest::GetType() const
{
    return m_type;
}

void DescribeSlowLogQueryTimeStatsRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeSlowLogQueryTimeStatsRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


