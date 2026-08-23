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

#include <tencentcloud/csip/v20221121/model/TcrRegistry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TcrRegistry::TcrRegistry() :
    m_registryIdHasBeenSet(false),
    m_registryNameHasBeenSet(false),
    m_publicDomainHasBeenSet(false),
    m_registryRegionHasBeenSet(false),
    m_registryRegionIdHasBeenSet(false)
{
}

CoreInternalOutcome TcrRegistry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrRegistry.RegistryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = string(value["RegistryId"].GetString());
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("RegistryName") && !value["RegistryName"].IsNull())
    {
        if (!value["RegistryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrRegistry.RegistryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryName = string(value["RegistryName"].GetString());
        m_registryNameHasBeenSet = true;
    }

    if (value.HasMember("PublicDomain") && !value["PublicDomain"].IsNull())
    {
        if (!value["PublicDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrRegistry.PublicDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicDomain = string(value["PublicDomain"].GetString());
        m_publicDomainHasBeenSet = true;
    }

    if (value.HasMember("RegistryRegion") && !value["RegistryRegion"].IsNull())
    {
        if (!value["RegistryRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrRegistry.RegistryRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryRegion = string(value["RegistryRegion"].GetString());
        m_registryRegionHasBeenSet = true;
    }

    if (value.HasMember("RegistryRegionId") && !value["RegistryRegionId"].IsNull())
    {
        if (!value["RegistryRegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TcrRegistry.RegistryRegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_registryRegionId = value["RegistryRegionId"].GetUint64();
        m_registryRegionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TcrRegistry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_registryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_registryRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_registryRegionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryRegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registryRegionId, allocator);
    }

}


string TcrRegistry::GetRegistryId() const
{
    return m_registryId;
}

void TcrRegistry::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool TcrRegistry::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string TcrRegistry::GetRegistryName() const
{
    return m_registryName;
}

void TcrRegistry::SetRegistryName(const string& _registryName)
{
    m_registryName = _registryName;
    m_registryNameHasBeenSet = true;
}

bool TcrRegistry::RegistryNameHasBeenSet() const
{
    return m_registryNameHasBeenSet;
}

string TcrRegistry::GetPublicDomain() const
{
    return m_publicDomain;
}

void TcrRegistry::SetPublicDomain(const string& _publicDomain)
{
    m_publicDomain = _publicDomain;
    m_publicDomainHasBeenSet = true;
}

bool TcrRegistry::PublicDomainHasBeenSet() const
{
    return m_publicDomainHasBeenSet;
}

string TcrRegistry::GetRegistryRegion() const
{
    return m_registryRegion;
}

void TcrRegistry::SetRegistryRegion(const string& _registryRegion)
{
    m_registryRegion = _registryRegion;
    m_registryRegionHasBeenSet = true;
}

bool TcrRegistry::RegistryRegionHasBeenSet() const
{
    return m_registryRegionHasBeenSet;
}

uint64_t TcrRegistry::GetRegistryRegionId() const
{
    return m_registryRegionId;
}

void TcrRegistry::SetRegistryRegionId(const uint64_t& _registryRegionId)
{
    m_registryRegionId = _registryRegionId;
    m_registryRegionIdHasBeenSet = true;
}

bool TcrRegistry::RegistryRegionIdHasBeenSet() const
{
    return m_registryRegionIdHasBeenSet;
}

