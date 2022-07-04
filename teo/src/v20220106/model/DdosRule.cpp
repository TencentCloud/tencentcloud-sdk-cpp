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

#include <tencentcloud/teo/v20220106/model/DdosRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DdosRule::DdosRule() :
    m_ddosStatusInfoHasBeenSet(false),
    m_ddosGeoIpHasBeenSet(false),
    m_ddosAllowBlockHasBeenSet(false),
    m_ddosAntiPlyHasBeenSet(false),
    m_ddosPacketFilterHasBeenSet(false),
    m_ddosAclHasBeenSet(false),
    m_switchHasBeenSet(false),
    m_udpShardOpenHasBeenSet(false)
{
}

CoreInternalOutcome DdosRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DdosStatusInfo") && !value["DdosStatusInfo"].IsNull())
    {
        if (!value["DdosStatusInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DdosRule.DdosStatusInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ddosStatusInfo.Deserialize(value["DdosStatusInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ddosStatusInfoHasBeenSet = true;
    }

    if (value.HasMember("DdosGeoIp") && !value["DdosGeoIp"].IsNull())
    {
        if (!value["DdosGeoIp"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DdosRule.DdosGeoIp` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ddosGeoIp.Deserialize(value["DdosGeoIp"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ddosGeoIpHasBeenSet = true;
    }

    if (value.HasMember("DdosAllowBlock") && !value["DdosAllowBlock"].IsNull())
    {
        if (!value["DdosAllowBlock"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DdosRule.DdosAllowBlock` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ddosAllowBlock.Deserialize(value["DdosAllowBlock"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ddosAllowBlockHasBeenSet = true;
    }

    if (value.HasMember("DdosAntiPly") && !value["DdosAntiPly"].IsNull())
    {
        if (!value["DdosAntiPly"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DdosRule.DdosAntiPly` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ddosAntiPly.Deserialize(value["DdosAntiPly"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ddosAntiPlyHasBeenSet = true;
    }

    if (value.HasMember("DdosPacketFilter") && !value["DdosPacketFilter"].IsNull())
    {
        if (!value["DdosPacketFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DdosRule.DdosPacketFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ddosPacketFilter.Deserialize(value["DdosPacketFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ddosPacketFilterHasBeenSet = true;
    }

    if (value.HasMember("DdosAcl") && !value["DdosAcl"].IsNull())
    {
        if (!value["DdosAcl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DdosRule.DdosAcl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ddosAcl.Deserialize(value["DdosAcl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ddosAclHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DdosRule.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("UdpShardOpen") && !value["UdpShardOpen"].IsNull())
    {
        if (!value["UdpShardOpen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DdosRule.UdpShardOpen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_udpShardOpen = string(value["UdpShardOpen"].GetString());
        m_udpShardOpenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DdosRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ddosStatusInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdosStatusInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ddosStatusInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ddosGeoIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdosGeoIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ddosGeoIp.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ddosAllowBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdosAllowBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ddosAllowBlock.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ddosAntiPlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdosAntiPly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ddosAntiPly.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ddosPacketFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdosPacketFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ddosPacketFilter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ddosAclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdosAcl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ddosAcl.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_udpShardOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UdpShardOpen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_udpShardOpen.c_str(), allocator).Move(), allocator);
    }

}


DDoSStatusInfo DdosRule::GetDdosStatusInfo() const
{
    return m_ddosStatusInfo;
}

void DdosRule::SetDdosStatusInfo(const DDoSStatusInfo& _ddosStatusInfo)
{
    m_ddosStatusInfo = _ddosStatusInfo;
    m_ddosStatusInfoHasBeenSet = true;
}

bool DdosRule::DdosStatusInfoHasBeenSet() const
{
    return m_ddosStatusInfoHasBeenSet;
}

DDoSGeoIp DdosRule::GetDdosGeoIp() const
{
    return m_ddosGeoIp;
}

void DdosRule::SetDdosGeoIp(const DDoSGeoIp& _ddosGeoIp)
{
    m_ddosGeoIp = _ddosGeoIp;
    m_ddosGeoIpHasBeenSet = true;
}

bool DdosRule::DdosGeoIpHasBeenSet() const
{
    return m_ddosGeoIpHasBeenSet;
}

DdosAllowBlock DdosRule::GetDdosAllowBlock() const
{
    return m_ddosAllowBlock;
}

void DdosRule::SetDdosAllowBlock(const DdosAllowBlock& _ddosAllowBlock)
{
    m_ddosAllowBlock = _ddosAllowBlock;
    m_ddosAllowBlockHasBeenSet = true;
}

bool DdosRule::DdosAllowBlockHasBeenSet() const
{
    return m_ddosAllowBlockHasBeenSet;
}

DDoSAntiPly DdosRule::GetDdosAntiPly() const
{
    return m_ddosAntiPly;
}

void DdosRule::SetDdosAntiPly(const DDoSAntiPly& _ddosAntiPly)
{
    m_ddosAntiPly = _ddosAntiPly;
    m_ddosAntiPlyHasBeenSet = true;
}

bool DdosRule::DdosAntiPlyHasBeenSet() const
{
    return m_ddosAntiPlyHasBeenSet;
}

DdosPacketFilter DdosRule::GetDdosPacketFilter() const
{
    return m_ddosPacketFilter;
}

void DdosRule::SetDdosPacketFilter(const DdosPacketFilter& _ddosPacketFilter)
{
    m_ddosPacketFilter = _ddosPacketFilter;
    m_ddosPacketFilterHasBeenSet = true;
}

bool DdosRule::DdosPacketFilterHasBeenSet() const
{
    return m_ddosPacketFilterHasBeenSet;
}

DdosAcls DdosRule::GetDdosAcl() const
{
    return m_ddosAcl;
}

void DdosRule::SetDdosAcl(const DdosAcls& _ddosAcl)
{
    m_ddosAcl = _ddosAcl;
    m_ddosAclHasBeenSet = true;
}

bool DdosRule::DdosAclHasBeenSet() const
{
    return m_ddosAclHasBeenSet;
}

string DdosRule::GetSwitch() const
{
    return m_switch;
}

void DdosRule::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool DdosRule::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string DdosRule::GetUdpShardOpen() const
{
    return m_udpShardOpen;
}

void DdosRule::SetUdpShardOpen(const string& _udpShardOpen)
{
    m_udpShardOpen = _udpShardOpen;
    m_udpShardOpenHasBeenSet = true;
}

bool DdosRule::UdpShardOpenHasBeenSet() const
{
    return m_udpShardOpenHasBeenSet;
}

