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

#include <tencentcloud/ccc/v20200210/model/CreateCallOutSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CreateCallOutSessionRequest::CreateCallOutSessionRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_calleeHasBeenSet(false),
    m_callerHasBeenSet(false),
    m_callersHasBeenSet(false),
    m_isForceUseMobileHasBeenSet(false),
    m_uuiHasBeenSet(false),
    m_uUIHasBeenSet(false)
{
}

string CreateCallOutSessionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_calleeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callee.c_str(), allocator).Move(), allocator);
    }

    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_caller.c_str(), allocator).Move(), allocator);
    }

    if (m_callersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callers.begin(); itr != m_callers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isForceUseMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsForceUseMobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isForceUseMobile, allocator);
    }

    if (m_uuiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uui";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uui.c_str(), allocator).Move(), allocator);
    }

    if (m_uUIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUI";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uUI.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateCallOutSessionRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateCallOutSessionRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateCallOutSessionRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateCallOutSessionRequest::GetUserId() const
{
    return m_userId;
}

void CreateCallOutSessionRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateCallOutSessionRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CreateCallOutSessionRequest::GetCallee() const
{
    return m_callee;
}

void CreateCallOutSessionRequest::SetCallee(const string& _callee)
{
    m_callee = _callee;
    m_calleeHasBeenSet = true;
}

bool CreateCallOutSessionRequest::CalleeHasBeenSet() const
{
    return m_calleeHasBeenSet;
}

string CreateCallOutSessionRequest::GetCaller() const
{
    return m_caller;
}

void CreateCallOutSessionRequest::SetCaller(const string& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool CreateCallOutSessionRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

vector<string> CreateCallOutSessionRequest::GetCallers() const
{
    return m_callers;
}

void CreateCallOutSessionRequest::SetCallers(const vector<string>& _callers)
{
    m_callers = _callers;
    m_callersHasBeenSet = true;
}

bool CreateCallOutSessionRequest::CallersHasBeenSet() const
{
    return m_callersHasBeenSet;
}

bool CreateCallOutSessionRequest::GetIsForceUseMobile() const
{
    return m_isForceUseMobile;
}

void CreateCallOutSessionRequest::SetIsForceUseMobile(const bool& _isForceUseMobile)
{
    m_isForceUseMobile = _isForceUseMobile;
    m_isForceUseMobileHasBeenSet = true;
}

bool CreateCallOutSessionRequest::IsForceUseMobileHasBeenSet() const
{
    return m_isForceUseMobileHasBeenSet;
}

string CreateCallOutSessionRequest::GetUui() const
{
    return m_uui;
}

void CreateCallOutSessionRequest::SetUui(const string& _uui)
{
    m_uui = _uui;
    m_uuiHasBeenSet = true;
}

bool CreateCallOutSessionRequest::UuiHasBeenSet() const
{
    return m_uuiHasBeenSet;
}

string CreateCallOutSessionRequest::GetUUI() const
{
    return m_uUI;
}

void CreateCallOutSessionRequest::SetUUI(const string& _uUI)
{
    m_uUI = _uUI;
    m_uUIHasBeenSet = true;
}

bool CreateCallOutSessionRequest::UUIHasBeenSet() const
{
    return m_uUIHasBeenSet;
}


