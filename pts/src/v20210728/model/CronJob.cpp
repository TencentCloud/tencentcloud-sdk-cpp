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

#include <tencentcloud/pts/v20210728/model/CronJob.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

CronJob::CronJob() :
    m_cronJobIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_scenarioIdHasBeenSet(false),
    m_scenarioNameHasBeenSet(false),
    m_cronExpressionHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_abortReasonHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_noticeIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_frequencyTypeHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_jobOwnerHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false)
{
}

CoreInternalOutcome CronJob::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CronJobId") && !value["CronJobId"].IsNull())
    {
        if (!value["CronJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.CronJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronJobId = string(value["CronJobId"].GetString());
        m_cronJobIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ScenarioId") && !value["ScenarioId"].IsNull())
    {
        if (!value["ScenarioId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.ScenarioId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scenarioId = string(value["ScenarioId"].GetString());
        m_scenarioIdHasBeenSet = true;
    }

    if (value.HasMember("ScenarioName") && !value["ScenarioName"].IsNull())
    {
        if (!value["ScenarioName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.ScenarioName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scenarioName = string(value["ScenarioName"].GetString());
        m_scenarioNameHasBeenSet = true;
    }

    if (value.HasMember("CronExpression") && !value["CronExpression"].IsNull())
    {
        if (!value["CronExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.CronExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronExpression = string(value["CronExpression"].GetString());
        m_cronExpressionHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("AbortReason") && !value["AbortReason"].IsNull())
    {
        if (!value["AbortReason"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.AbortReason` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_abortReason = value["AbortReason"].GetInt64();
        m_abortReasonHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("NoticeId") && !value["NoticeId"].IsNull())
    {
        if (!value["NoticeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.NoticeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeId = string(value["NoticeId"].GetString());
        m_noticeIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("FrequencyType") && !value["FrequencyType"].IsNull())
    {
        if (!value["FrequencyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.FrequencyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frequencyType = value["FrequencyType"].GetInt64();
        m_frequencyTypeHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (value.HasMember("JobOwner") && !value["JobOwner"].IsNull())
    {
        if (!value["JobOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.JobOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobOwner = string(value["JobOwner"].GetString());
        m_jobOwnerHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CronJob::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cronJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cronJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_scenarioIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scenarioId.c_str(), allocator).Move(), allocator);
    }

    if (m_scenarioNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scenarioName.c_str(), allocator).Move(), allocator);
    }

    if (m_cronExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cronExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_abortReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbortReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abortReason, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_noticeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_frequencyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrequencyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frequencyType, allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_jobOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

}


string CronJob::GetCronJobId() const
{
    return m_cronJobId;
}

void CronJob::SetCronJobId(const string& _cronJobId)
{
    m_cronJobId = _cronJobId;
    m_cronJobIdHasBeenSet = true;
}

bool CronJob::CronJobIdHasBeenSet() const
{
    return m_cronJobIdHasBeenSet;
}

string CronJob::GetName() const
{
    return m_name;
}

void CronJob::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CronJob::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CronJob::GetProjectId() const
{
    return m_projectId;
}

void CronJob::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CronJob::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CronJob::GetScenarioId() const
{
    return m_scenarioId;
}

void CronJob::SetScenarioId(const string& _scenarioId)
{
    m_scenarioId = _scenarioId;
    m_scenarioIdHasBeenSet = true;
}

bool CronJob::ScenarioIdHasBeenSet() const
{
    return m_scenarioIdHasBeenSet;
}

string CronJob::GetScenarioName() const
{
    return m_scenarioName;
}

void CronJob::SetScenarioName(const string& _scenarioName)
{
    m_scenarioName = _scenarioName;
    m_scenarioNameHasBeenSet = true;
}

bool CronJob::ScenarioNameHasBeenSet() const
{
    return m_scenarioNameHasBeenSet;
}

string CronJob::GetCronExpression() const
{
    return m_cronExpression;
}

void CronJob::SetCronExpression(const string& _cronExpression)
{
    m_cronExpression = _cronExpression;
    m_cronExpressionHasBeenSet = true;
}

bool CronJob::CronExpressionHasBeenSet() const
{
    return m_cronExpressionHasBeenSet;
}

string CronJob::GetEndTime() const
{
    return m_endTime;
}

void CronJob::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CronJob::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t CronJob::GetAbortReason() const
{
    return m_abortReason;
}

void CronJob::SetAbortReason(const int64_t& _abortReason)
{
    m_abortReason = _abortReason;
    m_abortReasonHasBeenSet = true;
}

bool CronJob::AbortReasonHasBeenSet() const
{
    return m_abortReasonHasBeenSet;
}

int64_t CronJob::GetStatus() const
{
    return m_status;
}

void CronJob::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CronJob::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CronJob::GetNoticeId() const
{
    return m_noticeId;
}

void CronJob::SetNoticeId(const string& _noticeId)
{
    m_noticeId = _noticeId;
    m_noticeIdHasBeenSet = true;
}

bool CronJob::NoticeIdHasBeenSet() const
{
    return m_noticeIdHasBeenSet;
}

string CronJob::GetCreatedAt() const
{
    return m_createdAt;
}

void CronJob::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool CronJob::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string CronJob::GetUpdatedAt() const
{
    return m_updatedAt;
}

void CronJob::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool CronJob::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

int64_t CronJob::GetFrequencyType() const
{
    return m_frequencyType;
}

void CronJob::SetFrequencyType(const int64_t& _frequencyType)
{
    m_frequencyType = _frequencyType;
    m_frequencyTypeHasBeenSet = true;
}

bool CronJob::FrequencyTypeHasBeenSet() const
{
    return m_frequencyTypeHasBeenSet;
}

string CronJob::GetNote() const
{
    return m_note;
}

void CronJob::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool CronJob::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

string CronJob::GetJobOwner() const
{
    return m_jobOwner;
}

void CronJob::SetJobOwner(const string& _jobOwner)
{
    m_jobOwner = _jobOwner;
    m_jobOwnerHasBeenSet = true;
}

bool CronJob::JobOwnerHasBeenSet() const
{
    return m_jobOwnerHasBeenSet;
}

int64_t CronJob::GetAppId() const
{
    return m_appId;
}

void CronJob::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CronJob::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CronJob::GetUin() const
{
    return m_uin;
}

void CronJob::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool CronJob::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string CronJob::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void CronJob::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool CronJob::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

