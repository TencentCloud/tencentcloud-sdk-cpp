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

#include <tencentcloud/csip/v20221121/model/VulAffectedComponent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulAffectedComponent::VulAffectedComponent() :
    m_componentIdHasBeenSet(false),
    m_layerIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_fixedVersionHasBeenSet(false)
{
}

CoreInternalOutcome VulAffectedComponent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComponentId") && !value["ComponentId"].IsNull())
    {
        if (!value["ComponentId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedComponent.ComponentId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_componentId = value["ComponentId"].GetUint64();
        m_componentIdHasBeenSet = true;
    }

    if (value.HasMember("LayerId") && !value["LayerId"].IsNull())
    {
        if (!value["LayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedComponent.LayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layerId = string(value["LayerId"].GetString());
        m_layerIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedComponent.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedComponent.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("FixedVersion") && !value["FixedVersion"].IsNull())
    {
        if (!value["FixedVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedComponent.FixedVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixedVersion = string(value["FixedVersion"].GetString());
        m_fixedVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulAffectedComponent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_componentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentId, allocator);
    }

    if (m_layerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_layerId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_fixedVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixedVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixedVersion.c_str(), allocator).Move(), allocator);
    }

}


uint64_t VulAffectedComponent::GetComponentId() const
{
    return m_componentId;
}

void VulAffectedComponent::SetComponentId(const uint64_t& _componentId)
{
    m_componentId = _componentId;
    m_componentIdHasBeenSet = true;
}

bool VulAffectedComponent::ComponentIdHasBeenSet() const
{
    return m_componentIdHasBeenSet;
}

string VulAffectedComponent::GetLayerId() const
{
    return m_layerId;
}

void VulAffectedComponent::SetLayerId(const string& _layerId)
{
    m_layerId = _layerId;
    m_layerIdHasBeenSet = true;
}

bool VulAffectedComponent::LayerIdHasBeenSet() const
{
    return m_layerIdHasBeenSet;
}

string VulAffectedComponent::GetName() const
{
    return m_name;
}

void VulAffectedComponent::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VulAffectedComponent::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VulAffectedComponent::GetVersion() const
{
    return m_version;
}

void VulAffectedComponent::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool VulAffectedComponent::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string VulAffectedComponent::GetFixedVersion() const
{
    return m_fixedVersion;
}

void VulAffectedComponent::SetFixedVersion(const string& _fixedVersion)
{
    m_fixedVersion = _fixedVersion;
    m_fixedVersionHasBeenSet = true;
}

bool VulAffectedComponent::FixedVersionHasBeenSet() const
{
    return m_fixedVersionHasBeenSet;
}

