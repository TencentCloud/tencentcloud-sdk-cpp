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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeTWeTalkAgentListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeTWeTalkAgentListRequest::DescribeTWeTalkAgentListRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_bindingScopeHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeTWeTalkAgentListRequest::ToJsonString() const
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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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


string DescribeTWeTalkAgentListRequest::GetProductId() const
{
    return m_productId;
}

void DescribeTWeTalkAgentListRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeTWeTalkAgentListRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeTWeTalkAgentListRequest::GetDeviceName() const
{
    return m_deviceName;
}

void DescribeTWeTalkAgentListRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DescribeTWeTalkAgentListRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DescribeTWeTalkAgentListRequest::GetBindingScope() const
{
    return m_bindingScope;
}

void DescribeTWeTalkAgentListRequest::SetBindingScope(const string& _bindingScope)
{
    m_bindingScope = _bindingScope;
    m_bindingScopeHasBeenSet = true;
}

bool DescribeTWeTalkAgentListRequest::BindingScopeHasBeenSet() const
{
    return m_bindingScopeHasBeenSet;
}

string DescribeTWeTalkAgentListRequest::GetAgentId() const
{
    return m_agentId;
}

void DescribeTWeTalkAgentListRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool DescribeTWeTalkAgentListRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string DescribeTWeTalkAgentListRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeTWeTalkAgentListRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeTWeTalkAgentListRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeTWeTalkAgentListRequest::GetName() const
{
    return m_name;
}

void DescribeTWeTalkAgentListRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeTWeTalkAgentListRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DescribeTWeTalkAgentListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTWeTalkAgentListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTWeTalkAgentListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeTWeTalkAgentListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTWeTalkAgentListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTWeTalkAgentListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


