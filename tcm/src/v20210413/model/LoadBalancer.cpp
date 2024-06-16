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

#include <tencentcloud/tcm/v20210413/model/LoadBalancer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

LoadBalancer::LoadBalancer() :
    m_loadBalancerTypeHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_internetChargeTypeHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_zoneIDHasBeenSet(false),
    m_vipIspHasBeenSet(false),
    m_tgwGroupNameHasBeenSet(false),
    m_addressIPVersionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_extensiveClustersHasBeenSet(false),
    m_crossRegionConfigHasBeenSet(false),
    m_masterZoneIDHasBeenSet(false),
    m_slaveZoneIDHasBeenSet(false)
{
}

CoreInternalOutcome LoadBalancer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadBalancerType") && !value["LoadBalancerType"].IsNull())
    {
        if (!value["LoadBalancerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LoadBalancerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerType = string(value["LoadBalancerType"].GetString());
        m_loadBalancerTypeHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("InternetChargeType") && !value["InternetChargeType"].IsNull())
    {
        if (!value["InternetChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.InternetChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetChargeType = string(value["InternetChargeType"].GetString());
        m_internetChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.InternetMaxBandwidthOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetInt64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("ZoneID") && !value["ZoneID"].IsNull())
    {
        if (!value["ZoneID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.ZoneID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneID = string(value["ZoneID"].GetString());
        m_zoneIDHasBeenSet = true;
    }

    if (value.HasMember("VipIsp") && !value["VipIsp"].IsNull())
    {
        if (!value["VipIsp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.VipIsp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vipIsp = string(value["VipIsp"].GetString());
        m_vipIspHasBeenSet = true;
    }

    if (value.HasMember("TgwGroupName") && !value["TgwGroupName"].IsNull())
    {
        if (!value["TgwGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.TgwGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tgwGroupName = string(value["TgwGroupName"].GetString());
        m_tgwGroupNameHasBeenSet = true;
    }

    if (value.HasMember("AddressIPVersion") && !value["AddressIPVersion"].IsNull())
    {
        if (!value["AddressIPVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.AddressIPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressIPVersion = string(value["AddressIPVersion"].GetString());
        m_addressIPVersionHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("ExtensiveClusters") && !value["ExtensiveClusters"].IsNull())
    {
        if (!value["ExtensiveClusters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.ExtensiveClusters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extensiveClusters.Deserialize(value["ExtensiveClusters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extensiveClustersHasBeenSet = true;
    }

    if (value.HasMember("CrossRegionConfig") && !value["CrossRegionConfig"].IsNull())
    {
        if (!value["CrossRegionConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.CrossRegionConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_crossRegionConfig.Deserialize(value["CrossRegionConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_crossRegionConfigHasBeenSet = true;
    }

    if (value.HasMember("MasterZoneID") && !value["MasterZoneID"].IsNull())
    {
        if (!value["MasterZoneID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.MasterZoneID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterZoneID = string(value["MasterZoneID"].GetString());
        m_masterZoneIDHasBeenSet = true;
    }

    if (value.HasMember("SlaveZoneID") && !value["SlaveZoneID"].IsNull())
    {
        if (!value["SlaveZoneID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.SlaveZoneID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaveZoneID = string(value["SlaveZoneID"].GetString());
        m_slaveZoneIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadBalancer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loadBalancerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerType.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_internetChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_zoneIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneID.c_str(), allocator).Move(), allocator);
    }

    if (m_vipIspHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipIsp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vipIsp.c_str(), allocator).Move(), allocator);
    }

    if (m_tgwGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TgwGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tgwGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIPVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIPVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressIPVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_extensiveClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensiveClusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extensiveClusters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_crossRegionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegionConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_crossRegionConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_masterZoneIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterZoneID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterZoneID.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveZoneIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZoneID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaveZoneID.c_str(), allocator).Move(), allocator);
    }

}


string LoadBalancer::GetLoadBalancerType() const
{
    return m_loadBalancerType;
}

void LoadBalancer::SetLoadBalancerType(const string& _loadBalancerType)
{
    m_loadBalancerType = _loadBalancerType;
    m_loadBalancerTypeHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerTypeHasBeenSet() const
{
    return m_loadBalancerTypeHasBeenSet;
}

string LoadBalancer::GetSubnetId() const
{
    return m_subnetId;
}

void LoadBalancer::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool LoadBalancer::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string LoadBalancer::GetInternetChargeType() const
{
    return m_internetChargeType;
}

void LoadBalancer::SetInternetChargeType(const string& _internetChargeType)
{
    m_internetChargeType = _internetChargeType;
    m_internetChargeTypeHasBeenSet = true;
}

bool LoadBalancer::InternetChargeTypeHasBeenSet() const
{
    return m_internetChargeTypeHasBeenSet;
}

int64_t LoadBalancer::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void LoadBalancer::SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool LoadBalancer::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

string LoadBalancer::GetZoneID() const
{
    return m_zoneID;
}

void LoadBalancer::SetZoneID(const string& _zoneID)
{
    m_zoneID = _zoneID;
    m_zoneIDHasBeenSet = true;
}

bool LoadBalancer::ZoneIDHasBeenSet() const
{
    return m_zoneIDHasBeenSet;
}

string LoadBalancer::GetVipIsp() const
{
    return m_vipIsp;
}

void LoadBalancer::SetVipIsp(const string& _vipIsp)
{
    m_vipIsp = _vipIsp;
    m_vipIspHasBeenSet = true;
}

bool LoadBalancer::VipIspHasBeenSet() const
{
    return m_vipIspHasBeenSet;
}

string LoadBalancer::GetTgwGroupName() const
{
    return m_tgwGroupName;
}

void LoadBalancer::SetTgwGroupName(const string& _tgwGroupName)
{
    m_tgwGroupName = _tgwGroupName;
    m_tgwGroupNameHasBeenSet = true;
}

bool LoadBalancer::TgwGroupNameHasBeenSet() const
{
    return m_tgwGroupNameHasBeenSet;
}

string LoadBalancer::GetAddressIPVersion() const
{
    return m_addressIPVersion;
}

void LoadBalancer::SetAddressIPVersion(const string& _addressIPVersion)
{
    m_addressIPVersion = _addressIPVersion;
    m_addressIPVersionHasBeenSet = true;
}

bool LoadBalancer::AddressIPVersionHasBeenSet() const
{
    return m_addressIPVersionHasBeenSet;
}

vector<Tag> LoadBalancer::GetTags() const
{
    return m_tags;
}

void LoadBalancer::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool LoadBalancer::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

ExtensiveClusters LoadBalancer::GetExtensiveClusters() const
{
    return m_extensiveClusters;
}

void LoadBalancer::SetExtensiveClusters(const ExtensiveClusters& _extensiveClusters)
{
    m_extensiveClusters = _extensiveClusters;
    m_extensiveClustersHasBeenSet = true;
}

bool LoadBalancer::ExtensiveClustersHasBeenSet() const
{
    return m_extensiveClustersHasBeenSet;
}

CrossRegionConfig LoadBalancer::GetCrossRegionConfig() const
{
    return m_crossRegionConfig;
}

void LoadBalancer::SetCrossRegionConfig(const CrossRegionConfig& _crossRegionConfig)
{
    m_crossRegionConfig = _crossRegionConfig;
    m_crossRegionConfigHasBeenSet = true;
}

bool LoadBalancer::CrossRegionConfigHasBeenSet() const
{
    return m_crossRegionConfigHasBeenSet;
}

string LoadBalancer::GetMasterZoneID() const
{
    return m_masterZoneID;
}

void LoadBalancer::SetMasterZoneID(const string& _masterZoneID)
{
    m_masterZoneID = _masterZoneID;
    m_masterZoneIDHasBeenSet = true;
}

bool LoadBalancer::MasterZoneIDHasBeenSet() const
{
    return m_masterZoneIDHasBeenSet;
}

string LoadBalancer::GetSlaveZoneID() const
{
    return m_slaveZoneID;
}

void LoadBalancer::SetSlaveZoneID(const string& _slaveZoneID)
{
    m_slaveZoneID = _slaveZoneID;
    m_slaveZoneIDHasBeenSet = true;
}

bool LoadBalancer::SlaveZoneIDHasBeenSet() const
{
    return m_slaveZoneIDHasBeenSet;
}

