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

#include <tencentcloud/dbbrain/v20210527/model/DescribeMongoDBProcessListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeMongoDBProcessListRequest::DescribeMongoDBProcessListRequest() :
    m_instanceIdHasBeenSet(false),
    m_productHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_dBHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeMongoDBProcessListRequest::ToJsonString() const
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

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_dBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dB.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_time, allocator);
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


string DescribeMongoDBProcessListRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeMongoDBProcessListRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeMongoDBProcessListRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeMongoDBProcessListRequest::GetProduct() const
{
    return m_product;
}

void DescribeMongoDBProcessListRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeMongoDBProcessListRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

uint64_t DescribeMongoDBProcessListRequest::GetID() const
{
    return m_iD;
}

void DescribeMongoDBProcessListRequest::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeMongoDBProcessListRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DescribeMongoDBProcessListRequest::GetHost() const
{
    return m_host;
}

void DescribeMongoDBProcessListRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DescribeMongoDBProcessListRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DescribeMongoDBProcessListRequest::GetDB() const
{
    return m_dB;
}

void DescribeMongoDBProcessListRequest::SetDB(const string& _dB)
{
    m_dB = _dB;
    m_dBHasBeenSet = true;
}

bool DescribeMongoDBProcessListRequest::DBHasBeenSet() const
{
    return m_dBHasBeenSet;
}

string DescribeMongoDBProcessListRequest::GetType() const
{
    return m_type;
}

void DescribeMongoDBProcessListRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeMongoDBProcessListRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t DescribeMongoDBProcessListRequest::GetTime() const
{
    return m_time;
}

void DescribeMongoDBProcessListRequest::SetTime(const uint64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool DescribeMongoDBProcessListRequest::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

uint64_t DescribeMongoDBProcessListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeMongoDBProcessListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeMongoDBProcessListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


