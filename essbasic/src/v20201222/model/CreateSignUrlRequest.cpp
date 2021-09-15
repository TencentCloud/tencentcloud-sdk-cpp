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

#include <tencentcloud/essbasic/v20201222/model/CreateSignUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

CreateSignUrlRequest::CreateSignUrlRequest() :
    m_callerHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_catalogIdHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_signUrlTypeHasBeenSet(false),
    m_signIdHasBeenSet(false)
{
}

string CreateSignUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_caller.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deadline, allocator);
    }

    if (m_catalogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalogId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_signUrlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignUrlType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signUrlType.c_str(), allocator).Move(), allocator);
    }

    if (m_signIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller CreateSignUrlRequest::GetCaller() const
{
    return m_caller;
}

void CreateSignUrlRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool CreateSignUrlRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string CreateSignUrlRequest::GetUserId() const
{
    return m_userId;
}

void CreateSignUrlRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateSignUrlRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

int64_t CreateSignUrlRequest::GetDeadline() const
{
    return m_deadline;
}

void CreateSignUrlRequest::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool CreateSignUrlRequest::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string CreateSignUrlRequest::GetCatalogId() const
{
    return m_catalogId;
}

void CreateSignUrlRequest::SetCatalogId(const string& _catalogId)
{
    m_catalogId = _catalogId;
    m_catalogIdHasBeenSet = true;
}

bool CreateSignUrlRequest::CatalogIdHasBeenSet() const
{
    return m_catalogIdHasBeenSet;
}

string CreateSignUrlRequest::GetFlowId() const
{
    return m_flowId;
}

void CreateSignUrlRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool CreateSignUrlRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string CreateSignUrlRequest::GetSignUrlType() const
{
    return m_signUrlType;
}

void CreateSignUrlRequest::SetSignUrlType(const string& _signUrlType)
{
    m_signUrlType = _signUrlType;
    m_signUrlTypeHasBeenSet = true;
}

bool CreateSignUrlRequest::SignUrlTypeHasBeenSet() const
{
    return m_signUrlTypeHasBeenSet;
}

string CreateSignUrlRequest::GetSignId() const
{
    return m_signId;
}

void CreateSignUrlRequest::SetSignId(const string& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool CreateSignUrlRequest::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}


