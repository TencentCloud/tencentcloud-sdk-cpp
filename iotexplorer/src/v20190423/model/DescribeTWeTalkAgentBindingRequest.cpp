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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeTWeTalkAgentBindingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeTWeTalkAgentBindingRequest::DescribeTWeTalkAgentBindingRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_bindingScopeHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeTWeTalkAgentBindingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_bindingScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindingScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bindingScope.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
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


string DescribeTWeTalkAgentBindingRequest::GetProductId() const
{
    return m_productId;
}

void DescribeTWeTalkAgentBindingRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeTWeTalkAgentBindingRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeTWeTalkAgentBindingRequest::GetDeviceName() const
{
    return m_deviceName;
}

void DescribeTWeTalkAgentBindingRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DescribeTWeTalkAgentBindingRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DescribeTWeTalkAgentBindingRequest::GetBindingScope() const
{
    return m_bindingScope;
}

void DescribeTWeTalkAgentBindingRequest::SetBindingScope(const string& _bindingScope)
{
    m_bindingScope = _bindingScope;
    m_bindingScopeHasBeenSet = true;
}

bool DescribeTWeTalkAgentBindingRequest::BindingScopeHasBeenSet() const
{
    return m_bindingScopeHasBeenSet;
}

string DescribeTWeTalkAgentBindingRequest::GetAgentId() const
{
    return m_agentId;
}

void DescribeTWeTalkAgentBindingRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool DescribeTWeTalkAgentBindingRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

uint64_t DescribeTWeTalkAgentBindingRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTWeTalkAgentBindingRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTWeTalkAgentBindingRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeTWeTalkAgentBindingRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTWeTalkAgentBindingRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTWeTalkAgentBindingRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


