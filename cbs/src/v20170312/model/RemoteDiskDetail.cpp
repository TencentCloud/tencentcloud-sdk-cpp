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

#include <tencentcloud/cbs/v20170312/model/RemoteDiskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

RemoteDiskDetail::RemoteDiskDetail() :
    m_createTimeHasBeenSet(false),
    m_deadlineTimeHasBeenSet(false),
    m_diskChargeTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_remoteDiskIdHasBeenSet(false),
    m_remoteDiskNameHasBeenSet(false),
    m_remoteDiskStateHasBeenSet(false),
    m_remoteDiskTypeHasBeenSet(false),
    m_renewFlagHasBeenSet(false)
{
}

CoreInternalOutcome RemoteDiskDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteDiskDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DeadlineTime") && !value["DeadlineTime"].IsNull())
    {
        if (!value["DeadlineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteDiskDetail.DeadlineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadlineTime = string(value["DeadlineTime"].GetString());
        m_deadlineTimeHasBeenSet = true;
    }

    if (value.HasMember("DiskChargeType") && !value["DiskChargeType"].IsNull())
    {
        if (!value["DiskChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteDiskDetail.DiskChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskChargeType = string(value["DiskChargeType"].GetString());
        m_diskChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteDiskDetail.DiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetUint64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteDiskDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteDiskDetail.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("RemoteDiskId") && !value["RemoteDiskId"].IsNull())
    {
        if (!value["RemoteDiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteDiskDetail.RemoteDiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteDiskId = string(value["RemoteDiskId"].GetString());
        m_remoteDiskIdHasBeenSet = true;
    }

    if (value.HasMember("RemoteDiskName") && !value["RemoteDiskName"].IsNull())
    {
        if (!value["RemoteDiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteDiskDetail.RemoteDiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteDiskName = string(value["RemoteDiskName"].GetString());
        m_remoteDiskNameHasBeenSet = true;
    }

    if (value.HasMember("RemoteDiskState") && !value["RemoteDiskState"].IsNull())
    {
        if (!value["RemoteDiskState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteDiskDetail.RemoteDiskState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteDiskState = string(value["RemoteDiskState"].GetString());
        m_remoteDiskStateHasBeenSet = true;
    }

    if (value.HasMember("RemoteDiskType") && !value["RemoteDiskType"].IsNull())
    {
        if (!value["RemoteDiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteDiskDetail.RemoteDiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteDiskType = string(value["RemoteDiskType"].GetString());
        m_remoteDiskTypeHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteDiskDetail.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RemoteDiskDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_diskChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_remoteDiskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteDiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteDiskId.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteDiskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteDiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteDiskName.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteDiskStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteDiskState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteDiskState.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteDiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteDiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteDiskType.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

}


string RemoteDiskDetail::GetCreateTime() const
{
    return m_createTime;
}

void RemoteDiskDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RemoteDiskDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RemoteDiskDetail::GetDeadlineTime() const
{
    return m_deadlineTime;
}

void RemoteDiskDetail::SetDeadlineTime(const string& _deadlineTime)
{
    m_deadlineTime = _deadlineTime;
    m_deadlineTimeHasBeenSet = true;
}

bool RemoteDiskDetail::DeadlineTimeHasBeenSet() const
{
    return m_deadlineTimeHasBeenSet;
}

string RemoteDiskDetail::GetDiskChargeType() const
{
    return m_diskChargeType;
}

void RemoteDiskDetail::SetDiskChargeType(const string& _diskChargeType)
{
    m_diskChargeType = _diskChargeType;
    m_diskChargeTypeHasBeenSet = true;
}

bool RemoteDiskDetail::DiskChargeTypeHasBeenSet() const
{
    return m_diskChargeTypeHasBeenSet;
}

uint64_t RemoteDiskDetail::GetDiskSize() const
{
    return m_diskSize;
}

void RemoteDiskDetail::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool RemoteDiskDetail::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string RemoteDiskDetail::GetInstanceId() const
{
    return m_instanceId;
}

void RemoteDiskDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RemoteDiskDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

Placement RemoteDiskDetail::GetPlacement() const
{
    return m_placement;
}

void RemoteDiskDetail::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool RemoteDiskDetail::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string RemoteDiskDetail::GetRemoteDiskId() const
{
    return m_remoteDiskId;
}

void RemoteDiskDetail::SetRemoteDiskId(const string& _remoteDiskId)
{
    m_remoteDiskId = _remoteDiskId;
    m_remoteDiskIdHasBeenSet = true;
}

bool RemoteDiskDetail::RemoteDiskIdHasBeenSet() const
{
    return m_remoteDiskIdHasBeenSet;
}

string RemoteDiskDetail::GetRemoteDiskName() const
{
    return m_remoteDiskName;
}

void RemoteDiskDetail::SetRemoteDiskName(const string& _remoteDiskName)
{
    m_remoteDiskName = _remoteDiskName;
    m_remoteDiskNameHasBeenSet = true;
}

bool RemoteDiskDetail::RemoteDiskNameHasBeenSet() const
{
    return m_remoteDiskNameHasBeenSet;
}

string RemoteDiskDetail::GetRemoteDiskState() const
{
    return m_remoteDiskState;
}

void RemoteDiskDetail::SetRemoteDiskState(const string& _remoteDiskState)
{
    m_remoteDiskState = _remoteDiskState;
    m_remoteDiskStateHasBeenSet = true;
}

bool RemoteDiskDetail::RemoteDiskStateHasBeenSet() const
{
    return m_remoteDiskStateHasBeenSet;
}

string RemoteDiskDetail::GetRemoteDiskType() const
{
    return m_remoteDiskType;
}

void RemoteDiskDetail::SetRemoteDiskType(const string& _remoteDiskType)
{
    m_remoteDiskType = _remoteDiskType;
    m_remoteDiskTypeHasBeenSet = true;
}

bool RemoteDiskDetail::RemoteDiskTypeHasBeenSet() const
{
    return m_remoteDiskTypeHasBeenSet;
}

string RemoteDiskDetail::GetRenewFlag() const
{
    return m_renewFlag;
}

void RemoteDiskDetail::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool RemoteDiskDetail::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

