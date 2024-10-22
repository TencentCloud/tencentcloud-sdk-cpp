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

#include <tencentcloud/tdmq/v20200217/model/DeleteRabbitMQBindingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DeleteRabbitMQBindingRequest::DeleteRabbitMQBindingRequest() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_bindingIdHasBeenSet(false)
{
}

string DeleteRabbitMQBindingRequest::ToJsonString() const
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

    if (m_virtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_virtualHost.c_str(), allocator).Move(), allocator);
    }

    if (m_bindingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindingId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bindingId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteRabbitMQBindingRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeleteRabbitMQBindingRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeleteRabbitMQBindingRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DeleteRabbitMQBindingRequest::GetVirtualHost() const
{
    return m_virtualHost;
}

void DeleteRabbitMQBindingRequest::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool DeleteRabbitMQBindingRequest::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

int64_t DeleteRabbitMQBindingRequest::GetBindingId() const
{
    return m_bindingId;
}

void DeleteRabbitMQBindingRequest::SetBindingId(const int64_t& _bindingId)
{
    m_bindingId = _bindingId;
    m_bindingIdHasBeenSet = true;
}

bool DeleteRabbitMQBindingRequest::BindingIdHasBeenSet() const
{
    return m_bindingIdHasBeenSet;
}


