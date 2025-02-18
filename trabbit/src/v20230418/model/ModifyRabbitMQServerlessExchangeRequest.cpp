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

#include <tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessExchangeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

ModifyRabbitMQServerlessExchangeRequest::ModifyRabbitMQServerlessExchangeRequest() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_exchangeNameHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyRabbitMQServerlessExchangeRequest::ToJsonString() const
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRabbitMQServerlessExchangeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyRabbitMQServerlessExchangeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyRabbitMQServerlessExchangeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyRabbitMQServerlessExchangeRequest::GetVirtualHost() const
{
    return m_virtualHost;
}

void ModifyRabbitMQServerlessExchangeRequest::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool ModifyRabbitMQServerlessExchangeRequest::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string ModifyRabbitMQServerlessExchangeRequest::GetExchangeName() const
{
    return m_exchangeName;
}

void ModifyRabbitMQServerlessExchangeRequest::SetExchangeName(const string& _exchangeName)
{
    m_exchangeName = _exchangeName;
    m_exchangeNameHasBeenSet = true;
}

bool ModifyRabbitMQServerlessExchangeRequest::ExchangeNameHasBeenSet() const
{
    return m_exchangeNameHasBeenSet;
}

string ModifyRabbitMQServerlessExchangeRequest::GetRemark() const
{
    return m_remark;
}

void ModifyRabbitMQServerlessExchangeRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyRabbitMQServerlessExchangeRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


