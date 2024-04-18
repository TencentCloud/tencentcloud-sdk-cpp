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

#include <tencentcloud/cfw/v20190904/model/NatInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

NatInstanceInfo::NatInstanceInfo() :
    m_natinsIdHasBeenSet(false),
    m_natinsNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_fwModeHasBeenSet(false),
    m_bandWidthHasBeenSet(false),
    m_inFlowMaxHasBeenSet(false),
    m_outFlowMaxHasBeenSet(false),
    m_regionZhHasBeenSet(false),
    m_eipAddressHasBeenSet(false),
    m_vpcIpHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_regionDetailHasBeenSet(false),
    m_zoneZhHasBeenSet(false),
    m_zoneZhBakHasBeenSet(false),
    m_ruleUsedHasBeenSet(false),
    m_ruleMaxHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_updateEnableHasBeenSet(false),
    m_needProbeEngineUpdateHasBeenSet(false),
    m_trafficModeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_zoneBakHasBeenSet(false),
    m_reserveTimeHasBeenSet(false),
    m_reserveVersionHasBeenSet(false),
    m_reserveVersionStateHasBeenSet(false),
    m_elasticSwitchHasBeenSet(false),
    m_elasticBandwidthHasBeenSet(false),
    m_isFirstAfterPayHasBeenSet(false)
{
}

