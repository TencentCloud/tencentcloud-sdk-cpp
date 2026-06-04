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

#include <tencentcloud/cfw/v20190904/model/NatFwClusterRegionStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

NatFwClusterRegionStatus::NatFwClusterRegionStatus() :
    m_natInsIdHasBeenSet(false),
    m_ccnIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cidrHasBeenSet(false),
    m_routingModeHasBeenSet(false)
{
}

CoreInternalOutcome NatFwClusterRegionStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NatInsId") && !value["NatInsId"].IsNull())
    {
        if (!value["NatInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwClusterRegionStatus.NatInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natInsId = string(value["NatInsId"].GetString());
        m_natInsIdHasBeenSet = true;
    }

    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwClusterRegionStatus.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwClusterRegionStatus.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwClusterRegionStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Cidr") && !value["Cidr"].IsNull())
    {
        if (!value["Cidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwClusterRegionStatus.Cidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidr = string(value["Cidr"].GetString());
        m_cidrHasBeenSet = true;
    }

    if (value.HasMember("RoutingMode") && !value["RoutingMode"].IsNull())
    {
        if (!value["RoutingMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwClusterRegionStatus.RoutingMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_routingMode = value["RoutingMode"].GetInt64();
        m_routingModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatFwClusterRegionStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_natInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidr.c_str(), allocator).Move(), allocator);
    }

    if (m_routingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routingMode, allocator);
    }

}


string NatFwClusterRegionStatus::GetNatInsId() const
{
    return m_natInsId;
}

void NatFwClusterRegionStatus::SetNatInsId(const string& _natInsId)
{
    m_natInsId = _natInsId;
    m_natInsIdHasBeenSet = true;
}

bool NatFwClusterRegionStatus::NatInsIdHasBeenSet() const
{
    return m_natInsIdHasBeenSet;
}

string NatFwClusterRegionStatus::GetCcnId() const
{
    return m_ccnId;
}

void NatFwClusterRegionStatus::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool NatFwClusterRegionStatus::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string NatFwClusterRegionStatus::GetRegion() const
{
    return m_region;
}

void NatFwClusterRegionStatus::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool NatFwClusterRegionStatus::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string NatFwClusterRegionStatus::GetStatus() const
{
    return m_status;
}

void NatFwClusterRegionStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NatFwClusterRegionStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string NatFwClusterRegionStatus::GetCidr() const
{
    return m_cidr;
}

void NatFwClusterRegionStatus::SetCidr(const string& _cidr)
{
    m_cidr = _cidr;
    m_cidrHasBeenSet = true;
}

bool NatFwClusterRegionStatus::CidrHasBeenSet() const
{
    return m_cidrHasBeenSet;
}

int64_t NatFwClusterRegionStatus::GetRoutingMode() const
{
    return m_routingMode;
}

void NatFwClusterRegionStatus::SetRoutingMode(const int64_t& _routingMode)
{
    m_routingMode = _routingMode;
    m_routingModeHasBeenSet = true;
}

bool NatFwClusterRegionStatus::RoutingModeHasBeenSet() const
{
    return m_routingModeHasBeenSet;
}

