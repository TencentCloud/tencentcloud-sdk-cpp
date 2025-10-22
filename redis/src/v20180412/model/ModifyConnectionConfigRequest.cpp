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

#include <tencentcloud/redis/v20180412/model/ModifyConnectionConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

ModifyConnectionConfigRequest::ModifyConnectionConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_clientLimitHasBeenSet(false)
{
}

string ModifyConnectionConfigRequest::ToJsonString() const
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

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_clientLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clientLimit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyConnectionConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyConnectionConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyConnectionConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyConnectionConfigRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void ModifyConnectionConfigRequest::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool ModifyConnectionConfigRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

int64_t ModifyConnectionConfigRequest::GetClientLimit() const
{
    return m_clientLimit;
}

void ModifyConnectionConfigRequest::SetClientLimit(const int64_t& _clientLimit)
{
    m_clientLimit = _clientLimit;
    m_clientLimitHasBeenSet = true;
}

bool ModifyConnectionConfigRequest::ClientLimitHasBeenSet() const
{
    return m_clientLimitHasBeenSet;
}


