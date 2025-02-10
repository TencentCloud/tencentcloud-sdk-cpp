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

#include <tencentcloud/ssl/v20191205/model/CertificateOrderSubmitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

CertificateOrderSubmitRequest::CertificateOrderSubmitRequest() :
    m_certIdHasBeenSet(false),
    m_deleteDnsAutoRecordHasBeenSet(false),
    m_verifyTypeHasBeenSet(false)
{
}

string CertificateOrderSubmitRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteDnsAutoRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteDnsAutoRecord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteDnsAutoRecord, allocator);
    }

    if (m_verifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CertificateOrderSubmitRequest::GetCertId() const
{
    return m_certId;
}

void CertificateOrderSubmitRequest::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CertificateOrderSubmitRequest::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

uint64_t CertificateOrderSubmitRequest::GetDeleteDnsAutoRecord() const
{
    return m_deleteDnsAutoRecord;
}

void CertificateOrderSubmitRequest::SetDeleteDnsAutoRecord(const uint64_t& _deleteDnsAutoRecord)
{
    m_deleteDnsAutoRecord = _deleteDnsAutoRecord;
    m_deleteDnsAutoRecordHasBeenSet = true;
}

bool CertificateOrderSubmitRequest::DeleteDnsAutoRecordHasBeenSet() const
{
    return m_deleteDnsAutoRecordHasBeenSet;
}

string CertificateOrderSubmitRequest::GetVerifyType() const
{
    return m_verifyType;
}

void CertificateOrderSubmitRequest::SetVerifyType(const string& _verifyType)
{
    m_verifyType = _verifyType;
    m_verifyTypeHasBeenSet = true;
}

bool CertificateOrderSubmitRequest::VerifyTypeHasBeenSet() const
{
    return m_verifyTypeHasBeenSet;
}


