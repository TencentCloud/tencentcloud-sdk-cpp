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

#include <tencentcloud/tdid/v20210519/model/VerifyCredentialsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

VerifyCredentialsRequest::VerifyCredentialsRequest() :
    m_verifyTypeHasBeenSet(false),
    m_credentialDataHasBeenSet(false),
    m_dAPIdHasBeenSet(false)
{
}

string VerifyCredentialsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_verifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_verifyType, allocator);
    }

    if (m_credentialDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_credentialData.c_str(), allocator).Move(), allocator);
    }

    if (m_dAPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DAPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dAPId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t VerifyCredentialsRequest::GetVerifyType() const
{
    return m_verifyType;
}

void VerifyCredentialsRequest::SetVerifyType(const uint64_t& _verifyType)
{
    m_verifyType = _verifyType;
    m_verifyTypeHasBeenSet = true;
}

bool VerifyCredentialsRequest::VerifyTypeHasBeenSet() const
{
    return m_verifyTypeHasBeenSet;
}

string VerifyCredentialsRequest::GetCredentialData() const
{
    return m_credentialData;
}

void VerifyCredentialsRequest::SetCredentialData(const string& _credentialData)
{
    m_credentialData = _credentialData;
    m_credentialDataHasBeenSet = true;
}

bool VerifyCredentialsRequest::CredentialDataHasBeenSet() const
{
    return m_credentialDataHasBeenSet;
}

uint64_t VerifyCredentialsRequest::GetDAPId() const
{
    return m_dAPId;
}

void VerifyCredentialsRequest::SetDAPId(const uint64_t& _dAPId)
{
    m_dAPId = _dAPId;
    m_dAPIdHasBeenSet = true;
}

bool VerifyCredentialsRequest::DAPIdHasBeenSet() const
{
    return m_dAPIdHasBeenSet;
}


