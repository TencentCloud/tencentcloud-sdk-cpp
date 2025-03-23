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

#include <tencentcloud/emr/v20190103/model/CBSInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

CBSInstance::CBSInstance() :
    m_diskIdHasBeenSet(false),
    m_diskUsageHasBeenSet(false),
    m_diskNameHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_deleteWithInstanceHasBeenSet(false),
    m_diskChargeTypeHasBeenSet(false),
    m_diskStateHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_deadlineTimeHasBeenSet(false),
    m_attachedHasBeenSet(false),
    m_differDaysOfDeadlineHasBeenSet(false),
    m_instanceIdListHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_shareableHasBeenSet(false),
    m_emrResourceIdHasBeenSet(false)
{
}

CoreInternalOutcome CBSInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskId") && !value["DiskId"].IsNull())
    {
        if (!value["DiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CBSInstance.DiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskId = string(value["DiskId"].GetString());
        m_diskIdHasBeenSet = true;
    }

    if (value.HasMember("DiskUsage") && !value["DiskUsage"].IsNull())
    {
        if (!value["DiskUsage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CBSInstance.DiskUsage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskUsage = string(value["DiskUsage"].GetString());
        m_diskUsageHasBeenSet = true;
    }

    if (value.HasMember("DiskName") && !value["DiskName"].IsNull())
    {
        if (!value["DiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CBSInstance.DiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskName = string(value["DiskName"].GetString());
        m_diskNameHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CBSInstance.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CBSInstance.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DeleteWithInstance") && !value["DeleteWithInstance"].IsNull())
    {
        if (!value["DeleteWithInstance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CBSInstance.DeleteWithInstance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteWithInstance = value["DeleteWithInstance"].GetBool();
        m_deleteWithInstanceHasBeenSet = true;
    }

    if (value.HasMember("DiskChargeType") && !value["DiskChargeType"].IsNull())
    {
        if (!value["DiskChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CBSInstance.DiskChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskChargeType = string(value["DiskChargeType"].GetString());
        m_diskChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskState") && !value["DiskState"].IsNull())
    {
        if (!value["DiskState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CBSInstance.DiskState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskState = string(value["DiskState"].GetString());
        m_diskStateHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CBSInstance.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("DeadlineTime") && !value["DeadlineTime"].IsNull())
    {
        if (!value["DeadlineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CBSInstance.DeadlineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadlineTime = string(value["DeadlineTime"].GetString());
        m_deadlineTimeHasBeenSet = true;
    }

    if (value.HasMember("Attached") && !value["Attached"].IsNull())
    {
        if (!value["Attached"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CBSInstance.Attached` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_attached = value["Attached"].GetBool();
        m_attachedHasBeenSet = true;
    }

    if (value.HasMember("DifferDaysOfDeadline") && !value["DifferDaysOfDeadline"].IsNull())
    {
        if (!value["DifferDaysOfDeadline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CBSInstance.DifferDaysOfDeadline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_differDaysOfDeadline = value["DifferDaysOfDeadline"].GetInt64();
        m_differDaysOfDeadlineHasBeenSet = true;
    }

    if (value.HasMember("InstanceIdList") && !value["InstanceIdList"].IsNull())
    {
        if (!value["InstanceIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CBSInstance.InstanceIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIdList.push_back((*itr).GetString());
        }
        m_instanceIdListHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CBSInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Shareable") && !value["Shareable"].IsNull())
    {
        if (!value["Shareable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CBSInstance.Shareable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_shareable = value["Shareable"].GetBool();
        m_shareableHasBeenSet = true;
    }

    if (value.HasMember("EmrResourceId") && !value["EmrResourceId"].IsNull())
    {
        if (!value["EmrResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CBSInstance.EmrResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emrResourceId = string(value["EmrResourceId"].GetString());
        m_emrResourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CBSInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_diskUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_diskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskName.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteWithInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteWithInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteWithInstance, allocator);
    }

    if (m_diskChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskState.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attached";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attached, allocator);
    }

    if (m_differDaysOfDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DifferDaysOfDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_differDaysOfDeadline, allocator);
    }

    if (m_instanceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdList.begin(); itr != m_instanceIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_shareableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Shareable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareable, allocator);
    }

    if (m_emrResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmrResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_emrResourceId.c_str(), allocator).Move(), allocator);
    }

}


string CBSInstance::GetDiskId() const
{
    return m_diskId;
}

void CBSInstance::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool CBSInstance::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

string CBSInstance::GetDiskUsage() const
{
    return m_diskUsage;
}

void CBSInstance::SetDiskUsage(const string& _diskUsage)
{
    m_diskUsage = _diskUsage;
    m_diskUsageHasBeenSet = true;
}

bool CBSInstance::DiskUsageHasBeenSet() const
{
    return m_diskUsageHasBeenSet;
}

string CBSInstance::GetDiskName() const
{
    return m_diskName;
}

void CBSInstance::SetDiskName(const string& _diskName)
{
    m_diskName = _diskName;
    m_diskNameHasBeenSet = true;
}

bool CBSInstance::DiskNameHasBeenSet() const
{
    return m_diskNameHasBeenSet;
}

int64_t CBSInstance::GetDiskSize() const
{
    return m_diskSize;
}

void CBSInstance::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool CBSInstance::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string CBSInstance::GetDiskType() const
{
    return m_diskType;
}

void CBSInstance::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool CBSInstance::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

bool CBSInstance::GetDeleteWithInstance() const
{
    return m_deleteWithInstance;
}

void CBSInstance::SetDeleteWithInstance(const bool& _deleteWithInstance)
{
    m_deleteWithInstance = _deleteWithInstance;
    m_deleteWithInstanceHasBeenSet = true;
}

bool CBSInstance::DeleteWithInstanceHasBeenSet() const
{
    return m_deleteWithInstanceHasBeenSet;
}

string CBSInstance::GetDiskChargeType() const
{
    return m_diskChargeType;
}

void CBSInstance::SetDiskChargeType(const string& _diskChargeType)
{
    m_diskChargeType = _diskChargeType;
    m_diskChargeTypeHasBeenSet = true;
}

bool CBSInstance::DiskChargeTypeHasBeenSet() const
{
    return m_diskChargeTypeHasBeenSet;
}

string CBSInstance::GetDiskState() const
{
    return m_diskState;
}

void CBSInstance::SetDiskState(const string& _diskState)
{
    m_diskState = _diskState;
    m_diskStateHasBeenSet = true;
}

bool CBSInstance::DiskStateHasBeenSet() const
{
    return m_diskStateHasBeenSet;
}

string CBSInstance::GetRenewFlag() const
{
    return m_renewFlag;
}

void CBSInstance::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool CBSInstance::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string CBSInstance::GetDeadlineTime() const
{
    return m_deadlineTime;
}

void CBSInstance::SetDeadlineTime(const string& _deadlineTime)
{
    m_deadlineTime = _deadlineTime;
    m_deadlineTimeHasBeenSet = true;
}

bool CBSInstance::DeadlineTimeHasBeenSet() const
{
    return m_deadlineTimeHasBeenSet;
}

bool CBSInstance::GetAttached() const
{
    return m_attached;
}

void CBSInstance::SetAttached(const bool& _attached)
{
    m_attached = _attached;
    m_attachedHasBeenSet = true;
}

bool CBSInstance::AttachedHasBeenSet() const
{
    return m_attachedHasBeenSet;
}

int64_t CBSInstance::GetDifferDaysOfDeadline() const
{
    return m_differDaysOfDeadline;
}

void CBSInstance::SetDifferDaysOfDeadline(const int64_t& _differDaysOfDeadline)
{
    m_differDaysOfDeadline = _differDaysOfDeadline;
    m_differDaysOfDeadlineHasBeenSet = true;
}

bool CBSInstance::DifferDaysOfDeadlineHasBeenSet() const
{
    return m_differDaysOfDeadlineHasBeenSet;
}

vector<string> CBSInstance::GetInstanceIdList() const
{
    return m_instanceIdList;
}

void CBSInstance::SetInstanceIdList(const vector<string>& _instanceIdList)
{
    m_instanceIdList = _instanceIdList;
    m_instanceIdListHasBeenSet = true;
}

bool CBSInstance::InstanceIdListHasBeenSet() const
{
    return m_instanceIdListHasBeenSet;
}

string CBSInstance::GetInstanceId() const
{
    return m_instanceId;
}

void CBSInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CBSInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool CBSInstance::GetShareable() const
{
    return m_shareable;
}

void CBSInstance::SetShareable(const bool& _shareable)
{
    m_shareable = _shareable;
    m_shareableHasBeenSet = true;
}

bool CBSInstance::ShareableHasBeenSet() const
{
    return m_shareableHasBeenSet;
}

string CBSInstance::GetEmrResourceId() const
{
    return m_emrResourceId;
}

void CBSInstance::SetEmrResourceId(const string& _emrResourceId)
{
    m_emrResourceId = _emrResourceId;
    m_emrResourceIdHasBeenSet = true;
}

bool CBSInstance::EmrResourceIdHasBeenSet() const
{
    return m_emrResourceIdHasBeenSet;
}

