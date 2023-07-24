/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/cloudstudio/v20230508/model/CreateWorkspaceTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudstudio::V20230508::Model;
using namespace std;

CreateWorkspaceTokenRequest::CreateWorkspaceTokenRequest() :
    m_spaceKeyHasBeenSet(false),
    m_tokenExpiredLimitSecHasBeenSet(false),
    m_policiesHasBeenSet(false)
{
}

string CreateWorkspaceTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_spaceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenExpiredLimitSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenExpiredLimitSec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tokenExpiredLimitSec, allocator);
    }

    if (m_policiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policies.begin(); itr != m_policies.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateWorkspaceTokenRequest::GetSpaceKey() const
{
    return m_spaceKey;
}

void CreateWorkspaceTokenRequest::SetSpaceKey(const string& _spaceKey)
{
    m_spaceKey = _spaceKey;
    m_spaceKeyHasBeenSet = true;
}

bool CreateWorkspaceTokenRequest::SpaceKeyHasBeenSet() const
{
    return m_spaceKeyHasBeenSet;
}

uint64_t CreateWorkspaceTokenRequest::GetTokenExpiredLimitSec() const
{
    return m_tokenExpiredLimitSec;
}

void CreateWorkspaceTokenRequest::SetTokenExpiredLimitSec(const uint64_t& _tokenExpiredLimitSec)
{
    m_tokenExpiredLimitSec = _tokenExpiredLimitSec;
    m_tokenExpiredLimitSecHasBeenSet = true;
}

bool CreateWorkspaceTokenRequest::TokenExpiredLimitSecHasBeenSet() const
{
    return m_tokenExpiredLimitSecHasBeenSet;
}

vector<string> CreateWorkspaceTokenRequest::GetPolicies() const
{
    return m_policies;
}

void CreateWorkspaceTokenRequest::SetPolicies(const vector<string>& _policies)
{
    m_policies = _policies;
    m_policiesHasBeenSet = true;
}

bool CreateWorkspaceTokenRequest::PoliciesHasBeenSet() const
{
    return m_policiesHasBeenSet;
}


