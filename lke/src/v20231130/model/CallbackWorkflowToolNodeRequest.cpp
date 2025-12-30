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

#include <tencentcloud/lke/v20231130/model/CallbackWorkflowToolNodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

CallbackWorkflowToolNodeRequest::CallbackWorkflowToolNodeRequest() :
    m_callbackTokenHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false),
    m_appBizIdHasBeenSet(false)
{
}

string CallbackWorkflowToolNodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callbackTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackToken.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_loginUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginUin.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginSubAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_appBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appBizId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CallbackWorkflowToolNodeRequest::GetCallbackToken() const
{
    return m_callbackToken;
}

void CallbackWorkflowToolNodeRequest::SetCallbackToken(const string& _callbackToken)
{
    m_callbackToken = _callbackToken;
    m_callbackTokenHasBeenSet = true;
}

bool CallbackWorkflowToolNodeRequest::CallbackTokenHasBeenSet() const
{
    return m_callbackTokenHasBeenSet;
}

string CallbackWorkflowToolNodeRequest::GetResult() const
{
    return m_result;
}

void CallbackWorkflowToolNodeRequest::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool CallbackWorkflowToolNodeRequest::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string CallbackWorkflowToolNodeRequest::GetLoginUin() const
{
    return m_loginUin;
}

void CallbackWorkflowToolNodeRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool CallbackWorkflowToolNodeRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string CallbackWorkflowToolNodeRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void CallbackWorkflowToolNodeRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool CallbackWorkflowToolNodeRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}

string CallbackWorkflowToolNodeRequest::GetAppBizId() const
{
    return m_appBizId;
}

void CallbackWorkflowToolNodeRequest::SetAppBizId(const string& _appBizId)
{
    m_appBizId = _appBizId;
    m_appBizIdHasBeenSet = true;
}

bool CallbackWorkflowToolNodeRequest::AppBizIdHasBeenSet() const
{
    return m_appBizIdHasBeenSet;
}


