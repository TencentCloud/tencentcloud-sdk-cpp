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

#include <tencentcloud/csip/v20221121/model/VulFixedItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulFixedItem::VulFixedItem() :
    m_vulIdHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_vRPRatingInfoHasBeenSet(false),
    m_vulCategoryHasBeenSet(false),
    m_cveIdHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_componentCountHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_latestFixTimeHasBeenSet(false)
{
}

CoreInternalOutcome VulFixedItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixedItem.VulId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetInt64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixedItem.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixedItem.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("VRPRatingInfo") && !value["VRPRatingInfo"].IsNull())
    {
        if (!value["VRPRatingInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixedItem.VRPRatingInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vRPRatingInfo.Deserialize(value["VRPRatingInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vRPRatingInfoHasBeenSet = true;
    }

    if (value.HasMember("VulCategory") && !value["VulCategory"].IsNull())
    {
        if (!value["VulCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixedItem.VulCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulCategory = string(value["VulCategory"].GetString());
        m_vulCategoryHasBeenSet = true;
    }

    if (value.HasMember("CveId") && !value["CveId"].IsNull())
    {
        if (!value["CveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixedItem.CveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveId = string(value["CveId"].GetString());
        m_cveIdHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixedItem.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixedItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ComponentCount") && !value["ComponentCount"].IsNull())
    {
        if (!value["ComponentCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixedItem.ComponentCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_componentCount = value["ComponentCount"].GetInt64();
        m_componentCountHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulFixedItem.Components` is not array type"));

        const rapidjson::Value &tmpValue = value["Components"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_components.push_back((*itr).GetString());
        }
        m_componentsHasBeenSet = true;
    }

    if (value.HasMember("LatestFixTime") && !value["LatestFixTime"].IsNull())
    {
        if (!value["LatestFixTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixedItem.LatestFixTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFixTime = string(value["LatestFixTime"].GetString());
        m_latestFixTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulFixedItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_vRPRatingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VRPRatingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vRPRatingInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vulCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_cveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveId.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_componentCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentCount, allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_latestFixTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestFixTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestFixTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t VulFixedItem::GetVulId() const
{
    return m_vulId;
}

void VulFixedItem::SetVulId(const int64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool VulFixedItem::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

string VulFixedItem::GetVulName() const
{
    return m_vulName;
}

void VulFixedItem::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulFixedItem::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string VulFixedItem::GetLevel() const
{
    return m_level;
}

void VulFixedItem::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool VulFixedItem::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

VPRRatingInfo VulFixedItem::GetVRPRatingInfo() const
{
    return m_vRPRatingInfo;
}

void VulFixedItem::SetVRPRatingInfo(const VPRRatingInfo& _vRPRatingInfo)
{
    m_vRPRatingInfo = _vRPRatingInfo;
    m_vRPRatingInfoHasBeenSet = true;
}

bool VulFixedItem::VRPRatingInfoHasBeenSet() const
{
    return m_vRPRatingInfoHasBeenSet;
}

string VulFixedItem::GetVulCategory() const
{
    return m_vulCategory;
}

void VulFixedItem::SetVulCategory(const string& _vulCategory)
{
    m_vulCategory = _vulCategory;
    m_vulCategoryHasBeenSet = true;
}

bool VulFixedItem::VulCategoryHasBeenSet() const
{
    return m_vulCategoryHasBeenSet;
}

string VulFixedItem::GetCveId() const
{
    return m_cveId;
}

void VulFixedItem::SetCveId(const string& _cveId)
{
    m_cveId = _cveId;
    m_cveIdHasBeenSet = true;
}

bool VulFixedItem::CveIdHasBeenSet() const
{
    return m_cveIdHasBeenSet;
}

string VulFixedItem::GetMachineName() const
{
    return m_machineName;
}

void VulFixedItem::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool VulFixedItem::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string VulFixedItem::GetInstanceId() const
{
    return m_instanceId;
}

void VulFixedItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool VulFixedItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t VulFixedItem::GetComponentCount() const
{
    return m_componentCount;
}

void VulFixedItem::SetComponentCount(const int64_t& _componentCount)
{
    m_componentCount = _componentCount;
    m_componentCountHasBeenSet = true;
}

bool VulFixedItem::ComponentCountHasBeenSet() const
{
    return m_componentCountHasBeenSet;
}

vector<string> VulFixedItem::GetComponents() const
{
    return m_components;
}

void VulFixedItem::SetComponents(const vector<string>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool VulFixedItem::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

string VulFixedItem::GetLatestFixTime() const
{
    return m_latestFixTime;
}

void VulFixedItem::SetLatestFixTime(const string& _latestFixTime)
{
    m_latestFixTime = _latestFixTime;
    m_latestFixTimeHasBeenSet = true;
}

bool VulFixedItem::LatestFixTimeHasBeenSet() const
{
    return m_latestFixTimeHasBeenSet;
}

