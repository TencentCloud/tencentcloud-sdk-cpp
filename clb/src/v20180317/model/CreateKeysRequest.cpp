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

#include <tencentcloud/clb/v20180317/model/CreateKeysRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CreateKeysRequest::CreateKeysRequest() :
    m_modelRouterIdHasBeenSet(false),
    m_budgetIdHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_rateLimitConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_userGroupIdHasBeenSet(false)
{
}

string CreateKeysRequest::ToJsonString() const
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

    if (m_budgetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_budgetId.c_str(), allocator).Move(), allocator);
    }

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keys.begin(); itr != m_keys.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_rateLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rateLimitConfig.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_userGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userGroupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateKeysRequest::GetModelRouterId() const
{
    return m_modelRouterId;
}

void CreateKeysRequest::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool CreateKeysRequest::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

string CreateKeysRequest::GetBudgetId() const
{
    return m_budgetId;
}

void CreateKeysRequest::SetBudgetId(const string& _budgetId)
{
    m_budgetId = _budgetId;
    m_budgetIdHasBeenSet = true;
}

bool CreateKeysRequest::BudgetIdHasBeenSet() const
{
    return m_budgetIdHasBeenSet;
}

vector<InputKeyInfo> CreateKeysRequest::GetKeys() const
{
    return m_keys;
}

void CreateKeysRequest::SetKeys(const vector<InputKeyInfo>& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool CreateKeysRequest::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

string CreateKeysRequest::GetMode() const
{
    return m_mode;
}

void CreateKeysRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CreateKeysRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

RateLimitConfigForKey CreateKeysRequest::GetRateLimitConfig() const
{
    return m_rateLimitConfig;
}

void CreateKeysRequest::SetRateLimitConfig(const RateLimitConfigForKey& _rateLimitConfig)
{
    m_rateLimitConfig = _rateLimitConfig;
    m_rateLimitConfigHasBeenSet = true;
}

bool CreateKeysRequest::RateLimitConfigHasBeenSet() const
{
    return m_rateLimitConfigHasBeenSet;
}

vector<TagInfo> CreateKeysRequest::GetTags() const
{
    return m_tags;
}

void CreateKeysRequest::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateKeysRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateKeysRequest::GetUserGroupId() const
{
    return m_userGroupId;
}

void CreateKeysRequest::SetUserGroupId(const string& _userGroupId)
{
    m_userGroupId = _userGroupId;
    m_userGroupIdHasBeenSet = true;
}

bool CreateKeysRequest::UserGroupIdHasBeenSet() const
{
    return m_userGroupIdHasBeenSet;
}


