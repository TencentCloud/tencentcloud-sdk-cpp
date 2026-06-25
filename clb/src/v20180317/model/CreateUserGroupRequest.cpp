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

#include <tencentcloud/clb/v20180317/model/CreateUserGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CreateUserGroupRequest::CreateUserGroupRequest() :
    m_modelRouterIdHasBeenSet(false),
    m_userGroupNameHasBeenSet(false),
    m_budgetIdHasBeenSet(false),
    m_intentRoutersHasBeenSet(false),
    m_keyIdsHasBeenSet(false),
    m_modelsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateUserGroupRequest::ToJsonString() const
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

    if (m_userGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userGroupName.c_str(), allocator).Move(), allocator);
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

    if (m_keyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keyIds.begin(); itr != m_keyIds.end(); ++itr)
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

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateUserGroupRequest::GetModelRouterId() const
{
    return m_modelRouterId;
}

void CreateUserGroupRequest::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool CreateUserGroupRequest::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

string CreateUserGroupRequest::GetUserGroupName() const
{
    return m_userGroupName;
}

void CreateUserGroupRequest::SetUserGroupName(const string& _userGroupName)
{
    m_userGroupName = _userGroupName;
    m_userGroupNameHasBeenSet = true;
}

bool CreateUserGroupRequest::UserGroupNameHasBeenSet() const
{
    return m_userGroupNameHasBeenSet;
}

string CreateUserGroupRequest::GetBudgetId() const
{
    return m_budgetId;
}

void CreateUserGroupRequest::SetBudgetId(const string& _budgetId)
{
    m_budgetId = _budgetId;
    m_budgetIdHasBeenSet = true;
}

bool CreateUserGroupRequest::BudgetIdHasBeenSet() const
{
    return m_budgetIdHasBeenSet;
}

vector<string> CreateUserGroupRequest::GetIntentRouters() const
{
    return m_intentRouters;
}

void CreateUserGroupRequest::SetIntentRouters(const vector<string>& _intentRouters)
{
    m_intentRouters = _intentRouters;
    m_intentRoutersHasBeenSet = true;
}

bool CreateUserGroupRequest::IntentRoutersHasBeenSet() const
{
    return m_intentRoutersHasBeenSet;
}

vector<string> CreateUserGroupRequest::GetKeyIds() const
{
    return m_keyIds;
}

void CreateUserGroupRequest::SetKeyIds(const vector<string>& _keyIds)
{
    m_keyIds = _keyIds;
    m_keyIdsHasBeenSet = true;
}

bool CreateUserGroupRequest::KeyIdsHasBeenSet() const
{
    return m_keyIdsHasBeenSet;
}

vector<string> CreateUserGroupRequest::GetModels() const
{
    return m_models;
}

void CreateUserGroupRequest::SetModels(const vector<string>& _models)
{
    m_models = _models;
    m_modelsHasBeenSet = true;
}

bool CreateUserGroupRequest::ModelsHasBeenSet() const
{
    return m_modelsHasBeenSet;
}

vector<TagInfo> CreateUserGroupRequest::GetTags() const
{
    return m_tags;
}

void CreateUserGroupRequest::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateUserGroupRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


