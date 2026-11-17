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

#include <tencentcloud/ags/v20250920/model/GPUResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

GPUResource::GPUResource() :
    m_resourceIdHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_allocationStateHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_activeAtHasBeenSet(false),
    m_expireAtHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
}

CoreInternalOutcome GPUResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResource.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResource.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResource.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("AllocationState") && !value["AllocationState"].IsNull())
    {
        if (!value["AllocationState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResource.AllocationState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocationState = string(value["AllocationState"].GetString());
        m_allocationStateHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResource.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ActiveAt") && !value["ActiveAt"].IsNull())
    {
        if (!value["ActiveAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResource.ActiveAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeAt = string(value["ActiveAt"].GetString());
        m_activeAtHasBeenSet = true;
    }

    if (value.HasMember("ExpireAt") && !value["ExpireAt"].IsNull())
    {
        if (!value["ExpireAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResource.ExpireAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireAt = string(value["ExpireAt"].GetString());
        m_expireAtHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResource.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("StatusReason") && !value["StatusReason"].IsNull())
    {
        if (!value["StatusReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResource.StatusReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusReason = string(value["StatusReason"].GetString());
        m_statusReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GPUResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_allocationStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocationState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocationState.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_activeAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeAt.c_str(), allocator).Move(), allocator);
    }

    if (m_expireAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireAt.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_statusReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusReason.c_str(), allocator).Move(), allocator);
    }

}


string GPUResource::GetResourceId() const
{
    return m_resourceId;
}

void GPUResource::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool GPUResource::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string GPUResource::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void GPUResource::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool GPUResource::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string GPUResource::GetState() const
{
    return m_state;
}

void GPUResource::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool GPUResource::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string GPUResource::GetAllocationState() const
{
    return m_allocationState;
}

void GPUResource::SetAllocationState(const string& _allocationState)
{
    m_allocationState = _allocationState;
    m_allocationStateHasBeenSet = true;
}

bool GPUResource::AllocationStateHasBeenSet() const
{
    return m_allocationStateHasBeenSet;
}

string GPUResource::GetInstanceId() const
{
    return m_instanceId;
}

void GPUResource::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool GPUResource::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string GPUResource::GetActiveAt() const
{
    return m_activeAt;
}

void GPUResource::SetActiveAt(const string& _activeAt)
{
    m_activeAt = _activeAt;
    m_activeAtHasBeenSet = true;
}

bool GPUResource::ActiveAtHasBeenSet() const
{
    return m_activeAtHasBeenSet;
}

string GPUResource::GetExpireAt() const
{
    return m_expireAt;
}

void GPUResource::SetExpireAt(const string& _expireAt)
{
    m_expireAt = _expireAt;
    m_expireAtHasBeenSet = true;
}

bool GPUResource::ExpireAtHasBeenSet() const
{
    return m_expireAtHasBeenSet;
}

int64_t GPUResource::GetRenewFlag() const
{
    return m_renewFlag;
}

void GPUResource::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool GPUResource::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string GPUResource::GetStatusReason() const
{
    return m_statusReason;
}

void GPUResource::SetStatusReason(const string& _statusReason)
{
    m_statusReason = _statusReason;
    m_statusReasonHasBeenSet = true;
}

bool GPUResource::StatusReasonHasBeenSet() const
{
    return m_statusReasonHasBeenSet;
}

