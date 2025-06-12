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

#include <tencentcloud/lke/v20231130/model/CreateWorkflowRunRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

CreateWorkflowRunRequest::CreateWorkflowRunRequest() :
    m_runEnvHasBeenSet(false),
    m_appBizIdHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_customVariablesHasBeenSet(false)
{
}

string CreateWorkflowRunRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_runEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunEnv";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runEnv, allocator);
    }

    if (m_appBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_customVariablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomVariables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customVariables.begin(); itr != m_customVariables.end(); ++itr, ++i)
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


uint64_t CreateWorkflowRunRequest::GetRunEnv() const
{
    return m_runEnv;
}

void CreateWorkflowRunRequest::SetRunEnv(const uint64_t& _runEnv)
{
    m_runEnv = _runEnv;
    m_runEnvHasBeenSet = true;
}

bool CreateWorkflowRunRequest::RunEnvHasBeenSet() const
{
    return m_runEnvHasBeenSet;
}

string CreateWorkflowRunRequest::GetAppBizId() const
{
    return m_appBizId;
}

void CreateWorkflowRunRequest::SetAppBizId(const string& _appBizId)
{
    m_appBizId = _appBizId;
    m_appBizIdHasBeenSet = true;
}

bool CreateWorkflowRunRequest::AppBizIdHasBeenSet() const
{
    return m_appBizIdHasBeenSet;
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

vector<CustomVariable> CreateWorkflowRunRequest::GetCustomVariables() const
{
    return m_customVariables;
}

void CreateWorkflowRunRequest::SetCustomVariables(const vector<CustomVariable>& _customVariables)
{
    m_customVariables = _customVariables;
    m_customVariablesHasBeenSet = true;
}

bool CreateWorkflowRunRequest::CustomVariablesHasBeenSet() const
{
    return m_customVariablesHasBeenSet;
}


