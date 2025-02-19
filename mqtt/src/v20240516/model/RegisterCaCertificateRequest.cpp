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

#include <tencentcloud/mqtt/v20240516/model/RegisterCaCertificateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

RegisterCaCertificateRequest::RegisterCaCertificateRequest() :
    m_instanceIdHasBeenSet(false),
    m_caCertificateHasBeenSet(false),
    m_verificationCertificateHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string RegisterCaCertificateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_caCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaCertificate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_caCertificate.c_str(), allocator).Move(), allocator);
    }

    if (m_verificationCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationCertificate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verificationCertificate.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RegisterCaCertificateRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RegisterCaCertificateRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RegisterCaCertificateRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RegisterCaCertificateRequest::GetCaCertificate() const
{
    return m_caCertificate;
}

void RegisterCaCertificateRequest::SetCaCertificate(const string& _caCertificate)
{
    m_caCertificate = _caCertificate;
    m_caCertificateHasBeenSet = true;
}

bool RegisterCaCertificateRequest::CaCertificateHasBeenSet() const
{
    return m_caCertificateHasBeenSet;
}

string RegisterCaCertificateRequest::GetVerificationCertificate() const
{
    return m_verificationCertificate;
}

void RegisterCaCertificateRequest::SetVerificationCertificate(const string& _verificationCertificate)
{
    m_verificationCertificate = _verificationCertificate;
    m_verificationCertificateHasBeenSet = true;
}

bool RegisterCaCertificateRequest::VerificationCertificateHasBeenSet() const
{
    return m_verificationCertificateHasBeenSet;
}

string RegisterCaCertificateRequest::GetFormat() const
{
    return m_format;
}

void RegisterCaCertificateRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool RegisterCaCertificateRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string RegisterCaCertificateRequest::GetStatus() const
{
    return m_status;
}

void RegisterCaCertificateRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RegisterCaCertificateRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


