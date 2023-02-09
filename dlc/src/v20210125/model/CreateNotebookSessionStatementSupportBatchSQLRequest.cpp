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

#include <tencentcloud/dlc/v20210125/model/CreateNotebookSessionStatementSupportBatchSQLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateNotebookSessionStatementSupportBatchSQLRequest::CreateNotebookSessionStatementSupportBatchSQLRequest() :
    m_sessionIdHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_saveResultHasBeenSet(false)
{
}

string CreateNotebookSessionStatementSupportBatchSQLRequest::ToJsonString() const
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

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_saveResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_saveResult, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateNotebookSessionStatementSupportBatchSQLRequest::GetSessionId() const
{
    return m_sessionId;
}

void CreateNotebookSessionStatementSupportBatchSQLRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CreateNotebookSessionStatementSupportBatchSQLRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string CreateNotebookSessionStatementSupportBatchSQLRequest::GetCode() const
{
    return m_code;
}

void CreateNotebookSessionStatementSupportBatchSQLRequest::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool CreateNotebookSessionStatementSupportBatchSQLRequest::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string CreateNotebookSessionStatementSupportBatchSQLRequest::GetKind() const
{
    return m_kind;
}

void CreateNotebookSessionStatementSupportBatchSQLRequest::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool CreateNotebookSessionStatementSupportBatchSQLRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

bool CreateNotebookSessionStatementSupportBatchSQLRequest::GetSaveResult() const
{
    return m_saveResult;
}

void CreateNotebookSessionStatementSupportBatchSQLRequest::SetSaveResult(const bool& _saveResult)
{
    m_saveResult = _saveResult;
    m_saveResultHasBeenSet = true;
}

bool CreateNotebookSessionStatementSupportBatchSQLRequest::SaveResultHasBeenSet() const
{
    return m_saveResultHasBeenSet;
}


