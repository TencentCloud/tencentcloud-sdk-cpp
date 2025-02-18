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

#include <tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessExchangeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

CreateRabbitMQServerlessExchangeRequest::CreateRabbitMQServerlessExchangeRequest() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_exchangeNameHasBeenSet(false),
    m_exchangeTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_durableHasBeenSet(false),
    m_autoDeleteHasBeenSet(false),
    m_internalHasBeenSet(false),
    m_alternateExchangeHasBeenSet(false)
{
}

string CreateRabbitMQServerlessExchangeRequest::ToJsonString() const
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

    if (m_exchangeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_exchangeName.c_str(), allocator).Move(), allocator);
    }

    if (m_exchangeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_exchangeType.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_durableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Durable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_durable, allocator);
    }

    if (m_autoDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoDelete";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoDelete, allocator);
    }

    if (m_internalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Internal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internal, allocator);
    }

    if (m_alternateExchangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlternateExchange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alternateExchange.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRabbitMQServerlessExchangeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateRabbitMQServerlessExchangeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateRabbitMQServerlessExchangeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateRabbitMQServerlessExchangeRequest::GetVirtualHost() const
{
    return m_virtualHost;
}

void CreateRabbitMQServerlessExchangeRequest::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool CreateRabbitMQServerlessExchangeRequest::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string CreateRabbitMQServerlessExchangeRequest::GetExchangeName() const
{
    return m_exchangeName;
}

void CreateRabbitMQServerlessExchangeRequest::SetExchangeName(const string& _exchangeName)
{
    m_exchangeName = _exchangeName;
    m_exchangeNameHasBeenSet = true;
}

bool CreateRabbitMQServerlessExchangeRequest::ExchangeNameHasBeenSet() const
{
    return m_exchangeNameHasBeenSet;
}

string CreateRabbitMQServerlessExchangeRequest::GetExchangeType() const
{
    return m_exchangeType;
}

void CreateRabbitMQServerlessExchangeRequest::SetExchangeType(const string& _exchangeType)
{
    m_exchangeType = _exchangeType;
    m_exchangeTypeHasBeenSet = true;
}

bool CreateRabbitMQServerlessExchangeRequest::ExchangeTypeHasBeenSet() const
{
    return m_exchangeTypeHasBeenSet;
}

string CreateRabbitMQServerlessExchangeRequest::GetRemark() const
{
    return m_remark;
}

void CreateRabbitMQServerlessExchangeRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateRabbitMQServerlessExchangeRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

bool CreateRabbitMQServerlessExchangeRequest::GetDurable() const
{
    return m_durable;
}

void CreateRabbitMQServerlessExchangeRequest::SetDurable(const bool& _durable)
{
    m_durable = _durable;
    m_durableHasBeenSet = true;
}

bool CreateRabbitMQServerlessExchangeRequest::DurableHasBeenSet() const
{
    return m_durableHasBeenSet;
}

bool CreateRabbitMQServerlessExchangeRequest::GetAutoDelete() const
{
    return m_autoDelete;
}

void CreateRabbitMQServerlessExchangeRequest::SetAutoDelete(const bool& _autoDelete)
{
    m_autoDelete = _autoDelete;
    m_autoDeleteHasBeenSet = true;
}

bool CreateRabbitMQServerlessExchangeRequest::AutoDeleteHasBeenSet() const
{
    return m_autoDeleteHasBeenSet;
}

bool CreateRabbitMQServerlessExchangeRequest::GetInternal() const
{
    return m_internal;
}

void CreateRabbitMQServerlessExchangeRequest::SetInternal(const bool& _internal)
{
    m_internal = _internal;
    m_internalHasBeenSet = true;
}

bool CreateRabbitMQServerlessExchangeRequest::InternalHasBeenSet() const
{
    return m_internalHasBeenSet;
}

string CreateRabbitMQServerlessExchangeRequest::GetAlternateExchange() const
{
    return m_alternateExchange;
}

void CreateRabbitMQServerlessExchangeRequest::SetAlternateExchange(const string& _alternateExchange)
{
    m_alternateExchange = _alternateExchange;
    m_alternateExchangeHasBeenSet = true;
}

bool CreateRabbitMQServerlessExchangeRequest::AlternateExchangeHasBeenSet() const
{
    return m_alternateExchangeHasBeenSet;
}


