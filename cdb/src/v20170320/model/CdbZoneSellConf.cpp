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

#include <tencentcloud/cdb/v20170320/model/CdbZoneSellConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CdbZoneSellConf::CdbZoneSellConf() :
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
    m_zoneConfHasBeenSet(false),
    m_drZoneHasBeenSet(false),
    m_isSupportRemoteRoHasBeenSet(false),
    m_remoteRoZoneHasBeenSet(false),
    m_exClusterStatusHasBeenSet(false),
    m_exClusterRemoteRoZoneHasBeenSet(false),
    m_exClusterZoneConfHasBeenSet(false),
    m_sellTypeHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_isSupportIpv6HasBeenSet(false),
    m_engineTypeHasBeenSet(false)
{
}

CoreInternalOutcome CdbZoneSellConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("IsCustom") && !value["IsCustom"].IsNull())
    {
        if (!value["IsCustom"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.IsCustom` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCustom = value["IsCustom"].GetBool();
        m_isCustomHasBeenSet = true;
    }

    if (value.HasMember("IsSupportDr") && !value["IsSupportDr"].IsNull())
    {
        if (!value["IsSupportDr"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.IsSupportDr` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportDr = value["IsSupportDr"].GetBool();
        m_isSupportDrHasBeenSet = true;
    }

    if (value.HasMember("IsSupportVpc") && !value["IsSupportVpc"].IsNull())
    {
        if (!value["IsSupportVpc"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.IsSupportVpc` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportVpc = value["IsSupportVpc"].GetBool();
        m_isSupportVpcHasBeenSet = true;
    }

    if (value.HasMember("HourInstanceSaleMaxNum") && !value["HourInstanceSaleMaxNum"].IsNull())
    {
        if (!value["HourInstanceSaleMaxNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.HourInstanceSaleMaxNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hourInstanceSaleMaxNum = value["HourInstanceSaleMaxNum"].GetInt64();
        m_hourInstanceSaleMaxNumHasBeenSet = true;
    }

    if (value.HasMember("IsDefaultZone") && !value["IsDefaultZone"].IsNull())
    {
        if (!value["IsDefaultZone"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.IsDefaultZone` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefaultZone = value["IsDefaultZone"].GetBool();
        m_isDefaultZoneHasBeenSet = true;
    }

    if (value.HasMember("IsBm") && !value["IsBm"].IsNull())
    {
        if (!value["IsBm"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.IsBm` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBm = value["IsBm"].GetBool();
        m_isBmHasBeenSet = true;
    }

    if (value.HasMember("PayType") && !value["PayType"].IsNull())
    {
        if (!value["PayType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.PayType` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.ProtectMode` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneConf") && !value["ZoneConf"].IsNull())
    {
        if (!value["ZoneConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.ZoneConf` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.DrZone` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.IsSupportRemoteRo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportRemoteRo = value["IsSupportRemoteRo"].GetBool();
        m_isSupportRemoteRoHasBeenSet = true;
    }

    if (value.HasMember("RemoteRoZone") && !value["RemoteRoZone"].IsNull())
    {
        if (!value["RemoteRoZone"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.RemoteRoZone` is not array type"));

        const rapidjson::Value &tmpValue = value["RemoteRoZone"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_remoteRoZone.push_back((*itr).GetString());
        }
        m_remoteRoZoneHasBeenSet = true;
    }

    if (value.HasMember("ExClusterStatus") && !value["ExClusterStatus"].IsNull())
    {
        if (!value["ExClusterStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.ExClusterStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exClusterStatus = value["ExClusterStatus"].GetInt64();
        m_exClusterStatusHasBeenSet = true;
    }

    if (value.HasMember("ExClusterRemoteRoZone") && !value["ExClusterRemoteRoZone"].IsNull())
    {
        if (!value["ExClusterRemoteRoZone"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.ExClusterRemoteRoZone` is not array type"));

        const rapidjson::Value &tmpValue = value["ExClusterRemoteRoZone"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_exClusterRemoteRoZone.push_back((*itr).GetString());
        }
        m_exClusterRemoteRoZoneHasBeenSet = true;
    }

    if (value.HasMember("ExClusterZoneConf") && !value["ExClusterZoneConf"].IsNull())
    {
        if (!value["ExClusterZoneConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.ExClusterZoneConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_exClusterZoneConf.Deserialize(value["ExClusterZoneConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_exClusterZoneConfHasBeenSet = true;
    }

    if (value.HasMember("SellType") && !value["SellType"].IsNull())
    {
        if (!value["SellType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.SellType` is not array type"));

        const rapidjson::Value &tmpValue = value["SellType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CdbSellType item;
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

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("IsSupportIpv6") && !value["IsSupportIpv6"].IsNull())
    {
        if (!value["IsSupportIpv6"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.IsSupportIpv6` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportIpv6 = value["IsSupportIpv6"].GetBool();
        m_isSupportIpv6HasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CdbZoneSellConf.EngineType` is not array type"));

        const rapidjson::Value &tmpValue = value["EngineType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_engineType.push_back((*itr).GetString());
        }
        m_engineTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CdbZoneSellConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_exClusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exClusterStatus, allocator);
    }

    if (m_exClusterRemoteRoZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExClusterRemoteRoZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_exClusterRemoteRoZone.begin(); itr != m_exClusterRemoteRoZone.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_exClusterZoneConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExClusterZoneConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_exClusterZoneConf.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_isSupportIpv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportIpv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportIpv6, allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_engineType.begin(); itr != m_engineType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t CdbZoneSellConf::GetStatus() const
{
    return m_status;
}

void CdbZoneSellConf::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CdbZoneSellConf::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CdbZoneSellConf::GetZoneName() const
{
    return m_zoneName;
}

void CdbZoneSellConf::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool CdbZoneSellConf::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

bool CdbZoneSellConf::GetIsCustom() const
{
    return m_isCustom;
}

void CdbZoneSellConf::SetIsCustom(const bool& _isCustom)
{
    m_isCustom = _isCustom;
    m_isCustomHasBeenSet = true;
}

bool CdbZoneSellConf::IsCustomHasBeenSet() const
{
    return m_isCustomHasBeenSet;
}

bool CdbZoneSellConf::GetIsSupportDr() const
{
    return m_isSupportDr;
}

void CdbZoneSellConf::SetIsSupportDr(const bool& _isSupportDr)
{
    m_isSupportDr = _isSupportDr;
    m_isSupportDrHasBeenSet = true;
}

bool CdbZoneSellConf::IsSupportDrHasBeenSet() const
{
    return m_isSupportDrHasBeenSet;
}

bool CdbZoneSellConf::GetIsSupportVpc() const
{
    return m_isSupportVpc;
}

void CdbZoneSellConf::SetIsSupportVpc(const bool& _isSupportVpc)
{
    m_isSupportVpc = _isSupportVpc;
    m_isSupportVpcHasBeenSet = true;
}

bool CdbZoneSellConf::IsSupportVpcHasBeenSet() const
{
    return m_isSupportVpcHasBeenSet;
}

int64_t CdbZoneSellConf::GetHourInstanceSaleMaxNum() const
{
    return m_hourInstanceSaleMaxNum;
}

void CdbZoneSellConf::SetHourInstanceSaleMaxNum(const int64_t& _hourInstanceSaleMaxNum)
{
    m_hourInstanceSaleMaxNum = _hourInstanceSaleMaxNum;
    m_hourInstanceSaleMaxNumHasBeenSet = true;
}

bool CdbZoneSellConf::HourInstanceSaleMaxNumHasBeenSet() const
{
    return m_hourInstanceSaleMaxNumHasBeenSet;
}

bool CdbZoneSellConf::GetIsDefaultZone() const
{
    return m_isDefaultZone;
}

void CdbZoneSellConf::SetIsDefaultZone(const bool& _isDefaultZone)
{
    m_isDefaultZone = _isDefaultZone;
    m_isDefaultZoneHasBeenSet = true;
}

bool CdbZoneSellConf::IsDefaultZoneHasBeenSet() const
{
    return m_isDefaultZoneHasBeenSet;
}

bool CdbZoneSellConf::GetIsBm() const
{
    return m_isBm;
}

void CdbZoneSellConf::SetIsBm(const bool& _isBm)
{
    m_isBm = _isBm;
    m_isBmHasBeenSet = true;
}

bool CdbZoneSellConf::IsBmHasBeenSet() const
{
    return m_isBmHasBeenSet;
}

vector<string> CdbZoneSellConf::GetPayType() const
{
    return m_payType;
}

void CdbZoneSellConf::SetPayType(const vector<string>& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool CdbZoneSellConf::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

vector<string> CdbZoneSellConf::GetProtectMode() const
{
    return m_protectMode;
}

void CdbZoneSellConf::SetProtectMode(const vector<string>& _protectMode)
{
    m_protectMode = _protectMode;
    m_protectModeHasBeenSet = true;
}

bool CdbZoneSellConf::ProtectModeHasBeenSet() const
{
    return m_protectModeHasBeenSet;
}

string CdbZoneSellConf::GetZone() const
{
    return m_zone;
}

void CdbZoneSellConf::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CdbZoneSellConf::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

ZoneConf CdbZoneSellConf::GetZoneConf() const
{
    return m_zoneConf;
}

void CdbZoneSellConf::SetZoneConf(const ZoneConf& _zoneConf)
{
    m_zoneConf = _zoneConf;
    m_zoneConfHasBeenSet = true;
}

bool CdbZoneSellConf::ZoneConfHasBeenSet() const
{
    return m_zoneConfHasBeenSet;
}

vector<string> CdbZoneSellConf::GetDrZone() const
{
    return m_drZone;
}

void CdbZoneSellConf::SetDrZone(const vector<string>& _drZone)
{
    m_drZone = _drZone;
    m_drZoneHasBeenSet = true;
}

bool CdbZoneSellConf::DrZoneHasBeenSet() const
{
    return m_drZoneHasBeenSet;
}

bool CdbZoneSellConf::GetIsSupportRemoteRo() const
{
    return m_isSupportRemoteRo;
}

void CdbZoneSellConf::SetIsSupportRemoteRo(const bool& _isSupportRemoteRo)
{
    m_isSupportRemoteRo = _isSupportRemoteRo;
    m_isSupportRemoteRoHasBeenSet = true;
}

bool CdbZoneSellConf::IsSupportRemoteRoHasBeenSet() const
{
    return m_isSupportRemoteRoHasBeenSet;
}

vector<string> CdbZoneSellConf::GetRemoteRoZone() const
{
    return m_remoteRoZone;
}

void CdbZoneSellConf::SetRemoteRoZone(const vector<string>& _remoteRoZone)
{
    m_remoteRoZone = _remoteRoZone;
    m_remoteRoZoneHasBeenSet = true;
}

bool CdbZoneSellConf::RemoteRoZoneHasBeenSet() const
{
    return m_remoteRoZoneHasBeenSet;
}

int64_t CdbZoneSellConf::GetExClusterStatus() const
{
    return m_exClusterStatus;
}

void CdbZoneSellConf::SetExClusterStatus(const int64_t& _exClusterStatus)
{
    m_exClusterStatus = _exClusterStatus;
    m_exClusterStatusHasBeenSet = true;
}

bool CdbZoneSellConf::ExClusterStatusHasBeenSet() const
{
    return m_exClusterStatusHasBeenSet;
}

vector<string> CdbZoneSellConf::GetExClusterRemoteRoZone() const
{
    return m_exClusterRemoteRoZone;
}

void CdbZoneSellConf::SetExClusterRemoteRoZone(const vector<string>& _exClusterRemoteRoZone)
{
    m_exClusterRemoteRoZone = _exClusterRemoteRoZone;
    m_exClusterRemoteRoZoneHasBeenSet = true;
}

bool CdbZoneSellConf::ExClusterRemoteRoZoneHasBeenSet() const
{
    return m_exClusterRemoteRoZoneHasBeenSet;
}

ZoneConf CdbZoneSellConf::GetExClusterZoneConf() const
{
    return m_exClusterZoneConf;
}

void CdbZoneSellConf::SetExClusterZoneConf(const ZoneConf& _exClusterZoneConf)
{
    m_exClusterZoneConf = _exClusterZoneConf;
    m_exClusterZoneConfHasBeenSet = true;
}

bool CdbZoneSellConf::ExClusterZoneConfHasBeenSet() const
{
    return m_exClusterZoneConfHasBeenSet;
}

vector<CdbSellType> CdbZoneSellConf::GetSellType() const
{
    return m_sellType;
}

void CdbZoneSellConf::SetSellType(const vector<CdbSellType>& _sellType)
{
    m_sellType = _sellType;
    m_sellTypeHasBeenSet = true;
}

bool CdbZoneSellConf::SellTypeHasBeenSet() const
{
    return m_sellTypeHasBeenSet;
}

int64_t CdbZoneSellConf::GetZoneId() const
{
    return m_zoneId;
}

void CdbZoneSellConf::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CdbZoneSellConf::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

bool CdbZoneSellConf::GetIsSupportIpv6() const
{
    return m_isSupportIpv6;
}

void CdbZoneSellConf::SetIsSupportIpv6(const bool& _isSupportIpv6)
{
    m_isSupportIpv6 = _isSupportIpv6;
    m_isSupportIpv6HasBeenSet = true;
}

bool CdbZoneSellConf::IsSupportIpv6HasBeenSet() const
{
    return m_isSupportIpv6HasBeenSet;
}

vector<string> CdbZoneSellConf::GetEngineType() const
{
    return m_engineType;
}

void CdbZoneSellConf::SetEngineType(const vector<string>& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool CdbZoneSellConf::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

