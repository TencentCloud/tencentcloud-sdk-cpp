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

#include <tencentcloud/adp/v20260520/model/CreateWorkflowRunRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CreateWorkflowRunRequest::CreateWorkflowRunRequest() :
    m_appIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_customVariableListHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

string CreateWorkflowRunRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domain, allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_customVariableListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomVariableList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customVariableList.begin(); itr != m_customVariableList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateWorkflowRunRequest::GetAppId() const
{
    return m_appId;
}

void CreateWorkflowRunRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CreateWorkflowRunRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

uint64_t CreateWorkflowRunRequest::GetDomain() const
{
    return m_domain;
}

void CreateWorkflowRunRequest::SetDomain(const uint64_t& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateWorkflowRunRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateWorkflowRunRequest::GetQuery() const
{
    return m_query;
}

void CreateWorkflowRunRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool CreateWorkflowRunRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

vector<CustomVariable> CreateWorkflowRunRequest::GetCustomVariableList() const
{
    return m_customVariableList;
}

void CreateWorkflowRunRequest::SetCustomVariableList(const vector<CustomVariable>& _customVariableList)
{
    m_customVariableList = _customVariableList;
    m_customVariableListHasBeenSet = true;
}

bool CreateWorkflowRunRequest::CustomVariableListHasBeenSet() const
{
    return m_customVariableListHasBeenSet;
}

string CreateWorkflowRunRequest::GetUserId() const
{
    return m_userId;
}

void CreateWorkflowRunRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateWorkflowRunRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}


