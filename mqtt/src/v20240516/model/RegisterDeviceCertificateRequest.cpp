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

#include <tencentcloud/mqtt/v20240516/model/RegisterDeviceCertificateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

RegisterDeviceCertificateRequest::RegisterDeviceCertificateRequest() :
    m_instanceIdHasBeenSet(false),
    m_deviceCertificateHasBeenSet(false),
    m_caSnHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string RegisterDeviceCertificateRequest::ToJsonString() const
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

    if (m_deviceCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceCertificate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceCertificate.c_str(), allocator).Move(), allocator);
    }

    if (m_caSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaSn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_caSn.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
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


string RegisterDeviceCertificateRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RegisterDeviceCertificateRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RegisterDeviceCertificateRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RegisterDeviceCertificateRequest::GetDeviceCertificate() const
{
    return m_deviceCertificate;
}

void RegisterDeviceCertificateRequest::SetDeviceCertificate(const string& _deviceCertificate)
{
    m_deviceCertificate = _deviceCertificate;
    m_deviceCertificateHasBeenSet = true;
}

bool RegisterDeviceCertificateRequest::DeviceCertificateHasBeenSet() const
{
    return m_deviceCertificateHasBeenSet;
}

string RegisterDeviceCertificateRequest::GetCaSn() const
{
    return m_caSn;
}

void RegisterDeviceCertificateRequest::SetCaSn(const string& _caSn)
{
    m_caSn = _caSn;
    m_caSnHasBeenSet = true;
}

bool RegisterDeviceCertificateRequest::CaSnHasBeenSet() const
{
    return m_caSnHasBeenSet;
}

string RegisterDeviceCertificateRequest::GetClientId() const
{
    return m_clientId;
}

void RegisterDeviceCertificateRequest::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool RegisterDeviceCertificateRequest::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string RegisterDeviceCertificateRequest::GetFormat() const
{
    return m_format;
}

void RegisterDeviceCertificateRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool RegisterDeviceCertificateRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string RegisterDeviceCertificateRequest::GetStatus() const
{
    return m_status;
}

void RegisterDeviceCertificateRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RegisterDeviceCertificateRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


