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

#include <tencentcloud/live/v20180801/model/CdnPlayStatData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CdnPlayStatData::CdnPlayStatData() :
    m_timeHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_fluxHasBeenSet(false),
    m_requestHasBeenSet(false),
    m_onlineHasBeenSet(false)
{
}

CoreInternalOutcome CdnPlayStatData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdnPlayStatData.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CdnPlayStatData.Bandwidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetDouble();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("Flux") && !value["Flux"].IsNull())
    {
        if (!value["Flux"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CdnPlayStatData.Flux` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_flux = value["Flux"].GetDouble();
        m_fluxHasBeenSet = true;
    }

    if (value.HasMember("Request") && !value["Request"].IsNull())
    {
        if (!value["Request"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CdnPlayStatData.Request` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_request = value["Request"].GetUint64();
        m_requestHasBeenSet = true;
    }

    if (value.HasMember("Online") && !value["Online"].IsNull())
    {
        if (!value["Online"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CdnPlayStatData.Online` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_online = value["Online"].GetUint64();
        m_onlineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CdnPlayStatData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_fluxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flux";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flux, allocator);
    }

    if (m_requestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Request";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_request, allocator);
    }

    if (m_onlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Online";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_online, allocator);
    }

}


string CdnPlayStatData::GetTime() const
{
    return m_time;
}

void CdnPlayStatData::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool CdnPlayStatData::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

double CdnPlayStatData::GetBandwidth() const
{
    return m_bandwidth;
}

void CdnPlayStatData::SetBandwidth(const double& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool CdnPlayStatData::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

double CdnPlayStatData::GetFlux() const
{
    return m_flux;
}

void CdnPlayStatData::SetFlux(const double& _flux)
{
    m_flux = _flux;
    m_fluxHasBeenSet = true;
}

bool CdnPlayStatData::FluxHasBeenSet() const
{
    return m_fluxHasBeenSet;
}

uint64_t CdnPlayStatData::GetRequest() const
{
    return m_request;
}

void CdnPlayStatData::SetRequest(const uint64_t& _request)
{
    m_request = _request;
    m_requestHasBeenSet = true;
}

bool CdnPlayStatData::RequestHasBeenSet() const
{
    return m_requestHasBeenSet;
}

uint64_t CdnPlayStatData::GetOnline() const
{
    return m_online;
}

void CdnPlayStatData::SetOnline(const uint64_t& _online)
{
    m_online = _online;
    m_onlineHasBeenSet = true;
}

bool CdnPlayStatData::OnlineHasBeenSet() const
{
    return m_onlineHasBeenSet;
}

