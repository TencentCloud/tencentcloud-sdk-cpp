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

#include <tencentcloud/cfw/v20190904/model/CcnSwitchInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CcnSwitchInfo::CcnSwitchInfo() :
    m_ccnIdHasBeenSet(false),
    m_switchModeHasBeenSet(false),
    m_routingModeHasBeenSet(false),
    m_regionCidrConfigsHasBeenSet(false),
    m_interconnectPairsHasBeenSet(false),
    m_fwVpcCidrHasBeenSet(false)
{
}

CoreInternalOutcome CcnSwitchInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnSwitchInfo.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("SwitchMode") && !value["SwitchMode"].IsNull())
    {
        if (!value["SwitchMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CcnSwitchInfo.SwitchMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_switchMode = value["SwitchMode"].GetUint64();
        m_switchModeHasBeenSet = true;
    }

    if (value.HasMember("RoutingMode") && !value["RoutingMode"].IsNull())
    {
        if (!value["RoutingMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CcnSwitchInfo.RoutingMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_routingMode = value["RoutingMode"].GetInt64();
        m_routingModeHasBeenSet = true;
    }

    if (value.HasMember("RegionCidrConfigs") && !value["RegionCidrConfigs"].IsNull())
    {
        if (!value["RegionCidrConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CcnSwitchInfo.RegionCidrConfigs` is not array type"));

        const rapidjson::Value &tmpValue = value["RegionCidrConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionCidrConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regionCidrConfigs.push_back(item);
        }
        m_regionCidrConfigsHasBeenSet = true;
    }

    if (value.HasMember("InterconnectPairs") && !value["InterconnectPairs"].IsNull())
    {
        if (!value["InterconnectPairs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CcnSwitchInfo.InterconnectPairs` is not array type"));

        const rapidjson::Value &tmpValue = value["InterconnectPairs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InterconnectPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_interconnectPairs.push_back(item);
        }
        m_interconnectPairsHasBeenSet = true;
    }

    if (value.HasMember("FwVpcCidr") && !value["FwVpcCidr"].IsNull())
    {
        if (!value["FwVpcCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnSwitchInfo.FwVpcCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwVpcCidr = string(value["FwVpcCidr"].GetString());
        m_fwVpcCidrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnSwitchInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_switchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switchMode, allocator);
    }

    if (m_routingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routingMode, allocator);
    }

    if (m_regionCidrConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCidrConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_regionCidrConfigs.begin(); itr != m_regionCidrConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_interconnectPairsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterconnectPairs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_interconnectPairs.begin(); itr != m_interconnectPairs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fwVpcCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwVpcCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwVpcCidr.c_str(), allocator).Move(), allocator);
    }

}


string CcnSwitchInfo::GetCcnId() const
{
    return m_ccnId;
}

void CcnSwitchInfo::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool CcnSwitchInfo::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

uint64_t CcnSwitchInfo::GetSwitchMode() const
{
    return m_switchMode;
}

void CcnSwitchInfo::SetSwitchMode(const uint64_t& _switchMode)
{
    m_switchMode = _switchMode;
    m_switchModeHasBeenSet = true;
}

bool CcnSwitchInfo::SwitchModeHasBeenSet() const
{
    return m_switchModeHasBeenSet;
}

int64_t CcnSwitchInfo::GetRoutingMode() const
{
    return m_routingMode;
}

void CcnSwitchInfo::SetRoutingMode(const int64_t& _routingMode)
{
    m_routingMode = _routingMode;
    m_routingModeHasBeenSet = true;
}

bool CcnSwitchInfo::RoutingModeHasBeenSet() const
{
    return m_routingModeHasBeenSet;
}

vector<RegionCidrConfig> CcnSwitchInfo::GetRegionCidrConfigs() const
{
    return m_regionCidrConfigs;
}

void CcnSwitchInfo::SetRegionCidrConfigs(const vector<RegionCidrConfig>& _regionCidrConfigs)
{
    m_regionCidrConfigs = _regionCidrConfigs;
    m_regionCidrConfigsHasBeenSet = true;
}

bool CcnSwitchInfo::RegionCidrConfigsHasBeenSet() const
{
    return m_regionCidrConfigsHasBeenSet;
}

vector<InterconnectPair> CcnSwitchInfo::GetInterconnectPairs() const
{
    return m_interconnectPairs;
}

void CcnSwitchInfo::SetInterconnectPairs(const vector<InterconnectPair>& _interconnectPairs)
{
    m_interconnectPairs = _interconnectPairs;
    m_interconnectPairsHasBeenSet = true;
}

bool CcnSwitchInfo::InterconnectPairsHasBeenSet() const
{
    return m_interconnectPairsHasBeenSet;
}

string CcnSwitchInfo::GetFwVpcCidr() const
{
    return m_fwVpcCidr;
}

void CcnSwitchInfo::SetFwVpcCidr(const string& _fwVpcCidr)
{
    m_fwVpcCidr = _fwVpcCidr;
    m_fwVpcCidrHasBeenSet = true;
}

bool CcnSwitchInfo::FwVpcCidrHasBeenSet() const
{
    return m_fwVpcCidrHasBeenSet;
}

