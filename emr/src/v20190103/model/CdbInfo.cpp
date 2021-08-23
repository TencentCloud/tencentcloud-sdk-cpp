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

#include <tencentcloud/emr/v20190103/model/CdbInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

CdbInfo::CdbInfo() :
    m_instanceNameHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_applyTimeHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_expireFlagHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isAutoRenewHasBeenSet(false),
    m_serialNoHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_regionIdHasBeenSet(false)
{
}

CoreInternalOutcome CdbInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdbInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdbInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbInfo.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbInfo.MemSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetInt64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbInfo.Volume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetInt64();
        m_volumeHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdbInfo.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdbInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdbInfo.ApplyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = string(value["ApplyTime"].GetString());
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("PayType") && !value["PayType"].IsNull())
    {
        if (!value["PayType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbInfo.PayType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payType = value["PayType"].GetInt64();
        m_payTypeHasBeenSet = true;
    }

    if (value.HasMember("ExpireFlag") && !value["ExpireFlag"].IsNull())
    {
        if (!value["ExpireFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CdbInfo.ExpireFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_expireFlag = value["ExpireFlag"].GetBool();
        m_expireFlagHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsAutoRenew") && !value["IsAutoRenew"].IsNull())
    {
        if (!value["IsAutoRenew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbInfo.IsAutoRenew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAutoRenew = value["IsAutoRenew"].GetInt64();
        m_isAutoRenewHasBeenSet = true;
    }

    if (value.HasMember("SerialNo") && !value["SerialNo"].IsNull())
    {
        if (!value["SerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdbInfo.SerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNo = string(value["SerialNo"].GetString());
        m_serialNoHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbInfo.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbInfo.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CdbInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memSize, allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volume, allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_applyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payType, allocator);
    }

    if (m_expireFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireFlag, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isAutoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAutoRenew, allocator);
    }

    if (m_serialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

}


string CdbInfo::GetInstanceName() const
{
    return m_instanceName;
}

void CdbInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CdbInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CdbInfo::GetIp() const
{
    return m_ip;
}

void CdbInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool CdbInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t CdbInfo::GetPort() const
{
    return m_port;
}

void CdbInfo::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CdbInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t CdbInfo::GetMemSize() const
{
    return m_memSize;
}

void CdbInfo::SetMemSize(const int64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool CdbInfo::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

int64_t CdbInfo::GetVolume() const
{
    return m_volume;
}

void CdbInfo::SetVolume(const int64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool CdbInfo::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

string CdbInfo::GetService() const
{
    return m_service;
}

void CdbInfo::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool CdbInfo::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string CdbInfo::GetExpireTime() const
{
    return m_expireTime;
}

void CdbInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CdbInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string CdbInfo::GetApplyTime() const
{
    return m_applyTime;
}

void CdbInfo::SetApplyTime(const string& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool CdbInfo::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

int64_t CdbInfo::GetPayType() const
{
    return m_payType;
}

void CdbInfo::SetPayType(const int64_t& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool CdbInfo::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

bool CdbInfo::GetExpireFlag() const
{
    return m_expireFlag;
}

void CdbInfo::SetExpireFlag(const bool& _expireFlag)
{
    m_expireFlag = _expireFlag;
    m_expireFlagHasBeenSet = true;
}

bool CdbInfo::ExpireFlagHasBeenSet() const
{
    return m_expireFlagHasBeenSet;
}

int64_t CdbInfo::GetStatus() const
{
    return m_status;
}

void CdbInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CdbInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t CdbInfo::GetIsAutoRenew() const
{
    return m_isAutoRenew;
}

void CdbInfo::SetIsAutoRenew(const int64_t& _isAutoRenew)
{
    m_isAutoRenew = _isAutoRenew;
    m_isAutoRenewHasBeenSet = true;
}

bool CdbInfo::IsAutoRenewHasBeenSet() const
{
    return m_isAutoRenewHasBeenSet;
}

string CdbInfo::GetSerialNo() const
{
    return m_serialNo;
}

void CdbInfo::SetSerialNo(const string& _serialNo)
{
    m_serialNo = _serialNo;
    m_serialNoHasBeenSet = true;
}

bool CdbInfo::SerialNoHasBeenSet() const
{
    return m_serialNoHasBeenSet;
}

int64_t CdbInfo::GetZoneId() const
{
    return m_zoneId;
}

void CdbInfo::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CdbInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t CdbInfo::GetRegionId() const
{
    return m_regionId;
}

void CdbInfo::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool CdbInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

