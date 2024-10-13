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

#include <tencentcloud/dsgc/v20190723/model/ReportInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ReportInfo::ReportInfo() :
    m_idHasBeenSet(false),
    m_reportNameHasBeenSet(false),
    m_reportTypeHasBeenSet(false),
    m_reportPeriodHasBeenSet(false),
    m_reportPlanHasBeenSet(false),
    m_reportStatusHasBeenSet(false),
    m_timingStartTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_finishedTimeHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_failedMessageHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_complianceNameHasBeenSet(false),
    m_progressPercentHasBeenSet(false),
    m_reportTemplateNameHasBeenSet(false)
{
}

CoreInternalOutcome ReportInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ReportName") && !value["ReportName"].IsNull())
    {
        if (!value["ReportName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportInfo.ReportName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportName = string(value["ReportName"].GetString());
        m_reportNameHasBeenSet = true;
    }

    if (value.HasMember("ReportType") && !value["ReportType"].IsNull())
    {
        if (!value["ReportType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportInfo.ReportType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportType = string(value["ReportType"].GetString());
        m_reportTypeHasBeenSet = true;
    }

    if (value.HasMember("ReportPeriod") && !value["ReportPeriod"].IsNull())
    {
        if (!value["ReportPeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportInfo.ReportPeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reportPeriod = value["ReportPeriod"].GetUint64();
        m_reportPeriodHasBeenSet = true;
    }

    if (value.HasMember("ReportPlan") && !value["ReportPlan"].IsNull())
    {
        if (!value["ReportPlan"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportInfo.ReportPlan` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reportPlan = value["ReportPlan"].GetUint64();
        m_reportPlanHasBeenSet = true;
    }

    if (value.HasMember("ReportStatus") && !value["ReportStatus"].IsNull())
    {
        if (!value["ReportStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportInfo.ReportStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportStatus = string(value["ReportStatus"].GetString());
        m_reportStatusHasBeenSet = true;
    }

    if (value.HasMember("TimingStartTime") && !value["TimingStartTime"].IsNull())
    {
        if (!value["TimingStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportInfo.TimingStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timingStartTime = string(value["TimingStartTime"].GetString());
        m_timingStartTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishedTime") && !value["FinishedTime"].IsNull())
    {
        if (!value["FinishedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportInfo.FinishedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishedTime = string(value["FinishedTime"].GetString());
        m_finishedTimeHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportInfo.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("FailedMessage") && !value["FailedMessage"].IsNull())
    {
        if (!value["FailedMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportInfo.FailedMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedMessage = string(value["FailedMessage"].GetString());
        m_failedMessageHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportInfo.Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("ComplianceName") && !value["ComplianceName"].IsNull())
    {
        if (!value["ComplianceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportInfo.ComplianceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complianceName = string(value["ComplianceName"].GetString());
        m_complianceNameHasBeenSet = true;
    }

    if (value.HasMember("ProgressPercent") && !value["ProgressPercent"].IsNull())
    {
        if (!value["ProgressPercent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportInfo.ProgressPercent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progressPercent = value["ProgressPercent"].GetUint64();
        m_progressPercentHasBeenSet = true;
    }

    if (value.HasMember("ReportTemplateName") && !value["ReportTemplateName"].IsNull())
    {
        if (!value["ReportTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportInfo.ReportTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportTemplateName = string(value["ReportTemplateName"].GetString());
        m_reportTemplateNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReportInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_reportNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportName.c_str(), allocator).Move(), allocator);
    }

    if (m_reportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportType.c_str(), allocator).Move(), allocator);
    }

    if (m_reportPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportPeriod, allocator);
    }

    if (m_reportPlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportPlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportPlan, allocator);
    }

    if (m_reportStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_timingStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimingStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timingStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

    if (m_failedMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_complianceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_complianceName.c_str(), allocator).Move(), allocator);
    }

    if (m_progressPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgressPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progressPercent, allocator);
    }

    if (m_reportTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportTemplateName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ReportInfo::GetId() const
{
    return m_id;
}

void ReportInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ReportInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ReportInfo::GetReportName() const
{
    return m_reportName;
}

void ReportInfo::SetReportName(const string& _reportName)
{
    m_reportName = _reportName;
    m_reportNameHasBeenSet = true;
}

bool ReportInfo::ReportNameHasBeenSet() const
{
    return m_reportNameHasBeenSet;
}

string ReportInfo::GetReportType() const
{
    return m_reportType;
}

void ReportInfo::SetReportType(const string& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool ReportInfo::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}

uint64_t ReportInfo::GetReportPeriod() const
{
    return m_reportPeriod;
}

void ReportInfo::SetReportPeriod(const uint64_t& _reportPeriod)
{
    m_reportPeriod = _reportPeriod;
    m_reportPeriodHasBeenSet = true;
}

bool ReportInfo::ReportPeriodHasBeenSet() const
{
    return m_reportPeriodHasBeenSet;
}

uint64_t ReportInfo::GetReportPlan() const
{
    return m_reportPlan;
}

void ReportInfo::SetReportPlan(const uint64_t& _reportPlan)
{
    m_reportPlan = _reportPlan;
    m_reportPlanHasBeenSet = true;
}

bool ReportInfo::ReportPlanHasBeenSet() const
{
    return m_reportPlanHasBeenSet;
}

string ReportInfo::GetReportStatus() const
{
    return m_reportStatus;
}

void ReportInfo::SetReportStatus(const string& _reportStatus)
{
    m_reportStatus = _reportStatus;
    m_reportStatusHasBeenSet = true;
}

bool ReportInfo::ReportStatusHasBeenSet() const
{
    return m_reportStatusHasBeenSet;
}

string ReportInfo::GetTimingStartTime() const
{
    return m_timingStartTime;
}

void ReportInfo::SetTimingStartTime(const string& _timingStartTime)
{
    m_timingStartTime = _timingStartTime;
    m_timingStartTimeHasBeenSet = true;
}

bool ReportInfo::TimingStartTimeHasBeenSet() const
{
    return m_timingStartTimeHasBeenSet;
}

string ReportInfo::GetCreateTime() const
{
    return m_createTime;
}

void ReportInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ReportInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ReportInfo::GetFinishedTime() const
{
    return m_finishedTime;
}

void ReportInfo::SetFinishedTime(const string& _finishedTime)
{
    m_finishedTime = _finishedTime;
    m_finishedTimeHasBeenSet = true;
}

bool ReportInfo::FinishedTimeHasBeenSet() const
{
    return m_finishedTimeHasBeenSet;
}

string ReportInfo::GetSubUin() const
{
    return m_subUin;
}

void ReportInfo::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool ReportInfo::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string ReportInfo::GetFailedMessage() const
{
    return m_failedMessage;
}

void ReportInfo::SetFailedMessage(const string& _failedMessage)
{
    m_failedMessage = _failedMessage;
    m_failedMessageHasBeenSet = true;
}

bool ReportInfo::FailedMessageHasBeenSet() const
{
    return m_failedMessageHasBeenSet;
}

uint64_t ReportInfo::GetEnable() const
{
    return m_enable;
}

void ReportInfo::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ReportInfo::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string ReportInfo::GetComplianceName() const
{
    return m_complianceName;
}

void ReportInfo::SetComplianceName(const string& _complianceName)
{
    m_complianceName = _complianceName;
    m_complianceNameHasBeenSet = true;
}

bool ReportInfo::ComplianceNameHasBeenSet() const
{
    return m_complianceNameHasBeenSet;
}

uint64_t ReportInfo::GetProgressPercent() const
{
    return m_progressPercent;
}

void ReportInfo::SetProgressPercent(const uint64_t& _progressPercent)
{
    m_progressPercent = _progressPercent;
    m_progressPercentHasBeenSet = true;
}

bool ReportInfo::ProgressPercentHasBeenSet() const
{
    return m_progressPercentHasBeenSet;
}

string ReportInfo::GetReportTemplateName() const
{
    return m_reportTemplateName;
}

void ReportInfo::SetReportTemplateName(const string& _reportTemplateName)
{
    m_reportTemplateName = _reportTemplateName;
    m_reportTemplateNameHasBeenSet = true;
}

bool ReportInfo::ReportTemplateNameHasBeenSet() const
{
    return m_reportTemplateNameHasBeenSet;
}

