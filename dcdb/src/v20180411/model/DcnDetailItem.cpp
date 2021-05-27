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

#include <tencentcloud/dcdb/v20180411/model/DcnDetailItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace rapidjson;
using namespace std;

DcnDetailItem::DcnDetailItem() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vipv6HasBeenSet(false),
    m_vportHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_dcnFlagHasBeenSet(false),
    m_dcnStatusHasBeenSet(false)
{
}

CoreInternalOutcome DcnDetailItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DcnDetailItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DcnDetailItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `DcnDetailItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `DcnDetailItem.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Error("response `DcnDetailItem.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vipv6") && !value["Vipv6"].IsNull())
    {
        if (!value["Vipv6"].IsString())
        {
            return CoreInternalOutcome(Error("response `DcnDetailItem.Vipv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vipv6 = string(value["Vipv6"].GetString());
        m_vipv6HasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DcnDetailItem.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DcnDetailItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `DcnDetailItem.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("DcnFlag") && !value["DcnFlag"].IsNull())
    {
        if (!value["DcnFlag"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DcnDetailItem.DcnFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dcnFlag = value["DcnFlag"].GetInt64();
        m_dcnFlagHasBeenSet = true;
    }

    if (value.HasMember("DcnStatus") && !value["DcnStatus"].IsNull())
    {
        if (!value["DcnStatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DcnDetailItem.DcnStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dcnStatus = value["DcnStatus"].GetInt64();
        m_dcnStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DcnDetailItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vipv6HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vipv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vipv6.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_dcnFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DcnFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dcnFlag, allocator);
    }

    if (m_dcnStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DcnStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dcnStatus, allocator);
    }

}


string DcnDetailItem::GetInstanceId() const
{
    return m_instanceId;
}

void DcnDetailItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DcnDetailItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DcnDetailItem::GetInstanceName() const
{
    return m_instanceName;
}

void DcnDetailItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DcnDetailItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DcnDetailItem::GetRegion() const
{
    return m_region;
}

void DcnDetailItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DcnDetailItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DcnDetailItem::GetZone() const
{
    return m_zone;
}

void DcnDetailItem::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DcnDetailItem::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DcnDetailItem::GetVip() const
{
    return m_vip;
}

void DcnDetailItem::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool DcnDetailItem::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string DcnDetailItem::GetVipv6() const
{
    return m_vipv6;
}

void DcnDetailItem::SetVipv6(const string& _vipv6)
{
    m_vipv6 = _vipv6;
    m_vipv6HasBeenSet = true;
}

bool DcnDetailItem::Vipv6HasBeenSet() const
{
    return m_vipv6HasBeenSet;
}

int64_t DcnDetailItem::GetVport() const
{
    return m_vport;
}

void DcnDetailItem::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool DcnDetailItem::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

int64_t DcnDetailItem::GetStatus() const
{
    return m_status;
}

void DcnDetailItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DcnDetailItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DcnDetailItem::GetStatusDesc() const
{
    return m_statusDesc;
}

void DcnDetailItem::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool DcnDetailItem::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

int64_t DcnDetailItem::GetDcnFlag() const
{
    return m_dcnFlag;
}

void DcnDetailItem::SetDcnFlag(const int64_t& _dcnFlag)
{
    m_dcnFlag = _dcnFlag;
    m_dcnFlagHasBeenSet = true;
}

bool DcnDetailItem::DcnFlagHasBeenSet() const
{
    return m_dcnFlagHasBeenSet;
}

int64_t DcnDetailItem::GetDcnStatus() const
{
    return m_dcnStatus;
}

void DcnDetailItem::SetDcnStatus(const int64_t& _dcnStatus)
{
    m_dcnStatus = _dcnStatus;
    m_dcnStatusHasBeenSet = true;
}

bool DcnDetailItem::DcnStatusHasBeenSet() const
{
    return m_dcnStatusHasBeenSet;
}

