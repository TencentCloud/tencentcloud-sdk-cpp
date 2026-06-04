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

#include <tencentcloud/cfw/v20190904/model/NatCcnSwitchConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

NatCcnSwitchConfig::NatCcnSwitchConfig() :
    m_natInsIdHasBeenSet(false),
    m_ccnIdHasBeenSet(false),
    m_switchModeHasBeenSet(false),
    m_routingModeHasBeenSet(false),
    m_accessInstanceListHasBeenSet(false),
    m_leadVpcCidrHasBeenSet(false)
{
}

CoreInternalOutcome NatCcnSwitchConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NatInsId") && !value["NatInsId"].IsNull())
    {
        if (!value["NatInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatCcnSwitchConfig.NatInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natInsId = string(value["NatInsId"].GetString());
        m_natInsIdHasBeenSet = true;
    }

    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatCcnSwitchConfig.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("SwitchMode") && !value["SwitchMode"].IsNull())
    {
        if (!value["SwitchMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatCcnSwitchConfig.SwitchMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_switchMode = value["SwitchMode"].GetInt64();
        m_switchModeHasBeenSet = true;
    }

    if (value.HasMember("RoutingMode") && !value["RoutingMode"].IsNull())
    {
        if (!value["RoutingMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatCcnSwitchConfig.RoutingMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_routingMode = value["RoutingMode"].GetInt64();
        m_routingModeHasBeenSet = true;
    }

    if (value.HasMember("AccessInstanceList") && !value["AccessInstanceList"].IsNull())
    {
        if (!value["AccessInstanceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatCcnSwitchConfig.AccessInstanceList` is not array type"));

        const rapidjson::Value &tmpValue = value["AccessInstanceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessInstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accessInstanceList.push_back(item);
        }
        m_accessInstanceListHasBeenSet = true;
    }

    if (value.HasMember("LeadVpcCidr") && !value["LeadVpcCidr"].IsNull())
    {
        if (!value["LeadVpcCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatCcnSwitchConfig.LeadVpcCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_leadVpcCidr = string(value["LeadVpcCidr"].GetString());
        m_leadVpcCidrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatCcnSwitchConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_natInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natInsId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_accessInstanceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessInstanceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessInstanceList.begin(); itr != m_accessInstanceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_leadVpcCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeadVpcCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_leadVpcCidr.c_str(), allocator).Move(), allocator);
    }

}


string NatCcnSwitchConfig::GetNatInsId() const
{
    return m_natInsId;
}

void NatCcnSwitchConfig::SetNatInsId(const string& _natInsId)
{
    m_natInsId = _natInsId;
    m_natInsIdHasBeenSet = true;
}

bool NatCcnSwitchConfig::NatInsIdHasBeenSet() const
{
    return m_natInsIdHasBeenSet;
}

string NatCcnSwitchConfig::GetCcnId() const
{
    return m_ccnId;
}

void NatCcnSwitchConfig::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool NatCcnSwitchConfig::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

int64_t NatCcnSwitchConfig::GetSwitchMode() const
{
    return m_switchMode;
}

void NatCcnSwitchConfig::SetSwitchMode(const int64_t& _switchMode)
{
    m_switchMode = _switchMode;
    m_switchModeHasBeenSet = true;
}

bool NatCcnSwitchConfig::SwitchModeHasBeenSet() const
{
    return m_switchModeHasBeenSet;
}

int64_t NatCcnSwitchConfig::GetRoutingMode() const
{
    return m_routingMode;
}

void NatCcnSwitchConfig::SetRoutingMode(const int64_t& _routingMode)
{
    m_routingMode = _routingMode;
    m_routingModeHasBeenSet = true;
}

bool NatCcnSwitchConfig::RoutingModeHasBeenSet() const
{
    return m_routingModeHasBeenSet;
}

vector<AccessInstanceInfo> NatCcnSwitchConfig::GetAccessInstanceList() const
{
    return m_accessInstanceList;
}

void NatCcnSwitchConfig::SetAccessInstanceList(const vector<AccessInstanceInfo>& _accessInstanceList)
{
    m_accessInstanceList = _accessInstanceList;
    m_accessInstanceListHasBeenSet = true;
}

bool NatCcnSwitchConfig::AccessInstanceListHasBeenSet() const
{
    return m_accessInstanceListHasBeenSet;
}

string NatCcnSwitchConfig::GetLeadVpcCidr() const
{
    return m_leadVpcCidr;
}

void NatCcnSwitchConfig::SetLeadVpcCidr(const string& _leadVpcCidr)
{
    m_leadVpcCidr = _leadVpcCidr;
    m_leadVpcCidrHasBeenSet = true;
}

bool NatCcnSwitchConfig::LeadVpcCidrHasBeenSet() const
{
    return m_leadVpcCidrHasBeenSet;
}

