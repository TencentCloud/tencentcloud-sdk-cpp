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

#include <tencentcloud/redis/v20180412/model/OpenSSLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

OpenSSLRequest::OpenSSLRequest() :
    m_instanceIdHasBeenSet(false),
    m_addressTypeHasBeenSet(false),
    m_certSourceHasBeenSet(false),
    m_switchOptionHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_sSLMinVersionHasBeenSet(false),
    m_encryptionModeHasBeenSet(false)
{
}

string OpenSSLRequest::ToJsonString() const
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

    if (m_addressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_addressType, allocator);
    }

    if (m_certSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_certSource, allocator);
    }

    if (m_switchOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_switchOption, allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLMinVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLMinVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sSLMinVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptionMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string OpenSSLRequest::GetInstanceId() const
{
    return m_instanceId;
}

void OpenSSLRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool OpenSSLRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t OpenSSLRequest::GetAddressType() const
{
    return m_addressType;
}

void OpenSSLRequest::SetAddressType(const int64_t& _addressType)
{
    m_addressType = _addressType;
    m_addressTypeHasBeenSet = true;
}

bool OpenSSLRequest::AddressTypeHasBeenSet() const
{
    return m_addressTypeHasBeenSet;
}

int64_t OpenSSLRequest::GetCertSource() const
{
    return m_certSource;
}

void OpenSSLRequest::SetCertSource(const int64_t& _certSource)
{
    m_certSource = _certSource;
    m_certSourceHasBeenSet = true;
}

bool OpenSSLRequest::CertSourceHasBeenSet() const
{
    return m_certSourceHasBeenSet;
}

int64_t OpenSSLRequest::GetSwitchOption() const
{
    return m_switchOption;
}

void OpenSSLRequest::SetSwitchOption(const int64_t& _switchOption)
{
    m_switchOption = _switchOption;
    m_switchOptionHasBeenSet = true;
}

bool OpenSSLRequest::SwitchOptionHasBeenSet() const
{
    return m_switchOptionHasBeenSet;
}

string OpenSSLRequest::GetCertId() const
{
    return m_certId;
}

void OpenSSLRequest::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool OpenSSLRequest::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string OpenSSLRequest::GetSSLMinVersion() const
{
    return m_sSLMinVersion;
}

void OpenSSLRequest::SetSSLMinVersion(const string& _sSLMinVersion)
{
    m_sSLMinVersion = _sSLMinVersion;
    m_sSLMinVersionHasBeenSet = true;
}

bool OpenSSLRequest::SSLMinVersionHasBeenSet() const
{
    return m_sSLMinVersionHasBeenSet;
}

string OpenSSLRequest::GetEncryptionMode() const
{
    return m_encryptionMode;
}

void OpenSSLRequest::SetEncryptionMode(const string& _encryptionMode)
{
    m_encryptionMode = _encryptionMode;
    m_encryptionModeHasBeenSet = true;
}

bool OpenSSLRequest::EncryptionModeHasBeenSet() const
{
    return m_encryptionModeHasBeenSet;
}


