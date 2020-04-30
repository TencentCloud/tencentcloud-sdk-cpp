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

#include <tencentcloud/cpdp/v20190820/model/ApplyReWithdrawalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

ApplyReWithdrawalRequest::ApplyReWithdrawalRequest() :
    m_businessTypeHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_midasAppIdHasBeenSet(false)
{
}

string ApplyReWithdrawalRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BusinessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_businessType, allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_bodyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_body.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_midasAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ApplyReWithdrawalRequest::GetBusinessType() const
{
    return m_businessType;
}

void ApplyReWithdrawalRequest::SetBusinessType(const uint64_t& _businessType)
{
    m_businessType = _businessType;
    m_businessTypeHasBeenSet = true;
}

bool ApplyReWithdrawalRequest::BusinessTypeHasBeenSet() const
{
    return m_businessTypeHasBeenSet;
}

string ApplyReWithdrawalRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void ApplyReWithdrawalRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool ApplyReWithdrawalRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string ApplyReWithdrawalRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void ApplyReWithdrawalRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool ApplyReWithdrawalRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

WithdrawBill ApplyReWithdrawalRequest::GetBody() const
{
    return m_body;
}

void ApplyReWithdrawalRequest::SetBody(const WithdrawBill& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool ApplyReWithdrawalRequest::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

string ApplyReWithdrawalRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void ApplyReWithdrawalRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool ApplyReWithdrawalRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

