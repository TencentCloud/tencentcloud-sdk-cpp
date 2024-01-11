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

#include <tencentcloud/tdid/v20210519/model/IssueCredentialRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

IssueCredentialRequest::IssueCredentialRequest() :
    m_cRDLArgHasBeenSet(false),
    m_unSignedHasBeenSet(false),
    m_dAPIdHasBeenSet(false)
{
}

string IssueCredentialRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cRDLArgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CRDLArg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cRDLArg.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_unSignedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnSigned";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_unSigned, allocator);
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


CRDLArg IssueCredentialRequest::GetCRDLArg() const
{
    return m_cRDLArg;
}

void IssueCredentialRequest::SetCRDLArg(const CRDLArg& _cRDLArg)
{
    m_cRDLArg = _cRDLArg;
    m_cRDLArgHasBeenSet = true;
}

bool IssueCredentialRequest::CRDLArgHasBeenSet() const
{
    return m_cRDLArgHasBeenSet;
}

bool IssueCredentialRequest::GetUnSigned() const
{
    return m_unSigned;
}

void IssueCredentialRequest::SetUnSigned(const bool& _unSigned)
{
    m_unSigned = _unSigned;
    m_unSignedHasBeenSet = true;
}

bool IssueCredentialRequest::UnSignedHasBeenSet() const
{
    return m_unSignedHasBeenSet;
}

uint64_t IssueCredentialRequest::GetDAPId() const
{
    return m_dAPId;
}

void IssueCredentialRequest::SetDAPId(const uint64_t& _dAPId)
{
    m_dAPId = _dAPId;
    m_dAPIdHasBeenSet = true;
}

bool IssueCredentialRequest::DAPIdHasBeenSet() const
{
    return m_dAPIdHasBeenSet;
}


