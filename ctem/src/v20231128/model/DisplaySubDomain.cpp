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

#include <tencentcloud/ctem/v20231128/model/DisplaySubDomain.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplaySubDomain::DisplaySubDomain() :
    m_idHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_isCloudAssetHasBeenSet(false),
    m_cloudAssetStatusHasBeenSet(false),
    m_availabilityRateHasBeenSet(false),
    m_availabilityStateHasBeenSet(false),
    m_analysisStateHasBeenSet(false),
    m_averageDelayHasBeenSet(false),
    m_lossRateHasBeenSet(false)
{
}

CoreInternalOutcome DisplaySubDomain::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySubDomain.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SubDomain") && !value["SubDomain"].IsNull())
    {
        if (!value["SubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySubDomain.SubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subDomain = string(value["SubDomain"].GetString());
        m_subDomainHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySubDomain.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySubDomain.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySubDomain.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySubDomain.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySubDomain.Isp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isp = string(value["Isp"].GetString());
        m_ispHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySubDomain.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("IsCloudAsset") && !value["IsCloudAsset"].IsNull())
    {
        if (!value["IsCloudAsset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySubDomain.IsCloudAsset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isCloudAsset = value["IsCloudAsset"].GetInt64();
        m_isCloudAssetHasBeenSet = true;
    }

    if (value.HasMember("CloudAssetStatus") && !value["CloudAssetStatus"].IsNull())
    {
        if (!value["CloudAssetStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySubDomain.CloudAssetStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAssetStatus = value["CloudAssetStatus"].GetInt64();
        m_cloudAssetStatusHasBeenSet = true;
    }

    if (value.HasMember("AvailabilityRate") && !value["AvailabilityRate"].IsNull())
    {
        if (!value["AvailabilityRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySubDomain.AvailabilityRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availabilityRate = value["AvailabilityRate"].GetInt64();
        m_availabilityRateHasBeenSet = true;
    }

    if (value.HasMember("AvailabilityState") && !value["AvailabilityState"].IsNull())
    {
        if (!value["AvailabilityState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySubDomain.AvailabilityState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availabilityState = value["AvailabilityState"].GetInt64();
        m_availabilityStateHasBeenSet = true;
    }

    if (value.HasMember("AnalysisState") && !value["AnalysisState"].IsNull())
    {
        if (!value["AnalysisState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySubDomain.AnalysisState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_analysisState = value["AnalysisState"].GetInt64();
        m_analysisStateHasBeenSet = true;
    }

    if (value.HasMember("AverageDelay") && !value["AverageDelay"].IsNull())
    {
        if (!value["AverageDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySubDomain.AverageDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_averageDelay = value["AverageDelay"].GetInt64();
        m_averageDelayHasBeenSet = true;
    }

    if (value.HasMember("LossRate") && !value["LossRate"].IsNull())
    {
        if (!value["LossRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySubDomain.LossRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lossRate = value["LossRate"].GetInt64();
        m_lossRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplaySubDomain::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_subDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
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

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isp.c_str(), allocator).Move(), allocator);
    }

    if (m_displayToolCommonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayToolCommon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displayToolCommon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isCloudAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCloudAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCloudAsset, allocator);
    }

    if (m_cloudAssetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAssetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudAssetStatus, allocator);
    }

    if (m_availabilityRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailabilityRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availabilityRate, allocator);
    }

    if (m_availabilityStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailabilityState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availabilityState, allocator);
    }

    if (m_analysisStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_analysisState, allocator);
    }

    if (m_averageDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageDelay, allocator);
    }

    if (m_lossRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LossRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lossRate, allocator);
    }

}


int64_t DisplaySubDomain::GetId() const
{
    return m_id;
}

void DisplaySubDomain::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplaySubDomain::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DisplaySubDomain::GetSubDomain() const
{
    return m_subDomain;
}

void DisplaySubDomain::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool DisplaySubDomain::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string DisplaySubDomain::GetIp() const
{
    return m_ip;
}

void DisplaySubDomain::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DisplaySubDomain::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DisplaySubDomain::GetCountry() const
{
    return m_country;
}

void DisplaySubDomain::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool DisplaySubDomain::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string DisplaySubDomain::GetProvince() const
{
    return m_province;
}

void DisplaySubDomain::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool DisplaySubDomain::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string DisplaySubDomain::GetCity() const
{
    return m_city;
}

void DisplaySubDomain::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool DisplaySubDomain::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string DisplaySubDomain::GetIsp() const
{
    return m_isp;
}

void DisplaySubDomain::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool DisplaySubDomain::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

DisplayToolCommon DisplaySubDomain::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplaySubDomain::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplaySubDomain::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

int64_t DisplaySubDomain::GetIsCloudAsset() const
{
    return m_isCloudAsset;
}

void DisplaySubDomain::SetIsCloudAsset(const int64_t& _isCloudAsset)
{
    m_isCloudAsset = _isCloudAsset;
    m_isCloudAssetHasBeenSet = true;
}

bool DisplaySubDomain::IsCloudAssetHasBeenSet() const
{
    return m_isCloudAssetHasBeenSet;
}

int64_t DisplaySubDomain::GetCloudAssetStatus() const
{
    return m_cloudAssetStatus;
}

void DisplaySubDomain::SetCloudAssetStatus(const int64_t& _cloudAssetStatus)
{
    m_cloudAssetStatus = _cloudAssetStatus;
    m_cloudAssetStatusHasBeenSet = true;
}

bool DisplaySubDomain::CloudAssetStatusHasBeenSet() const
{
    return m_cloudAssetStatusHasBeenSet;
}

int64_t DisplaySubDomain::GetAvailabilityRate() const
{
    return m_availabilityRate;
}

void DisplaySubDomain::SetAvailabilityRate(const int64_t& _availabilityRate)
{
    m_availabilityRate = _availabilityRate;
    m_availabilityRateHasBeenSet = true;
}

bool DisplaySubDomain::AvailabilityRateHasBeenSet() const
{
    return m_availabilityRateHasBeenSet;
}

int64_t DisplaySubDomain::GetAvailabilityState() const
{
    return m_availabilityState;
}

void DisplaySubDomain::SetAvailabilityState(const int64_t& _availabilityState)
{
    m_availabilityState = _availabilityState;
    m_availabilityStateHasBeenSet = true;
}

bool DisplaySubDomain::AvailabilityStateHasBeenSet() const
{
    return m_availabilityStateHasBeenSet;
}

int64_t DisplaySubDomain::GetAnalysisState() const
{
    return m_analysisState;
}

void DisplaySubDomain::SetAnalysisState(const int64_t& _analysisState)
{
    m_analysisState = _analysisState;
    m_analysisStateHasBeenSet = true;
}

bool DisplaySubDomain::AnalysisStateHasBeenSet() const
{
    return m_analysisStateHasBeenSet;
}

int64_t DisplaySubDomain::GetAverageDelay() const
{
    return m_averageDelay;
}

void DisplaySubDomain::SetAverageDelay(const int64_t& _averageDelay)
{
    m_averageDelay = _averageDelay;
    m_averageDelayHasBeenSet = true;
}

bool DisplaySubDomain::AverageDelayHasBeenSet() const
{
    return m_averageDelayHasBeenSet;
}

int64_t DisplaySubDomain::GetLossRate() const
{
    return m_lossRate;
}

void DisplaySubDomain::SetLossRate(const int64_t& _lossRate)
{
    m_lossRate = _lossRate;
    m_lossRateHasBeenSet = true;
}

bool DisplaySubDomain::LossRateHasBeenSet() const
{
    return m_lossRateHasBeenSet;
}

