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

#include <tencentcloud/iotexplorer/v20190423/model/GetTWeTalkAIBotListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

GetTWeTalkAIBotListRequest::GetTWeTalkAIBotListRequest() :
    m_botIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_includeCredentialsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string GetTWeTalkAIBotListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_botIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_includeCredentialsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeCredentials";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeCredentials, allocator);
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


string GetTWeTalkAIBotListRequest::GetBotId() const
{
    return m_botId;
}

void GetTWeTalkAIBotListRequest::SetBotId(const string& _botId)
{
    m_botId = _botId;
    m_botIdHasBeenSet = true;
}

bool GetTWeTalkAIBotListRequest::BotIdHasBeenSet() const
{
    return m_botIdHasBeenSet;
}

string GetTWeTalkAIBotListRequest::GetName() const
{
    return m_name;
}

void GetTWeTalkAIBotListRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GetTWeTalkAIBotListRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GetTWeTalkAIBotListRequest::GetProductId() const
{
    return m_productId;
}

void GetTWeTalkAIBotListRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool GetTWeTalkAIBotListRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string GetTWeTalkAIBotListRequest::GetInstanceId() const
{
    return m_instanceId;
}

void GetTWeTalkAIBotListRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool GetTWeTalkAIBotListRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool GetTWeTalkAIBotListRequest::GetIncludeCredentials() const
{
    return m_includeCredentials;
}

void GetTWeTalkAIBotListRequest::SetIncludeCredentials(const bool& _includeCredentials)
{
    m_includeCredentials = _includeCredentials;
    m_includeCredentialsHasBeenSet = true;
}

bool GetTWeTalkAIBotListRequest::IncludeCredentialsHasBeenSet() const
{
    return m_includeCredentialsHasBeenSet;
}

uint64_t GetTWeTalkAIBotListRequest::GetOffset() const
{
    return m_offset;
}

void GetTWeTalkAIBotListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetTWeTalkAIBotListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t GetTWeTalkAIBotListRequest::GetLimit() const
{
    return m_limit;
}

void GetTWeTalkAIBotListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetTWeTalkAIBotListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


