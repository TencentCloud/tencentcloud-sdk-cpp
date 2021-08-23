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

#include <tencentcloud/live/v20180801/model/MonitorStreamPlayInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

MonitorStreamPlayInfo::MonitorStreamPlayInfo() :
    m_playDomainHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_onlineHasBeenSet(false),
    m_requestHasBeenSet(false)
{
}

CoreInternalOutcome MonitorStreamPlayInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlayDomain") && !value["PlayDomain"].IsNull())
    {
        if (!value["PlayDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorStreamPlayInfo.PlayDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playDomain = string(value["PlayDomain"].GetString());
        m_playDomainHasBeenSet = true;
    }

    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorStreamPlayInfo.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorStreamPlayInfo.Rate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rate = value["Rate"].GetUint64();
        m_rateHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorStreamPlayInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorStreamPlayInfo.Bandwidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetDouble();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("Online") && !value["Online"].IsNull())
    {
        if (!value["Online"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorStreamPlayInfo.Online` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_online = value["Online"].GetUint64();
        m_onlineHasBeenSet = true;
    }

    if (value.HasMember("Request") && !value["Request"].IsNull())
    {
        if (!value["Request"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorStreamPlayInfo.Request` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_request = value["Request"].GetUint64();
        m_requestHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorStreamPlayInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_playDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rate, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_onlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Online";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_online, allocator);
    }

    if (m_requestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Request";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_request, allocator);
    }

}


string MonitorStreamPlayInfo::GetPlayDomain() const
{
    return m_playDomain;
}

void MonitorStreamPlayInfo::SetPlayDomain(const string& _playDomain)
{
    m_playDomain = _playDomain;
    m_playDomainHasBeenSet = true;
}

bool MonitorStreamPlayInfo::PlayDomainHasBeenSet() const
{
    return m_playDomainHasBeenSet;
}

string MonitorStreamPlayInfo::GetStreamName() const
{
    return m_streamName;
}

void MonitorStreamPlayInfo::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool MonitorStreamPlayInfo::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

uint64_t MonitorStreamPlayInfo::GetRate() const
{
    return m_rate;
}

void MonitorStreamPlayInfo::SetRate(const uint64_t& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool MonitorStreamPlayInfo::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

string MonitorStreamPlayInfo::GetProtocol() const
{
    return m_protocol;
}

void MonitorStreamPlayInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool MonitorStreamPlayInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

double MonitorStreamPlayInfo::GetBandwidth() const
{
    return m_bandwidth;
}

void MonitorStreamPlayInfo::SetBandwidth(const double& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool MonitorStreamPlayInfo::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

uint64_t MonitorStreamPlayInfo::GetOnline() const
{
    return m_online;
}

void MonitorStreamPlayInfo::SetOnline(const uint64_t& _online)
{
    m_online = _online;
    m_onlineHasBeenSet = true;
}

bool MonitorStreamPlayInfo::OnlineHasBeenSet() const
{
    return m_onlineHasBeenSet;
}

uint64_t MonitorStreamPlayInfo::GetRequest() const
{
    return m_request;
}

void MonitorStreamPlayInfo::SetRequest(const uint64_t& _request)
{
    m_request = _request;
    m_requestHasBeenSet = true;
}

bool MonitorStreamPlayInfo::RequestHasBeenSet() const
{
    return m_requestHasBeenSet;
}

