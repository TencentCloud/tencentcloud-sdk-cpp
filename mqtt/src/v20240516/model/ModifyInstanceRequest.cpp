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

#include <tencentcloud/mqtt/v20240516/model/ModifyInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

ModifyInstanceRequest::ModifyInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_skuCodeHasBeenSet(false),
    m_deviceCertificateProvisionTypeHasBeenSet(false),
    m_automaticActivationHasBeenSet(false),
    m_authorizationPolicyHasBeenSet(false)
{
}

string ModifyInstanceRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_skuCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkuCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skuCode.c_str(), allocator).Move(), allocator);
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

    if (m_authorizationPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authorizationPolicy, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyInstanceRequest::GetName() const
{
    return m_name;
}

void ModifyInstanceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyInstanceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyInstanceRequest::GetRemark() const
{
    return m_remark;
}

void ModifyInstanceRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyInstanceRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ModifyInstanceRequest::GetSkuCode() const
{
    return m_skuCode;
}

void ModifyInstanceRequest::SetSkuCode(const string& _skuCode)
{
    m_skuCode = _skuCode;
    m_skuCodeHasBeenSet = true;
}

bool ModifyInstanceRequest::SkuCodeHasBeenSet() const
{
    return m_skuCodeHasBeenSet;
}

string ModifyInstanceRequest::GetDeviceCertificateProvisionType() const
{
    return m_deviceCertificateProvisionType;
}

void ModifyInstanceRequest::SetDeviceCertificateProvisionType(const string& _deviceCertificateProvisionType)
{
    m_deviceCertificateProvisionType = _deviceCertificateProvisionType;
    m_deviceCertificateProvisionTypeHasBeenSet = true;
}

bool ModifyInstanceRequest::DeviceCertificateProvisionTypeHasBeenSet() const
{
    return m_deviceCertificateProvisionTypeHasBeenSet;
}

bool ModifyInstanceRequest::GetAutomaticActivation() const
{
    return m_automaticActivation;
}

void ModifyInstanceRequest::SetAutomaticActivation(const bool& _automaticActivation)
{
    m_automaticActivation = _automaticActivation;
    m_automaticActivationHasBeenSet = true;
}

bool ModifyInstanceRequest::AutomaticActivationHasBeenSet() const
{
    return m_automaticActivationHasBeenSet;
}

bool ModifyInstanceRequest::GetAuthorizationPolicy() const
{
    return m_authorizationPolicy;
}

void ModifyInstanceRequest::SetAuthorizationPolicy(const bool& _authorizationPolicy)
{
    m_authorizationPolicy = _authorizationPolicy;
    m_authorizationPolicyHasBeenSet = true;
}

bool ModifyInstanceRequest::AuthorizationPolicyHasBeenSet() const
{
    return m_authorizationPolicyHasBeenSet;
}


