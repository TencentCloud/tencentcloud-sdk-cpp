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

#include <tencentcloud/vod/v20180717/model/ExecuteFunctionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ExecuteFunctionRequest::ExecuteFunctionRequest() :
    m_functionNameHasBeenSet(false),
    m_functionArgHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

string ExecuteFunctionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_functionArgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionArg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionArg.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExecuteFunctionRequest::GetFunctionName() const
{
    return m_functionName;
}

void ExecuteFunctionRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool ExecuteFunctionRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string ExecuteFunctionRequest::GetFunctionArg() const
{
    return m_functionArg;
}

void ExecuteFunctionRequest::SetFunctionArg(const string& _functionArg)
{
    m_functionArg = _functionArg;
    m_functionArgHasBeenSet = true;
}

bool ExecuteFunctionRequest::FunctionArgHasBeenSet() const
{
    return m_functionArgHasBeenSet;
}

uint64_t ExecuteFunctionRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ExecuteFunctionRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ExecuteFunctionRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string ExecuteFunctionRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void ExecuteFunctionRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool ExecuteFunctionRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string ExecuteFunctionRequest::GetSessionId() const
{
    return m_sessionId;
}

void ExecuteFunctionRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ExecuteFunctionRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string ExecuteFunctionRequest::GetExtInfo() const
{
    return m_extInfo;
}

void ExecuteFunctionRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool ExecuteFunctionRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}


