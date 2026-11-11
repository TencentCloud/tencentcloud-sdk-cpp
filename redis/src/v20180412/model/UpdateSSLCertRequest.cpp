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

#include <tencentcloud/redis/v20180412/model/UpdateSSLCertRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

UpdateSSLCertRequest::UpdateSSLCertRequest() :
    m_instanceIdHasBeenSet(false),
    m_certSourceHasBeenSet(false),
    m_switchOptionHasBeenSet(false),
    m_addressTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_kmsRegionHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_sSLMinVersionHasBeenSet(false),
    m_encryptionModeHasBeenSet(false)
{
}

string UpdateSSLCertRequest::ToJsonString() const
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

    if (m_addressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_addressType, allocator);
    }

    if (m_kmsKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kmsKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kmsRegion.c_str(), allocator).Move(), allocator);
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


string UpdateSSLCertRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdateSSLCertRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdateSSLCertRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t UpdateSSLCertRequest::GetCertSource() const
{
    return m_certSource;
}

void UpdateSSLCertRequest::SetCertSource(const int64_t& _certSource)
{
    m_certSource = _certSource;
    m_certSourceHasBeenSet = true;
}

bool UpdateSSLCertRequest::CertSourceHasBeenSet() const
{
    return m_certSourceHasBeenSet;
}

int64_t UpdateSSLCertRequest::GetSwitchOption() const
{
    return m_switchOption;
}

void UpdateSSLCertRequest::SetSwitchOption(const int64_t& _switchOption)
{
    m_switchOption = _switchOption;
    m_switchOptionHasBeenSet = true;
}

bool UpdateSSLCertRequest::SwitchOptionHasBeenSet() const
{
    return m_switchOptionHasBeenSet;
}

int64_t UpdateSSLCertRequest::GetAddressType() const
{
    return m_addressType;
}

void UpdateSSLCertRequest::SetAddressType(const int64_t& _addressType)
{
    m_addressType = _addressType;
    m_addressTypeHasBeenSet = true;
}

bool UpdateSSLCertRequest::AddressTypeHasBeenSet() const
{
    return m_addressTypeHasBeenSet;
}

string UpdateSSLCertRequest::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

void UpdateSSLCertRequest::SetKmsKeyId(const string& _kmsKeyId)
{
    m_kmsKeyId = _kmsKeyId;
    m_kmsKeyIdHasBeenSet = true;
}

bool UpdateSSLCertRequest::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}

string UpdateSSLCertRequest::GetKmsRegion() const
{
    return m_kmsRegion;
}

void UpdateSSLCertRequest::SetKmsRegion(const string& _kmsRegion)
{
    m_kmsRegion = _kmsRegion;
    m_kmsRegionHasBeenSet = true;
}

bool UpdateSSLCertRequest::KmsRegionHasBeenSet() const
{
    return m_kmsRegionHasBeenSet;
}

string UpdateSSLCertRequest::GetCertId() const
{
    return m_certId;
}

void UpdateSSLCertRequest::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool UpdateSSLCertRequest::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string UpdateSSLCertRequest::GetSSLMinVersion() const
{
    return m_sSLMinVersion;
}

void UpdateSSLCertRequest::SetSSLMinVersion(const string& _sSLMinVersion)
{
    m_sSLMinVersion = _sSLMinVersion;
    m_sSLMinVersionHasBeenSet = true;
}

bool UpdateSSLCertRequest::SSLMinVersionHasBeenSet() const
{
    return m_sSLMinVersionHasBeenSet;
}

string UpdateSSLCertRequest::GetEncryptionMode() const
{
    return m_encryptionMode;
}

void UpdateSSLCertRequest::SetEncryptionMode(const string& _encryptionMode)
{
    m_encryptionMode = _encryptionMode;
    m_encryptionModeHasBeenSet = true;
}

bool UpdateSSLCertRequest::EncryptionModeHasBeenSet() const
{
    return m_encryptionModeHasBeenSet;
}


