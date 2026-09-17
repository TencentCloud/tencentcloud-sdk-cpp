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

#include <tencentcloud/edgezone/v20260401/model/CreateInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Edgezone::V20260401::Model;
using namespace std;

CreateInstancesRequest::CreateInstancesRequest() :
    m_zoneHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_privateNetworkIdHasBeenSet(false),
    m_publicNetworkIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_sSHKeyHasBeenSet(false),
    m_versionNumberHasBeenSet(false),
    m_enableIpv6HasBeenSet(false)
{
}

string CreateInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_privateNetworkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateNetworkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privateNetworkId.c_str(), allocator).Move(), allocator);
    }

    if (m_publicNetworkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetworkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publicNetworkId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_sSHKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSHKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sSHKey.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_enableIpv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableIpv6";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableIpv6, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstancesRequest::GetZone() const
{
    return m_zone;
}

void CreateInstancesRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateInstancesRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateInstancesRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateInstancesRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateInstancesRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CreateInstancesRequest::GetPrivateNetworkId() const
{
    return m_privateNetworkId;
}

void CreateInstancesRequest::SetPrivateNetworkId(const string& _privateNetworkId)
{
    m_privateNetworkId = _privateNetworkId;
    m_privateNetworkIdHasBeenSet = true;
}

bool CreateInstancesRequest::PrivateNetworkIdHasBeenSet() const
{
    return m_privateNetworkIdHasBeenSet;
}

string CreateInstancesRequest::GetPublicNetworkId() const
{
    return m_publicNetworkId;
}

void CreateInstancesRequest::SetPublicNetworkId(const string& _publicNetworkId)
{
    m_publicNetworkId = _publicNetworkId;
    m_publicNetworkIdHasBeenSet = true;
}

bool CreateInstancesRequest::PublicNetworkIdHasBeenSet() const
{
    return m_publicNetworkIdHasBeenSet;
}

string CreateInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CreateInstancesRequest::GetImageId() const
{
    return m_imageId;
}

void CreateInstancesRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool CreateInstancesRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

uint64_t CreateInstancesRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void CreateInstancesRequest::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool CreateInstancesRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

string CreateInstancesRequest::GetPassword() const
{
    return m_password;
}

void CreateInstancesRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateInstancesRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CreateInstancesRequest::GetSSHKey() const
{
    return m_sSHKey;
}

void CreateInstancesRequest::SetSSHKey(const string& _sSHKey)
{
    m_sSHKey = _sSHKey;
    m_sSHKeyHasBeenSet = true;
}

bool CreateInstancesRequest::SSHKeyHasBeenSet() const
{
    return m_sSHKeyHasBeenSet;
}

string CreateInstancesRequest::GetVersionNumber() const
{
    return m_versionNumber;
}

void CreateInstancesRequest::SetVersionNumber(const string& _versionNumber)
{
    m_versionNumber = _versionNumber;
    m_versionNumberHasBeenSet = true;
}

bool CreateInstancesRequest::VersionNumberHasBeenSet() const
{
    return m_versionNumberHasBeenSet;
}

bool CreateInstancesRequest::GetEnableIpv6() const
{
    return m_enableIpv6;
}

void CreateInstancesRequest::SetEnableIpv6(const bool& _enableIpv6)
{
    m_enableIpv6 = _enableIpv6;
    m_enableIpv6HasBeenSet = true;
}

bool CreateInstancesRequest::EnableIpv6HasBeenSet() const
{
    return m_enableIpv6HasBeenSet;
}


