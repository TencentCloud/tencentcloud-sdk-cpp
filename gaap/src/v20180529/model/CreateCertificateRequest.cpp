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

#include <tencentcloud/gaap/v20180529/model/CreateCertificateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CreateCertificateRequest::CreateCertificateRequest() :
    m_certificateTypeHasBeenSet(false),
    m_certificateContentHasBeenSet(false),
    m_certificateAliasHasBeenSet(false),
    m_certificateKeyHasBeenSet(false)
{
}

string CreateCertificateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_certificateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_certificateType, allocator);
    }

    if (m_certificateContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateContent.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateAlias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateCertificateRequest::GetCertificateType() const
{
    return m_certificateType;
}

void CreateCertificateRequest::SetCertificateType(const int64_t& _certificateType)
{
    m_certificateType = _certificateType;
    m_certificateTypeHasBeenSet = true;
}

bool CreateCertificateRequest::CertificateTypeHasBeenSet() const
{
    return m_certificateTypeHasBeenSet;
}

string CreateCertificateRequest::GetCertificateContent() const
{
    return m_certificateContent;
}

void CreateCertificateRequest::SetCertificateContent(const string& _certificateContent)
{
    m_certificateContent = _certificateContent;
    m_certificateContentHasBeenSet = true;
}

bool CreateCertificateRequest::CertificateContentHasBeenSet() const
{
    return m_certificateContentHasBeenSet;
}

string CreateCertificateRequest::GetCertificateAlias() const
{
    return m_certificateAlias;
}

void CreateCertificateRequest::SetCertificateAlias(const string& _certificateAlias)
{
    m_certificateAlias = _certificateAlias;
    m_certificateAliasHasBeenSet = true;
}

bool CreateCertificateRequest::CertificateAliasHasBeenSet() const
{
    return m_certificateAliasHasBeenSet;
}

string CreateCertificateRequest::GetCertificateKey() const
{
    return m_certificateKey;
}

void CreateCertificateRequest::SetCertificateKey(const string& _certificateKey)
{
    m_certificateKey = _certificateKey;
    m_certificateKeyHasBeenSet = true;
}

bool CreateCertificateRequest::CertificateKeyHasBeenSet() const
{
    return m_certificateKeyHasBeenSet;
}


