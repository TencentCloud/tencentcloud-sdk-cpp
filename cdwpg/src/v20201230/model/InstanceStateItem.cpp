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

#include <tencentcloud/cdwpg/v20201230/model/InstanceStateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

InstanceStateItem::InstanceStateItem() :
    m_instanceIdHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_instanceStateDescHasBeenSet(false),
    m_backupStatusHasBeenSet(false),
    m_backupOpenStatusHasBeenSet(false),
    m_flowCreateTimeHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_flowProgressHasBeenSet(false),
    m_flowMsgHasBeenSet(false),
    m_processNameHasBeenSet(false)
{
}

CoreInternalOutcome InstanceStateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateItem.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("InstanceStateDesc") && !value["InstanceStateDesc"].IsNull())
    {
        if (!value["InstanceStateDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateItem.InstanceStateDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStateDesc = string(value["InstanceStateDesc"].GetString());
        m_instanceStateDescHasBeenSet = true;
    }

    if (value.HasMember("BackupStatus") && !value["BackupStatus"].IsNull())
    {
        if (!value["BackupStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateItem.BackupStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupStatus = value["BackupStatus"].GetInt64();
        m_backupStatusHasBeenSet = true;
    }

    if (value.HasMember("BackupOpenStatus") && !value["BackupOpenStatus"].IsNull())
    {
        if (!value["BackupOpenStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateItem.BackupOpenStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupOpenStatus = value["BackupOpenStatus"].GetInt64();
        m_backupOpenStatusHasBeenSet = true;
    }

    if (value.HasMember("FlowCreateTime") && !value["FlowCreateTime"].IsNull())
    {
        if (!value["FlowCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateItem.FlowCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowCreateTime = string(value["FlowCreateTime"].GetString());
        m_flowCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("FlowName") && !value["FlowName"].IsNull())
    {
        if (!value["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateItem.FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(value["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (value.HasMember("FlowProgress") && !value["FlowProgress"].IsNull())
    {
        if (!value["FlowProgress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateItem.FlowProgress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_flowProgress = value["FlowProgress"].GetDouble();
        m_flowProgressHasBeenSet = true;
    }

    if (value.HasMember("FlowMsg") && !value["FlowMsg"].IsNull())
    {
        if (!value["FlowMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateItem.FlowMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowMsg = string(value["FlowMsg"].GetString());
        m_flowMsgHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateItem.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceStateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStateDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStateDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStateDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_backupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupStatus, allocator);
    }

    if (m_backupOpenStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupOpenStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupOpenStatus, allocator);
    }

    if (m_flowCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowProgress, allocator);
    }

    if (m_flowMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

}


string InstanceStateItem::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceStateItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceStateItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceStateItem::GetInstanceState() const
{
    return m_instanceState;
}

void InstanceStateItem::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool InstanceStateItem::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string InstanceStateItem::GetInstanceStateDesc() const
{
    return m_instanceStateDesc;
}

void InstanceStateItem::SetInstanceStateDesc(const string& _instanceStateDesc)
{
    m_instanceStateDesc = _instanceStateDesc;
    m_instanceStateDescHasBeenSet = true;
}

bool InstanceStateItem::InstanceStateDescHasBeenSet() const
{
    return m_instanceStateDescHasBeenSet;
}

int64_t InstanceStateItem::GetBackupStatus() const
{
    return m_backupStatus;
}

void InstanceStateItem::SetBackupStatus(const int64_t& _backupStatus)
{
    m_backupStatus = _backupStatus;
    m_backupStatusHasBeenSet = true;
}

bool InstanceStateItem::BackupStatusHasBeenSet() const
{
    return m_backupStatusHasBeenSet;
}

int64_t InstanceStateItem::GetBackupOpenStatus() const
{
    return m_backupOpenStatus;
}

void InstanceStateItem::SetBackupOpenStatus(const int64_t& _backupOpenStatus)
{
    m_backupOpenStatus = _backupOpenStatus;
    m_backupOpenStatusHasBeenSet = true;
}

bool InstanceStateItem::BackupOpenStatusHasBeenSet() const
{
    return m_backupOpenStatusHasBeenSet;
}

string InstanceStateItem::GetFlowCreateTime() const
{
    return m_flowCreateTime;
}

void InstanceStateItem::SetFlowCreateTime(const string& _flowCreateTime)
{
    m_flowCreateTime = _flowCreateTime;
    m_flowCreateTimeHasBeenSet = true;
}

bool InstanceStateItem::FlowCreateTimeHasBeenSet() const
{
    return m_flowCreateTimeHasBeenSet;
}

string InstanceStateItem::GetFlowName() const
{
    return m_flowName;
}

void InstanceStateItem::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool InstanceStateItem::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

double InstanceStateItem::GetFlowProgress() const
{
    return m_flowProgress;
}

void InstanceStateItem::SetFlowProgress(const double& _flowProgress)
{
    m_flowProgress = _flowProgress;
    m_flowProgressHasBeenSet = true;
}

bool InstanceStateItem::FlowProgressHasBeenSet() const
{
    return m_flowProgressHasBeenSet;
}

string InstanceStateItem::GetFlowMsg() const
{
    return m_flowMsg;
}

void InstanceStateItem::SetFlowMsg(const string& _flowMsg)
{
    m_flowMsg = _flowMsg;
    m_flowMsgHasBeenSet = true;
}

bool InstanceStateItem::FlowMsgHasBeenSet() const
{
    return m_flowMsgHasBeenSet;
}

string InstanceStateItem::GetProcessName() const
{
    return m_processName;
}

void InstanceStateItem::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool InstanceStateItem::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

