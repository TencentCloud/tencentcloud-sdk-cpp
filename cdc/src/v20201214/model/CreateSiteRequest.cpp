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

#include <tencentcloud/cdc/v20201214/model/CreateSiteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

CreateSiteRequest::CreateSiteRequest() :
    m_nameHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_addressLineHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_noteHasBeenSet(false),
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
    m_postalCodeHasBeenSet(false),
    m_optionalAddressLineHasBeenSet(false),
    m_needHelpHasBeenSet(false),
    m_redundantPowerHasBeenSet(false),
    m_breakerRequirementHasBeenSet(false)
{
}

string CreateSiteRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_addressLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressLine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressLine.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
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

    if (m_postalCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostalCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_postalCode, allocator);
    }

    if (m_optionalAddressLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionalAddressLine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_optionalAddressLine.c_str(), allocator).Move(), allocator);
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


string CreateSiteRequest::GetName() const
{
    return m_name;
}

void CreateSiteRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateSiteRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateSiteRequest::GetCountry() const
{
    return m_country;
}

void CreateSiteRequest::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool CreateSiteRequest::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string CreateSiteRequest::GetProvince() const
{
    return m_province;
}

void CreateSiteRequest::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool CreateSiteRequest::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string CreateSiteRequest::GetCity() const
{
    return m_city;
}

void CreateSiteRequest::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool CreateSiteRequest::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string CreateSiteRequest::GetAddressLine() const
{
    return m_addressLine;
}

void CreateSiteRequest::SetAddressLine(const string& _addressLine)
{
    m_addressLine = _addressLine;
    m_addressLineHasBeenSet = true;
}

bool CreateSiteRequest::AddressLineHasBeenSet() const
{
    return m_addressLineHasBeenSet;
}

string CreateSiteRequest::GetDescription() const
{
    return m_description;
}

void CreateSiteRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateSiteRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateSiteRequest::GetNote() const
{
    return m_note;
}

void CreateSiteRequest::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool CreateSiteRequest::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

string CreateSiteRequest::GetFiberType() const
{
    return m_fiberType;
}

void CreateSiteRequest::SetFiberType(const string& _fiberType)
{
    m_fiberType = _fiberType;
    m_fiberTypeHasBeenSet = true;
}

bool CreateSiteRequest::FiberTypeHasBeenSet() const
{
    return m_fiberTypeHasBeenSet;
}

string CreateSiteRequest::GetOpticalStandard() const
{
    return m_opticalStandard;
}

void CreateSiteRequest::SetOpticalStandard(const string& _opticalStandard)
{
    m_opticalStandard = _opticalStandard;
    m_opticalStandardHasBeenSet = true;
}

bool CreateSiteRequest::OpticalStandardHasBeenSet() const
{
    return m_opticalStandardHasBeenSet;
}

string CreateSiteRequest::GetPowerConnectors() const
{
    return m_powerConnectors;
}

void CreateSiteRequest::SetPowerConnectors(const string& _powerConnectors)
{
    m_powerConnectors = _powerConnectors;
    m_powerConnectorsHasBeenSet = true;
}

bool CreateSiteRequest::PowerConnectorsHasBeenSet() const
{
    return m_powerConnectorsHasBeenSet;
}

string CreateSiteRequest::GetPowerFeedDrop() const
{
    return m_powerFeedDrop;
}

void CreateSiteRequest::SetPowerFeedDrop(const string& _powerFeedDrop)
{
    m_powerFeedDrop = _powerFeedDrop;
    m_powerFeedDropHasBeenSet = true;
}

bool CreateSiteRequest::PowerFeedDropHasBeenSet() const
{
    return m_powerFeedDropHasBeenSet;
}

int64_t CreateSiteRequest::GetMaxWeight() const
{
    return m_maxWeight;
}

void CreateSiteRequest::SetMaxWeight(const int64_t& _maxWeight)
{
    m_maxWeight = _maxWeight;
    m_maxWeightHasBeenSet = true;
}

bool CreateSiteRequest::MaxWeightHasBeenSet() const
{
    return m_maxWeightHasBeenSet;
}

int64_t CreateSiteRequest::GetPowerDrawKva() const
{
    return m_powerDrawKva;
}

void CreateSiteRequest::SetPowerDrawKva(const int64_t& _powerDrawKva)
{
    m_powerDrawKva = _powerDrawKva;
    m_powerDrawKvaHasBeenSet = true;
}

bool CreateSiteRequest::PowerDrawKvaHasBeenSet() const
{
    return m_powerDrawKvaHasBeenSet;
}

