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

#include <tencentcloud/cls/v20201016/model/CLSDeliverTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CLSDeliverTaskInfo::CLSDeliverTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_sourceTopicConfigHasBeenSet(false),
    m_targetTopicConfigHasBeenSet(false),
    m_deliverRuleHasBeenSet(false),
    m_complianceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_hasServicesLogHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome CLSDeliverTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSDeliverTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSDeliverTaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CLSDeliverTaskInfo.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SourceTopicConfig") && !value["SourceTopicConfig"].IsNull())
    {
        if (!value["SourceTopicConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CLSDeliverTaskInfo.SourceTopicConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceTopicConfig.Deserialize(value["SourceTopicConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceTopicConfigHasBeenSet = true;
    }

    if (value.HasMember("TargetTopicConfig") && !value["TargetTopicConfig"].IsNull())
    {
        if (!value["TargetTopicConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CLSDeliverTaskInfo.TargetTopicConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetTopicConfig.Deserialize(value["TargetTopicConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetTopicConfigHasBeenSet = true;
    }

    if (value.HasMember("DeliverRule") && !value["DeliverRule"].IsNull())
    {
        if (!value["DeliverRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CLSDeliverTaskInfo.DeliverRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deliverRule.Deserialize(value["DeliverRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deliverRuleHasBeenSet = true;
    }

    if (value.HasMember("Compliance") && !value["Compliance"].IsNull())
    {
        if (!value["Compliance"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CLSDeliverTaskInfo.Compliance` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_compliance = value["Compliance"].GetUint64();
        m_complianceHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CLSDeliverTaskInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CLSDeliverTaskInfo.Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CLSDeliverTaskInfo.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("HasServicesLog") && !value["HasServicesLog"].IsNull())
    {
        if (!value["HasServicesLog"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CLSDeliverTaskInfo.HasServicesLog` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hasServicesLog = value["HasServicesLog"].GetUint64();
        m_hasServicesLogHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CLSDeliverTaskInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CLSDeliverTaskInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CLSDeliverTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_sourceTopicConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTopicConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceTopicConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_targetTopicConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTopicConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetTopicConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deliverRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deliverRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_complianceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compliance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compliance, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_hasServicesLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasServicesLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasServicesLog, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string CLSDeliverTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void CLSDeliverTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CLSDeliverTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CLSDeliverTaskInfo::GetTaskName() const
{
    return m_taskName;
}

void CLSDeliverTaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CLSDeliverTaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

uint64_t CLSDeliverTaskInfo::GetUin() const
{
    return m_uin;
}

void CLSDeliverTaskInfo::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool CLSDeliverTaskInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

SourceTopicConfig CLSDeliverTaskInfo::GetSourceTopicConfig() const
{
    return m_sourceTopicConfig;
}

void CLSDeliverTaskInfo::SetSourceTopicConfig(const SourceTopicConfig& _sourceTopicConfig)
{
    m_sourceTopicConfig = _sourceTopicConfig;
    m_sourceTopicConfigHasBeenSet = true;
}

bool CLSDeliverTaskInfo::SourceTopicConfigHasBeenSet() const
{
    return m_sourceTopicConfigHasBeenSet;
}

TargetTopicConfig CLSDeliverTaskInfo::GetTargetTopicConfig() const
{
    return m_targetTopicConfig;
}

void CLSDeliverTaskInfo::SetTargetTopicConfig(const TargetTopicConfig& _targetTopicConfig)
{
    m_targetTopicConfig = _targetTopicConfig;
    m_targetTopicConfigHasBeenSet = true;
}

bool CLSDeliverTaskInfo::TargetTopicConfigHasBeenSet() const
{
    return m_targetTopicConfigHasBeenSet;
}

DeliverRule CLSDeliverTaskInfo::GetDeliverRule() const
{
    return m_deliverRule;
}

void CLSDeliverTaskInfo::SetDeliverRule(const DeliverRule& _deliverRule)
{
    m_deliverRule = _deliverRule;
    m_deliverRuleHasBeenSet = true;
}

bool CLSDeliverTaskInfo::DeliverRuleHasBeenSet() const
{
    return m_deliverRuleHasBeenSet;
}

uint64_t CLSDeliverTaskInfo::GetCompliance() const
{
    return m_compliance;
}

void CLSDeliverTaskInfo::SetCompliance(const uint64_t& _compliance)
{
    m_compliance = _compliance;
    m_complianceHasBeenSet = true;
}

bool CLSDeliverTaskInfo::ComplianceHasBeenSet() const
{
    return m_complianceHasBeenSet;
}

uint64_t CLSDeliverTaskInfo::GetStatus() const
{
    return m_status;
}

void CLSDeliverTaskInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CLSDeliverTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t CLSDeliverTaskInfo::GetEnable() const
{
    return m_enable;
}

void CLSDeliverTaskInfo::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CLSDeliverTaskInfo::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t CLSDeliverTaskInfo::GetProgress() const
{
    return m_progress;
}

void CLSDeliverTaskInfo::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool CLSDeliverTaskInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

uint64_t CLSDeliverTaskInfo::GetHasServicesLog() const
{
    return m_hasServicesLog;
}

void CLSDeliverTaskInfo::SetHasServicesLog(const uint64_t& _hasServicesLog)
{
    m_hasServicesLog = _hasServicesLog;
    m_hasServicesLogHasBeenSet = true;
}

bool CLSDeliverTaskInfo::HasServicesLogHasBeenSet() const
{
    return m_hasServicesLogHasBeenSet;
}

uint64_t CLSDeliverTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void CLSDeliverTaskInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CLSDeliverTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t CLSDeliverTaskInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void CLSDeliverTaskInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CLSDeliverTaskInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

