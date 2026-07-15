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

#include <tencentcloud/iotexplorer/v20190423/model/TalkAgentBinding.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkAgentBinding::TalkAgentBinding() :
    m_bindingScopeHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome TalkAgentBinding::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BindingScope") && !value["BindingScope"].IsNull())
    {
        if (!value["BindingScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentBinding.BindingScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindingScope = string(value["BindingScope"].GetString());
        m_bindingScopeHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentBinding.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentBinding.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentBinding.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentBinding.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentBinding.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentBinding.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkAgentBinding::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bindingScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindingScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindingScope.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string TalkAgentBinding::GetBindingScope() const
{
    return m_bindingScope;
}

void TalkAgentBinding::SetBindingScope(const string& _bindingScope)
{
    m_bindingScope = _bindingScope;
    m_bindingScopeHasBeenSet = true;
}

bool TalkAgentBinding::BindingScopeHasBeenSet() const
{
    return m_bindingScopeHasBeenSet;
}

string TalkAgentBinding::GetProductId() const
{
    return m_productId;
}

void TalkAgentBinding::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool TalkAgentBinding::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string TalkAgentBinding::GetDeviceName() const
{
    return m_deviceName;
}

void TalkAgentBinding::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool TalkAgentBinding::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string TalkAgentBinding::GetAgentId() const
{
    return m_agentId;
}

void TalkAgentBinding::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool TalkAgentBinding::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

int64_t TalkAgentBinding::GetPriority() const
{
    return m_priority;
}

void TalkAgentBinding::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool TalkAgentBinding::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

int64_t TalkAgentBinding::GetCreateTime() const
{
    return m_createTime;
}

void TalkAgentBinding::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TalkAgentBinding::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t TalkAgentBinding::GetUpdateTime() const
{
    return m_updateTime;
}

void TalkAgentBinding::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TalkAgentBinding::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

