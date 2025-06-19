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

#include <tencentcloud/mps/v20190612/model/DescribeOutputSRTSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeOutputSRTSettings::DescribeOutputSRTSettings() :
    m_destinationsHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_latencyHasBeenSet(false),
    m_recvLatencyHasBeenSet(false),
    m_peerLatencyHasBeenSet(false),
    m_peerIdleTimeoutHasBeenSet(false),
    m_passphraseHasBeenSet(false),
    m_pbKeyLenHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_sourceAddressesHasBeenSet(false),
    m_fECHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOutputSRTSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Destinations") && !value["Destinations"].IsNull())
    {
        if (!value["Destinations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeOutputSRTSettings.Destinations` is not array type"));

        const rapidjson::Value &tmpValue = value["Destinations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SRTAddressDestination item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_destinations.push_back(item);
        }
        m_destinationsHasBeenSet = true;
    }

    if (value.HasMember("StreamId") && !value["StreamId"].IsNull())
    {
        if (!value["StreamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutputSRTSettings.StreamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamId = string(value["StreamId"].GetString());
        m_streamIdHasBeenSet = true;
    }

    if (value.HasMember("Latency") && !value["Latency"].IsNull())
    {
        if (!value["Latency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutputSRTSettings.Latency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latency = value["Latency"].GetInt64();
        m_latencyHasBeenSet = true;
    }

    if (value.HasMember("RecvLatency") && !value["RecvLatency"].IsNull())
    {
        if (!value["RecvLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutputSRTSettings.RecvLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recvLatency = value["RecvLatency"].GetInt64();
        m_recvLatencyHasBeenSet = true;
    }

    if (value.HasMember("PeerLatency") && !value["PeerLatency"].IsNull())
    {
        if (!value["PeerLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutputSRTSettings.PeerLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_peerLatency = value["PeerLatency"].GetInt64();
        m_peerLatencyHasBeenSet = true;
    }

    if (value.HasMember("PeerIdleTimeout") && !value["PeerIdleTimeout"].IsNull())
    {
        if (!value["PeerIdleTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutputSRTSettings.PeerIdleTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_peerIdleTimeout = value["PeerIdleTimeout"].GetInt64();
        m_peerIdleTimeoutHasBeenSet = true;
    }

    if (value.HasMember("Passphrase") && !value["Passphrase"].IsNull())
    {
        if (!value["Passphrase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutputSRTSettings.Passphrase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passphrase = string(value["Passphrase"].GetString());
        m_passphraseHasBeenSet = true;
    }

    if (value.HasMember("PbKeyLen") && !value["PbKeyLen"].IsNull())
    {
        if (!value["PbKeyLen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutputSRTSettings.PbKeyLen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pbKeyLen = value["PbKeyLen"].GetInt64();
        m_pbKeyLenHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutputSRTSettings.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("SourceAddresses") && !value["SourceAddresses"].IsNull())
    {
        if (!value["SourceAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeOutputSRTSettings.SourceAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OutputSRTSourceAddressResp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceAddresses.push_back(item);
        }
        m_sourceAddressesHasBeenSet = true;
    }

    if (value.HasMember("FEC") && !value["FEC"].IsNull())
    {
        if (!value["FEC"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutputSRTSettings.FEC` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fEC.Deserialize(value["FEC"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fECHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeOutputSRTSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_destinationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destinations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinations.begin(); itr != m_destinations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_streamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamId.c_str(), allocator).Move(), allocator);
    }

    if (m_latencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latency, allocator);
    }

    if (m_recvLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recvLatency, allocator);
    }

    if (m_peerLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_peerLatency, allocator);
    }

    if (m_peerIdleTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerIdleTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_peerIdleTimeout, allocator);
    }

    if (m_passphraseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Passphrase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passphrase.c_str(), allocator).Move(), allocator);
    }

    if (m_pbKeyLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PbKeyLen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pbKeyLen, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceAddresses.begin(); itr != m_sourceAddresses.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fECHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FEC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fEC.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<SRTAddressDestination> DescribeOutputSRTSettings::GetDestinations() const
{
    return m_destinations;
}

void DescribeOutputSRTSettings::SetDestinations(const vector<SRTAddressDestination>& _destinations)
{
    m_destinations = _destinations;
    m_destinationsHasBeenSet = true;
}

bool DescribeOutputSRTSettings::DestinationsHasBeenSet() const
{
    return m_destinationsHasBeenSet;
}

string DescribeOutputSRTSettings::GetStreamId() const
{
    return m_streamId;
}

void DescribeOutputSRTSettings::SetStreamId(const string& _streamId)
{
    m_streamId = _streamId;
    m_streamIdHasBeenSet = true;
}

bool DescribeOutputSRTSettings::StreamIdHasBeenSet() const
{
    return m_streamIdHasBeenSet;
}

int64_t DescribeOutputSRTSettings::GetLatency() const
{
    return m_latency;
}

void DescribeOutputSRTSettings::SetLatency(const int64_t& _latency)
{
    m_latency = _latency;
    m_latencyHasBeenSet = true;
}

bool DescribeOutputSRTSettings::LatencyHasBeenSet() const
{
    return m_latencyHasBeenSet;
}

int64_t DescribeOutputSRTSettings::GetRecvLatency() const
{
    return m_recvLatency;
}

void DescribeOutputSRTSettings::SetRecvLatency(const int64_t& _recvLatency)
{
    m_recvLatency = _recvLatency;
    m_recvLatencyHasBeenSet = true;
}

bool DescribeOutputSRTSettings::RecvLatencyHasBeenSet() const
{
    return m_recvLatencyHasBeenSet;
}

int64_t DescribeOutputSRTSettings::GetPeerLatency() const
{
    return m_peerLatency;
}

void DescribeOutputSRTSettings::SetPeerLatency(const int64_t& _peerLatency)
{
    m_peerLatency = _peerLatency;
    m_peerLatencyHasBeenSet = true;
}

bool DescribeOutputSRTSettings::PeerLatencyHasBeenSet() const
{
    return m_peerLatencyHasBeenSet;
}

int64_t DescribeOutputSRTSettings::GetPeerIdleTimeout() const
{
    return m_peerIdleTimeout;
}

void DescribeOutputSRTSettings::SetPeerIdleTimeout(const int64_t& _peerIdleTimeout)
{
    m_peerIdleTimeout = _peerIdleTimeout;
    m_peerIdleTimeoutHasBeenSet = true;
}

bool DescribeOutputSRTSettings::PeerIdleTimeoutHasBeenSet() const
{
    return m_peerIdleTimeoutHasBeenSet;
}

string DescribeOutputSRTSettings::GetPassphrase() const
{
    return m_passphrase;
}

void DescribeOutputSRTSettings::SetPassphrase(const string& _passphrase)
{
    m_passphrase = _passphrase;
    m_passphraseHasBeenSet = true;
}

bool DescribeOutputSRTSettings::PassphraseHasBeenSet() const
{
    return m_passphraseHasBeenSet;
}

int64_t DescribeOutputSRTSettings::GetPbKeyLen() const
{
    return m_pbKeyLen;
}

void DescribeOutputSRTSettings::SetPbKeyLen(const int64_t& _pbKeyLen)
{
    m_pbKeyLen = _pbKeyLen;
    m_pbKeyLenHasBeenSet = true;
}

bool DescribeOutputSRTSettings::PbKeyLenHasBeenSet() const
{
    return m_pbKeyLenHasBeenSet;
}

string DescribeOutputSRTSettings::GetMode() const
{
    return m_mode;
}

void DescribeOutputSRTSettings::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DescribeOutputSRTSettings::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<OutputSRTSourceAddressResp> DescribeOutputSRTSettings::GetSourceAddresses() const
{
    return m_sourceAddresses;
}

void DescribeOutputSRTSettings::SetSourceAddresses(const vector<OutputSRTSourceAddressResp>& _sourceAddresses)
{
    m_sourceAddresses = _sourceAddresses;
    m_sourceAddressesHasBeenSet = true;
}

bool DescribeOutputSRTSettings::SourceAddressesHasBeenSet() const
{
    return m_sourceAddressesHasBeenSet;
}

SRTFECFullOptions DescribeOutputSRTSettings::GetFEC() const
{
    return m_fEC;
}

void DescribeOutputSRTSettings::SetFEC(const SRTFECFullOptions& _fEC)
{
    m_fEC = _fEC;
    m_fECHasBeenSet = true;
}

bool DescribeOutputSRTSettings::FECHasBeenSet() const
{
    return m_fECHasBeenSet;
}

