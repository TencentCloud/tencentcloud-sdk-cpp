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

#include <tencentcloud/dayu/v20180709/model/DDoSAttackSourceRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

DDoSAttackSourceRecord::DDoSAttackSourceRecord() :
    m_srcIpHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_nationHasBeenSet(false),
    m_packetSumHasBeenSet(false),
    m_packetLenHasBeenSet(false)
{
}

CoreInternalOutcome DDoSAttackSourceRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackSourceRecord.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackSourceRecord.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("Nation") && !value["Nation"].IsNull())
    {
        if (!value["Nation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackSourceRecord.Nation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nation = string(value["Nation"].GetString());
        m_nationHasBeenSet = true;
    }

    if (value.HasMember("PacketSum") && !value["PacketSum"].IsNull())
    {
        if (!value["PacketSum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackSourceRecord.PacketSum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packetSum = value["PacketSum"].GetUint64();
        m_packetSumHasBeenSet = true;
    }

    if (value.HasMember("PacketLen") && !value["PacketLen"].IsNull())
    {
        if (!value["PacketLen"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackSourceRecord.PacketLen` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packetLen = value["PacketLen"].GetUint64();
        m_packetLenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSAttackSourceRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_nationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nation.c_str(), allocator).Move(), allocator);
    }

    if (m_packetSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PacketSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packetSum, allocator);
    }

    if (m_packetLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PacketLen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packetLen, allocator);
    }

}


string DDoSAttackSourceRecord::GetSrcIp() const
{
    return m_srcIp;
}

void DDoSAttackSourceRecord::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool DDoSAttackSourceRecord::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

string DDoSAttackSourceRecord::GetProvince() const
{
    return m_province;
}

void DDoSAttackSourceRecord::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool DDoSAttackSourceRecord::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string DDoSAttackSourceRecord::GetNation() const
{
    return m_nation;
}

void DDoSAttackSourceRecord::SetNation(const string& _nation)
{
    m_nation = _nation;
    m_nationHasBeenSet = true;
}

bool DDoSAttackSourceRecord::NationHasBeenSet() const
{
    return m_nationHasBeenSet;
}

uint64_t DDoSAttackSourceRecord::GetPacketSum() const
{
    return m_packetSum;
}

void DDoSAttackSourceRecord::SetPacketSum(const uint64_t& _packetSum)
{
    m_packetSum = _packetSum;
    m_packetSumHasBeenSet = true;
}

bool DDoSAttackSourceRecord::PacketSumHasBeenSet() const
{
    return m_packetSumHasBeenSet;
}

uint64_t DDoSAttackSourceRecord::GetPacketLen() const
{
    return m_packetLen;
}

void DDoSAttackSourceRecord::SetPacketLen(const uint64_t& _packetLen)
{
    m_packetLen = _packetLen;
    m_packetLenHasBeenSet = true;
}

bool DDoSAttackSourceRecord::PacketLenHasBeenSet() const
{
    return m_packetLenHasBeenSet;
}

