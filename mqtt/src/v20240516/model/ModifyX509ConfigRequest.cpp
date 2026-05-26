/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/mqtt/v20240516/model/ModifyX509ConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

ModifyX509ConfigRequest::ModifyX509ConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_x509ModeHasBeenSet(false),
    m_deviceCertificateProvisionTypeHasBeenSet(false),
    m_automaticActivationHasBeenSet(false)
{
}

string ModifyX509ConfigRequest::ToJsonString() const
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

    if (m_x509ModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "X509Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_x509Mode.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceCertificateProvisionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceCertificateProvisionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceCertificateProvisionType.c_str(), allocator).Move(), allocator);
    }

    if (m_automaticActivationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutomaticActivation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_automaticActivation, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyX509ConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyX509ConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyX509ConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyX509ConfigRequest::GetX509Mode() const
{
    return m_x509Mode;
}

void ModifyX509ConfigRequest::SetX509Mode(const string& _x509Mode)
{
    m_x509Mode = _x509Mode;
    m_x509ModeHasBeenSet = true;
}

bool ModifyX509ConfigRequest::X509ModeHasBeenSet() const
{
    return m_x509ModeHasBeenSet;
}

string ModifyX509ConfigRequest::GetDeviceCertificateProvisionType() const
{
    return m_deviceCertificateProvisionType;
}

void ModifyX509ConfigRequest::SetDeviceCertificateProvisionType(const string& _deviceCertificateProvisionType)
{
    m_deviceCertificateProvisionType = _deviceCertificateProvisionType;
    m_deviceCertificateProvisionTypeHasBeenSet = true;
}

bool ModifyX509ConfigRequest::DeviceCertificateProvisionTypeHasBeenSet() const
{
    return m_deviceCertificateProvisionTypeHasBeenSet;
}

bool ModifyX509ConfigRequest::GetAutomaticActivation() const
{
    return m_automaticActivation;
}

void ModifyX509ConfigRequest::SetAutomaticActivation(const bool& _automaticActivation)
{
    m_automaticActivation = _automaticActivation;
    m_automaticActivationHasBeenSet = true;
}

bool ModifyX509ConfigRequest::AutomaticActivationHasBeenSet() const
{
    return m_automaticActivationHasBeenSet;
}


