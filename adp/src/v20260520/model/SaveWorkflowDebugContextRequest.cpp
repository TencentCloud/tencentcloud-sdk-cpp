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

#include <tencentcloud/adp/v20260520/model/SaveWorkflowDebugContextRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SaveWorkflowDebugContextRequest::SaveWorkflowDebugContextRequest() :
    m_appIdHasBeenSet(false),
    m_appVariableValueListHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

string SaveWorkflowDebugContextRequest::ToJsonString() const
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

    if (m_appVariableValueListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVariableValueList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_appVariableValueList.begin(); itr != m_appVariableValueList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
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


string SaveWorkflowDebugContextRequest::GetAppId() const
{
    return m_appId;
}

void SaveWorkflowDebugContextRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool SaveWorkflowDebugContextRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

vector<AppVariableValue> SaveWorkflowDebugContextRequest::GetAppVariableValueList() const
{
    return m_appVariableValueList;
}

void SaveWorkflowDebugContextRequest::SetAppVariableValueList(const vector<AppVariableValue>& _appVariableValueList)
{
    m_appVariableValueList = _appVariableValueList;
    m_appVariableValueListHasBeenSet = true;
}

bool SaveWorkflowDebugContextRequest::AppVariableValueListHasBeenSet() const
{
    return m_appVariableValueListHasBeenSet;
}

string SaveWorkflowDebugContextRequest::GetSessionId() const
{
    return m_sessionId;
}

void SaveWorkflowDebugContextRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool SaveWorkflowDebugContextRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string SaveWorkflowDebugContextRequest::GetUserId() const
{
    return m_userId;
}

void SaveWorkflowDebugContextRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool SaveWorkflowDebugContextRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}


