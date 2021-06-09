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

#include <tencentcloud/sqlserver/v20180328/model/DescribePublishSubscribeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribePublishSubscribeRequest::DescribePublishSubscribeRequest() :
    m_instanceIdHasBeenSet(false),
    m_pubOrSubInstanceIdHasBeenSet(false),
    m_pubOrSubInstanceIpHasBeenSet(false),
    m_publishSubscribeIdHasBeenSet(false),
    m_publishSubscribeNameHasBeenSet(false),
    m_publishDBNameHasBeenSet(false),
    m_subscribeDBNameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribePublishSubscribeRequest::ToJsonString() const
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

    if (m_pubOrSubInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PubOrSubInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pubOrSubInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_pubOrSubInstanceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PubOrSubInstanceIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pubOrSubInstanceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publishSubscribeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishSubscribeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_publishSubscribeId, allocator);
    }

    if (m_publishSubscribeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishSubscribeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publishSubscribeName.c_str(), allocator).Move(), allocator);
    }

    if (m_publishDBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishDBName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publishDBName.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeDBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeDBName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscribeDBName.c_str(), allocator).Move(), allocator);
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


string DescribePublishSubscribeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribePublishSubscribeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribePublishSubscribeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribePublishSubscribeRequest::GetPubOrSubInstanceId() const
{
    return m_pubOrSubInstanceId;
}

void DescribePublishSubscribeRequest::SetPubOrSubInstanceId(const string& _pubOrSubInstanceId)
{
    m_pubOrSubInstanceId = _pubOrSubInstanceId;
    m_pubOrSubInstanceIdHasBeenSet = true;
}

bool DescribePublishSubscribeRequest::PubOrSubInstanceIdHasBeenSet() const
{
    return m_pubOrSubInstanceIdHasBeenSet;
}

string DescribePublishSubscribeRequest::GetPubOrSubInstanceIp() const
{
    return m_pubOrSubInstanceIp;
}

void DescribePublishSubscribeRequest::SetPubOrSubInstanceIp(const string& _pubOrSubInstanceIp)
{
    m_pubOrSubInstanceIp = _pubOrSubInstanceIp;
    m_pubOrSubInstanceIpHasBeenSet = true;
}

bool DescribePublishSubscribeRequest::PubOrSubInstanceIpHasBeenSet() const
{
    return m_pubOrSubInstanceIpHasBeenSet;
}

uint64_t DescribePublishSubscribeRequest::GetPublishSubscribeId() const
{
    return m_publishSubscribeId;
}

void DescribePublishSubscribeRequest::SetPublishSubscribeId(const uint64_t& _publishSubscribeId)
{
    m_publishSubscribeId = _publishSubscribeId;
    m_publishSubscribeIdHasBeenSet = true;
}

bool DescribePublishSubscribeRequest::PublishSubscribeIdHasBeenSet() const
{
    return m_publishSubscribeIdHasBeenSet;
}

string DescribePublishSubscribeRequest::GetPublishSubscribeName() const
{
    return m_publishSubscribeName;
}

void DescribePublishSubscribeRequest::SetPublishSubscribeName(const string& _publishSubscribeName)
{
    m_publishSubscribeName = _publishSubscribeName;
    m_publishSubscribeNameHasBeenSet = true;
}

bool DescribePublishSubscribeRequest::PublishSubscribeNameHasBeenSet() const
{
    return m_publishSubscribeNameHasBeenSet;
}

string DescribePublishSubscribeRequest::GetPublishDBName() const
{
    return m_publishDBName;
}

void DescribePublishSubscribeRequest::SetPublishDBName(const string& _publishDBName)
{
    m_publishDBName = _publishDBName;
    m_publishDBNameHasBeenSet = true;
}

bool DescribePublishSubscribeRequest::PublishDBNameHasBeenSet() const
{
    return m_publishDBNameHasBeenSet;
}

string DescribePublishSubscribeRequest::GetSubscribeDBName() const
{
    return m_subscribeDBName;
}

void DescribePublishSubscribeRequest::SetSubscribeDBName(const string& _subscribeDBName)
{
    m_subscribeDBName = _subscribeDBName;
    m_subscribeDBNameHasBeenSet = true;
}

bool DescribePublishSubscribeRequest::SubscribeDBNameHasBeenSet() const
{
    return m_subscribeDBNameHasBeenSet;
}

uint64_t DescribePublishSubscribeRequest::GetOffset() const
{
    return m_offset;
}

void DescribePublishSubscribeRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribePublishSubscribeRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribePublishSubscribeRequest::GetLimit() const
{
    return m_limit;
}

void DescribePublishSubscribeRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribePublishSubscribeRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


