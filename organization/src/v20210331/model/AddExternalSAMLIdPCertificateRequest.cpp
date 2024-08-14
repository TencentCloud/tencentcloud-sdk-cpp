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

#include <tencentcloud/organization/v20210331/model/AddExternalSAMLIdPCertificateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

AddExternalSAMLIdPCertificateRequest::AddExternalSAMLIdPCertificateRequest() :
    m_zoneIdHasBeenSet(false),
    m_x509CertificateHasBeenSet(false)
{
}

string AddExternalSAMLIdPCertificateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_x509CertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "X509Certificate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_x509Certificate.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddExternalSAMLIdPCertificateRequest::GetZoneId() const
{
    return m_zoneId;
}

void AddExternalSAMLIdPCertificateRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool AddExternalSAMLIdPCertificateRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string AddExternalSAMLIdPCertificateRequest::GetX509Certificate() const
{
    return m_x509Certificate;
}

void AddExternalSAMLIdPCertificateRequest::SetX509Certificate(const string& _x509Certificate)
{
    m_x509Certificate = _x509Certificate;
    m_x509CertificateHasBeenSet = true;
}

bool AddExternalSAMLIdPCertificateRequest::X509CertificateHasBeenSet() const
{
    return m_x509CertificateHasBeenSet;
}


