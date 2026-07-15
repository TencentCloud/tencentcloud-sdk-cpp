/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/es/v20180416/model/QueryZoneResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

QueryZoneResourceRequest::QueryZoneResourceRequest() :
    m_zonesHasBeenSet(false),
    m_optTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_esVersionHasBeenSet(false),
    m_cdcIdHasBeenSet(false)
{
}

string QueryZoneResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_optTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_optType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deployMode, allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_esVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_esVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> QueryZoneResourceRequest::GetZones() const
{
    return m_zones;
}

void QueryZoneResourceRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool QueryZoneResourceRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

string QueryZoneResourceRequest::GetOptType() const
{
    return m_optType;
}

void QueryZoneResourceRequest::SetOptType(const string& _optType)
{
    m_optType = _optType;
    m_optTypeHasBeenSet = true;
}

bool QueryZoneResourceRequest::OptTypeHasBeenSet() const
{
    return m_optTypeHasBeenSet;
}

string QueryZoneResourceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void QueryZoneResourceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool QueryZoneResourceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t QueryZoneResourceRequest::GetDeployMode() const
{
    return m_deployMode;
}

void QueryZoneResourceRequest::SetDeployMode(const uint64_t& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool QueryZoneResourceRequest::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

string QueryZoneResourceRequest::GetChargeType() const
{
    return m_chargeType;
}

void QueryZoneResourceRequest::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool QueryZoneResourceRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string QueryZoneResourceRequest::GetEsVersion() const
{
    return m_esVersion;
}

void QueryZoneResourceRequest::SetEsVersion(const string& _esVersion)
{
    m_esVersion = _esVersion;
    m_esVersionHasBeenSet = true;
}

bool QueryZoneResourceRequest::EsVersionHasBeenSet() const
{
    return m_esVersionHasBeenSet;
}

string QueryZoneResourceRequest::GetCdcId() const
{
    return m_cdcId;
}

void QueryZoneResourceRequest::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool QueryZoneResourceRequest::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}


