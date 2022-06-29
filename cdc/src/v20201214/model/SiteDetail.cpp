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

#include <tencentcloud/cdc/v20201214/model/SiteDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

SiteDetail::SiteDetail() :
    m_siteIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_fiberTypeHasBeenSet(false),
    m_uplinkSpeedGbpsHasBeenSet(false),
    m_uplinkCountHasBeenSet(false),
    m_opticalStandardHasBeenSet(false),
    m_redundantNetworkingHasBeenSet(false),
    m_powerConnectorsHasBeenSet(false),
    m_powerFeedDropHasBeenSet(false),
    m_powerDrawKvaHasBeenSet(false),
    m_conditionRequirementHasBeenSet(false),
    m_dimensionRequirementHasBeenSet(false),
    m_maxWeightHasBeenSet(false),
    m_addressLineHasBeenSet(false),
    m_optionalAddressLineHasBeenSet(false),
    m_needHelpHasBeenSet(false),
    m_breakerRequirementHasBeenSet(false),
    m_redundantPowerHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_postalCodeHasBeenSet(false)
{
}

CoreInternalOutcome SiteDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SiteId") && !value["SiteId"].IsNull())
    {
        if (!value["SiteId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.SiteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_siteId = string(value["SiteId"].GetString());
        m_siteIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("FiberType") && !value["FiberType"].IsNull())
    {
        if (!value["FiberType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.FiberType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fiberType = string(value["FiberType"].GetString());
        m_fiberTypeHasBeenSet = true;
    }

    if (value.HasMember("UplinkSpeedGbps") && !value["UplinkSpeedGbps"].IsNull())
    {
        if (!value["UplinkSpeedGbps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.UplinkSpeedGbps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uplinkSpeedGbps = value["UplinkSpeedGbps"].GetInt64();
        m_uplinkSpeedGbpsHasBeenSet = true;
    }

    if (value.HasMember("UplinkCount") && !value["UplinkCount"].IsNull())
    {
        if (!value["UplinkCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.UplinkCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uplinkCount = value["UplinkCount"].GetInt64();
        m_uplinkCountHasBeenSet = true;
    }

    if (value.HasMember("OpticalStandard") && !value["OpticalStandard"].IsNull())
    {
        if (!value["OpticalStandard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.OpticalStandard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_opticalStandard = string(value["OpticalStandard"].GetString());
        m_opticalStandardHasBeenSet = true;
    }

    if (value.HasMember("RedundantNetworking") && !value["RedundantNetworking"].IsNull())
    {
        if (!value["RedundantNetworking"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.RedundantNetworking` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_redundantNetworking = value["RedundantNetworking"].GetBool();
        m_redundantNetworkingHasBeenSet = true;
    }

    if (value.HasMember("PowerConnectors") && !value["PowerConnectors"].IsNull())
    {
        if (!value["PowerConnectors"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.PowerConnectors` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_powerConnectors = string(value["PowerConnectors"].GetString());
        m_powerConnectorsHasBeenSet = true;
    }

    if (value.HasMember("PowerFeedDrop") && !value["PowerFeedDrop"].IsNull())
    {
        if (!value["PowerFeedDrop"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.PowerFeedDrop` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_powerFeedDrop = string(value["PowerFeedDrop"].GetString());
        m_powerFeedDropHasBeenSet = true;
    }

    if (value.HasMember("PowerDrawKva") && !value["PowerDrawKva"].IsNull())
    {
        if (!value["PowerDrawKva"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.PowerDrawKva` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_powerDrawKva = value["PowerDrawKva"].GetDouble();
        m_powerDrawKvaHasBeenSet = true;
    }

    if (value.HasMember("ConditionRequirement") && !value["ConditionRequirement"].IsNull())
    {
        if (!value["ConditionRequirement"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.ConditionRequirement` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_conditionRequirement = value["ConditionRequirement"].GetBool();
        m_conditionRequirementHasBeenSet = true;
    }

    if (value.HasMember("DimensionRequirement") && !value["DimensionRequirement"].IsNull())
    {
        if (!value["DimensionRequirement"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.DimensionRequirement` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dimensionRequirement = value["DimensionRequirement"].GetBool();
        m_dimensionRequirementHasBeenSet = true;
    }

    if (value.HasMember("MaxWeight") && !value["MaxWeight"].IsNull())
    {
        if (!value["MaxWeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.MaxWeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxWeight = value["MaxWeight"].GetInt64();
        m_maxWeightHasBeenSet = true;
    }

    if (value.HasMember("AddressLine") && !value["AddressLine"].IsNull())
    {
        if (!value["AddressLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.AddressLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressLine = string(value["AddressLine"].GetString());
        m_addressLineHasBeenSet = true;
    }

    if (value.HasMember("OptionalAddressLine") && !value["OptionalAddressLine"].IsNull())
    {
        if (!value["OptionalAddressLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.OptionalAddressLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_optionalAddressLine = string(value["OptionalAddressLine"].GetString());
        m_optionalAddressLineHasBeenSet = true;
    }

    if (value.HasMember("NeedHelp") && !value["NeedHelp"].IsNull())
    {
        if (!value["NeedHelp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.NeedHelp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needHelp = value["NeedHelp"].GetBool();
        m_needHelpHasBeenSet = true;
    }

    if (value.HasMember("BreakerRequirement") && !value["BreakerRequirement"].IsNull())
    {
        if (!value["BreakerRequirement"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.BreakerRequirement` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_breakerRequirement = value["BreakerRequirement"].GetBool();
        m_breakerRequirementHasBeenSet = true;
    }

    if (value.HasMember("RedundantPower") && !value["RedundantPower"].IsNull())
    {
        if (!value["RedundantPower"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.RedundantPower` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_redundantPower = value["RedundantPower"].GetBool();
        m_redundantPowerHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("PostalCode") && !value["PostalCode"].IsNull())
    {
        if (!value["PostalCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SiteDetail.PostalCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_postalCode = value["PostalCode"].GetInt64();
        m_postalCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SiteDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_siteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_siteId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fiberTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FiberType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fiberType.c_str(), allocator).Move(), allocator);
    }

    if (m_uplinkSpeedGbpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UplinkSpeedGbps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uplinkSpeedGbps, allocator);
    }

    if (m_uplinkCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UplinkCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uplinkCount, allocator);
    }

    if (m_opticalStandardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpticalStandard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_opticalStandard.c_str(), allocator).Move(), allocator);
    }

    if (m_redundantNetworkingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedundantNetworking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redundantNetworking, allocator);
    }

    if (m_powerConnectorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerConnectors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_powerConnectors.c_str(), allocator).Move(), allocator);
    }

    if (m_powerFeedDropHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerFeedDrop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_powerFeedDrop.c_str(), allocator).Move(), allocator);
    }

    if (m_powerDrawKvaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerDrawKva";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_powerDrawKva, allocator);
    }

    if (m_conditionRequirementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionRequirement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_conditionRequirement, allocator);
    }

    if (m_dimensionRequirementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionRequirement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dimensionRequirement, allocator);
    }

    if (m_maxWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxWeight, allocator);
    }

    if (m_addressLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressLine.c_str(), allocator).Move(), allocator);
    }

    if (m_optionalAddressLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionalAddressLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_optionalAddressLine.c_str(), allocator).Move(), allocator);
    }

    if (m_needHelpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedHelp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needHelp, allocator);
    }

    if (m_breakerRequirementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BreakerRequirement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_breakerRequirement, allocator);
    }

    if (m_redundantPowerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedundantPower";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redundantPower, allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_postalCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostalCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postalCode, allocator);
    }

}


string SiteDetail::GetSiteId() const
{
    return m_siteId;
}

void SiteDetail::SetSiteId(const string& _siteId)
{
    m_siteId = _siteId;
    m_siteIdHasBeenSet = true;
}

bool SiteDetail::SiteIdHasBeenSet() const
{
    return m_siteIdHasBeenSet;
}

string SiteDetail::GetName() const
{
    return m_name;
}

void SiteDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SiteDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SiteDetail::GetDescription() const
{
    return m_description;
}

void SiteDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SiteDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SiteDetail::GetCreateTime() const
{
    return m_createTime;
}

void SiteDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SiteDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SiteDetail::GetFiberType() const
{
    return m_fiberType;
}

void SiteDetail::SetFiberType(const string& _fiberType)
{
    m_fiberType = _fiberType;
    m_fiberTypeHasBeenSet = true;
}

bool SiteDetail::FiberTypeHasBeenSet() const
{
    return m_fiberTypeHasBeenSet;
}

int64_t SiteDetail::GetUplinkSpeedGbps() const
{
    return m_uplinkSpeedGbps;
}

void SiteDetail::SetUplinkSpeedGbps(const int64_t& _uplinkSpeedGbps)
{
    m_uplinkSpeedGbps = _uplinkSpeedGbps;
    m_uplinkSpeedGbpsHasBeenSet = true;
}

bool SiteDetail::UplinkSpeedGbpsHasBeenSet() const
{
    return m_uplinkSpeedGbpsHasBeenSet;
}

int64_t SiteDetail::GetUplinkCount() const
{
    return m_uplinkCount;
}

void SiteDetail::SetUplinkCount(const int64_t& _uplinkCount)
{
    m_uplinkCount = _uplinkCount;
    m_uplinkCountHasBeenSet = true;
}

bool SiteDetail::UplinkCountHasBeenSet() const
{
    return m_uplinkCountHasBeenSet;
}

string SiteDetail::GetOpticalStandard() const
{
    return m_opticalStandard;
}

void SiteDetail::SetOpticalStandard(const string& _opticalStandard)
{
    m_opticalStandard = _opticalStandard;
    m_opticalStandardHasBeenSet = true;
}

bool SiteDetail::OpticalStandardHasBeenSet() const
{
    return m_opticalStandardHasBeenSet;
}

bool SiteDetail::GetRedundantNetworking() const
{
    return m_redundantNetworking;
}

void SiteDetail::SetRedundantNetworking(const bool& _redundantNetworking)
{
    m_redundantNetworking = _redundantNetworking;
    m_redundantNetworkingHasBeenSet = true;
}

bool SiteDetail::RedundantNetworkingHasBeenSet() const
{
    return m_redundantNetworkingHasBeenSet;
}

string SiteDetail::GetPowerConnectors() const
{
    return m_powerConnectors;
}

void SiteDetail::SetPowerConnectors(const string& _powerConnectors)
{
    m_powerConnectors = _powerConnectors;
    m_powerConnectorsHasBeenSet = true;
}

bool SiteDetail::PowerConnectorsHasBeenSet() const
{
    return m_powerConnectorsHasBeenSet;
}

string SiteDetail::GetPowerFeedDrop() const
{
    return m_powerFeedDrop;
}

void SiteDetail::SetPowerFeedDrop(const string& _powerFeedDrop)
{
    m_powerFeedDrop = _powerFeedDrop;
    m_powerFeedDropHasBeenSet = true;
}

bool SiteDetail::PowerFeedDropHasBeenSet() const
{
    return m_powerFeedDropHasBeenSet;
}

double SiteDetail::GetPowerDrawKva() const
{
    return m_powerDrawKva;
}

void SiteDetail::SetPowerDrawKva(const double& _powerDrawKva)
{
    m_powerDrawKva = _powerDrawKva;
    m_powerDrawKvaHasBeenSet = true;
}

bool SiteDetail::PowerDrawKvaHasBeenSet() const
{
    return m_powerDrawKvaHasBeenSet;
}

bool SiteDetail::GetConditionRequirement() const
{
    return m_conditionRequirement;
}

void SiteDetail::SetConditionRequirement(const bool& _conditionRequirement)
{
    m_conditionRequirement = _conditionRequirement;
    m_conditionRequirementHasBeenSet = true;
}

bool SiteDetail::ConditionRequirementHasBeenSet() const
{
    return m_conditionRequirementHasBeenSet;
}

bool SiteDetail::GetDimensionRequirement() const
{
    return m_dimensionRequirement;
}

void SiteDetail::SetDimensionRequirement(const bool& _dimensionRequirement)
{
    m_dimensionRequirement = _dimensionRequirement;
    m_dimensionRequirementHasBeenSet = true;
}

bool SiteDetail::DimensionRequirementHasBeenSet() const
{
    return m_dimensionRequirementHasBeenSet;
}

int64_t SiteDetail::GetMaxWeight() const
{
    return m_maxWeight;
}

void SiteDetail::SetMaxWeight(const int64_t& _maxWeight)
{
    m_maxWeight = _maxWeight;
    m_maxWeightHasBeenSet = true;
}

bool SiteDetail::MaxWeightHasBeenSet() const
{
    return m_maxWeightHasBeenSet;
}

string SiteDetail::GetAddressLine() const
{
    return m_addressLine;
}

void SiteDetail::SetAddressLine(const string& _addressLine)
{
    m_addressLine = _addressLine;
    m_addressLineHasBeenSet = true;
}

bool SiteDetail::AddressLineHasBeenSet() const
{
    return m_addressLineHasBeenSet;
}

string SiteDetail::GetOptionalAddressLine() const
{
    return m_optionalAddressLine;
}

void SiteDetail::SetOptionalAddressLine(const string& _optionalAddressLine)
{
    m_optionalAddressLine = _optionalAddressLine;
    m_optionalAddressLineHasBeenSet = true;
}

bool SiteDetail::OptionalAddressLineHasBeenSet() const
{
    return m_optionalAddressLineHasBeenSet;
}

bool SiteDetail::GetNeedHelp() const
{
    return m_needHelp;
}

void SiteDetail::SetNeedHelp(const bool& _needHelp)
{
    m_needHelp = _needHelp;
    m_needHelpHasBeenSet = true;
}

bool SiteDetail::NeedHelpHasBeenSet() const
{
    return m_needHelpHasBeenSet;
}

bool SiteDetail::GetBreakerRequirement() const
{
    return m_breakerRequirement;
}

void SiteDetail::SetBreakerRequirement(const bool& _breakerRequirement)
{
    m_breakerRequirement = _breakerRequirement;
    m_breakerRequirementHasBeenSet = true;
}

bool SiteDetail::BreakerRequirementHasBeenSet() const
{
    return m_breakerRequirementHasBeenSet;
}

bool SiteDetail::GetRedundantPower() const
{
    return m_redundantPower;
}

void SiteDetail::SetRedundantPower(const bool& _redundantPower)
{
    m_redundantPower = _redundantPower;
    m_redundantPowerHasBeenSet = true;
}

bool SiteDetail::RedundantPowerHasBeenSet() const
{
    return m_redundantPowerHasBeenSet;
}

string SiteDetail::GetCountry() const
{
    return m_country;
}

void SiteDetail::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool SiteDetail::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string SiteDetail::GetProvince() const
{
    return m_province;
}

void SiteDetail::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool SiteDetail::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string SiteDetail::GetCity() const
{
    return m_city;
}

void SiteDetail::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool SiteDetail::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

int64_t SiteDetail::GetPostalCode() const
{
    return m_postalCode;
}

void SiteDetail::SetPostalCode(const int64_t& _postalCode)
{
    m_postalCode = _postalCode;
    m_postalCodeHasBeenSet = true;
}

bool SiteDetail::PostalCodeHasBeenSet() const
{
    return m_postalCodeHasBeenSet;
}

