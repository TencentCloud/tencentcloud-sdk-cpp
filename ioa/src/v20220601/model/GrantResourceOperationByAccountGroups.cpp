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

#include <tencentcloud/ioa/v20220601/model/GrantResourceOperationByAccountGroups.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

GrantResourceOperationByAccountGroups::GrantResourceOperationByAccountGroups() :
    m_operationTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome GrantResourceOperationByAccountGroups::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OperationType") && !value["OperationType"].IsNull())
    {
        if (!value["OperationType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantResourceOperationByAccountGroups.OperationType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operationType = value["OperationType"].GetUint64();
        m_operationTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantResourceOperationByAccountGroups.ResourceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = value["ResourceId"].GetUint64();
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantResourceOperationByAccountGroups.ResourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = value["ResourceType"].GetUint64();
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantResourceOperationByAccountGroups.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("AccountGroupId") && !value["AccountGroupId"].IsNull())
    {
        if (!value["AccountGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantResourceOperationByAccountGroups.AccountGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupId = value["AccountGroupId"].GetUint64();
        m_accountGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GrantResourceOperationByAccountGroups::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountGroupId, allocator);
    }

}


uint64_t GrantResourceOperationByAccountGroups::GetOperationType() const
{
    return m_operationType;
}

void GrantResourceOperationByAccountGroups::SetOperationType(const uint64_t& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool GrantResourceOperationByAccountGroups::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

uint64_t GrantResourceOperationByAccountGroups::GetResourceId() const
{
    return m_resourceId;
}

void GrantResourceOperationByAccountGroups::SetResourceId(const uint64_t& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool GrantResourceOperationByAccountGroups::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t GrantResourceOperationByAccountGroups::GetResourceType() const
{
    return m_resourceType;
}

void GrantResourceOperationByAccountGroups::SetResourceType(const uint64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool GrantResourceOperationByAccountGroups::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

uint64_t GrantResourceOperationByAccountGroups::GetExpireTime() const
{
    return m_expireTime;
}

void GrantResourceOperationByAccountGroups::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool GrantResourceOperationByAccountGroups::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t GrantResourceOperationByAccountGroups::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void GrantResourceOperationByAccountGroups::SetAccountGroupId(const uint64_t& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool GrantResourceOperationByAccountGroups::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

