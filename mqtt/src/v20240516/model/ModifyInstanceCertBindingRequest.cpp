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

#include <tencentcloud/mqtt/v20240516/model/ModifyInstanceCertBindingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

ModifyInstanceCertBindingRequest::ModifyInstanceCertBindingRequest() :
    m_instanceIdHasBeenSet(false),
    m_x509ModeHasBeenSet(false),
    m_sSLServerCertIdHasBeenSet(false),
    m_sSLCaCertIdHasBeenSet(false),
    m_deviceCertificateProvisionTypeHasBeenSet(false),
    m_automaticActivationHasBeenSet(false)
{
}

string ModifyInstanceCertBindingRequest::ToJsonString() const
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

    if (m_sSLServerCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLServerCertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sSLServerCertId.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLCaCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLCaCertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sSLCaCertId.c_str(), allocator).Move(), allocator);
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


string ModifyInstanceCertBindingRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceCertBindingRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceCertBindingRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyInstanceCertBindingRequest::GetX509Mode() const
{
    return m_x509Mode;
}

void ModifyInstanceCertBindingRequest::SetX509Mode(const string& _x509Mode)
{
    m_x509Mode = _x509Mode;
    m_x509ModeHasBeenSet = true;
}

bool ModifyInstanceCertBindingRequest::X509ModeHasBeenSet() const
{
    return m_x509ModeHasBeenSet;
}

string ModifyInstanceCertBindingRequest::GetSSLServerCertId() const
{
    return m_sSLServerCertId;
}

void ModifyInstanceCertBindingRequest::SetSSLServerCertId(const string& _sSLServerCertId)
{
    m_sSLServerCertId = _sSLServerCertId;
    m_sSLServerCertIdHasBeenSet = true;
}

bool ModifyInstanceCertBindingRequest::SSLServerCertIdHasBeenSet() const
{
    return m_sSLServerCertIdHasBeenSet;
}

string ModifyInstanceCertBindingRequest::GetSSLCaCertId() const
{
    return m_sSLCaCertId;
}

void ModifyInstanceCertBindingRequest::SetSSLCaCertId(const string& _sSLCaCertId)
{
    m_sSLCaCertId = _sSLCaCertId;
    m_sSLCaCertIdHasBeenSet = true;
}

bool ModifyInstanceCertBindingRequest::SSLCaCertIdHasBeenSet() const
{
    return m_sSLCaCertIdHasBeenSet;
}

string ModifyInstanceCertBindingRequest::GetDeviceCertificateProvisionType() const
{
    return m_deviceCertificateProvisionType;
}

void ModifyInstanceCertBindingRequest::SetDeviceCertificateProvisionType(const string& _deviceCertificateProvisionType)
{
    m_deviceCertificateProvisionType = _deviceCertificateProvisionType;
    m_deviceCertificateProvisionTypeHasBeenSet = true;
}

bool ModifyInstanceCertBindingRequest::DeviceCertificateProvisionTypeHasBeenSet() const
{
    return m_deviceCertificateProvisionTypeHasBeenSet;
}

bool ModifyInstanceCertBindingRequest::GetAutomaticActivation() const
{
    return m_automaticActivation;
}

void ModifyInstanceCertBindingRequest::SetAutomaticActivation(const bool& _automaticActivation)
{
    m_automaticActivation = _automaticActivation;
    m_automaticActivationHasBeenSet = true;
}

bool ModifyInstanceCertBindingRequest::AutomaticActivationHasBeenSet() const
{
    return m_automaticActivationHasBeenSet;
}


