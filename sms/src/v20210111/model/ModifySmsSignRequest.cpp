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

#include <tencentcloud/sms/v20210111/model/ModifySmsSignRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

ModifySmsSignRequest::ModifySmsSignRequest() :
    m_signIdHasBeenSet(false),
    m_signNameHasBeenSet(false),
    m_signTypeHasBeenSet(false),
    m_documentTypeHasBeenSet(false),
    m_internationalHasBeenSet(false),
    m_signPurposeHasBeenSet(false),
    m_proofImageHasBeenSet(false),
    m_commissionImageHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_qualificationIdHasBeenSet(false)
{
}

string ModifySmsSignRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_signIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_signId, allocator);
    }

    if (m_signNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signName.c_str(), allocator).Move(), allocator);
    }

    if (m_signTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_signType, allocator);
    }

    if (m_documentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_documentType, allocator);
    }

    if (m_internationalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "International";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_international, allocator);
    }

    if (m_signPurposeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignPurpose";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_signPurpose, allocator);
    }

    if (m_proofImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProofImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proofImage.c_str(), allocator).Move(), allocator);
    }

    if (m_commissionImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommissionImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_commissionImage.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_qualificationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualificationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_qualificationId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifySmsSignRequest::GetSignId() const
{
    return m_signId;
}

void ModifySmsSignRequest::SetSignId(const uint64_t& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool ModifySmsSignRequest::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}

string ModifySmsSignRequest::GetSignName() const
{
    return m_signName;
}

void ModifySmsSignRequest::SetSignName(const string& _signName)
{
    m_signName = _signName;
    m_signNameHasBeenSet = true;
}

bool ModifySmsSignRequest::SignNameHasBeenSet() const
{
    return m_signNameHasBeenSet;
}

uint64_t ModifySmsSignRequest::GetSignType() const
{
    return m_signType;
}

void ModifySmsSignRequest::SetSignType(const uint64_t& _signType)
{
    m_signType = _signType;
    m_signTypeHasBeenSet = true;
}

bool ModifySmsSignRequest::SignTypeHasBeenSet() const
{
    return m_signTypeHasBeenSet;
}

uint64_t ModifySmsSignRequest::GetDocumentType() const
{
    return m_documentType;
}

void ModifySmsSignRequest::SetDocumentType(const uint64_t& _documentType)
{
    m_documentType = _documentType;
    m_documentTypeHasBeenSet = true;
}

bool ModifySmsSignRequest::DocumentTypeHasBeenSet() const
{
    return m_documentTypeHasBeenSet;
}

uint64_t ModifySmsSignRequest::GetInternational() const
{
    return m_international;
}

void ModifySmsSignRequest::SetInternational(const uint64_t& _international)
{
    m_international = _international;
    m_internationalHasBeenSet = true;
}

bool ModifySmsSignRequest::InternationalHasBeenSet() const
{
    return m_internationalHasBeenSet;
}

uint64_t ModifySmsSignRequest::GetSignPurpose() const
{
    return m_signPurpose;
}

void ModifySmsSignRequest::SetSignPurpose(const uint64_t& _signPurpose)
{
    m_signPurpose = _signPurpose;
    m_signPurposeHasBeenSet = true;
}

bool ModifySmsSignRequest::SignPurposeHasBeenSet() const
{
    return m_signPurposeHasBeenSet;
}

string ModifySmsSignRequest::GetProofImage() const
{
    return m_proofImage;
}

void ModifySmsSignRequest::SetProofImage(const string& _proofImage)
{
    m_proofImage = _proofImage;
    m_proofImageHasBeenSet = true;
}

bool ModifySmsSignRequest::ProofImageHasBeenSet() const
{
    return m_proofImageHasBeenSet;
}

string ModifySmsSignRequest::GetCommissionImage() const
{
    return m_commissionImage;
}

void ModifySmsSignRequest::SetCommissionImage(const string& _commissionImage)
{
    m_commissionImage = _commissionImage;
    m_commissionImageHasBeenSet = true;
}

bool ModifySmsSignRequest::CommissionImageHasBeenSet() const
{
    return m_commissionImageHasBeenSet;
}

string ModifySmsSignRequest::GetRemark() const
{
    return m_remark;
}

void ModifySmsSignRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifySmsSignRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t ModifySmsSignRequest::GetQualificationId() const
{
    return m_qualificationId;
}

void ModifySmsSignRequest::SetQualificationId(const uint64_t& _qualificationId)
{
    m_qualificationId = _qualificationId;
    m_qualificationIdHasBeenSet = true;
}

bool ModifySmsSignRequest::QualificationIdHasBeenSet() const
{
    return m_qualificationIdHasBeenSet;
}


