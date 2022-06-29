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

#include <tencentcloud/teo/v20220106/model/DDosAttackSourceEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DDosAttackSourceEvent::DDosAttackSourceEvent() :
    m_attackSourceIpHasBeenSet(false),
    m_attackRegionHasBeenSet(false),
    m_attackFlowHasBeenSet(false),
    m_attackPacketNumHasBeenSet(false)
{
}

CoreInternalOutcome DDosAttackSourceEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttackSourceIp") && !value["AttackSourceIp"].IsNull())
    {
        if (!value["AttackSourceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDosAttackSourceEvent.AttackSourceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackSourceIp = string(value["AttackSourceIp"].GetString());
        m_attackSourceIpHasBeenSet = true;
    }

    if (value.HasMember("AttackRegion") && !value["AttackRegion"].IsNull())
    {
        if (!value["AttackRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDosAttackSourceEvent.AttackRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackRegion = string(value["AttackRegion"].GetString());
        m_attackRegionHasBeenSet = true;
    }

    if (value.HasMember("AttackFlow") && !value["AttackFlow"].IsNull())
    {
        if (!value["AttackFlow"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDosAttackSourceEvent.AttackFlow` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackFlow = value["AttackFlow"].GetUint64();
        m_attackFlowHasBeenSet = true;
    }

    if (value.HasMember("AttackPacketNum") && !value["AttackPacketNum"].IsNull())
    {
        if (!value["AttackPacketNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDosAttackSourceEvent.AttackPacketNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackPacketNum = value["AttackPacketNum"].GetUint64();
        m_attackPacketNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDosAttackSourceEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attackSourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackSourceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackSourceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_attackRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_attackFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackFlow, allocator);
    }

    if (m_attackPacketNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackPacketNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackPacketNum, allocator);
    }

}


string DDosAttackSourceEvent::GetAttackSourceIp() const
{
    return m_attackSourceIp;
}

void DDosAttackSourceEvent::SetAttackSourceIp(const string& _attackSourceIp)
{
    m_attackSourceIp = _attackSourceIp;
    m_attackSourceIpHasBeenSet = true;
}

bool DDosAttackSourceEvent::AttackSourceIpHasBeenSet() const
{
    return m_attackSourceIpHasBeenSet;
}

string DDosAttackSourceEvent::GetAttackRegion() const
{
    return m_attackRegion;
}

void DDosAttackSourceEvent::SetAttackRegion(const string& _attackRegion)
{
    m_attackRegion = _attackRegion;
    m_attackRegionHasBeenSet = true;
}

bool DDosAttackSourceEvent::AttackRegionHasBeenSet() const
{
    return m_attackRegionHasBeenSet;
}

uint64_t DDosAttackSourceEvent::GetAttackFlow() const
{
    return m_attackFlow;
}

void DDosAttackSourceEvent::SetAttackFlow(const uint64_t& _attackFlow)
{
    m_attackFlow = _attackFlow;
    m_attackFlowHasBeenSet = true;
}

bool DDosAttackSourceEvent::AttackFlowHasBeenSet() const
{
    return m_attackFlowHasBeenSet;
}

uint64_t DDosAttackSourceEvent::GetAttackPacketNum() const
{
    return m_attackPacketNum;
}

void DDosAttackSourceEvent::SetAttackPacketNum(const uint64_t& _attackPacketNum)
{
    m_attackPacketNum = _attackPacketNum;
    m_attackPacketNumHasBeenSet = true;
}

bool DDosAttackSourceEvent::AttackPacketNumHasBeenSet() const
{
    return m_attackPacketNumHasBeenSet;
}

