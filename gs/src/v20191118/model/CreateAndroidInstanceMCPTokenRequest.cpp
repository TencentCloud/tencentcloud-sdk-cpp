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

#include <tencentcloud/gs/v20191118/model/CreateAndroidInstanceMCPTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

CreateAndroidInstanceMCPTokenRequest::CreateAndroidInstanceMCPTokenRequest() :
    m_roleHasBeenSet(false),
    m_expireSecondsHasBeenSet(false),
    m_tokenNameHasBeenSet(false),
    m_allowedInstanceIdsHasBeenSet(false)
{
}

string CreateAndroidInstanceMCPTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_expireSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireSeconds, allocator);
    }

    if (m_tokenNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tokenName.c_str(), allocator).Move(), allocator);
    }

    if (m_allowedInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowedInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowedInstanceIds.begin(); itr != m_allowedInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAndroidInstanceMCPTokenRequest::GetRole() const
{
    return m_role;
}

void CreateAndroidInstanceMCPTokenRequest::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool CreateAndroidInstanceMCPTokenRequest::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

int64_t CreateAndroidInstanceMCPTokenRequest::GetExpireSeconds() const
{
    return m_expireSeconds;
}

void CreateAndroidInstanceMCPTokenRequest::SetExpireSeconds(const int64_t& _expireSeconds)
{
    m_expireSeconds = _expireSeconds;
    m_expireSecondsHasBeenSet = true;
}

bool CreateAndroidInstanceMCPTokenRequest::ExpireSecondsHasBeenSet() const
{
    return m_expireSecondsHasBeenSet;
}

string CreateAndroidInstanceMCPTokenRequest::GetTokenName() const
{
    return m_tokenName;
}

void CreateAndroidInstanceMCPTokenRequest::SetTokenName(const string& _tokenName)
{
    m_tokenName = _tokenName;
    m_tokenNameHasBeenSet = true;
}

bool CreateAndroidInstanceMCPTokenRequest::TokenNameHasBeenSet() const
{
    return m_tokenNameHasBeenSet;
}

vector<string> CreateAndroidInstanceMCPTokenRequest::GetAllowedInstanceIds() const
{
    return m_allowedInstanceIds;
}

void CreateAndroidInstanceMCPTokenRequest::SetAllowedInstanceIds(const vector<string>& _allowedInstanceIds)
{
    m_allowedInstanceIds = _allowedInstanceIds;
    m_allowedInstanceIdsHasBeenSet = true;
}

bool CreateAndroidInstanceMCPTokenRequest::AllowedInstanceIdsHasBeenSet() const
{
    return m_allowedInstanceIdsHasBeenSet;
}


