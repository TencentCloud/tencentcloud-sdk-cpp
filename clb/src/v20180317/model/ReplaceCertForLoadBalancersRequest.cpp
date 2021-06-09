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

#include <tencentcloud/clb/v20180317/model/ReplaceCertForLoadBalancersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ReplaceCertForLoadBalancersRequest::ReplaceCertForLoadBalancersRequest() :
    m_oldCertificateIdHasBeenSet(false),
    m_certificateHasBeenSet(false)
{
}

string ReplaceCertForLoadBalancersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_oldCertificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldCertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldCertificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certificate.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReplaceCertForLoadBalancersRequest::GetOldCertificateId() const
{
    return m_oldCertificateId;
}

void ReplaceCertForLoadBalancersRequest::SetOldCertificateId(const string& _oldCertificateId)
{
    m_oldCertificateId = _oldCertificateId;
    m_oldCertificateIdHasBeenSet = true;
}

bool ReplaceCertForLoadBalancersRequest::OldCertificateIdHasBeenSet() const
{
    return m_oldCertificateIdHasBeenSet;
}

CertificateInput ReplaceCertForLoadBalancersRequest::GetCertificate() const
{
    return m_certificate;
}

void ReplaceCertForLoadBalancersRequest::SetCertificate(const CertificateInput& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool ReplaceCertForLoadBalancersRequest::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}


