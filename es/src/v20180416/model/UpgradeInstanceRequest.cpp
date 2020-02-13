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

#include <tencentcloud/es/v20180416/model/UpgradeInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace rapidjson;
using namespace std;

UpgradeInstanceRequest::UpgradeInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_esVersionHasBeenSet(false),
    m_checkOnlyHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_basicSecurityTypeHasBeenSet(false)
{
}

string UpgradeInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_esVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EsVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_esVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_checkOnlyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CheckOnly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkOnly, allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_licenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_basicSecurityTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BasicSecurityType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_basicSecurityType, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpgradeInstanceRequest::GetEsVersion() const
{
    return m_esVersion;
}

void UpgradeInstanceRequest::SetEsVersion(const string& _esVersion)
{
    m_esVersion = _esVersion;
    m_esVersionHasBeenSet = true;
}

bool UpgradeInstanceRequest::EsVersionHasBeenSet() const
{
    return m_esVersionHasBeenSet;
}

bool UpgradeInstanceRequest::GetCheckOnly() const
{
    return m_checkOnly;
}

void UpgradeInstanceRequest::SetCheckOnly(const bool& _checkOnly)
{
    m_checkOnly = _checkOnly;
    m_checkOnlyHasBeenSet = true;
}

bool UpgradeInstanceRequest::CheckOnlyHasBeenSet() const
{
    return m_checkOnlyHasBeenSet;
}

string UpgradeInstanceRequest::GetLicenseType() const
{
    return m_licenseType;
}

void UpgradeInstanceRequest::SetLicenseType(const string& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool UpgradeInstanceRequest::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

uint64_t UpgradeInstanceRequest::GetBasicSecurityType() const
{
    return m_basicSecurityType;
}

void UpgradeInstanceRequest::SetBasicSecurityType(const uint64_t& _basicSecurityType)
{
    m_basicSecurityType = _basicSecurityType;
    m_basicSecurityTypeHasBeenSet = true;
}

bool UpgradeInstanceRequest::BasicSecurityTypeHasBeenSet() const
{
    return m_basicSecurityTypeHasBeenSet;
}


