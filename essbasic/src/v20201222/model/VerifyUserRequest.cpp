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

#include <tencentcloud/essbasic/v20201222/model/VerifyUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

VerifyUserRequest::VerifyUserRequest() :
    m_callerHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_certificateRequiredHasBeenSet(false)
{
}

string VerifyUserRequest::ToJsonString() const
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

    if (m_certificateRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateRequired";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_certificateRequired, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller VerifyUserRequest::GetCaller() const
{
    return m_caller;
}

void VerifyUserRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool VerifyUserRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string VerifyUserRequest::GetUserId() const
{
    return m_userId;
}

void VerifyUserRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool VerifyUserRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

bool VerifyUserRequest::GetCertificateRequired() const
{
    return m_certificateRequired;
}

void VerifyUserRequest::SetCertificateRequired(const bool& _certificateRequired)
{
    m_certificateRequired = _certificateRequired;
    m_certificateRequiredHasBeenSet = true;
}

bool VerifyUserRequest::CertificateRequiredHasBeenSet() const
{
    return m_certificateRequiredHasBeenSet;
}


