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

#include <tencentcloud/teo/v20220901/model/DDoSRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DDoSRule::DDoSRule() :
    m_dDoSStatusInfoHasBeenSet(false),
    m_dDoSGeoIpHasBeenSet(false),
    m_dDoSAllowBlockHasBeenSet(false),
    m_dDoSAntiPlyHasBeenSet(false),
    m_dDoSPacketFilterHasBeenSet(false),
    m_dDoSAclHasBeenSet(false),
    m_switchHasBeenSet(false),
    m_udpShardOpenHasBeenSet(false),
    m_dDoSSpeedLimitHasBeenSet(false)
{
}

CoreInternalOutcome DDoSRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DDoSStatusInfo") && !value["DDoSStatusInfo"].IsNull())
    {
        if (!value["DDoSStatusInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSRule.DDoSStatusInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dDoSStatusInfo.Deserialize(value["DDoSStatusInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dDoSStatusInfoHasBeenSet = true;
    }

    if (value.HasMember("DDoSGeoIp") && !value["DDoSGeoIp"].IsNull())
    {
        if (!value["DDoSGeoIp"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSRule.DDoSGeoIp` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dDoSGeoIp.Deserialize(value["DDoSGeoIp"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dDoSGeoIpHasBeenSet = true;
    }

    if (value.HasMember("DDoSAllowBlock") && !value["DDoSAllowBlock"].IsNull())
    {
        if (!value["DDoSAllowBlock"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSRule.DDoSAllowBlock` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dDoSAllowBlock.Deserialize(value["DDoSAllowBlock"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dDoSAllowBlockHasBeenSet = true;
    }

    if (value.HasMember("DDoSAntiPly") && !value["DDoSAntiPly"].IsNull())
    {
        if (!value["DDoSAntiPly"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSRule.DDoSAntiPly` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dDoSAntiPly.Deserialize(value["DDoSAntiPly"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dDoSAntiPlyHasBeenSet = true;
    }

    if (value.HasMember("DDoSPacketFilter") && !value["DDoSPacketFilter"].IsNull())
    {
        if (!value["DDoSPacketFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSRule.DDoSPacketFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dDoSPacketFilter.Deserialize(value["DDoSPacketFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dDoSPacketFilterHasBeenSet = true;
    }

    if (value.HasMember("DDoSAcl") && !value["DDoSAcl"].IsNull())
    {
        if (!value["DDoSAcl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSRule.DDoSAcl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dDoSAcl.Deserialize(value["DDoSAcl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dDoSAclHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSRule.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("UdpShardOpen") && !value["UdpShardOpen"].IsNull())
    {
        if (!value["UdpShardOpen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSRule.UdpShardOpen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_udpShardOpen = string(value["UdpShardOpen"].GetString());
        m_udpShardOpenHasBeenSet = true;
    }

    if (value.HasMember("DDoSSpeedLimit") && !value["DDoSSpeedLimit"].IsNull())
    {
        if (!value["DDoSSpeedLimit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSRule.DDoSSpeedLimit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dDoSSpeedLimit.Deserialize(value["DDoSSpeedLimit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dDoSSpeedLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dDoSStatusInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDoSStatusInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dDoSStatusInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dDoSGeoIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDoSGeoIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dDoSGeoIp.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dDoSAllowBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDoSAllowBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dDoSAllowBlock.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dDoSAntiPlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDoSAntiPly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dDoSAntiPly.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dDoSPacketFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDoSPacketFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dDoSPacketFilter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dDoSAclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDoSAcl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dDoSAcl.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_dDoSSpeedLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDoSSpeedLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dDoSSpeedLimit.ToJsonObject(value[key.c_str()], allocator);
    }

}


DDoSStatusInfo DDoSRule::GetDDoSStatusInfo() const
{
    return m_dDoSStatusInfo;
}

void DDoSRule::SetDDoSStatusInfo(const DDoSStatusInfo& _dDoSStatusInfo)
{
    m_dDoSStatusInfo = _dDoSStatusInfo;
    m_dDoSStatusInfoHasBeenSet = true;
}

bool DDoSRule::DDoSStatusInfoHasBeenSet() const
{
    return m_dDoSStatusInfoHasBeenSet;
}

DDoSGeoIp DDoSRule::GetDDoSGeoIp() const
{
    return m_dDoSGeoIp;
}

void DDoSRule::SetDDoSGeoIp(const DDoSGeoIp& _dDoSGeoIp)
{
    m_dDoSGeoIp = _dDoSGeoIp;
    m_dDoSGeoIpHasBeenSet = true;
}

bool DDoSRule::DDoSGeoIpHasBeenSet() const
{
    return m_dDoSGeoIpHasBeenSet;
}

DDoSAllowBlock DDoSRule::GetDDoSAllowBlock() const
{
    return m_dDoSAllowBlock;
}

void DDoSRule::SetDDoSAllowBlock(const DDoSAllowBlock& _dDoSAllowBlock)
{
    m_dDoSAllowBlock = _dDoSAllowBlock;
    m_dDoSAllowBlockHasBeenSet = true;
}

bool DDoSRule::DDoSAllowBlockHasBeenSet() const
{
    return m_dDoSAllowBlockHasBeenSet;
}

DDoSAntiPly DDoSRule::GetDDoSAntiPly() const
{
    return m_dDoSAntiPly;
}

void DDoSRule::SetDDoSAntiPly(const DDoSAntiPly& _dDoSAntiPly)
{
    m_dDoSAntiPly = _dDoSAntiPly;
    m_dDoSAntiPlyHasBeenSet = true;
}

bool DDoSRule::DDoSAntiPlyHasBeenSet() const
{
    return m_dDoSAntiPlyHasBeenSet;
}

DDoSPacketFilter DDoSRule::GetDDoSPacketFilter() const
{
    return m_dDoSPacketFilter;
}

void DDoSRule::SetDDoSPacketFilter(const DDoSPacketFilter& _dDoSPacketFilter)
{
    m_dDoSPacketFilter = _dDoSPacketFilter;
    m_dDoSPacketFilterHasBeenSet = true;
}

bool DDoSRule::DDoSPacketFilterHasBeenSet() const
{
    return m_dDoSPacketFilterHasBeenSet;
}

DDoSAcl DDoSRule::GetDDoSAcl() const
{
    return m_dDoSAcl;
}

void DDoSRule::SetDDoSAcl(const DDoSAcl& _dDoSAcl)
{
    m_dDoSAcl = _dDoSAcl;
    m_dDoSAclHasBeenSet = true;
}

bool DDoSRule::DDoSAclHasBeenSet() const
{
    return m_dDoSAclHasBeenSet;
}

string DDoSRule::GetSwitch() const
{
    return m_switch;
}

void DDoSRule::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool DDoSRule::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string DDoSRule::GetUdpShardOpen() const
{
    return m_udpShardOpen;
}

void DDoSRule::SetUdpShardOpen(const string& _udpShardOpen)
{
    m_udpShardOpen = _udpShardOpen;
    m_udpShardOpenHasBeenSet = true;
}

bool DDoSRule::UdpShardOpenHasBeenSet() const
{
    return m_udpShardOpenHasBeenSet;
}

DDoSSpeedLimit DDoSRule::GetDDoSSpeedLimit() const
{
    return m_dDoSSpeedLimit;
}

void DDoSRule::SetDDoSSpeedLimit(const DDoSSpeedLimit& _dDoSSpeedLimit)
{
    m_dDoSSpeedLimit = _dDoSSpeedLimit;
    m_dDoSSpeedLimitHasBeenSet = true;
}

bool DDoSRule::DDoSSpeedLimitHasBeenSet() const
{
    return m_dDoSSpeedLimitHasBeenSet;
}

