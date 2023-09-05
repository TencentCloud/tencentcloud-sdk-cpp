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

#include <tencentcloud/cfw/v20190904/model/RuleInfoData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

RuleInfoData::RuleInfoData() :
    m_orderIndexHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_targetIpHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_portHasBeenSet(false),
    m_idHasBeenSet(false),
    m_logIdHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_cloudCodeHasBeenSet(false),
    m_isRegionHasBeenSet(false),
    m_cityNameHasBeenSet(false),
    m_countryNameHasBeenSet(false),
    m_regionIsoHasBeenSet(false)
{
}

CoreInternalOutcome RuleInfoData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.OrderIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetUint64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("SourceIp") && !value["SourceIp"].IsNull())
    {
        if (!value["SourceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.SourceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIp = string(value["SourceIp"].GetString());
        m_sourceIpHasBeenSet = true;
    }

    if (value.HasMember("TargetIp") && !value["TargetIp"].IsNull())
    {
        if (!value["TargetIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.TargetIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetIp = string(value["TargetIp"].GetString());
        m_targetIpHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Strategy") && !value["Strategy"].IsNull())
    {
        if (!value["Strategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.Strategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategy = string(value["Strategy"].GetString());
        m_strategyHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.SourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetUint64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.Direction` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetUint64();
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.TargetType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = value["TargetType"].GetUint64();
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("LogId") && !value["LogId"].IsNull())
    {
        if (!value["LogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.LogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logId = string(value["LogId"].GetString());
        m_logIdHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.City` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_city = value["City"].GetUint64();
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.Country` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_country = value["Country"].GetUint64();
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("CloudCode") && !value["CloudCode"].IsNull())
    {
        if (!value["CloudCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.CloudCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudCode = string(value["CloudCode"].GetString());
        m_cloudCodeHasBeenSet = true;
    }

    if (value.HasMember("IsRegion") && !value["IsRegion"].IsNull())
    {
        if (!value["IsRegion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.IsRegion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isRegion = value["IsRegion"].GetUint64();
        m_isRegionHasBeenSet = true;
    }

    if (value.HasMember("CityName") && !value["CityName"].IsNull())
    {
        if (!value["CityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.CityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityName = string(value["CityName"].GetString());
        m_cityNameHasBeenSet = true;
    }

    if (value.HasMember("CountryName") && !value["CountryName"].IsNull())
    {
        if (!value["CountryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.CountryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryName = string(value["CountryName"].GetString());
        m_countryNameHasBeenSet = true;
    }

    if (value.HasMember("RegionIso") && !value["RegionIso"].IsNull())
    {
        if (!value["RegionIso"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfoData.RegionIso` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionIso = string(value["RegionIso"].GetString());
        m_regionIsoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleInfoData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderIndex, allocator);
    }

    if (m_sourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_targetIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetIp.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategy.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_direction, allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetType, allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_logIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logId.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_city, allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_country, allocator);
    }

    if (m_cloudCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudCode.c_str(), allocator).Move(), allocator);
    }

    if (m_isRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRegion, allocator);
    }

    if (m_cityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityName.c_str(), allocator).Move(), allocator);
    }

    if (m_countryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIsoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionIso";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionIso.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RuleInfoData::GetOrderIndex() const
{
    return m_orderIndex;
}

void RuleInfoData::SetOrderIndex(const uint64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool RuleInfoData::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

string RuleInfoData::GetSourceIp() const
{
    return m_sourceIp;
}

void RuleInfoData::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool RuleInfoData::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

string RuleInfoData::GetTargetIp() const
{
    return m_targetIp;
}

void RuleInfoData::SetTargetIp(const string& _targetIp)
{
    m_targetIp = _targetIp;
    m_targetIpHasBeenSet = true;
}

bool RuleInfoData::TargetIpHasBeenSet() const
{
    return m_targetIpHasBeenSet;
}

string RuleInfoData::GetProtocol() const
{
    return m_protocol;
}

void RuleInfoData::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool RuleInfoData::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string RuleInfoData::GetStrategy() const
{
    return m_strategy;
}

void RuleInfoData::SetStrategy(const string& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool RuleInfoData::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

uint64_t RuleInfoData::GetSourceType() const
{
    return m_sourceType;
}

void RuleInfoData::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool RuleInfoData::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

uint64_t RuleInfoData::GetDirection() const
{
    return m_direction;
}

void RuleInfoData::SetDirection(const uint64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool RuleInfoData::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string RuleInfoData::GetDetail() const
{
    return m_detail;
}

void RuleInfoData::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool RuleInfoData::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

uint64_t RuleInfoData::GetTargetType() const
{
    return m_targetType;
}

void RuleInfoData::SetTargetType(const uint64_t& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool RuleInfoData::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string RuleInfoData::GetPort() const
{
    return m_port;
}

void RuleInfoData::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool RuleInfoData::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t RuleInfoData::GetId() const
{
    return m_id;
}

void RuleInfoData::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RuleInfoData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RuleInfoData::GetLogId() const
{
    return m_logId;
}

void RuleInfoData::SetLogId(const string& _logId)
{
    m_logId = _logId;
    m_logIdHasBeenSet = true;
}

bool RuleInfoData::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

uint64_t RuleInfoData::GetCity() const
{
    return m_city;
}

void RuleInfoData::SetCity(const uint64_t& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool RuleInfoData::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

uint64_t RuleInfoData::GetCountry() const
{
    return m_country;
}

void RuleInfoData::SetCountry(const uint64_t& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool RuleInfoData::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string RuleInfoData::GetCloudCode() const
{
    return m_cloudCode;
}

void RuleInfoData::SetCloudCode(const string& _cloudCode)
{
    m_cloudCode = _cloudCode;
    m_cloudCodeHasBeenSet = true;
}

bool RuleInfoData::CloudCodeHasBeenSet() const
{
    return m_cloudCodeHasBeenSet;
}

uint64_t RuleInfoData::GetIsRegion() const
{
    return m_isRegion;
}

void RuleInfoData::SetIsRegion(const uint64_t& _isRegion)
{
    m_isRegion = _isRegion;
    m_isRegionHasBeenSet = true;
}

bool RuleInfoData::IsRegionHasBeenSet() const
{
    return m_isRegionHasBeenSet;
}

string RuleInfoData::GetCityName() const
{
    return m_cityName;
}

void RuleInfoData::SetCityName(const string& _cityName)
{
    m_cityName = _cityName;
    m_cityNameHasBeenSet = true;
}

bool RuleInfoData::CityNameHasBeenSet() const
{
    return m_cityNameHasBeenSet;
}

string RuleInfoData::GetCountryName() const
{
    return m_countryName;
}

void RuleInfoData::SetCountryName(const string& _countryName)
{
    m_countryName = _countryName;
    m_countryNameHasBeenSet = true;
}

bool RuleInfoData::CountryNameHasBeenSet() const
{
    return m_countryNameHasBeenSet;
}

string RuleInfoData::GetRegionIso() const
{
    return m_regionIso;
}

void RuleInfoData::SetRegionIso(const string& _regionIso)
{
    m_regionIso = _regionIso;
    m_regionIsoHasBeenSet = true;
}

bool RuleInfoData::RegionIsoHasBeenSet() const
{
    return m_regionIsoHasBeenSet;
}

