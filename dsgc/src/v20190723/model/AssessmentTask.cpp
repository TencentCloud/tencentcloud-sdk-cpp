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

#include <tencentcloud/dsgc/v20190723/model/AssessmentTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

AssessmentTask::AssessmentTask() :
    m_taskIdHasBeenSet(false),
    m_taskUidHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_businessNameHasBeenSet(false),
    m_businessDeptHasBeenSet(false),
    m_businessOwnerHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_complianceGroupIdHasBeenSet(false),
    m_complianceGroupNameHasBeenSet(false),
    m_controlItemCountHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_finishedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_riskCountInfoListHasBeenSet(false),
    m_discoveryConditionHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_templateUidHasBeenSet(false),
    m_progressPercentHasBeenSet(false)
{
}

CoreInternalOutcome AssessmentTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskUid") && !value["TaskUid"].IsNull())
    {
        if (!value["TaskUid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.TaskUid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskUid = value["TaskUid"].GetInt64();
        m_taskUidHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("BusinessName") && !value["BusinessName"].IsNull())
    {
        if (!value["BusinessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.BusinessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessName = string(value["BusinessName"].GetString());
        m_businessNameHasBeenSet = true;
    }

    if (value.HasMember("BusinessDept") && !value["BusinessDept"].IsNull())
    {
        if (!value["BusinessDept"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.BusinessDept` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessDept = string(value["BusinessDept"].GetString());
        m_businessDeptHasBeenSet = true;
    }

    if (value.HasMember("BusinessOwner") && !value["BusinessOwner"].IsNull())
    {
        if (!value["BusinessOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.BusinessOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessOwner = string(value["BusinessOwner"].GetString());
        m_businessOwnerHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("ComplianceGroupId") && !value["ComplianceGroupId"].IsNull())
    {
        if (!value["ComplianceGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.ComplianceGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_complianceGroupId = value["ComplianceGroupId"].GetInt64();
        m_complianceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ComplianceGroupName") && !value["ComplianceGroupName"].IsNull())
    {
        if (!value["ComplianceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.ComplianceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complianceGroupName = string(value["ComplianceGroupName"].GetString());
        m_complianceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ControlItemCount") && !value["ControlItemCount"].IsNull())
    {
        if (!value["ControlItemCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.ControlItemCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_controlItemCount = value["ControlItemCount"].GetInt64();
        m_controlItemCountHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.RiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetInt64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("FinishedTime") && !value["FinishedTime"].IsNull())
    {
        if (!value["FinishedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.FinishedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishedTime = string(value["FinishedTime"].GetString());
        m_finishedTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RiskCountInfoList") && !value["RiskCountInfoList"].IsNull())
    {
        if (!value["RiskCountInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.RiskCountInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskCountInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskCountInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskCountInfoList.push_back(item);
        }
        m_riskCountInfoListHasBeenSet = true;
    }

    if (value.HasMember("DiscoveryCondition") && !value["DiscoveryCondition"].IsNull())
    {
        if (!value["DiscoveryCondition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.DiscoveryCondition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_discoveryCondition.Deserialize(value["DiscoveryCondition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_discoveryConditionHasBeenSet = true;
    }

    if (value.HasMember("ErrorInfo") && !value["ErrorInfo"].IsNull())
    {
        if (!value["ErrorInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.ErrorInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorInfo = string(value["ErrorInfo"].GetString());
        m_errorInfoHasBeenSet = true;
    }

    if (value.HasMember("TemplateUid") && !value["TemplateUid"].IsNull())
    {
        if (!value["TemplateUid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.TemplateUid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateUid = value["TemplateUid"].GetInt64();
        m_templateUidHasBeenSet = true;
    }

    if (value.HasMember("ProgressPercent") && !value["ProgressPercent"].IsNull())
    {
        if (!value["ProgressPercent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTask.ProgressPercent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progressPercent = value["ProgressPercent"].GetInt64();
        m_progressPercentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssessmentTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskUid, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_businessNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessName.c_str(), allocator).Move(), allocator);
    }

    if (m_businessDeptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessDept";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessDept.c_str(), allocator).Move(), allocator);
    }

    if (m_businessOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_complianceGroupId, allocator);
    }

    if (m_complianceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_complianceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_controlItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ControlItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_controlItemCount, allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

    if (m_finishedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_riskCountInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCountInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskCountInfoList.begin(); itr != m_riskCountInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_discoveryConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscoveryCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_discoveryCondition.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_templateUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateUid, allocator);
    }

    if (m_progressPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgressPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progressPercent, allocator);
    }

}


string AssessmentTask::GetTaskId() const
{
    return m_taskId;
}

void AssessmentTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AssessmentTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t AssessmentTask::GetTaskUid() const
{
    return m_taskUid;
}

void AssessmentTask::SetTaskUid(const int64_t& _taskUid)
{
    m_taskUid = _taskUid;
    m_taskUidHasBeenSet = true;
}

bool AssessmentTask::TaskUidHasBeenSet() const
{
    return m_taskUidHasBeenSet;
}

string AssessmentTask::GetTaskName() const
{
    return m_taskName;
}

void AssessmentTask::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool AssessmentTask::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string AssessmentTask::GetBusinessName() const
{
    return m_businessName;
}

void AssessmentTask::SetBusinessName(const string& _businessName)
{
    m_businessName = _businessName;
    m_businessNameHasBeenSet = true;
}

bool AssessmentTask::BusinessNameHasBeenSet() const
{
    return m_businessNameHasBeenSet;
}

string AssessmentTask::GetBusinessDept() const
{
    return m_businessDept;
}

void AssessmentTask::SetBusinessDept(const string& _businessDept)
{
    m_businessDept = _businessDept;
    m_businessDeptHasBeenSet = true;
}

bool AssessmentTask::BusinessDeptHasBeenSet() const
{
    return m_businessDeptHasBeenSet;
}

string AssessmentTask::GetBusinessOwner() const
{
    return m_businessOwner;
}

void AssessmentTask::SetBusinessOwner(const string& _businessOwner)
{
    m_businessOwner = _businessOwner;
    m_businessOwnerHasBeenSet = true;
}

bool AssessmentTask::BusinessOwnerHasBeenSet() const
{
    return m_businessOwnerHasBeenSet;
}

string AssessmentTask::GetTemplateId() const
{
    return m_templateId;
}

void AssessmentTask::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool AssessmentTask::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string AssessmentTask::GetTemplateName() const
{
    return m_templateName;
}

void AssessmentTask::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool AssessmentTask::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

int64_t AssessmentTask::GetComplianceGroupId() const
{
    return m_complianceGroupId;
}

void AssessmentTask::SetComplianceGroupId(const int64_t& _complianceGroupId)
{
    m_complianceGroupId = _complianceGroupId;
    m_complianceGroupIdHasBeenSet = true;
}

bool AssessmentTask::ComplianceGroupIdHasBeenSet() const
{
    return m_complianceGroupIdHasBeenSet;
}

string AssessmentTask::GetComplianceGroupName() const
{
    return m_complianceGroupName;
}

void AssessmentTask::SetComplianceGroupName(const string& _complianceGroupName)
{
    m_complianceGroupName = _complianceGroupName;
    m_complianceGroupNameHasBeenSet = true;
}

bool AssessmentTask::ComplianceGroupNameHasBeenSet() const
{
    return m_complianceGroupNameHasBeenSet;
}

int64_t AssessmentTask::GetControlItemCount() const
{
    return m_controlItemCount;
}

void AssessmentTask::SetControlItemCount(const int64_t& _controlItemCount)
{
    m_controlItemCount = _controlItemCount;
    m_controlItemCountHasBeenSet = true;
}

bool AssessmentTask::ControlItemCountHasBeenSet() const
{
    return m_controlItemCountHasBeenSet;
}

int64_t AssessmentTask::GetRiskCount() const
{
    return m_riskCount;
}

void AssessmentTask::SetRiskCount(const int64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool AssessmentTask::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

string AssessmentTask::GetFinishedTime() const
{
    return m_finishedTime;
}

void AssessmentTask::SetFinishedTime(const string& _finishedTime)
{
    m_finishedTime = _finishedTime;
    m_finishedTimeHasBeenSet = true;
}

bool AssessmentTask::FinishedTimeHasBeenSet() const
{
    return m_finishedTimeHasBeenSet;
}

string AssessmentTask::GetCreatedTime() const
{
    return m_createdTime;
}

void AssessmentTask::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool AssessmentTask::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string AssessmentTask::GetStatus() const
{
    return m_status;
}

void AssessmentTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssessmentTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<RiskCountInfo> AssessmentTask::GetRiskCountInfoList() const
{
    return m_riskCountInfoList;
}

void AssessmentTask::SetRiskCountInfoList(const vector<RiskCountInfo>& _riskCountInfoList)
{
    m_riskCountInfoList = _riskCountInfoList;
    m_riskCountInfoListHasBeenSet = true;
}

bool AssessmentTask::RiskCountInfoListHasBeenSet() const
{
    return m_riskCountInfoListHasBeenSet;
}

DiscoveryCondition AssessmentTask::GetDiscoveryCondition() const
{
    return m_discoveryCondition;
}

void AssessmentTask::SetDiscoveryCondition(const DiscoveryCondition& _discoveryCondition)
{
    m_discoveryCondition = _discoveryCondition;
    m_discoveryConditionHasBeenSet = true;
}

bool AssessmentTask::DiscoveryConditionHasBeenSet() const
{
    return m_discoveryConditionHasBeenSet;
}

string AssessmentTask::GetErrorInfo() const
{
    return m_errorInfo;
}

void AssessmentTask::SetErrorInfo(const string& _errorInfo)
{
    m_errorInfo = _errorInfo;
    m_errorInfoHasBeenSet = true;
}

bool AssessmentTask::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}

int64_t AssessmentTask::GetTemplateUid() const
{
    return m_templateUid;
}

void AssessmentTask::SetTemplateUid(const int64_t& _templateUid)
{
    m_templateUid = _templateUid;
    m_templateUidHasBeenSet = true;
}

bool AssessmentTask::TemplateUidHasBeenSet() const
{
    return m_templateUidHasBeenSet;
}

int64_t AssessmentTask::GetProgressPercent() const
{
    return m_progressPercent;
}

void AssessmentTask::SetProgressPercent(const int64_t& _progressPercent)
{
    m_progressPercent = _progressPercent;
    m_progressPercentHasBeenSet = true;
}

bool AssessmentTask::ProgressPercentHasBeenSet() const
{
    return m_progressPercentHasBeenSet;
}

