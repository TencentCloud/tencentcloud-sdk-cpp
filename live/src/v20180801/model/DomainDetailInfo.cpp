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

#include <tencentcloud/live/v20180801/model/DomainDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DomainDetailInfo::DomainDetailInfo() :
    m_mainlandOrOverseaHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_fluxHasBeenSet(false),
    m_onlineHasBeenSet(false),
    m_requestHasBeenSet(false)
{
}

CoreInternalOutcome DomainDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MainlandOrOversea") && !value["MainlandOrOversea"].IsNull())
    {
        if (!value["MainlandOrOversea"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainDetailInfo.MainlandOrOversea` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainlandOrOversea = string(value["MainlandOrOversea"].GetString());
        m_mainlandOrOverseaHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DomainDetailInfo.Bandwidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetDouble();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("Flux") && !value["Flux"].IsNull())
    {
        if (!value["Flux"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DomainDetailInfo.Flux` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_flux = value["Flux"].GetDouble();
        m_fluxHasBeenSet = true;
    }

    if (value.HasMember("Online") && !value["Online"].IsNull())
    {
        if (!value["Online"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainDetailInfo.Online` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_online = value["Online"].GetUint64();
        m_onlineHasBeenSet = true;
    }

    if (value.HasMember("Request") && !value["Request"].IsNull())
    {
        if (!value["Request"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainDetailInfo.Request` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_request = value["Request"].GetUint64();
        m_requestHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mainlandOrOverseaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainlandOrOversea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainlandOrOversea.c_str(), allocator).Move(), allocator);
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


string DomainDetailInfo::GetMainlandOrOversea() const
{
    return m_mainlandOrOversea;
}

void DomainDetailInfo::SetMainlandOrOversea(const string& _mainlandOrOversea)
{
    m_mainlandOrOversea = _mainlandOrOversea;
    m_mainlandOrOverseaHasBeenSet = true;
}

bool DomainDetailInfo::MainlandOrOverseaHasBeenSet() const
{
    return m_mainlandOrOverseaHasBeenSet;
}

double DomainDetailInfo::GetBandwidth() const
{
    return m_bandwidth;
}

void DomainDetailInfo::SetBandwidth(const double& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool DomainDetailInfo::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

double DomainDetailInfo::GetFlux() const
{
    return m_flux;
}

void DomainDetailInfo::SetFlux(const double& _flux)
{
    m_flux = _flux;
    m_fluxHasBeenSet = true;
}

bool DomainDetailInfo::FluxHasBeenSet() const
{
    return m_fluxHasBeenSet;
}

uint64_t DomainDetailInfo::GetOnline() const
{
    return m_online;
}

void DomainDetailInfo::SetOnline(const uint64_t& _online)
{
    m_online = _online;
    m_onlineHasBeenSet = true;
}

bool DomainDetailInfo::OnlineHasBeenSet() const
{
    return m_onlineHasBeenSet;
}

uint64_t DomainDetailInfo::GetRequest() const
{
    return m_request;
}

void DomainDetailInfo::SetRequest(const uint64_t& _request)
{
    m_request = _request;
    m_requestHasBeenSet = true;
}

bool DomainDetailInfo::RequestHasBeenSet() const
{
    return m_requestHasBeenSet;
}

