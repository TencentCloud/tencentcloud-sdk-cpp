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

#include <tencentcloud/tdid/v20210519/model/UpdateCredentialStateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

UpdateCredentialStateRequest::UpdateCredentialStateRequest() :
    m_dAPIdHasBeenSet(false),
    m_operateCredentialHasBeenSet(false),
    m_originCredentialHasBeenSet(false),
    m_credentialStatusHasBeenSet(false)
{
}

string UpdateCredentialStateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dAPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DAPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dAPId, allocator);
    }

    if (m_operateCredentialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateCredential";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operateCredential.c_str(), allocator).Move(), allocator);
    }

    if (m_originCredentialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginCredential";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originCredential.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_credentialStatus.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateCredentialStateRequest::GetDAPId() const
{
    return m_dAPId;
}

void UpdateCredentialStateRequest::SetDAPId(const uint64_t& _dAPId)
{
    m_dAPId = _dAPId;
    m_dAPIdHasBeenSet = true;
}

bool UpdateCredentialStateRequest::DAPIdHasBeenSet() const
{
    return m_dAPIdHasBeenSet;
}

string UpdateCredentialStateRequest::GetOperateCredential() const
{
    return m_operateCredential;
}

void UpdateCredentialStateRequest::SetOperateCredential(const string& _operateCredential)
{
    m_operateCredential = _operateCredential;
    m_operateCredentialHasBeenSet = true;
}

bool UpdateCredentialStateRequest::OperateCredentialHasBeenSet() const
{
    return m_operateCredentialHasBeenSet;
}

string UpdateCredentialStateRequest::GetOriginCredential() const
{
    return m_originCredential;
}

void UpdateCredentialStateRequest::SetOriginCredential(const string& _originCredential)
{
    m_originCredential = _originCredential;
    m_originCredentialHasBeenSet = true;
}

bool UpdateCredentialStateRequest::OriginCredentialHasBeenSet() const
{
    return m_originCredentialHasBeenSet;
}

CredentialStatusInfo UpdateCredentialStateRequest::GetCredentialStatus() const
{
    return m_credentialStatus;
}

void UpdateCredentialStateRequest::SetCredentialStatus(const CredentialStatusInfo& _credentialStatus)
{
    m_credentialStatus = _credentialStatus;
    m_credentialStatusHasBeenSet = true;
}

bool UpdateCredentialStateRequest::CredentialStatusHasBeenSet() const
{
    return m_credentialStatusHasBeenSet;
}


