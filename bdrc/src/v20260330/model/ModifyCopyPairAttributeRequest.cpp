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

#include <tencentcloud/bdrc/v20260330/model/ModifyCopyPairAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ModifyCopyPairAttributeRequest::ModifyCopyPairAttributeRequest() :
    m_copyPairIdHasBeenSet(false),
    m_copyPairTypeHasBeenSet(false),
    m_copyPairNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_useDefaultPrivateIpHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_useDefaultPasswordHasBeenSet(false)
{
}

string ModifyCopyPairAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_copyPairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_copyPairId.c_str(), allocator).Move(), allocator);
    }

    if (m_copyPairTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_copyPairType.c_str(), allocator).Move(), allocator);
    }

    if (m_copyPairNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_copyPairName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privateIpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_useDefaultPrivateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseDefaultPrivateIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useDefaultPrivateIp, allocator);
    }

    if (m_loginSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_useDefaultPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseDefaultPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useDefaultPassword, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCopyPairAttributeRequest::GetCopyPairId() const
{
    return m_copyPairId;
}

void ModifyCopyPairAttributeRequest::SetCopyPairId(const string& _copyPairId)
{
    m_copyPairId = _copyPairId;
    m_copyPairIdHasBeenSet = true;
}

bool ModifyCopyPairAttributeRequest::CopyPairIdHasBeenSet() const
{
    return m_copyPairIdHasBeenSet;
}

string ModifyCopyPairAttributeRequest::GetCopyPairType() const
{
    return m_copyPairType;
}

void ModifyCopyPairAttributeRequest::SetCopyPairType(const string& _copyPairType)
{
    m_copyPairType = _copyPairType;
    m_copyPairTypeHasBeenSet = true;
}

bool ModifyCopyPairAttributeRequest::CopyPairTypeHasBeenSet() const
{
    return m_copyPairTypeHasBeenSet;
}

string ModifyCopyPairAttributeRequest::GetCopyPairName() const
{
    return m_copyPairName;
}

void ModifyCopyPairAttributeRequest::SetCopyPairName(const string& _copyPairName)
{
    m_copyPairName = _copyPairName;
    m_copyPairNameHasBeenSet = true;
}

bool ModifyCopyPairAttributeRequest::CopyPairNameHasBeenSet() const
{
    return m_copyPairNameHasBeenSet;
}

string ModifyCopyPairAttributeRequest::GetInstanceType() const
{
    return m_instanceType;
}

void ModifyCopyPairAttributeRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ModifyCopyPairAttributeRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ModifyCopyPairAttributeRequest::GetPrivateIpAddress() const
{
    return m_privateIpAddress;
}

void ModifyCopyPairAttributeRequest::SetPrivateIpAddress(const string& _privateIpAddress)
{
    m_privateIpAddress = _privateIpAddress;
    m_privateIpAddressHasBeenSet = true;
}

bool ModifyCopyPairAttributeRequest::PrivateIpAddressHasBeenSet() const
{
    return m_privateIpAddressHasBeenSet;
}

bool ModifyCopyPairAttributeRequest::GetUseDefaultPrivateIp() const
{
    return m_useDefaultPrivateIp;
}

void ModifyCopyPairAttributeRequest::SetUseDefaultPrivateIp(const bool& _useDefaultPrivateIp)
{
    m_useDefaultPrivateIp = _useDefaultPrivateIp;
    m_useDefaultPrivateIpHasBeenSet = true;
}

bool ModifyCopyPairAttributeRequest::UseDefaultPrivateIpHasBeenSet() const
{
    return m_useDefaultPrivateIpHasBeenSet;
}

LoginSettings ModifyCopyPairAttributeRequest::GetLoginSettings() const
{
    return m_loginSettings;
}

void ModifyCopyPairAttributeRequest::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool ModifyCopyPairAttributeRequest::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

bool ModifyCopyPairAttributeRequest::GetUseDefaultPassword() const
{
    return m_useDefaultPassword;
}

void ModifyCopyPairAttributeRequest::SetUseDefaultPassword(const bool& _useDefaultPassword)
{
    m_useDefaultPassword = _useDefaultPassword;
    m_useDefaultPasswordHasBeenSet = true;
}

bool ModifyCopyPairAttributeRequest::UseDefaultPasswordHasBeenSet() const
{
    return m_useDefaultPasswordHasBeenSet;
}


