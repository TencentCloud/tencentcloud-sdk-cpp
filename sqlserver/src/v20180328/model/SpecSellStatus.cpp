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

#include <tencentcloud/sqlserver/v20180328/model/SpecSellStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

SpecSellStatus::SpecSellStatus() :
    m_idHasBeenSet(false),
    m_specIdHasBeenSet(false),
    m_payModeStatusHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_multiZonesStatusHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_styleHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_zoneStatusSetHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_minBaselineIOPSHasBeenSet(false),
    m_maxBaselineIOPSHasBeenSet(false),
    m_minBaselineThroughputHasBeenSet(false),
    m_maxBaselineThroughputHasBeenSet(false),
    m_extraIOSupportedHasBeenSet(false),
    m_maxExtraThroughputHasBeenSet(false),
    m_minDiskSizeForExtraIOHasBeenSet(false)
{
}

CoreInternalOutcome SpecSellStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SpecId") && !value["SpecId"].IsNull())
    {
        if (!value["SpecId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.SpecId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_specId = value["SpecId"].GetUint64();
        m_specIdHasBeenSet = true;
    }

    if (value.HasMember("PayModeStatus") && !value["PayModeStatus"].IsNull())
    {
        if (!value["PayModeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.PayModeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payModeStatus = string(value["PayModeStatus"].GetString());
        m_payModeStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("MultiZonesStatus") && !value["MultiZonesStatus"].IsNull())
    {
        if (!value["MultiZonesStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.MultiZonesStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_multiZonesStatus = string(value["MultiZonesStatus"].GetString());
        m_multiZonesStatusHasBeenSet = true;
    }

    if (value.HasMember("Architecture") && !value["Architecture"].IsNull())
    {
        if (!value["Architecture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.Architecture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_architecture = string(value["Architecture"].GetString());
        m_architectureHasBeenSet = true;
    }

    if (value.HasMember("Style") && !value["Style"].IsNull())
    {
        if (!value["Style"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.Style` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_style = string(value["Style"].GetString());
        m_styleHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("ZoneStatusSet") && !value["ZoneStatusSet"].IsNull())
    {
        if (!value["ZoneStatusSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.ZoneStatusSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneStatusSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zoneStatusSet.push_back(item);
        }
        m_zoneStatusSetHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.Price` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_price.Deserialize(value["Price"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_priceHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MinBaselineIOPS") && !value["MinBaselineIOPS"].IsNull())
    {
        if (!value["MinBaselineIOPS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.MinBaselineIOPS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minBaselineIOPS = value["MinBaselineIOPS"].GetUint64();
        m_minBaselineIOPSHasBeenSet = true;
    }

    if (value.HasMember("MaxBaselineIOPS") && !value["MaxBaselineIOPS"].IsNull())
    {
        if (!value["MaxBaselineIOPS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.MaxBaselineIOPS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBaselineIOPS = value["MaxBaselineIOPS"].GetUint64();
        m_maxBaselineIOPSHasBeenSet = true;
    }

    if (value.HasMember("MinBaselineThroughput") && !value["MinBaselineThroughput"].IsNull())
    {
        if (!value["MinBaselineThroughput"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.MinBaselineThroughput` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minBaselineThroughput = value["MinBaselineThroughput"].GetUint64();
        m_minBaselineThroughputHasBeenSet = true;
    }

    if (value.HasMember("MaxBaselineThroughput") && !value["MaxBaselineThroughput"].IsNull())
    {
        if (!value["MaxBaselineThroughput"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.MaxBaselineThroughput` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBaselineThroughput = value["MaxBaselineThroughput"].GetUint64();
        m_maxBaselineThroughputHasBeenSet = true;
    }

    if (value.HasMember("ExtraIOSupported") && !value["ExtraIOSupported"].IsNull())
    {
        if (!value["ExtraIOSupported"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.ExtraIOSupported` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_extraIOSupported = value["ExtraIOSupported"].GetBool();
        m_extraIOSupportedHasBeenSet = true;
    }

    if (value.HasMember("MaxExtraThroughput") && !value["MaxExtraThroughput"].IsNull())
    {
        if (!value["MaxExtraThroughput"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.MaxExtraThroughput` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxExtraThroughput = value["MaxExtraThroughput"].GetUint64();
        m_maxExtraThroughputHasBeenSet = true;
    }

    if (value.HasMember("MinDiskSizeForExtraIO") && !value["MinDiskSizeForExtraIO"].IsNull())
    {
        if (!value["MinDiskSizeForExtraIO"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecSellStatus.MinDiskSizeForExtraIO` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minDiskSizeForExtraIO = value["MinDiskSizeForExtraIO"].GetUint64();
        m_minDiskSizeForExtraIOHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpecSellStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_specIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_specId, allocator);
    }

    if (m_payModeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayModeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payModeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_multiZonesStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZonesStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_multiZonesStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_architectureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Architecture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_architecture.c_str(), allocator).Move(), allocator);
    }

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_style.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneStatusSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneStatusSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneStatusSet.begin(); itr != m_zoneStatusSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_price.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_minBaselineIOPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinBaselineIOPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minBaselineIOPS, allocator);
    }

    if (m_maxBaselineIOPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBaselineIOPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBaselineIOPS, allocator);
    }

    if (m_minBaselineThroughputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinBaselineThroughput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minBaselineThroughput, allocator);
    }

    if (m_maxBaselineThroughputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBaselineThroughput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBaselineThroughput, allocator);
    }

    if (m_extraIOSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraIOSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_extraIOSupported, allocator);
    }

    if (m_maxExtraThroughputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxExtraThroughput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxExtraThroughput, allocator);
    }

    if (m_minDiskSizeForExtraIOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDiskSizeForExtraIO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minDiskSizeForExtraIO, allocator);
    }

}


string SpecSellStatus::GetId() const
{
    return m_id;
}

void SpecSellStatus::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SpecSellStatus::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t SpecSellStatus::GetSpecId() const
{
    return m_specId;
}

void SpecSellStatus::SetSpecId(const uint64_t& _specId)
{
    m_specId = _specId;
    m_specIdHasBeenSet = true;
}

bool SpecSellStatus::SpecIdHasBeenSet() const
{
    return m_specIdHasBeenSet;
}

string SpecSellStatus::GetPayModeStatus() const
{
    return m_payModeStatus;
}

void SpecSellStatus::SetPayModeStatus(const string& _payModeStatus)
{
    m_payModeStatus = _payModeStatus;
    m_payModeStatusHasBeenSet = true;
}

bool SpecSellStatus::PayModeStatusHasBeenSet() const
{
    return m_payModeStatusHasBeenSet;
}

string SpecSellStatus::GetInstanceType() const
{
    return m_instanceType;
}

void SpecSellStatus::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool SpecSellStatus::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string SpecSellStatus::GetMultiZonesStatus() const
{
    return m_multiZonesStatus;
}

void SpecSellStatus::SetMultiZonesStatus(const string& _multiZonesStatus)
{
    m_multiZonesStatus = _multiZonesStatus;
    m_multiZonesStatusHasBeenSet = true;
}

bool SpecSellStatus::MultiZonesStatusHasBeenSet() const
{
    return m_multiZonesStatusHasBeenSet;
}

string SpecSellStatus::GetArchitecture() const
{
    return m_architecture;
}

void SpecSellStatus::SetArchitecture(const string& _architecture)
{
    m_architecture = _architecture;
    m_architectureHasBeenSet = true;
}

bool SpecSellStatus::ArchitectureHasBeenSet() const
{
    return m_architectureHasBeenSet;
}

string SpecSellStatus::GetStyle() const
{
    return m_style;
}

void SpecSellStatus::SetStyle(const string& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool SpecSellStatus::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}

string SpecSellStatus::GetVersion() const
{
    return m_version;
}

void SpecSellStatus::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool SpecSellStatus::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

vector<ZoneStatus> SpecSellStatus::GetZoneStatusSet() const
{
    return m_zoneStatusSet;
}

void SpecSellStatus::SetZoneStatusSet(const vector<ZoneStatus>& _zoneStatusSet)
{
    m_zoneStatusSet = _zoneStatusSet;
    m_zoneStatusSetHasBeenSet = true;
}

bool SpecSellStatus::ZoneStatusSetHasBeenSet() const
{
    return m_zoneStatusSetHasBeenSet;
}

Price SpecSellStatus::GetPrice() const
{
    return m_price;
}

void SpecSellStatus::SetPrice(const Price& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool SpecSellStatus::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

uint64_t SpecSellStatus::GetStatus() const
{
    return m_status;
}

void SpecSellStatus::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SpecSellStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t SpecSellStatus::GetMinBaselineIOPS() const
{
    return m_minBaselineIOPS;
}

void SpecSellStatus::SetMinBaselineIOPS(const uint64_t& _minBaselineIOPS)
{
    m_minBaselineIOPS = _minBaselineIOPS;
    m_minBaselineIOPSHasBeenSet = true;
}

bool SpecSellStatus::MinBaselineIOPSHasBeenSet() const
{
    return m_minBaselineIOPSHasBeenSet;
}

uint64_t SpecSellStatus::GetMaxBaselineIOPS() const
{
    return m_maxBaselineIOPS;
}

void SpecSellStatus::SetMaxBaselineIOPS(const uint64_t& _maxBaselineIOPS)
{
    m_maxBaselineIOPS = _maxBaselineIOPS;
    m_maxBaselineIOPSHasBeenSet = true;
}

bool SpecSellStatus::MaxBaselineIOPSHasBeenSet() const
{
    return m_maxBaselineIOPSHasBeenSet;
}

uint64_t SpecSellStatus::GetMinBaselineThroughput() const
{
    return m_minBaselineThroughput;
}

void SpecSellStatus::SetMinBaselineThroughput(const uint64_t& _minBaselineThroughput)
{
    m_minBaselineThroughput = _minBaselineThroughput;
    m_minBaselineThroughputHasBeenSet = true;
}

bool SpecSellStatus::MinBaselineThroughputHasBeenSet() const
{
    return m_minBaselineThroughputHasBeenSet;
}

uint64_t SpecSellStatus::GetMaxBaselineThroughput() const
{
    return m_maxBaselineThroughput;
}

void SpecSellStatus::SetMaxBaselineThroughput(const uint64_t& _maxBaselineThroughput)
{
    m_maxBaselineThroughput = _maxBaselineThroughput;
    m_maxBaselineThroughputHasBeenSet = true;
}

bool SpecSellStatus::MaxBaselineThroughputHasBeenSet() const
{
    return m_maxBaselineThroughputHasBeenSet;
}

bool SpecSellStatus::GetExtraIOSupported() const
{
    return m_extraIOSupported;
}

void SpecSellStatus::SetExtraIOSupported(const bool& _extraIOSupported)
{
    m_extraIOSupported = _extraIOSupported;
    m_extraIOSupportedHasBeenSet = true;
}

bool SpecSellStatus::ExtraIOSupportedHasBeenSet() const
{
    return m_extraIOSupportedHasBeenSet;
}

uint64_t SpecSellStatus::GetMaxExtraThroughput() const
{
    return m_maxExtraThroughput;
}

void SpecSellStatus::SetMaxExtraThroughput(const uint64_t& _maxExtraThroughput)
{
    m_maxExtraThroughput = _maxExtraThroughput;
    m_maxExtraThroughputHasBeenSet = true;
}

bool SpecSellStatus::MaxExtraThroughputHasBeenSet() const
{
    return m_maxExtraThroughputHasBeenSet;
}

uint64_t SpecSellStatus::GetMinDiskSizeForExtraIO() const
{
    return m_minDiskSizeForExtraIO;
}

void SpecSellStatus::SetMinDiskSizeForExtraIO(const uint64_t& _minDiskSizeForExtraIO)
{
    m_minDiskSizeForExtraIO = _minDiskSizeForExtraIO;
    m_minDiskSizeForExtraIOHasBeenSet = true;
}

bool SpecSellStatus::MinDiskSizeForExtraIOHasBeenSet() const
{
    return m_minDiskSizeForExtraIOHasBeenSet;
}