CoreInternalOutcome NatInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NatinsId") && !value["NatinsId"].IsNull())
    {
        if (!value["NatinsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.NatinsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natinsId = string(value["NatinsId"].GetString());
        m_natinsIdHasBeenSet = true;
    }

    if (value.HasMember("NatinsName") && !value["NatinsName"].IsNull())
    {
        if (!value["NatinsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.NatinsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natinsName = string(value["NatinsName"].GetString());
        m_natinsNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("FwMode") && !value["FwMode"].IsNull())
    {
        if (!value["FwMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.FwMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fwMode = value["FwMode"].GetInt64();
        m_fwModeHasBeenSet = true;
    }

    if (value.HasMember("BandWidth") && !value["BandWidth"].IsNull())
    {
        if (!value["BandWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.BandWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandWidth = value["BandWidth"].GetInt64();
        m_bandWidthHasBeenSet = true;
    }

    if (value.HasMember("InFlowMax") && !value["InFlowMax"].IsNull())
    {
        if (!value["InFlowMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.InFlowMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inFlowMax = value["InFlowMax"].GetInt64();
        m_inFlowMaxHasBeenSet = true;
    }

    if (value.HasMember("OutFlowMax") && !value["OutFlowMax"].IsNull())
    {
        if (!value["OutFlowMax"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.OutFlowMax` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outFlowMax = value["OutFlowMax"].GetUint64();
        m_outFlowMaxHasBeenSet = true;
    }

    if (value.HasMember("RegionZh") && !value["RegionZh"].IsNull())
    {
        if (!value["RegionZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.RegionZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionZh = string(value["RegionZh"].GetString());
        m_regionZhHasBeenSet = true;
    }

    if (value.HasMember("EipAddress") && !value["EipAddress"].IsNull())
    {
        if (!value["EipAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.EipAddress` is not array type"));

        const rapidjson::Value &tmpValue = value["EipAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eipAddress.push_back((*itr).GetString());
        }
        m_eipAddressHasBeenSet = true;
    }

    if (value.HasMember("VpcIp") && !value["VpcIp"].IsNull())
    {
        if (!value["VpcIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.VpcIp` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcIp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vpcIp.push_back((*itr).GetString());
        }
        m_vpcIpHasBeenSet = true;
    }

    if (value.HasMember("Subnets") && !value["Subnets"].IsNull())
    {
        if (!value["Subnets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.Subnets` is not array type"));

        const rapidjson::Value &tmpValue = value["Subnets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnets.push_back((*itr).GetString());
        }
        m_subnetsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RegionDetail") && !value["RegionDetail"].IsNull())
    {
        if (!value["RegionDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.RegionDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionDetail = string(value["RegionDetail"].GetString());
        m_regionDetailHasBeenSet = true;
    }

    if (value.HasMember("ZoneZh") && !value["ZoneZh"].IsNull())
    {
        if (!value["ZoneZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.ZoneZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneZh = string(value["ZoneZh"].GetString());
        m_zoneZhHasBeenSet = true;
    }

    if (value.HasMember("ZoneZhBak") && !value["ZoneZhBak"].IsNull())
    {
        if (!value["ZoneZhBak"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.ZoneZhBak` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneZhBak = string(value["ZoneZhBak"].GetString());
        m_zoneZhBakHasBeenSet = true;
    }

    if (value.HasMember("RuleUsed") && !value["RuleUsed"].IsNull())
    {
        if (!value["RuleUsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.RuleUsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleUsed = value["RuleUsed"].GetUint64();
        m_ruleUsedHasBeenSet = true;
    }

    if (value.HasMember("RuleMax") && !value["RuleMax"].IsNull())
    {
        if (!value["RuleMax"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.RuleMax` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleMax = value["RuleMax"].GetUint64();
        m_ruleMaxHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.EngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = string(value["EngineVersion"].GetString());
        m_engineVersionHasBeenSet = true;
    }

    if (value.HasMember("UpdateEnable") && !value["UpdateEnable"].IsNull())
    {
        if (!value["UpdateEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.UpdateEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateEnable = value["UpdateEnable"].GetInt64();
        m_updateEnableHasBeenSet = true;
    }

    if (value.HasMember("NeedProbeEngineUpdate") && !value["NeedProbeEngineUpdate"].IsNull())
    {
        if (!value["NeedProbeEngineUpdate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.NeedProbeEngineUpdate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needProbeEngineUpdate = value["NeedProbeEngineUpdate"].GetInt64();
        m_needProbeEngineUpdateHasBeenSet = true;
    }

    if (value.HasMember("TrafficMode") && !value["TrafficMode"].IsNull())
    {
        if (!value["TrafficMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.TrafficMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMode = string(value["TrafficMode"].GetString());
        m_trafficModeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneBak") && !value["ZoneBak"].IsNull())
    {
        if (!value["ZoneBak"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.ZoneBak` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneBak = string(value["ZoneBak"].GetString());
        m_zoneBakHasBeenSet = true;
    }

    if (value.HasMember("ReserveTime") && !value["ReserveTime"].IsNull())
    {
        if (!value["ReserveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.ReserveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reserveTime = string(value["ReserveTime"].GetString());
        m_reserveTimeHasBeenSet = true;
    }

    if (value.HasMember("ReserveVersion") && !value["ReserveVersion"].IsNull())
    {
        if (!value["ReserveVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.ReserveVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reserveVersion = string(value["ReserveVersion"].GetString());
        m_reserveVersionHasBeenSet = true;
    }

    if (value.HasMember("ReserveVersionState") && !value["ReserveVersionState"].IsNull())
    {
        if (!value["ReserveVersionState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.ReserveVersionState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reserveVersionState = string(value["ReserveVersionState"].GetString());
        m_reserveVersionStateHasBeenSet = true;
    }

    if (value.HasMember("ElasticSwitch") && !value["ElasticSwitch"].IsNull())
    {
        if (!value["ElasticSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.ElasticSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticSwitch = value["ElasticSwitch"].GetInt64();
        m_elasticSwitchHasBeenSet = true;
    }

    if (value.HasMember("ElasticBandwidth") && !value["ElasticBandwidth"].IsNull())
    {
        if (!value["ElasticBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.ElasticBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticBandwidth = value["ElasticBandwidth"].GetInt64();
        m_elasticBandwidthHasBeenSet = true;
    }

    if (value.HasMember("IsFirstAfterPay") && !value["IsFirstAfterPay"].IsNull())
    {
        if (!value["IsFirstAfterPay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.IsFirstAfterPay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isFirstAfterPay = value["IsFirstAfterPay"].GetInt64();
        m_isFirstAfterPayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_natinsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatinsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natinsId.c_str(), allocator).Move(), allocator);
    }

    if (m_natinsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatinsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natinsName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_fwModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fwMode, allocator);
    }

    if (m_bandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandWidth, allocator);
    }

    if (m_inFlowMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InFlowMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inFlowMax, allocator);
    }

    if (m_outFlowMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutFlowMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outFlowMax, allocator);
    }

    if (m_regionZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionZh.c_str(), allocator).Move(), allocator);
    }

    if (m_eipAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eipAddress.begin(); itr != m_eipAddress.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcIp.begin(); itr != m_vpcIp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subnetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subnets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnets.begin(); itr != m_subnets.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_regionDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneZh.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneZhBakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneZhBak";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneZhBak.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleUsed, allocator);
    }

    if (m_ruleMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleMax, allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_updateEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateEnable, allocator);
    }

    if (m_needProbeEngineUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedProbeEngineUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needProbeEngineUpdate, allocator);
    }

    if (m_trafficModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficMode.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneBakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneBak";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneBak.c_str(), allocator).Move(), allocator);
    }

    if (m_reserveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reserveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_reserveVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reserveVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_reserveVersionStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveVersionState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reserveVersionState.c_str(), allocator).Move(), allocator);
    }

    if (m_elasticSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticSwitch, allocator);
    }

    if (m_elasticBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticBandwidth, allocator);
    }

    if (m_isFirstAfterPayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFirstAfterPay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFirstAfterPay, allocator);
    }

}


string NatInstanceInfo::GetNatinsId() const
{
    return m_natinsId;
}

void NatInstanceInfo::SetNatinsId(const string& _natinsId)
{
    m_natinsId = _natinsId;
    m_natinsIdHasBeenSet = true;
}

bool NatInstanceInfo::NatinsIdHasBeenSet() const
{
    return m_natinsIdHasBeenSet;
}

string NatInstanceInfo::GetNatinsName() const
{
    return m_natinsName;
}

void NatInstanceInfo::SetNatinsName(const string& _natinsName)
{
    m_natinsName = _natinsName;
    m_natinsNameHasBeenSet = true;
}

bool NatInstanceInfo::NatinsNameHasBeenSet() const
{
    return m_natinsNameHasBeenSet;
}

string NatInstanceInfo::GetRegion() const
{
    return m_region;
}

void NatInstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool NatInstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t NatInstanceInfo::GetFwMode() const
{
    return m_fwMode;
}

void NatInstanceInfo::SetFwMode(const int64_t& _fwMode)
{
    m_fwMode = _fwMode;
    m_fwModeHasBeenSet = true;
}

bool NatInstanceInfo::FwModeHasBeenSet() const
{
    return m_fwModeHasBeenSet;
}

int64_t NatInstanceInfo::GetBandWidth() const
{
    return m_bandWidth;
}

void NatInstanceInfo::SetBandWidth(const int64_t& _bandWidth)
{
    m_bandWidth = _bandWidth;
    m_bandWidthHasBeenSet = true;
}

bool NatInstanceInfo::BandWidthHasBeenSet() const
{
    return m_bandWidthHasBeenSet;
}

int64_t NatInstanceInfo::GetInFlowMax() const
{
    return m_inFlowMax;
}

void NatInstanceInfo::SetInFlowMax(const int64_t& _inFlowMax)
{
    m_inFlowMax = _inFlowMax;
    m_inFlowMaxHasBeenSet = true;
}

bool NatInstanceInfo::InFlowMaxHasBeenSet() const
{
    return m_inFlowMaxHasBeenSet;
}

uint64_t NatInstanceInfo::GetOutFlowMax() const
{
    return m_outFlowMax;
}

void NatInstanceInfo::SetOutFlowMax(const uint64_t& _outFlowMax)
{
    m_outFlowMax = _outFlowMax;
    m_outFlowMaxHasBeenSet = true;
}

bool NatInstanceInfo::OutFlowMaxHasBeenSet() const
{
    return m_outFlowMaxHasBeenSet;
}

string NatInstanceInfo::GetRegionZh() const
{
    return m_regionZh;
}

void NatInstanceInfo::SetRegionZh(const string& _regionZh)
{
    m_regionZh = _regionZh;
    m_regionZhHasBeenSet = true;
}

bool NatInstanceInfo::RegionZhHasBeenSet() const
{
    return m_regionZhHasBeenSet;
}

vector<string> NatInstanceInfo::GetEipAddress() const
{
    return m_eipAddress;
}

void NatInstanceInfo::SetEipAddress(const vector<string>& _eipAddress)
{
    m_eipAddress = _eipAddress;
    m_eipAddressHasBeenSet = true;
}

bool NatInstanceInfo::EipAddressHasBeenSet() const
{
    return m_eipAddressHasBeenSet;
}

vector<string> NatInstanceInfo::GetVpcIp() const
{
    return m_vpcIp;
}

void NatInstanceInfo::SetVpcIp(const vector<string>& _vpcIp)
{
    m_vpcIp = _vpcIp;
    m_vpcIpHasBeenSet = true;
}

bool NatInstanceInfo::VpcIpHasBeenSet() const
{
    return m_vpcIpHasBeenSet;
}

vector<string> NatInstanceInfo::GetSubnets() const
{
    return m_subnets;
}

void NatInstanceInfo::SetSubnets(const vector<string>& _subnets)
{
    m_subnets = _subnets;
    m_subnetsHasBeenSet = true;
}

bool NatInstanceInfo::SubnetsHasBeenSet() const
{
    return m_subnetsHasBeenSet;
}

int64_t NatInstanceInfo::GetStatus() const
{
    return m_status;
}

void NatInstanceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NatInstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string NatInstanceInfo::GetRegionDetail() const
{
    return m_regionDetail;
}

void NatInstanceInfo::SetRegionDetail(const string& _regionDetail)
{
    m_regionDetail = _regionDetail;
    m_regionDetailHasBeenSet = true;
}

bool NatInstanceInfo::RegionDetailHasBeenSet() const
{
    return m_regionDetailHasBeenSet;
}

string NatInstanceInfo::GetZoneZh() const
{
    return m_zoneZh;
}

void NatInstanceInfo::SetZoneZh(const string& _zoneZh)
{
    m_zoneZh = _zoneZh;
    m_zoneZhHasBeenSet = true;
}

bool NatInstanceInfo::ZoneZhHasBeenSet() const
{
    return m_zoneZhHasBeenSet;
}

string NatInstanceInfo::GetZoneZhBak() const
{
    return m_zoneZhBak;
}

void NatInstanceInfo::SetZoneZhBak(const string& _zoneZhBak)
{
    m_zoneZhBak = _zoneZhBak;
    m_zoneZhBakHasBeenSet = true;
}

bool NatInstanceInfo::ZoneZhBakHasBeenSet() const
{
    return m_zoneZhBakHasBeenSet;
}

uint64_t NatInstanceInfo::GetRuleUsed() const
{
    return m_ruleUsed;
}

void NatInstanceInfo::SetRuleUsed(const uint64_t& _ruleUsed)
{
    m_ruleUsed = _ruleUsed;
    m_ruleUsedHasBeenSet = true;
}

bool NatInstanceInfo::RuleUsedHasBeenSet() const
{
    return m_ruleUsedHasBeenSet;
}

uint64_t NatInstanceInfo::GetRuleMax() const
{
    return m_ruleMax;
}

void NatInstanceInfo::SetRuleMax(const uint64_t& _ruleMax)
{
    m_ruleMax = _ruleMax;
    m_ruleMaxHasBeenSet = true;
}

bool NatInstanceInfo::RuleMaxHasBeenSet() const
{
    return m_ruleMaxHasBeenSet;
}

string NatInstanceInfo::GetEngineVersion() const
{
    return m_engineVersion;
}

void NatInstanceInfo::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool NatInstanceInfo::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

int64_t NatInstanceInfo::GetUpdateEnable() const
{
    return m_updateEnable;
}

void NatInstanceInfo::SetUpdateEnable(const int64_t& _updateEnable)
{
    m_updateEnable = _updateEnable;
    m_updateEnableHasBeenSet = true;
}

bool NatInstanceInfo::UpdateEnableHasBeenSet() const
{
    return m_updateEnableHasBeenSet;
}

int64_t NatInstanceInfo::GetNeedProbeEngineUpdate() const
{
    return m_needProbeEngineUpdate;
}

void NatInstanceInfo::SetNeedProbeEngineUpdate(const int64_t& _needProbeEngineUpdate)
{
    m_needProbeEngineUpdate = _needProbeEngineUpdate;
    m_needProbeEngineUpdateHasBeenSet = true;
}

bool NatInstanceInfo::NeedProbeEngineUpdateHasBeenSet() const
{
    return m_needProbeEngineUpdateHasBeenSet;
}

string NatInstanceInfo::GetTrafficMode() const
{
    return m_trafficMode;
}

void NatInstanceInfo::SetTrafficMode(const string& _trafficMode)
{
    m_trafficMode = _trafficMode;
    m_trafficModeHasBeenSet = true;
}

bool NatInstanceInfo::TrafficModeHasBeenSet() const
{
    return m_trafficModeHasBeenSet;
}

string NatInstanceInfo::GetZone() const
{
    return m_zone;
}

void NatInstanceInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool NatInstanceInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string NatInstanceInfo::GetZoneBak() const
{
    return m_zoneBak;
}

void NatInstanceInfo::SetZoneBak(const string& _zoneBak)
{
    m_zoneBak = _zoneBak;
    m_zoneBakHasBeenSet = true;
}

bool NatInstanceInfo::ZoneBakHasBeenSet() const
{
    return m_zoneBakHasBeenSet;
}

string NatInstanceInfo::GetReserveTime() const
{
    return m_reserveTime;
}

void NatInstanceInfo::SetReserveTime(const string& _reserveTime)
{
    m_reserveTime = _reserveTime;
    m_reserveTimeHasBeenSet = true;
}

bool NatInstanceInfo::ReserveTimeHasBeenSet() const
{
    return m_reserveTimeHasBeenSet;
}

string NatInstanceInfo::GetReserveVersion() const
{
    return m_reserveVersion;
}

void NatInstanceInfo::SetReserveVersion(const string& _reserveVersion)
{
    m_reserveVersion = _reserveVersion;
    m_reserveVersionHasBeenSet = true;
}

bool NatInstanceInfo::ReserveVersionHasBeenSet() const
{
    return m_reserveVersionHasBeenSet;
}

string NatInstanceInfo::GetReserveVersionState() const
{
    return m_reserveVersionState;
}

void NatInstanceInfo::SetReserveVersionState(const string& _reserveVersionState)
{
    m_reserveVersionState = _reserveVersionState;
    m_reserveVersionStateHasBeenSet = true;
}

bool NatInstanceInfo::ReserveVersionStateHasBeenSet() const
{
    return m_reserveVersionStateHasBeenSet;
}

int64_t NatInstanceInfo::GetElasticSwitch() const
{
    return m_elasticSwitch;
}

void NatInstanceInfo::SetElasticSwitch(const int64_t& _elasticSwitch)
{
    m_elasticSwitch = _elasticSwitch;
    m_elasticSwitchHasBeenSet = true;
}

bool NatInstanceInfo::ElasticSwitchHasBeenSet() const
{
    return m_elasticSwitchHasBeenSet;
}

int64_t NatInstanceInfo::GetElasticBandwidth() const
{
    return m_elasticBandwidth;
}

void NatInstanceInfo::SetElasticBandwidth(const int64_t& _elasticBandwidth)
{
    m_elasticBandwidth = _elasticBandwidth;
    m_elasticBandwidthHasBeenSet = true;
}

bool NatInstanceInfo::ElasticBandwidthHasBeenSet() const
{
    return m_elasticBandwidthHasBeenSet;
}

int64_t NatInstanceInfo::GetIsFirstAfterPay() const
{
    return m_isFirstAfterPay;
}

void NatInstanceInfo::SetIsFirstAfterPay(const int64_t& _isFirstAfterPay)
{
    m_isFirstAfterPay = _isFirstAfterPay;
    m_isFirstAfterPayHasBeenSet = true;
}

bool NatInstanceInfo::IsFirstAfterPayHasBeenSet() const
{
    return m_isFirstAfterPayHasBeenSet;
}

