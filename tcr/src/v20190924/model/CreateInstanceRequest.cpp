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

#include <tencentcloud/tcr/v20190924/model/CreateInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

CreateInstanceRequest::CreateInstanceRequest() :
    m_registryNameHasBeenSet(false),
    m_registryTypeHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_registryChargeTypeHasBeenSet(false),
    m_registryChargePrepaidHasBeenSet(false),
    m_syncTagHasBeenSet(false),
    m_enableCosMAZHasBeenSet(false),
    m_deletionProtectionHasBeenSet(false)
{
}

string CreateInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryName.c_str(), allocator).Move(), allocator);
    }

    if (m_registryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryType.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagSpecification.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_registryChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_registryChargeType, allocator);
    }

    if (m_registryChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_registryChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_syncTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_syncTag, allocator);
    }

    if (m_enableCosMAZHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCosMAZ";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCosMAZ, allocator);
    }

    if (m_deletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deletionProtection, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstanceRequest::GetRegistryName() const
{
    return m_registryName;
}

void CreateInstanceRequest::SetRegistryName(const string& _registryName)
{
    m_registryName = _registryName;
    m_registryNameHasBeenSet = true;
}

bool CreateInstanceRequest::RegistryNameHasBeenSet() const
{
    return m_registryNameHasBeenSet;
}

string CreateInstanceRequest::GetRegistryType() const
{
    return m_registryType;
}

void CreateInstanceRequest::SetRegistryType(const string& _registryType)
{
    m_registryType = _registryType;
    m_registryTypeHasBeenSet = true;
}

bool CreateInstanceRequest::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

TagSpecification CreateInstanceRequest::GetTagSpecification() const
{
    return m_tagSpecification;
}

void CreateInstanceRequest::SetTagSpecification(const TagSpecification& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool CreateInstanceRequest::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

int64_t CreateInstanceRequest::GetRegistryChargeType() const
{
    return m_registryChargeType;
}

void CreateInstanceRequest::SetRegistryChargeType(const int64_t& _registryChargeType)
{
    m_registryChargeType = _registryChargeType;
    m_registryChargeTypeHasBeenSet = true;
}

bool CreateInstanceRequest::RegistryChargeTypeHasBeenSet() const
{
    return m_registryChargeTypeHasBeenSet;
}

RegistryChargePrepaid CreateInstanceRequest::GetRegistryChargePrepaid() const
{
    return m_registryChargePrepaid;
}

void CreateInstanceRequest::SetRegistryChargePrepaid(const RegistryChargePrepaid& _registryChargePrepaid)
{
    m_registryChargePrepaid = _registryChargePrepaid;
    m_registryChargePrepaidHasBeenSet = true;
}

bool CreateInstanceRequest::RegistryChargePrepaidHasBeenSet() const
{
    return m_registryChargePrepaidHasBeenSet;
}

bool CreateInstanceRequest::GetSyncTag() const
{
    return m_syncTag;
}

void CreateInstanceRequest::SetSyncTag(const bool& _syncTag)
{
    m_syncTag = _syncTag;
    m_syncTagHasBeenSet = true;
}

bool CreateInstanceRequest::SyncTagHasBeenSet() const
{
    return m_syncTagHasBeenSet;
}

bool CreateInstanceRequest::GetEnableCosMAZ() const
{
    return m_enableCosMAZ;
}

void CreateInstanceRequest::SetEnableCosMAZ(const bool& _enableCosMAZ)
{
    m_enableCosMAZ = _enableCosMAZ;
    m_enableCosMAZHasBeenSet = true;
}

bool CreateInstanceRequest::EnableCosMAZHasBeenSet() const
{
    return m_enableCosMAZHasBeenSet;
}

bool CreateInstanceRequest::GetDeletionProtection() const
{
    return m_deletionProtection;
}

void CreateInstanceRequest::SetDeletionProtection(const bool& _deletionProtection)
{
    m_deletionProtection = _deletionProtection;
    m_deletionProtectionHasBeenSet = true;
}

bool CreateInstanceRequest::DeletionProtectionHasBeenSet() const
{
    return m_deletionProtectionHasBeenSet;
}