int64_t CreateSiteRequest::GetUplinkSpeedGbps() const
{
    return m_uplinkSpeedGbps;
}

void CreateSiteRequest::SetUplinkSpeedGbps(const int64_t& _uplinkSpeedGbps)
{
    m_uplinkSpeedGbps = _uplinkSpeedGbps;
    m_uplinkSpeedGbpsHasBeenSet = true;
}

bool CreateSiteRequest::UplinkSpeedGbpsHasBeenSet() const
{
    return m_uplinkSpeedGbpsHasBeenSet;
}

int64_t CreateSiteRequest::GetUplinkCount() const
{
    return m_uplinkCount;
}

void CreateSiteRequest::SetUplinkCount(const int64_t& _uplinkCount)
{
    m_uplinkCount = _uplinkCount;
    m_uplinkCountHasBeenSet = true;
}

bool CreateSiteRequest::UplinkCountHasBeenSet() const
{
    return m_uplinkCountHasBeenSet;
}

bool CreateSiteRequest::GetConditionRequirement() const
{
    return m_conditionRequirement;
}

void CreateSiteRequest::SetConditionRequirement(const bool& _conditionRequirement)
{
    m_conditionRequirement = _conditionRequirement;
    m_conditionRequirementHasBeenSet = true;
}

bool CreateSiteRequest::ConditionRequirementHasBeenSet() const
{
    return m_conditionRequirementHasBeenSet;
}

bool CreateSiteRequest::GetDimensionRequirement() const
{
    return m_dimensionRequirement;
}

void CreateSiteRequest::SetDimensionRequirement(const bool& _dimensionRequirement)
{
    m_dimensionRequirement = _dimensionRequirement;
    m_dimensionRequirementHasBeenSet = true;
}

bool CreateSiteRequest::DimensionRequirementHasBeenSet() const
{
    return m_dimensionRequirementHasBeenSet;
}

bool CreateSiteRequest::GetRedundantNetworking() const
{
    return m_redundantNetworking;
}

void CreateSiteRequest::SetRedundantNetworking(const bool& _redundantNetworking)
{
    m_redundantNetworking = _redundantNetworking;
    m_redundantNetworkingHasBeenSet = true;
}

bool CreateSiteRequest::RedundantNetworkingHasBeenSet() const
{
    return m_redundantNetworkingHasBeenSet;
}

int64_t CreateSiteRequest::GetPostalCode() const
{
    return m_postalCode;
}

void CreateSiteRequest::SetPostalCode(const int64_t& _postalCode)
{
    m_postalCode = _postalCode;
    m_postalCodeHasBeenSet = true;
}

bool CreateSiteRequest::PostalCodeHasBeenSet() const
{
    return m_postalCodeHasBeenSet;
}

string CreateSiteRequest::GetOptionalAddressLine() const
{
    return m_optionalAddressLine;
}

void CreateSiteRequest::SetOptionalAddressLine(const string& _optionalAddressLine)
{
    m_optionalAddressLine = _optionalAddressLine;
    m_optionalAddressLineHasBeenSet = true;
}

bool CreateSiteRequest::OptionalAddressLineHasBeenSet() const
{
    return m_optionalAddressLineHasBeenSet;
}

bool CreateSiteRequest::GetNeedHelp() const
{
    return m_needHelp;
}

void CreateSiteRequest::SetNeedHelp(const bool& _needHelp)
{
    m_needHelp = _needHelp;
    m_needHelpHasBeenSet = true;
}

bool CreateSiteRequest::NeedHelpHasBeenSet() const
{
    return m_needHelpHasBeenSet;
}

bool CreateSiteRequest::GetRedundantPower() const
{
    return m_redundantPower;
}

void CreateSiteRequest::SetRedundantPower(const bool& _redundantPower)
{
    m_redundantPower = _redundantPower;
    m_redundantPowerHasBeenSet = true;
}

bool CreateSiteRequest::RedundantPowerHasBeenSet() const
{
    return m_redundantPowerHasBeenSet;
}

bool CreateSiteRequest::GetBreakerRequirement() const
{
    return m_breakerRequirement;
}

void CreateSiteRequest::SetBreakerRequirement(const bool& _breakerRequirement)
{
    m_breakerRequirement = _breakerRequirement;
    m_breakerRequirementHasBeenSet = true;
}

bool CreateSiteRequest::BreakerRequirementHasBeenSet() const
{
    return m_breakerRequirementHasBeenSet;
}


