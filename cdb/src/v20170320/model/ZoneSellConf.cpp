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

#include <tencentcloud/cdb/v20170320/model/ZoneSellConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ZoneSellConf::ZoneSellConf() :
    m_statusHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_isCustomHasBeenSet(false),
    m_isSupportDrHasBeenSet(false),
    m_isSupportVpcHasBeenSet(false),
    m_hourInstanceSaleMaxNumHasBeenSet(false),
    m_isDefaultZoneHasBeenSet(false),
    m_isBmHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_protectModeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_sellTypeHasBeenSet(false),
    m_zoneConfHasBeenSet(false),
    m_drZoneHasBeenSet(false),
    m_isSupportRemoteRoHasBeenSet(false),
    m_remoteRoZoneHasBeenSet(false)
{
}

CoreInternalOutcome ZoneSellConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSellConf.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSellConf.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("IsCustom") && !value["IsCustom"].IsNull())
    {
        if (!value["IsCustom"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSellConf.IsCustom` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCustom = value["IsCustom"].GetBool();
        m_isCustomHasBeenSet = true;
    }

    if (value.HasMember("IsSupportDr") && !value["IsSupportDr"].IsNull())
    {
        if (!value["IsSupportDr"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSellConf.IsSupportDr` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportDr = value["IsSupportDr"].GetBool();
        m_isSupportDrHasBeenSet = true;
    }

    if (value.HasMember("IsSupportVpc") && !value["IsSupportVpc"].IsNull())
    {
        if (!value["IsSupportVpc"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSellConf.IsSupportVpc` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportVpc = value["IsSupportVpc"].GetBool();
        m_isSupportVpcHasBeenSet = true;
    }

    if (value.HasMember("HourInstanceSaleMaxNum") && !value["HourInstanceSaleMaxNum"].IsNull())
    {
        if (!value["HourInstanceSaleMaxNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSellConf.HourInstanceSaleMaxNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hourInstanceSaleMaxNum = value["HourInstanceSaleMaxNum"].GetInt64();
        m_hourInstanceSaleMaxNumHasBeenSet = true;
    }

    if (value.HasMember("IsDefaultZone") && !value["IsDefaultZone"].IsNull())
    {
        if (!value["IsDefaultZone"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSellConf.IsDefaultZone` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefaultZone = value["IsDefaultZone"].GetBool();
        m_isDefaultZoneHasBeenSet = true;
    }

    if (value.HasMember("IsBm") && !value["IsBm"].IsNull())
    {
        if (!value["IsBm"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSellConf.IsBm` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBm = value["IsBm"].GetBool();
        m_isBmHasBeenSet = true;
    }

    if (value.HasMember("PayType") && !value["PayType"].IsNull())
    {
        if (!value["PayType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneSellConf.PayType` is not array type"));

        const rapidjson::Value &tmpValue = value["PayType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_payType.push_back((*itr).GetString());
        }
        m_payTypeHasBeenSet = true;
    }

    if (value.HasMember("ProtectMode") && !value["ProtectMode"].IsNull())
    {
        if (!value["ProtectMode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneSellConf.ProtectMode` is not array type"));

        const rapidjson::Value &tmpValue = value["ProtectMode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_protectMode.push_back((*itr).GetString());
        }
        m_protectModeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSellConf.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("SellType") && !value["SellType"].IsNull())
    {
        if (!value["SellType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneSellConf.SellType` is not array type"));

        const rapidjson::Value &tmpValue = value["SellType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SellType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sellType.push_back(item);
        }
        m_sellTypeHasBeenSet = true;
    }

    if (value.HasMember("ZoneConf") && !value["ZoneConf"].IsNull())
    {
        if (!value["ZoneConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSellConf.ZoneConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_zoneConf.Deserialize(value["ZoneConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_zoneConfHasBeenSet = true;
    }

    if (value.HasMember("DrZone") && !value["DrZone"].IsNull())
    {
        if (!value["DrZone"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneSellConf.DrZone` is not array type"));

        const rapidjson::Value &tmpValue = value["DrZone"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_drZone.push_back((*itr).GetString());
        }
        m_drZoneHasBeenSet = true;
    }

    if (value.HasMember("IsSupportRemoteRo") && !value["IsSupportRemoteRo"].IsNull())
    {
        if (!value["IsSupportRemoteRo"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSellConf.IsSupportRemoteRo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportRemoteRo = value["IsSupportRemoteRo"].GetBool();
        m_isSupportRemoteRoHasBeenSet = true;
    }

    if (value.HasMember("RemoteRoZone") && !value["RemoteRoZone"].IsNull())
    {
        if (!value["RemoteRoZone"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneSellConf.RemoteRoZone` is not array type"));

        const rapidjson::Value &tmpValue = value["RemoteRoZone"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_remoteRoZone.push_back((*itr).GetString());
        }
        m_remoteRoZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneSellConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_isCustomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCustom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCustom, allocator);
    }

    if (m_isSupportDrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportDr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportDr, allocator);
    }

    if (m_isSupportVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportVpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportVpc, allocator);
    }

    if (m_hourInstanceSaleMaxNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HourInstanceSaleMaxNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hourInstanceSaleMaxNum, allocator);
    }

    if (m_isDefaultZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefaultZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefaultZone, allocator);
    }

    if (m_isBmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBm, allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_payType.begin(); itr != m_payType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_protectMode.begin(); itr != m_protectMode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_sellTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sellType.begin(); itr != m_sellType.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_zoneConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_zoneConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_drZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_drZone.begin(); itr != m_drZone.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isSupportRemoteRoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportRemoteRo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportRemoteRo, allocator);
    }

    if (m_remoteRoZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteRoZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_remoteRoZone.begin(); itr != m_remoteRoZone.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t ZoneSellConf::GetStatus() const
{
    return m_status;
}

void ZoneSellConf::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ZoneSellConf::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ZoneSellConf::GetZoneName() const
{
    return m_zoneName;
}

void ZoneSellConf::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ZoneSellConf::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

bool ZoneSellConf::GetIsCustom() const
{
    return m_isCustom;
}

void ZoneSellConf::SetIsCustom(const bool& _isCustom)
{
    m_isCustom = _isCustom;
    m_isCustomHasBeenSet = true;
}

bool ZoneSellConf::IsCustomHasBeenSet() const
{
    return m_isCustomHasBeenSet;
}

bool ZoneSellConf::GetIsSupportDr() const
{
    return m_isSupportDr;
}

void ZoneSellConf::SetIsSupportDr(const bool& _isSupportDr)
{
    m_isSupportDr = _isSupportDr;
    m_isSupportDrHasBeenSet = true;
}

bool ZoneSellConf::IsSupportDrHasBeenSet() const
{
    return m_isSupportDrHasBeenSet;
}

bool ZoneSellConf::GetIsSupportVpc() const
{
    return m_isSupportVpc;
}

void ZoneSellConf::SetIsSupportVpc(const bool& _isSupportVpc)
{
    m_isSupportVpc = _isSupportVpc;
    m_isSupportVpcHasBeenSet = true;
}

bool ZoneSellConf::IsSupportVpcHasBeenSet() const
{
    return m_isSupportVpcHasBeenSet;
}

int64_t ZoneSellConf::GetHourInstanceSaleMaxNum() const
{
    return m_hourInstanceSaleMaxNum;
}

void ZoneSellConf::SetHourInstanceSaleMaxNum(const int64_t& _hourInstanceSaleMaxNum)
{
    m_hourInstanceSaleMaxNum = _hourInstanceSaleMaxNum;
    m_hourInstanceSaleMaxNumHasBeenSet = true;
}

bool ZoneSellConf::HourInstanceSaleMaxNumHasBeenSet() const
{
    return m_hourInstanceSaleMaxNumHasBeenSet;
}

bool ZoneSellConf::GetIsDefaultZone() const
{
    return m_isDefaultZone;
}

void ZoneSellConf::SetIsDefaultZone(const bool& _isDefaultZone)
{
    m_isDefaultZone = _isDefaultZone;
    m_isDefaultZoneHasBeenSet = true;
}

bool ZoneSellConf::IsDefaultZoneHasBeenSet() const
{
    return m_isDefaultZoneHasBeenSet;
}

bool ZoneSellConf::GetIsBm() const
{
    return m_isBm;
}

void ZoneSellConf::SetIsBm(const bool& _isBm)
{
    m_isBm = _isBm;
    m_isBmHasBeenSet = true;
}

bool ZoneSellConf::IsBmHasBeenSet() const
{
    return m_isBmHasBeenSet;
}

vector<string> ZoneSellConf::GetPayType() const
{
    return m_payType;
}

void ZoneSellConf::SetPayType(const vector<string>& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool ZoneSellConf::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

vector<string> ZoneSellConf::GetProtectMode() const
{
    return m_protectMode;
}

void ZoneSellConf::SetProtectMode(const vector<string>& _protectMode)
{
    m_protectMode = _protectMode;
    m_protectModeHasBeenSet = true;
}

bool ZoneSellConf::ProtectModeHasBeenSet() const
{
    return m_protectModeHasBeenSet;
}

string ZoneSellConf::GetZone() const
{
    return m_zone;
}

void ZoneSellConf::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ZoneSellConf::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<SellType> ZoneSellConf::GetSellType() const
{
    return m_sellType;
}

void ZoneSellConf::SetSellType(const vector<SellType>& _sellType)
{
    m_sellType = _sellType;
    m_sellTypeHasBeenSet = true;
}

bool ZoneSellConf::SellTypeHasBeenSet() const
{
    return m_sellTypeHasBeenSet;
}

ZoneConf ZoneSellConf::GetZoneConf() const
{
    return m_zoneConf;
}

void ZoneSellConf::SetZoneConf(const ZoneConf& _zoneConf)
{
    m_zoneConf = _zoneConf;
    m_zoneConfHasBeenSet = true;
}

bool ZoneSellConf::ZoneConfHasBeenSet() const
{
    return m_zoneConfHasBeenSet;
}

vector<string> ZoneSellConf::GetDrZone() const
{
    return m_drZone;
}

void ZoneSellConf::SetDrZone(const vector<string>& _drZone)
{
    m_drZone = _drZone;
    m_drZoneHasBeenSet = true;
}

bool ZoneSellConf::DrZoneHasBeenSet() const
{
    return m_drZoneHasBeenSet;
}

bool ZoneSellConf::GetIsSupportRemoteRo() const
{
    return m_isSupportRemoteRo;
}

void ZoneSellConf::SetIsSupportRemoteRo(const bool& _isSupportRemoteRo)
{
    m_isSupportRemoteRo = _isSupportRemoteRo;
    m_isSupportRemoteRoHasBeenSet = true;
}

bool ZoneSellConf::IsSupportRemoteRoHasBeenSet() const
{
    return m_isSupportRemoteRoHasBeenSet;
}

vector<string> ZoneSellConf::GetRemoteRoZone() const
{
    return m_remoteRoZone;
}

void ZoneSellConf::SetRemoteRoZone(const vector<string>& _remoteRoZone)
{
    m_remoteRoZone = _remoteRoZone;
    m_remoteRoZoneHasBeenSet = true;
}

bool ZoneSellConf::RemoteRoZoneHasBeenSet() const
{
    return m_remoteRoZoneHasBeenSet;
}

