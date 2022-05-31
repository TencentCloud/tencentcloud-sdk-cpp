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

#include <tencentcloud/dbdc/v20201029/model/InstanceExpand.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

InstanceExpand::InstanceExpand() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_machineHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_instanceDetailHasBeenSet(false),
    m_pidHasBeenSet(false)
{
}

CoreInternalOutcome InstanceExpand::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExpand.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExpand.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExpand.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExpand.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExpand.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExpand.InstanceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetInt64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExpand.InstanceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = value["InstanceStatus"].GetInt64();
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExpand.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExpand.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("Machine") && !value["Machine"].IsNull())
    {
        if (!value["Machine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExpand.Machine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machine = string(value["Machine"].GetString());
        m_machineHasBeenSet = true;
    }

    if (value.HasMember("PeriodEndTime") && !value["PeriodEndTime"].IsNull())
    {
        if (!value["PeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExpand.PeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndTime = string(value["PeriodEndTime"].GetString());
        m_periodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceDetail") && !value["InstanceDetail"].IsNull())
    {
        if (!value["InstanceDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExpand.InstanceDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceDetail.Deserialize(value["InstanceDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceDetailHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExpand.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceExpand::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceStatus, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_machineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Machine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machine.c_str(), allocator).Move(), allocator);
    }

    if (m_periodEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

}


string InstanceExpand::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceExpand::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceExpand::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceExpand::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceExpand::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceExpand::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

uint64_t InstanceExpand::GetAppId() const
{
    return m_appId;
}

void InstanceExpand::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool InstanceExpand::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string InstanceExpand::GetRegion() const
{
    return m_region;
}

void InstanceExpand::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceExpand::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string InstanceExpand::GetZone() const
{
    return m_zone;
}

void InstanceExpand::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceExpand::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t InstanceExpand::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceExpand::SetInstanceType(const int64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceExpand::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t InstanceExpand::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void InstanceExpand::SetInstanceStatus(const int64_t& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool InstanceExpand::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string InstanceExpand::GetCreateTime() const
{
    return m_createTime;
}

void InstanceExpand::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceExpand::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t InstanceExpand::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void InstanceExpand::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool InstanceExpand::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string InstanceExpand::GetMachine() const
{
    return m_machine;
}

void InstanceExpand::SetMachine(const string& _machine)
{
    m_machine = _machine;
    m_machineHasBeenSet = true;
}

bool InstanceExpand::MachineHasBeenSet() const
{
    return m_machineHasBeenSet;
}

string InstanceExpand::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

void InstanceExpand::SetPeriodEndTime(const string& _periodEndTime)
{
    m_periodEndTime = _periodEndTime;
    m_periodEndTimeHasBeenSet = true;
}

bool InstanceExpand::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

InstanceDetail InstanceExpand::GetInstanceDetail() const
{
    return m_instanceDetail;
}

void InstanceExpand::SetInstanceDetail(const InstanceDetail& _instanceDetail)
{
    m_instanceDetail = _instanceDetail;
    m_instanceDetailHasBeenSet = true;
}

bool InstanceExpand::InstanceDetailHasBeenSet() const
{
    return m_instanceDetailHasBeenSet;
}

int64_t InstanceExpand::GetPid() const
{
    return m_pid;
}

void InstanceExpand::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool InstanceExpand::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

