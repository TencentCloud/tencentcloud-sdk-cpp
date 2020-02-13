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

#include <tencentcloud/sms/v20190711/model/AddSmsSignRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sms::V20190711::Model;
using namespace rapidjson;
using namespace std;

AddSmsSignRequest::AddSmsSignRequest() :
    m_signNameHasBeenSet(false),
    m_signTypeHasBeenSet(false),
    m_documentTypeHasBeenSet(false),
    m_internationalHasBeenSet(false),
    m_usedMethodHasBeenSet(false),
    m_proofImageHasBeenSet(false),
    m_commissionImageHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string AddSmsSignRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_signNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SignName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_signName.c_str(), allocator).Move(), allocator);
    }

    if (m_signTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SignType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_signType, allocator);
    }

    if (m_documentTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DocumentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_documentType, allocator);
    }

    if (m_internationalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "International";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_international, allocator);
    }

    if (m_usedMethodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UsedMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_usedMethod, allocator);
    }

    if (m_proofImageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProofImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_proofImage.c_str(), allocator).Move(), allocator);
    }

    if (m_commissionImageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommissionImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_commissionImage.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddSmsSignRequest::GetSignName() const
{
    return m_signName;
}

void AddSmsSignRequest::SetSignName(const string& _signName)
{
    m_signName = _signName;
    m_signNameHasBeenSet = true;
}

bool AddSmsSignRequest::SignNameHasBeenSet() const
{
    return m_signNameHasBeenSet;
}

uint64_t AddSmsSignRequest::GetSignType() const
{
    return m_signType;
}

void AddSmsSignRequest::SetSignType(const uint64_t& _signType)
{
    m_signType = _signType;
    m_signTypeHasBeenSet = true;
}

bool AddSmsSignRequest::SignTypeHasBeenSet() const
{
    return m_signTypeHasBeenSet;
}

uint64_t AddSmsSignRequest::GetDocumentType() const
{
    return m_documentType;
}

void AddSmsSignRequest::SetDocumentType(const uint64_t& _documentType)
{
    m_documentType = _documentType;
    m_documentTypeHasBeenSet = true;
}

bool AddSmsSignRequest::DocumentTypeHasBeenSet() const
{
    return m_documentTypeHasBeenSet;
}

uint64_t AddSmsSignRequest::GetInternational() const
{
    return m_international;
}

void AddSmsSignRequest::SetInternational(const uint64_t& _international)
{
    m_international = _international;
    m_internationalHasBeenSet = true;
}

bool AddSmsSignRequest::InternationalHasBeenSet() const
{
    return m_internationalHasBeenSet;
}

uint64_t AddSmsSignRequest::GetUsedMethod() const
{
    return m_usedMethod;
}

void AddSmsSignRequest::SetUsedMethod(const uint64_t& _usedMethod)
{
    m_usedMethod = _usedMethod;
    m_usedMethodHasBeenSet = true;
}

bool AddSmsSignRequest::UsedMethodHasBeenSet() const
{
    return m_usedMethodHasBeenSet;
}

string AddSmsSignRequest::GetProofImage() const
{
    return m_proofImage;
}

void AddSmsSignRequest::SetProofImage(const string& _proofImage)
{
    m_proofImage = _proofImage;
    m_proofImageHasBeenSet = true;
}

bool AddSmsSignRequest::ProofImageHasBeenSet() const
{
    return m_proofImageHasBeenSet;
}

string AddSmsSignRequest::GetCommissionImage() const
{
    return m_commissionImage;
}

void AddSmsSignRequest::SetCommissionImage(const string& _commissionImage)
{
    m_commissionImage = _commissionImage;
    m_commissionImageHasBeenSet = true;
}

bool AddSmsSignRequest::CommissionImageHasBeenSet() const
{
    return m_commissionImageHasBeenSet;
}

string AddSmsSignRequest::GetRemark() const
{
    return m_remark;
}

void AddSmsSignRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AddSmsSignRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


