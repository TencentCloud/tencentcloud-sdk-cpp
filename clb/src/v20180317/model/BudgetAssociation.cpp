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

#include <tencentcloud/clb/v20180317/model/BudgetAssociation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

BudgetAssociation::BudgetAssociation() :
    m_budgetIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_modelRouterIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_userGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome BudgetAssociation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BudgetId") && !value["BudgetId"].IsNull())
    {
        if (!value["BudgetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetAssociation.BudgetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetId = string(value["BudgetId"].GetString());
        m_budgetIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetAssociation.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetAssociation.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("ModelRouterId") && !value["ModelRouterId"].IsNull())
    {
        if (!value["ModelRouterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetAssociation.ModelRouterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelRouterId = string(value["ModelRouterId"].GetString());
        m_modelRouterIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetAssociation.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetAssociation.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetAssociation.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("UserGroupId") && !value["UserGroupId"].IsNull())
    {
        if (!value["UserGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetAssociation.UserGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupId = string(value["UserGroupId"].GetString());
        m_userGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BudgetAssociation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_budgetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_budgetId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelRouterId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroupId.c_str(), allocator).Move(), allocator);
    }

}


string BudgetAssociation::GetBudgetId() const
{
    return m_budgetId;
}

void BudgetAssociation::SetBudgetId(const string& _budgetId)
{
    m_budgetId = _budgetId;
    m_budgetIdHasBeenSet = true;
}

bool BudgetAssociation::BudgetIdHasBeenSet() const
{
    return m_budgetIdHasBeenSet;
}

string BudgetAssociation::GetCreatedTime() const
{
    return m_createdTime;
}

void BudgetAssociation::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool BudgetAssociation::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string BudgetAssociation::GetKeyId() const
{
    return m_keyId;
}

void BudgetAssociation::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool BudgetAssociation::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string BudgetAssociation::GetModelRouterId() const
{
    return m_modelRouterId;
}

void BudgetAssociation::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool BudgetAssociation::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

string BudgetAssociation::GetResourceName() const
{
    return m_resourceName;
}

void BudgetAssociation::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool BudgetAssociation::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string BudgetAssociation::GetStatus() const
{
    return m_status;
}

void BudgetAssociation::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BudgetAssociation::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BudgetAssociation::GetType() const
{
    return m_type;
}

void BudgetAssociation::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BudgetAssociation::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string BudgetAssociation::GetUserGroupId() const
{
    return m_userGroupId;
}

void BudgetAssociation::SetUserGroupId(const string& _userGroupId)
{
    m_userGroupId = _userGroupId;
    m_userGroupIdHasBeenSet = true;
}

bool BudgetAssociation::UserGroupIdHasBeenSet() const
{
    return m_userGroupIdHasBeenSet;
}

