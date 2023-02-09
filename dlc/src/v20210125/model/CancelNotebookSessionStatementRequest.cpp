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

#include <tencentcloud/dlc/v20210125/model/CancelNotebookSessionStatementRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CancelNotebookSessionStatementRequest::CancelNotebookSessionStatementRequest() :
    m_sessionIdHasBeenSet(false),
    m_statementIdHasBeenSet(false)
{
}

string CancelNotebookSessionStatementRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_statementIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatementId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_statementId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CancelNotebookSessionStatementRequest::GetSessionId() const
{
    return m_sessionId;
}

void CancelNotebookSessionStatementRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CancelNotebookSessionStatementRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string CancelNotebookSessionStatementRequest::GetStatementId() const
{
    return m_statementId;
}

void CancelNotebookSessionStatementRequest::SetStatementId(const string& _statementId)
{
    m_statementId = _statementId;
    m_statementIdHasBeenSet = true;
}

bool CancelNotebookSessionStatementRequest::StatementIdHasBeenSet() const
{
    return m_statementIdHasBeenSet;
}


