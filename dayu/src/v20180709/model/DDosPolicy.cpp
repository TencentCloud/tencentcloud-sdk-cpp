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

#include <tencentcloud/dayu/v20180709/model/DDosPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

DDosPolicy::DDosPolicy() :
    m_resourcesHasBeenSet(false),
    m_dropOptionsHasBeenSet(false),
    m_portLimitsHasBeenSet(false),
    m_packetFiltersHasBeenSet(false),
    m_ipBlackWhiteListsHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_waterPrintHasBeenSet(false),
    m_waterKeyHasBeenSet(false),
    m_boundResourcesHasBeenSet(false),
    m_sceneIdHasBeenSet(false)
{
}

CoreInternalOutcome DDosPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resources") && !value["Resources"].IsNull())
    {
        if (!value["Resources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDosPolicy.Resources` is not array type"));

        const rapidjson::Value &tmpValue = value["Resources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceIp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resources.push_back(item);
        }
        m_resourcesHasBeenSet = true;
    }

    if (value.HasMember("DropOptions") && !value["DropOptions"].IsNull())
    {
        if (!value["DropOptions"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DDosPolicy.DropOptions` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dropOptions.Deserialize(value["DropOptions"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dropOptionsHasBeenSet = true;
    }

    if (value.HasMember("PortLimits") && !value["PortLimits"].IsNull())
    {
        if (!value["PortLimits"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDosPolicy.PortLimits` is not array type"));

        const rapidjson::Value &tmpValue = value["PortLimits"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DDoSPolicyPortLimit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_portLimits.push_back(item);
        }
        m_portLimitsHasBeenSet = true;
    }

    if (value.HasMember("PacketFilters") && !value["PacketFilters"].IsNull())
    {
        if (!value["PacketFilters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDosPolicy.PacketFilters` is not array type"));

        const rapidjson::Value &tmpValue = value["PacketFilters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DDoSPolicyPacketFilter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_packetFilters.push_back(item);
        }
        m_packetFiltersHasBeenSet = true;
    }

    if (value.HasMember("IpBlackWhiteLists") && !value["IpBlackWhiteLists"].IsNull())
    {
        if (!value["IpBlackWhiteLists"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDosPolicy.IpBlackWhiteLists` is not array type"));

        const rapidjson::Value &tmpValue = value["IpBlackWhiteLists"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IpBlackWhite item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ipBlackWhiteLists.push_back(item);
        }
        m_ipBlackWhiteListsHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDosPolicy.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDosPolicy.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDosPolicy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("WaterPrint") && !value["WaterPrint"].IsNull())
    {
        if (!value["WaterPrint"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDosPolicy.WaterPrint` is not array type"));

        const rapidjson::Value &tmpValue = value["WaterPrint"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WaterPrintPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_waterPrint.push_back(item);
        }
        m_waterPrintHasBeenSet = true;
    }

    if (value.HasMember("WaterKey") && !value["WaterKey"].IsNull())
    {
        if (!value["WaterKey"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDosPolicy.WaterKey` is not array type"));

        const rapidjson::Value &tmpValue = value["WaterKey"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WaterPrintKey item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_waterKey.push_back(item);
        }
        m_waterKeyHasBeenSet = true;
    }

    if (value.HasMember("BoundResources") && !value["BoundResources"].IsNull())
    {
        if (!value["BoundResources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDosPolicy.BoundResources` is not array type"));

        const rapidjson::Value &tmpValue = value["BoundResources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_boundResources.push_back((*itr).GetString());
        }
        m_boundResourcesHasBeenSet = true;
    }

    if (value.HasMember("SceneId") && !value["SceneId"].IsNull())
    {
        if (!value["SceneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDosPolicy.SceneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneId = string(value["SceneId"].GetString());
        m_sceneIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDosPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dropOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dropOptions.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_portLimitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortLimits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_portLimits.begin(); itr != m_portLimits.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_packetFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PacketFilters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_packetFilters.begin(); itr != m_packetFilters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ipBlackWhiteListsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpBlackWhiteLists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipBlackWhiteLists.begin(); itr != m_ipBlackWhiteLists.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_waterPrintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterPrint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_waterPrint.begin(); itr != m_waterPrint.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_waterKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_waterKey.begin(); itr != m_waterKey.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_boundResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundResources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_boundResources.begin(); itr != m_boundResources.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneId.c_str(), allocator).Move(), allocator);
    }

}


vector<ResourceIp> DDosPolicy::GetResources() const
{
    return m_resources;
}

void DDosPolicy::SetResources(const vector<ResourceIp>& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool DDosPolicy::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

DDoSPolicyDropOption DDosPolicy::GetDropOptions() const
{
    return m_dropOptions;
}

void DDosPolicy::SetDropOptions(const DDoSPolicyDropOption& _dropOptions)
{
    m_dropOptions = _dropOptions;
    m_dropOptionsHasBeenSet = true;
}

bool DDosPolicy::DropOptionsHasBeenSet() const
{
    return m_dropOptionsHasBeenSet;
}

vector<DDoSPolicyPortLimit> DDosPolicy::GetPortLimits() const
{
    return m_portLimits;
}

void DDosPolicy::SetPortLimits(const vector<DDoSPolicyPortLimit>& _portLimits)
{
    m_portLimits = _portLimits;
    m_portLimitsHasBeenSet = true;
}

bool DDosPolicy::PortLimitsHasBeenSet() const
{
    return m_portLimitsHasBeenSet;
}

vector<DDoSPolicyPacketFilter> DDosPolicy::GetPacketFilters() const
{
    return m_packetFilters;
}

void DDosPolicy::SetPacketFilters(const vector<DDoSPolicyPacketFilter>& _packetFilters)
{
    m_packetFilters = _packetFilters;
    m_packetFiltersHasBeenSet = true;
}

bool DDosPolicy::PacketFiltersHasBeenSet() const
{
    return m_packetFiltersHasBeenSet;
}

vector<IpBlackWhite> DDosPolicy::GetIpBlackWhiteLists() const
{
    return m_ipBlackWhiteLists;
}

void DDosPolicy::SetIpBlackWhiteLists(const vector<IpBlackWhite>& _ipBlackWhiteLists)
{
    m_ipBlackWhiteLists = _ipBlackWhiteLists;
    m_ipBlackWhiteListsHasBeenSet = true;
}

bool DDosPolicy::IpBlackWhiteListsHasBeenSet() const
{
    return m_ipBlackWhiteListsHasBeenSet;
}

string DDosPolicy::GetPolicyId() const
{
    return m_policyId;
}

void DDosPolicy::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool DDosPolicy::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string DDosPolicy::GetPolicyName() const
{
    return m_policyName;
}

void DDosPolicy::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool DDosPolicy::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string DDosPolicy::GetCreateTime() const
{
    return m_createTime;
}

void DDosPolicy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DDosPolicy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<WaterPrintPolicy> DDosPolicy::GetWaterPrint() const
{
    return m_waterPrint;
}

void DDosPolicy::SetWaterPrint(const vector<WaterPrintPolicy>& _waterPrint)
{
    m_waterPrint = _waterPrint;
    m_waterPrintHasBeenSet = true;
}

bool DDosPolicy::WaterPrintHasBeenSet() const
{
    return m_waterPrintHasBeenSet;
}

vector<WaterPrintKey> DDosPolicy::GetWaterKey() const
{
    return m_waterKey;
}

void DDosPolicy::SetWaterKey(const vector<WaterPrintKey>& _waterKey)
{
    m_waterKey = _waterKey;
    m_waterKeyHasBeenSet = true;
}

bool DDosPolicy::WaterKeyHasBeenSet() const
{
    return m_waterKeyHasBeenSet;
}

vector<string> DDosPolicy::GetBoundResources() const
{
    return m_boundResources;
}

void DDosPolicy::SetBoundResources(const vector<string>& _boundResources)
{
    m_boundResources = _boundResources;
    m_boundResourcesHasBeenSet = true;
}

bool DDosPolicy::BoundResourcesHasBeenSet() const
{
    return m_boundResourcesHasBeenSet;
}

string DDosPolicy::GetSceneId() const
{
    return m_sceneId;
}

void DDosPolicy::SetSceneId(const string& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool DDosPolicy::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

