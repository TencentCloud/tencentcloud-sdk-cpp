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

#include <tencentcloud/ioa/v20220601/model/GrantResourceOperationByAccounts.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

GrantResourceOperationByAccounts::GrantResourceOperationByAccounts() :
    m_operationTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_accountUserIdHasBeenSet(false),
    m_menuIdHasBeenSet(false)
{
}

CoreInternalOutcome GrantResourceOperationByAccounts::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OperationType") && !value["OperationType"].IsNull())
    {
        if (!value["OperationType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantResourceOperationByAccounts.OperationType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operationType = value["OperationType"].GetUint64();
        m_operationTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantResourceOperationByAccounts.ResourceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = value["ResourceId"].GetUint64();
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantResourceOperationByAccounts.ResourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = value["ResourceType"].GetUint64();
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantResourceOperationByAccounts.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("AccountUserId") && !value["AccountUserId"].IsNull())
    {
        if (!value["AccountUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrantResourceOperationByAccounts.AccountUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountUserId = string(value["AccountUserId"].GetString());
        m_accountUserIdHasBeenSet = true;
    }

    if (value.HasMember("MenuId") && !value["MenuId"].IsNull())
    {
        if (!value["MenuId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantResourceOperationByAccounts.MenuId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_menuId = value["MenuId"].GetUint64();
        m_menuIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GrantResourceOperationByAccounts::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_accountUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_menuIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenuId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_menuId, allocator);
    }

}


uint64_t GrantResourceOperationByAccounts::GetOperationType() const
{
    return m_operationType;
}

void GrantResourceOperationByAccounts::SetOperationType(const uint64_t& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool GrantResourceOperationByAccounts::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

uint64_t GrantResourceOperationByAccounts::GetResourceId() const
{
    return m_resourceId;
}

void GrantResourceOperationByAccounts::SetResourceId(const uint64_t& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool GrantResourceOperationByAccounts::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t GrantResourceOperationByAccounts::GetResourceType() const
{
    return m_resourceType;
}

void GrantResourceOperationByAccounts::SetResourceType(const uint64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool GrantResourceOperationByAccounts::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

uint64_t GrantResourceOperationByAccounts::GetExpireTime() const
{
    return m_expireTime;
}

void GrantResourceOperationByAccounts::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool GrantResourceOperationByAccounts::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string GrantResourceOperationByAccounts::GetAccountUserId() const
{
    return m_accountUserId;
}

void GrantResourceOperationByAccounts::SetAccountUserId(const string& _accountUserId)
{
    m_accountUserId = _accountUserId;
    m_accountUserIdHasBeenSet = true;
}

bool GrantResourceOperationByAccounts::AccountUserIdHasBeenSet() const
{
    return m_accountUserIdHasBeenSet;
}

uint64_t GrantResourceOperationByAccounts::GetMenuId() const
{
    return m_menuId;
}

void GrantResourceOperationByAccounts::SetMenuId(const uint64_t& _menuId)
{
    m_menuId = _menuId;
    m_menuIdHasBeenSet = true;
}

bool GrantResourceOperationByAccounts::MenuIdHasBeenSet() const
{
    return m_menuIdHasBeenSet;
}

