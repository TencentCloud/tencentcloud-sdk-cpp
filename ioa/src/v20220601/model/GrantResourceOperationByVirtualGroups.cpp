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

#include <tencentcloud/ioa/v20220601/model/GrantResourceOperationByVirtualGroups.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

GrantResourceOperationByVirtualGroups::GrantResourceOperationByVirtualGroups() :
    m_operationTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_virtualAccountGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome GrantResourceOperationByVirtualGroups::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OperationType") && !value["OperationType"].IsNull())
    {
        if (!value["OperationType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantResourceOperationByVirtualGroups.OperationType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operationType = value["OperationType"].GetUint64();
        m_operationTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantResourceOperationByVirtualGroups.ResourceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = value["ResourceId"].GetUint64();
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantResourceOperationByVirtualGroups.ResourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = value["ResourceType"].GetUint64();
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantResourceOperationByVirtualGroups.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("VirtualAccountGroupId") && !value["VirtualAccountGroupId"].IsNull())
    {
        if (!value["VirtualAccountGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantResourceOperationByVirtualGroups.VirtualAccountGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_virtualAccountGroupId = value["VirtualAccountGroupId"].GetUint64();
        m_virtualAccountGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GrantResourceOperationByVirtualGroups::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operationType, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceId, allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceType, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_virtualAccountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualAccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualAccountGroupId, allocator);
    }

}


uint64_t GrantResourceOperationByVirtualGroups::GetOperationType() const
{
    return m_operationType;
}

void GrantResourceOperationByVirtualGroups::SetOperationType(const uint64_t& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool GrantResourceOperationByVirtualGroups::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

uint64_t GrantResourceOperationByVirtualGroups::GetResourceId() const
{
    return m_resourceId;
}

void GrantResourceOperationByVirtualGroups::SetResourceId(const uint64_t& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool GrantResourceOperationByVirtualGroups::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t GrantResourceOperationByVirtualGroups::GetResourceType() const
{
    return m_resourceType;
}

void GrantResourceOperationByVirtualGroups::SetResourceType(const uint64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool GrantResourceOperationByVirtualGroups::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

uint64_t GrantResourceOperationByVirtualGroups::GetExpireTime() const
{
    return m_expireTime;
}

void GrantResourceOperationByVirtualGroups::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool GrantResourceOperationByVirtualGroups::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t GrantResourceOperationByVirtualGroups::GetVirtualAccountGroupId() const
{
    return m_virtualAccountGroupId;
}

void GrantResourceOperationByVirtualGroups::SetVirtualAccountGroupId(const uint64_t& _virtualAccountGroupId)
{
    m_virtualAccountGroupId = _virtualAccountGroupId;
    m_virtualAccountGroupIdHasBeenSet = true;
}

bool GrantResourceOperationByVirtualGroups::VirtualAccountGroupIdHasBeenSet() const
{
    return m_virtualAccountGroupIdHasBeenSet;
}

