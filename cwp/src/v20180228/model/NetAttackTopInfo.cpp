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

#include <tencentcloud/cwp/v20180228/model/NetAttackTopInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

NetAttackTopInfo::NetAttackTopInfo() :
    m_agentHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_vulHasBeenSet(false)
{
}

CoreInternalOutcome NetAttackTopInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Agent") && !value["Agent"].IsNull())
    {
        if (!value["Agent"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetAttackTopInfo.Agent` is not array type"));

        const rapidjson::Value &tmpValue = value["Agent"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_agent.push_back(item);
        }
        m_agentHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetAttackTopInfo.SrcIp` is not array type"));

        const rapidjson::Value &tmpValue = value["SrcIp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_srcIp.push_back(item);
        }
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("DstPort") && !value["DstPort"].IsNull())
    {
        if (!value["DstPort"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetAttackTopInfo.DstPort` is not array type"));

        const rapidjson::Value &tmpValue = value["DstPort"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dstPort.push_back(item);
        }
        m_dstPortHasBeenSet = true;
    }

    if (value.HasMember("Vul") && !value["Vul"].IsNull())
    {
        if (!value["Vul"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetAttackTopInfo.Vul` is not array type"));

        const rapidjson::Value &tmpValue = value["Vul"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vul.push_back(item);
        }
        m_vulHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetAttackTopInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_agent.begin(); itr != m_agent.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_srcIp.begin(); itr != m_srcIp.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dstPort.begin(); itr != m_dstPort.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vul";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vul.begin(); itr != m_vul.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<TopInfo> NetAttackTopInfo::GetAgent() const
{
    return m_agent;
}

void NetAttackTopInfo::SetAgent(const vector<TopInfo>& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool NetAttackTopInfo::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<TopInfo> NetAttackTopInfo::GetSrcIp() const
{
    return m_srcIp;
}

void NetAttackTopInfo::SetSrcIp(const vector<TopInfo>& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool NetAttackTopInfo::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

vector<TopInfo> NetAttackTopInfo::GetDstPort() const
{
    return m_dstPort;
}

void NetAttackTopInfo::SetDstPort(const vector<TopInfo>& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool NetAttackTopInfo::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

vector<TopInfo> NetAttackTopInfo::GetVul() const
{
    return m_vul;
}

void NetAttackTopInfo::SetVul(const vector<TopInfo>& _vul)
{
    m_vul = _vul;
    m_vulHasBeenSet = true;
}

bool NetAttackTopInfo::VulHasBeenSet() const
{
    return m_vulHasBeenSet;
}

