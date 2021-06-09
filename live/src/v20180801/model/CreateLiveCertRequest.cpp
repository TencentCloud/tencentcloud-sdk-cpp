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

#include <tencentcloud/live/v20180801/model/CreateLiveCertRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateLiveCertRequest::CreateLiveCertRequest() :
    m_certTypeHasBeenSet(false),
    m_certNameHasBeenSet(false),
    m_httpsCrtHasBeenSet(false),
    m_httpsKeyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_cloudCertIdHasBeenSet(false)
{
}

string CreateLiveCertRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_certType, allocator);
    }

    if (m_certNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certName.c_str(), allocator).Move(), allocator);
    }

    if (m_httpsCrtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsCrt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_httpsCrt.c_str(), allocator).Move(), allocator);
    }

    if (m_httpsKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_httpsKey.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudCertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudCertId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateLiveCertRequest::GetCertType() const
{
    return m_certType;
}

void CreateLiveCertRequest::SetCertType(const uint64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool CreateLiveCertRequest::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string CreateLiveCertRequest::GetCertName() const
{
    return m_certName;
}

void CreateLiveCertRequest::SetCertName(const string& _certName)
{
    m_certName = _certName;
    m_certNameHasBeenSet = true;
}

bool CreateLiveCertRequest::CertNameHasBeenSet() const
{
    return m_certNameHasBeenSet;
}

string CreateLiveCertRequest::GetHttpsCrt() const
{
    return m_httpsCrt;
}

void CreateLiveCertRequest::SetHttpsCrt(const string& _httpsCrt)
{
    m_httpsCrt = _httpsCrt;
    m_httpsCrtHasBeenSet = true;
}

bool CreateLiveCertRequest::HttpsCrtHasBeenSet() const
{
    return m_httpsCrtHasBeenSet;
}

string CreateLiveCertRequest::GetHttpsKey() const
{
    return m_httpsKey;
}

void CreateLiveCertRequest::SetHttpsKey(const string& _httpsKey)
{
    m_httpsKey = _httpsKey;
    m_httpsKeyHasBeenSet = true;
}

bool CreateLiveCertRequest::HttpsKeyHasBeenSet() const
{
    return m_httpsKeyHasBeenSet;
}

string CreateLiveCertRequest::GetDescription() const
{
    return m_description;
}

void CreateLiveCertRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateLiveCertRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateLiveCertRequest::GetCloudCertId() const
{
    return m_cloudCertId;
}

void CreateLiveCertRequest::SetCloudCertId(const string& _cloudCertId)
{
    m_cloudCertId = _cloudCertId;
    m_cloudCertIdHasBeenSet = true;
}

bool CreateLiveCertRequest::CloudCertIdHasBeenSet() const
{
    return m_cloudCertIdHasBeenSet;
}


