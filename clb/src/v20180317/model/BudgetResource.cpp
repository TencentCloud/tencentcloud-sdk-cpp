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

#include <tencentcloud/clb/v20180317/model/BudgetResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

BudgetResource::BudgetResource() :
    m_modelRouterIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_userGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome BudgetResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelRouterId") && !value["ModelRouterId"].IsNull())
    {
        if (!value["ModelRouterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetResource.ModelRouterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelRouterId = string(value["ModelRouterId"].GetString());
        m_modelRouterIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetResource.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetResource.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("UserGroupId") && !value["UserGroupId"].IsNull())
    {
        if (!value["UserGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetResource.UserGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupId = string(value["UserGroupId"].GetString());
        m_userGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BudgetResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelRouterId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroupId.c_str(), allocator).Move(), allocator);
    }

}


string BudgetResource::GetModelRouterId() const
{
    return m_modelRouterId;
}

void BudgetResource::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool BudgetResource::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

string BudgetResource::GetType() const
{
    return m_type;
}

void BudgetResource::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BudgetResource::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string BudgetResource::GetKeyId() const
{
    return m_keyId;
}

void BudgetResource::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool BudgetResource::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string BudgetResource::GetUserGroupId() const
{
    return m_userGroupId;
}

void BudgetResource::SetUserGroupId(const string& _userGroupId)
{
    m_userGroupId = _userGroupId;
    m_userGroupIdHasBeenSet = true;
}

bool BudgetResource::UserGroupIdHasBeenSet() const
{
    return m_userGroupIdHasBeenSet;
}

