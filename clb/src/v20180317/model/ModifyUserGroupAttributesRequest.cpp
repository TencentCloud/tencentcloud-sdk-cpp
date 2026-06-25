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

#include <tencentcloud/clb/v20180317/model/ModifyUserGroupAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyUserGroupAttributesRequest::ModifyUserGroupAttributesRequest() :
    m_modelRouterIdHasBeenSet(false),
    m_userGroupIdHasBeenSet(false),
    m_budgetIdHasBeenSet(false),
    m_intentRoutersHasBeenSet(false),
    m_modelsHasBeenSet(false),
    m_userGroupNameHasBeenSet(false)
{
}

string ModifyUserGroupAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelRouterId.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_budgetId.c_str(), allocator).Move(), allocator);
    }

    if (m_intentRoutersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentRouters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_intentRouters.begin(); itr != m_intentRouters.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Models";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_models.begin(); itr != m_models.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userGroupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUserGroupAttributesRequest::GetModelRouterId() const
{
    return m_modelRouterId;
}

void ModifyUserGroupAttributesRequest::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool ModifyUserGroupAttributesRequest::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

string ModifyUserGroupAttributesRequest::GetUserGroupId() const
{
    return m_userGroupId;
}

void ModifyUserGroupAttributesRequest::SetUserGroupId(const string& _userGroupId)
{
    m_userGroupId = _userGroupId;
    m_userGroupIdHasBeenSet = true;
}

bool ModifyUserGroupAttributesRequest::UserGroupIdHasBeenSet() const
{
    return m_userGroupIdHasBeenSet;
}

string ModifyUserGroupAttributesRequest::GetBudgetId() const
{
    return m_budgetId;
}

void ModifyUserGroupAttributesRequest::SetBudgetId(const string& _budgetId)
{
    m_budgetId = _budgetId;
    m_budgetIdHasBeenSet = true;
}

bool ModifyUserGroupAttributesRequest::BudgetIdHasBeenSet() const
{
    return m_budgetIdHasBeenSet;
}

vector<string> ModifyUserGroupAttributesRequest::GetIntentRouters() const
{
    return m_intentRouters;
}

void ModifyUserGroupAttributesRequest::SetIntentRouters(const vector<string>& _intentRouters)
{
    m_intentRouters = _intentRouters;
    m_intentRoutersHasBeenSet = true;
}

bool ModifyUserGroupAttributesRequest::IntentRoutersHasBeenSet() const
{
    return m_intentRoutersHasBeenSet;
}

vector<string> ModifyUserGroupAttributesRequest::GetModels() const
{
    return m_models;
}

void ModifyUserGroupAttributesRequest::SetModels(const vector<string>& _models)
{
    m_models = _models;
    m_modelsHasBeenSet = true;
}

bool ModifyUserGroupAttributesRequest::ModelsHasBeenSet() const
{
    return m_modelsHasBeenSet;
}

string ModifyUserGroupAttributesRequest::GetUserGroupName() const
{
    return m_userGroupName;
}

void ModifyUserGroupAttributesRequest::SetUserGroupName(const string& _userGroupName)
{
    m_userGroupName = _userGroupName;
    m_userGroupNameHasBeenSet = true;
}

bool ModifyUserGroupAttributesRequest::UserGroupNameHasBeenSet() const
{
    return m_userGroupNameHasBeenSet;
}


