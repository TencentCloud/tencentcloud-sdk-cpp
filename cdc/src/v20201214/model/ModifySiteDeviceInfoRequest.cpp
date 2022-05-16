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

#include <tencentcloud/cdc/v20201214/model/ModifySiteDeviceInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

ModifySiteDeviceInfoRequest::ModifySiteDeviceInfoRequest() :
    m_siteIdHasBeenSet(false),
    m_fiberTypeHasBeenSet(false),
    m_opticalStandardHasBeenSet(false),
    m_powerConnectorsHasBeenSet(false),
    m_powerFeedDropHasBeenSet(false),
    m_maxWeightHasBeenSet(false),
    m_powerDrawKvaHasBeenSet(false),
    m_uplinkSpeedGbpsHasBeenSet(false),
    m_uplinkCountHasBeenSet(false),
    m_conditionRequirementHasBeenSet(false),
    m_dimensionRequirementHasBeenSet(false),
    m_redundantNetworkingHasBeenSet(false),
    m_needHelpHasBeenSet(false),
    m_redundantPowerHasBeenSet(false),
    m_breakerRequirementHasBeenSet(false)
{
}

string ModifySiteDeviceInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_siteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_siteId.c_str(), allocator).Move(), allocator);
    }

    if (m_fiberTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FiberType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fiberType.c_str(), allocator).Move(), allocator);
    }

    if (m_opticalStandardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpticalStandard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_opticalStandard.c_str(), allocator).Move(), allocator);
    }

    if (m_powerConnectorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerConnectors";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_powerConnectors.c_str(), allocator).Move(), allocator);
    }

    if (m_powerFeedDropHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerFeedDrop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_powerFeedDrop.c_str(), allocator).Move(), allocator);
    }

    if (m_maxWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxWeight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxWeight, allocator);
    }

    if (m_powerDrawKvaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerDrawKva";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_powerDrawKva, allocator);
    }

    if (m_uplinkSpeedGbpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UplinkSpeedGbps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_uplinkSpeedGbps, allocator);
    }

    if (m_uplinkCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UplinkCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_uplinkCount, allocator);
    }

    if (m_conditionRequirementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionRequirement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_conditionRequirement, allocator);
    }

    if (m_dimensionRequirementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionRequirement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dimensionRequirement, allocator);
    }

    if (m_redundantNetworkingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedundantNetworking";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_redundantNetworking, allocator);
    }

    if (m_needHelpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedHelp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needHelp, allocator);
    }

    if (m_redundantPowerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedundantPower";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_redundantPower, allocator);
    }

    if (m_breakerRequirementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BreakerRequirement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_breakerRequirement, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySiteDeviceInfoRequest::GetSiteId() const
{
    return m_siteId;
}

void ModifySiteDeviceInfoRequest::SetSiteId(const string& _siteId)
{
    m_siteId = _siteId;
    m_siteIdHasBeenSet = true;
}

bool ModifySiteDeviceInfoRequest::SiteIdHasBeenSet() const
{
    return m_siteIdHasBeenSet;
}

string ModifySiteDeviceInfoRequest::GetFiberType() const
{
    return m_fiberType;
}

void ModifySiteDeviceInfoRequest::SetFiberType(const string& _fiberType)
{
    m_fiberType = _fiberType;
    m_fiberTypeHasBeenSet = true;
}

bool ModifySiteDeviceInfoRequest::FiberTypeHasBeenSet() const
{
    return m_fiberTypeHasBeenSet;
}

string ModifySiteDeviceInfoRequest::GetOpticalStandard() const
{
    return m_opticalStandard;
}

void ModifySiteDeviceInfoRequest::SetOpticalStandard(const string& _opticalStandard)
{
    m_opticalStandard = _opticalStandard;
    m_opticalStandardHasBeenSet = true;
}

bool ModifySiteDeviceInfoRequest::OpticalStandardHasBeenSet() const
{
    return m_opticalStandardHasBeenSet;
}

string ModifySiteDeviceInfoRequest::GetPowerConnectors() const
{
    return m_powerConnectors;
}

void ModifySiteDeviceInfoRequest::SetPowerConnectors(const string& _powerConnectors)
{
    m_powerConnectors = _powerConnectors;
    m_powerConnectorsHasBeenSet = true;
}

bool ModifySiteDeviceInfoRequest::PowerConnectorsHasBeenSet() const
{
    return m_powerConnectorsHasBeenSet;
}

string ModifySiteDeviceInfoRequest::GetPowerFeedDrop() const
{
    return m_powerFeedDrop;
}

void ModifySiteDeviceInfoRequest::SetPowerFeedDrop(const string& _powerFeedDrop)
{
    m_powerFeedDrop = _powerFeedDrop;
    m_powerFeedDropHasBeenSet = true;
}

bool ModifySiteDeviceInfoRequest::PowerFeedDropHasBeenSet() const
{
    return m_powerFeedDropHasBeenSet;
}

int64_t ModifySiteDeviceInfoRequest::GetMaxWeight() const
{
    return m_maxWeight;
}

void ModifySiteDeviceInfoRequest::SetMaxWeight(const int64_t& _maxWeight)
{
    m_maxWeight = _maxWeight;
    m_maxWeightHasBeenSet = true;
}

bool ModifySiteDeviceInfoRequest::MaxWeightHasBeenSet() const
{
    return m_maxWeightHasBeenSet;
}

int64_t ModifySiteDeviceInfoRequest::GetPowerDrawKva() const
{
    return m_powerDrawKva;
}

void ModifySiteDeviceInfoRequest::SetPowerDrawKva(const int64_t& _powerDrawKva)
{
    m_powerDrawKva = _powerDrawKva;
    m_powerDrawKvaHasBeenSet = true;
}

bool ModifySiteDeviceInfoRequest::PowerDrawKvaHasBeenSet() const
{
    return m_powerDrawKvaHasBeenSet;
}

int64_t ModifySiteDeviceInfoRequest::GetUplinkSpeedGbps() const
{
    return m_uplinkSpeedGbps;
}

void ModifySiteDeviceInfoRequest::SetUplinkSpeedGbps(const int64_t& _uplinkSpeedGbps)
{
    m_uplinkSpeedGbps = _uplinkSpeedGbps;
    m_uplinkSpeedGbpsHasBeenSet = true;
}

bool ModifySiteDeviceInfoRequest::UplinkSpeedGbpsHasBeenSet() const
{
    return m_uplinkSpeedGbpsHasBeenSet;
}

int64_t ModifySiteDeviceInfoRequest::GetUplinkCount() const
{
    return m_uplinkCount;
}

void ModifySiteDeviceInfoRequest::SetUplinkCount(const int64_t& _uplinkCount)
{
    m_uplinkCount = _uplinkCount;
    m_uplinkCountHasBeenSet = true;
}

bool ModifySiteDeviceInfoRequest::UplinkCountHasBeenSet() const
{
    return m_uplinkCountHasBeenSet;
}

bool ModifySiteDeviceInfoRequest::GetConditionRequirement() const
{
    return m_conditionRequirement;
}

void ModifySiteDeviceInfoRequest::SetConditionRequirement(const bool& _conditionRequirement)
{
    m_conditionRequirement = _conditionRequirement;
    m_conditionRequirementHasBeenSet = true;
}

bool ModifySiteDeviceInfoRequest::ConditionRequirementHasBeenSet() const
{
    return m_conditionRequirementHasBeenSet;
}

bool ModifySiteDeviceInfoRequest::GetDimensionRequirement() const
{
    return m_dimensionRequirement;
}

void ModifySiteDeviceInfoRequest::SetDimensionRequirement(const bool& _dimensionRequirement)
{
    m_dimensionRequirement = _dimensionRequirement;
    m_dimensionRequirementHasBeenSet = true;
}

bool ModifySiteDeviceInfoRequest::DimensionRequirementHasBeenSet() const
{
    return m_dimensionRequirementHasBeenSet;
}

bool ModifySiteDeviceInfoRequest::GetRedundantNetworking() const
{
    return m_redundantNetworking;
}

void ModifySiteDeviceInfoRequest::SetRedundantNetworking(const bool& _redundantNetworking)
{
    m_redundantNetworking = _redundantNetworking;
    m_redundantNetworkingHasBeenSet = true;
}

bool ModifySiteDeviceInfoRequest::RedundantNetworkingHasBeenSet() const
{
    return m_redundantNetworkingHasBeenSet;
}

bool ModifySiteDeviceInfoRequest::GetNeedHelp() const
{
    return m_needHelp;
}

void ModifySiteDeviceInfoRequest::SetNeedHelp(const bool& _needHelp)
{
    m_needHelp = _needHelp;
    m_needHelpHasBeenSet = true;
}

bool ModifySiteDeviceInfoRequest::NeedHelpHasBeenSet() const
{
    return m_needHelpHasBeenSet;
}

bool ModifySiteDeviceInfoRequest::GetRedundantPower() const
{
    return m_redundantPower;
}

void ModifySiteDeviceInfoRequest::SetRedundantPower(const bool& _redundantPower)
{
    m_redundantPower = _redundantPower;
    m_redundantPowerHasBeenSet = true;
}

bool ModifySiteDeviceInfoRequest::RedundantPowerHasBeenSet() const
{
    return m_redundantPowerHasBeenSet;
}

bool ModifySiteDeviceInfoRequest::GetBreakerRequirement() const
{
    return m_breakerRequirement;
}

void ModifySiteDeviceInfoRequest::SetBreakerRequirement(const bool& _breakerRequirement)
{
    m_breakerRequirement = _breakerRequirement;
    m_breakerRequirementHasBeenSet = true;
}

bool ModifySiteDeviceInfoRequest::BreakerRequirementHasBeenSet() const
{
    return m_breakerRequirementHasBeenSet;
}


