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

#include <tencentcloud/trro/v20220325/model/MultiNet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

MultiNet::MultiNet() :
    m_netIdHasBeenSet(false),
    m_netIpHasBeenSet(false),
    m_rttHasBeenSet(false),
    m_lostHasBeenSet(false),
    m_sendBpsHasBeenSet(false),
    m_recvBpsHasBeenSet(false)
{
}

CoreInternalOutcome MultiNet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NetId") && !value["NetId"].IsNull())
    {
        if (!value["NetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiNet.NetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_netId = value["NetId"].GetInt64();
        m_netIdHasBeenSet = true;
    }

    if (value.HasMember("NetIp") && !value["NetIp"].IsNull())
    {
        if (!value["NetIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiNet.NetIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netIp = string(value["NetIp"].GetString());
        m_netIpHasBeenSet = true;
    }

    if (value.HasMember("Rtt") && !value["Rtt"].IsNull())
    {
        if (!value["Rtt"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiNet.Rtt` is not array type"));

        const rapidjson::Value &tmpValue = value["Rtt"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rtt.push_back((*itr).GetInt64());
        }
        m_rttHasBeenSet = true;
    }

    if (value.HasMember("Lost") && !value["Lost"].IsNull())
    {
        if (!value["Lost"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiNet.Lost` is not array type"));

        const rapidjson::Value &tmpValue = value["Lost"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lost.push_back((*itr).GetInt64());
        }
        m_lostHasBeenSet = true;
    }

    if (value.HasMember("SendBps") && !value["SendBps"].IsNull())
    {
        if (!value["SendBps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiNet.SendBps` is not array type"));

        const rapidjson::Value &tmpValue = value["SendBps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sendBps.push_back((*itr).GetInt64());
        }
        m_sendBpsHasBeenSet = true;
    }

    if (value.HasMember("RecvBps") && !value["RecvBps"].IsNull())
    {
        if (!value["RecvBps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiNet.RecvBps` is not array type"));

        const rapidjson::Value &tmpValue = value["RecvBps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_recvBps.push_back((*itr).GetInt64());
        }
        m_recvBpsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiNet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_netIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netId, allocator);
    }

    if (m_netIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netIp.c_str(), allocator).Move(), allocator);
    }

    if (m_rttHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rtt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rtt.begin(); itr != m_rtt.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_lostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lost.begin(); itr != m_lost.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_sendBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sendBps.begin(); itr != m_sendBps.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_recvBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recvBps.begin(); itr != m_recvBps.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


int64_t MultiNet::GetNetId() const
{
    return m_netId;
}

void MultiNet::SetNetId(const int64_t& _netId)
{
    m_netId = _netId;
    m_netIdHasBeenSet = true;
}

bool MultiNet::NetIdHasBeenSet() const
{
    return m_netIdHasBeenSet;
}

string MultiNet::GetNetIp() const
{
    return m_netIp;
}

void MultiNet::SetNetIp(const string& _netIp)
{
    m_netIp = _netIp;
    m_netIpHasBeenSet = true;
}

bool MultiNet::NetIpHasBeenSet() const
{
    return m_netIpHasBeenSet;
}

vector<int64_t> MultiNet::GetRtt() const
{
    return m_rtt;
}

void MultiNet::SetRtt(const vector<int64_t>& _rtt)
{
    m_rtt = _rtt;
    m_rttHasBeenSet = true;
}

bool MultiNet::RttHasBeenSet() const
{
    return m_rttHasBeenSet;
}

vector<int64_t> MultiNet::GetLost() const
{
    return m_lost;
}

void MultiNet::SetLost(const vector<int64_t>& _lost)
{
    m_lost = _lost;
    m_lostHasBeenSet = true;
}

bool MultiNet::LostHasBeenSet() const
{
    return m_lostHasBeenSet;
}

vector<int64_t> MultiNet::GetSendBps() const
{
    return m_sendBps;
}

void MultiNet::SetSendBps(const vector<int64_t>& _sendBps)
{
    m_sendBps = _sendBps;
    m_sendBpsHasBeenSet = true;
}

bool MultiNet::SendBpsHasBeenSet() const
{
    return m_sendBpsHasBeenSet;
}

vector<int64_t> MultiNet::GetRecvBps() const
{
    return m_recvBps;
}

void MultiNet::SetRecvBps(const vector<int64_t>& _recvBps)
{
    m_recvBps = _recvBps;
    m_recvBpsHasBeenSet = true;
}

bool MultiNet::RecvBpsHasBeenSet() const
{
    return m_recvBpsHasBeenSet;
}

