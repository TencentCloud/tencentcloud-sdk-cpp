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

#include <tencentcloud/cpdp/v20190820/model/RegisterBehaviorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

RegisterBehaviorRequest::RegisterBehaviorRequest() :
    m_midasAppIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_functionFlagHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false),
    m_operationClickTimeHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_signChannelHasBeenSet(false)
{
}

string RegisterBehaviorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_functionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_functionFlag, allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_operationClickTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationClickTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationClickTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ipAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_macAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MacAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_macAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_signChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_signChannel, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RegisterBehaviorRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void RegisterBehaviorRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool RegisterBehaviorRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string RegisterBehaviorRequest::GetSubAppId() const
{
    return m_subAppId;
}

void RegisterBehaviorRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool RegisterBehaviorRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string RegisterBehaviorRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void RegisterBehaviorRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool RegisterBehaviorRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string RegisterBehaviorRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void RegisterBehaviorRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool RegisterBehaviorRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

int64_t RegisterBehaviorRequest::GetFunctionFlag() const
{
    return m_functionFlag;
}

void RegisterBehaviorRequest::SetFunctionFlag(const int64_t& _functionFlag)
{
    m_functionFlag = _functionFlag;
    m_functionFlagHasBeenSet = true;
}

bool RegisterBehaviorRequest::FunctionFlagHasBeenSet() const
{
    return m_functionFlagHasBeenSet;
}

string RegisterBehaviorRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void RegisterBehaviorRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool RegisterBehaviorRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

string RegisterBehaviorRequest::GetOperationClickTime() const
{
    return m_operationClickTime;
}

void RegisterBehaviorRequest::SetOperationClickTime(const string& _operationClickTime)
{
    m_operationClickTime = _operationClickTime;
    m_operationClickTimeHasBeenSet = true;
}

bool RegisterBehaviorRequest::OperationClickTimeHasBeenSet() const
{
    return m_operationClickTimeHasBeenSet;
}

string RegisterBehaviorRequest::GetIpAddress() const
{
    return m_ipAddress;
}

void RegisterBehaviorRequest::SetIpAddress(const string& _ipAddress)
{
    m_ipAddress = _ipAddress;
    m_ipAddressHasBeenSet = true;
}

bool RegisterBehaviorRequest::IpAddressHasBeenSet() const
{
    return m_ipAddressHasBeenSet;
}

string RegisterBehaviorRequest::GetMacAddress() const
{
    return m_macAddress;
}

void RegisterBehaviorRequest::SetMacAddress(const string& _macAddress)
{
    m_macAddress = _macAddress;
    m_macAddressHasBeenSet = true;
}

bool RegisterBehaviorRequest::MacAddressHasBeenSet() const
{
    return m_macAddressHasBeenSet;
}

int64_t RegisterBehaviorRequest::GetSignChannel() const
{
    return m_signChannel;
}

void RegisterBehaviorRequest::SetSignChannel(const int64_t& _signChannel)
{
    m_signChannel = _signChannel;
    m_signChannelHasBeenSet = true;
}

bool RegisterBehaviorRequest::SignChannelHasBeenSet() const
{
    return m_signChannelHasBeenSet;
}


