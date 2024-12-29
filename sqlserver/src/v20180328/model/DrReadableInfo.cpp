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

#include <tencentcloud/sqlserver/v20180328/model/DrReadableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DrReadableInfo::DrReadableInfo() :
    m_drInstanceIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_slaveStatusHasBeenSet(false),
    m_readableStatusHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vPortHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_roWeightHasBeenSet(false),
    m_readModeHasBeenSet(false)
{
}

CoreInternalOutcome DrReadableInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DrInstanceId") && !value["DrInstanceId"].IsNull())
    {
        if (!value["DrInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrReadableInfo.DrInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drInstanceId = string(value["DrInstanceId"].GetString());
        m_drInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrReadableInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("SlaveStatus") && !value["SlaveStatus"].IsNull())
    {
        if (!value["SlaveStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrReadableInfo.SlaveStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaveStatus = string(value["SlaveStatus"].GetString());
        m_slaveStatusHasBeenSet = true;
    }

    if (value.HasMember("ReadableStatus") && !value["ReadableStatus"].IsNull())
    {
        if (!value["ReadableStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrReadableInfo.ReadableStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readableStatus = string(value["ReadableStatus"].GetString());
        m_readableStatusHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrReadableInfo.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("VPort") && !value["VPort"].IsNull())
    {
        if (!value["VPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DrReadableInfo.VPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vPort = value["VPort"].GetInt64();
        m_vPortHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrReadableInfo.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqSubnetId") && !value["UniqSubnetId"].IsNull())
    {
        if (!value["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrReadableInfo.UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(value["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("RoWeight") && !value["RoWeight"].IsNull())
    {
        if (!value["RoWeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DrReadableInfo.RoWeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roWeight = value["RoWeight"].GetUint64();
        m_roWeightHasBeenSet = true;
    }

    if (value.HasMember("ReadMode") && !value["ReadMode"].IsNull())
    {
        if (!value["ReadMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrReadableInfo.ReadMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readMode = string(value["ReadMode"].GetString());
        m_readModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DrReadableInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_drInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaveStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_readableStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadableStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readableStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vPort, allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_roWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roWeight, allocator);
    }

    if (m_readModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readMode.c_str(), allocator).Move(), allocator);
    }

}


string DrReadableInfo::GetDrInstanceId() const
{
    return m_drInstanceId;
}

void DrReadableInfo::SetDrInstanceId(const string& _drInstanceId)
{
    m_drInstanceId = _drInstanceId;
    m_drInstanceIdHasBeenSet = true;
}

bool DrReadableInfo::DrInstanceIdHasBeenSet() const
{
    return m_drInstanceIdHasBeenSet;
}

string DrReadableInfo::GetZone() const
{
    return m_zone;
}

void DrReadableInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DrReadableInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DrReadableInfo::GetSlaveStatus() const
{
    return m_slaveStatus;
}

void DrReadableInfo::SetSlaveStatus(const string& _slaveStatus)
{
    m_slaveStatus = _slaveStatus;
    m_slaveStatusHasBeenSet = true;
}

bool DrReadableInfo::SlaveStatusHasBeenSet() const
{
    return m_slaveStatusHasBeenSet;
}

string DrReadableInfo::GetReadableStatus() const
{
    return m_readableStatus;
}

void DrReadableInfo::SetReadableStatus(const string& _readableStatus)
{
    m_readableStatus = _readableStatus;
    m_readableStatusHasBeenSet = true;
}

bool DrReadableInfo::ReadableStatusHasBeenSet() const
{
    return m_readableStatusHasBeenSet;
}

string DrReadableInfo::GetVip() const
{
    return m_vip;
}

void DrReadableInfo::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool DrReadableInfo::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t DrReadableInfo::GetVPort() const
{
    return m_vPort;
}

void DrReadableInfo::SetVPort(const int64_t& _vPort)
{
    m_vPort = _vPort;
    m_vPortHasBeenSet = true;
}

bool DrReadableInfo::VPortHasBeenSet() const
{
    return m_vPortHasBeenSet;
}

string DrReadableInfo::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void DrReadableInfo::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool DrReadableInfo::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string DrReadableInfo::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void DrReadableInfo::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool DrReadableInfo::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

uint64_t DrReadableInfo::GetRoWeight() const
{
    return m_roWeight;
}

void DrReadableInfo::SetRoWeight(const uint64_t& _roWeight)
{
    m_roWeight = _roWeight;
    m_roWeightHasBeenSet = true;
}

bool DrReadableInfo::RoWeightHasBeenSet() const
{
    return m_roWeightHasBeenSet;
}

string DrReadableInfo::GetReadMode() const
{
    return m_readMode;
}

void DrReadableInfo::SetReadMode(const string& _readMode)
{
    m_readMode = _readMode;
    m_readModeHasBeenSet = true;
}

bool DrReadableInfo::ReadModeHasBeenSet() const
{
    return m_readModeHasBeenSet;
}

