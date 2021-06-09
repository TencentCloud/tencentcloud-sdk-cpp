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

#include <tencentcloud/zj/v20190121/model/AddSmsSignRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

AddSmsSignRequest::AddSmsSignRequest() :
    m_licenseHasBeenSet(false),
    m_signTypeHasBeenSet(false),
    m_documentTypeHasBeenSet(false),
    m_internationalHasBeenSet(false),
    m_proofImageHasBeenSet(false),
    m_signNameHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string AddSmsSignRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_licenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "License";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_license.c_str(), allocator).Move(), allocator);
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

    if (m_proofImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProofImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proofImage.c_str(), allocator).Move(), allocator);
    }

    if (m_signNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddSmsSignRequest::GetLicense() const
{
    return m_license;
}

void AddSmsSignRequest::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool AddSmsSignRequest::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
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


