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

#include <tencentcloud/dts/v20211206/model/DescribeMigrationDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DescribeMigrationDetailResponse::DescribeMigrationDetailResponse() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_briefMsgHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_stepInfoHasBeenSet(false),
    m_srcInfoHasBeenSet(false),
    m_dstInfoHasBeenSet(false),
    m_compareTaskHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_runModeHasBeenSet(false),
    m_expectRunTimeHasBeenSet(false),
    m_migrateOptionHasBeenSet(false),
    m_checkStepInfoHasBeenSet(false),
    m_tradeInfoHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_dumperResumeCtrlHasBeenSet(false),
    m_rateLimitOptionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMigrationDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("JobId") && !rsp["JobId"].IsNull())
    {
        if (!rsp["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(rsp["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (rsp.HasMember("JobName") && !rsp["JobName"].IsNull())
    {
        if (!rsp["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(rsp["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BriefMsg") && !rsp["BriefMsg"].IsNull())
    {
        if (!rsp["BriefMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BriefMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_briefMsg = string(rsp["BriefMsg"].GetString());
        m_briefMsgHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Action") && !rsp["Action"].IsNull())
    {
        if (!rsp["Action"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Action` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_action.Deserialize(rsp["Action"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_actionHasBeenSet = true;
    }

    if (rsp.HasMember("StepInfo") && !rsp["StepInfo"].IsNull())
    {
        if (!rsp["StepInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StepInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_stepInfo.Deserialize(rsp["StepInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_stepInfoHasBeenSet = true;
    }

    if (rsp.HasMember("SrcInfo") && !rsp["SrcInfo"].IsNull())
    {
        if (!rsp["SrcInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_srcInfo.Deserialize(rsp["SrcInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_srcInfoHasBeenSet = true;
    }

    if (rsp.HasMember("DstInfo") && !rsp["DstInfo"].IsNull())
    {
        if (!rsp["DstInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DstInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dstInfo.Deserialize(rsp["DstInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dstInfoHasBeenSet = true;
    }

    if (rsp.HasMember("CompareTask") && !rsp["CompareTask"].IsNull())
    {
        if (!rsp["CompareTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_compareTask.Deserialize(rsp["CompareTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_compareTaskHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("RunMode") && !rsp["RunMode"].IsNull())
    {
        if (!rsp["RunMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runMode = string(rsp["RunMode"].GetString());
        m_runModeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpectRunTime") && !rsp["ExpectRunTime"].IsNull())
    {
        if (!rsp["ExpectRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpectRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expectRunTime = string(rsp["ExpectRunTime"].GetString());
        m_expectRunTimeHasBeenSet = true;
    }

    if (rsp.HasMember("MigrateOption") && !rsp["MigrateOption"].IsNull())
    {
        if (!rsp["MigrateOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_migrateOption.Deserialize(rsp["MigrateOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_migrateOptionHasBeenSet = true;
    }

    if (rsp.HasMember("CheckStepInfo") && !rsp["CheckStepInfo"].IsNull())
    {
        if (!rsp["CheckStepInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CheckStepInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_checkStepInfo.Deserialize(rsp["CheckStepInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_checkStepInfoHasBeenSet = true;
    }

    if (rsp.HasMember("TradeInfo") && !rsp["TradeInfo"].IsNull())
    {
        if (!rsp["TradeInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TradeInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tradeInfo.Deserialize(rsp["TradeInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tradeInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorInfo") && !rsp["ErrorInfo"].IsNull())
    {
        if (!rsp["ErrorInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ErrorInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ErrorInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ErrorInfoItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_errorInfo.push_back(item);
        }
        m_errorInfoHasBeenSet = true;
    }

    if (rsp.HasMember("DumperResumeCtrl") && !rsp["DumperResumeCtrl"].IsNull())
    {
        if (!rsp["DumperResumeCtrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DumperResumeCtrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dumperResumeCtrl = string(rsp["DumperResumeCtrl"].GetString());
        m_dumperResumeCtrlHasBeenSet = true;
    }

    if (rsp.HasMember("RateLimitOption") && !rsp["RateLimitOption"].IsNull())
    {
        if (!rsp["RateLimitOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rateLimitOption.Deserialize(rsp["RateLimitOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rateLimitOptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMigrationDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_briefMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BriefMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_briefMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_action.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stepInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stepInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_srcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_srcInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dstInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compareTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compareTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_runModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runMode.c_str(), allocator).Move(), allocator);
    }

    if (m_expectRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectRunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expectRunTime.c_str(), allocator).Move(), allocator);
    }

    if (m_migrateOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_migrateOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_checkStepInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStepInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_checkStepInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tradeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tradeInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_errorInfo.begin(); itr != m_errorInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dumperResumeCtrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DumperResumeCtrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dumperResumeCtrl.c_str(), allocator).Move(), allocator);
    }

    if (m_rateLimitOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rateLimitOption.ToJsonObject(value[key.c_str()], allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeMigrationDetailResponse::GetJobId() const
{
    return m_jobId;
}

bool DescribeMigrationDetailResponse::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeMigrationDetailResponse::GetJobName() const
{
    return m_jobName;
}

bool DescribeMigrationDetailResponse::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string DescribeMigrationDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeMigrationDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeMigrationDetailResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeMigrationDetailResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeMigrationDetailResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeMigrationDetailResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeMigrationDetailResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeMigrationDetailResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeMigrationDetailResponse::GetBriefMsg() const
{
    return m_briefMsg;
}

bool DescribeMigrationDetailResponse::BriefMsgHasBeenSet() const
{
    return m_briefMsgHasBeenSet;
}

string DescribeMigrationDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeMigrationDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

MigrateAction DescribeMigrationDetailResponse::GetAction() const
{
    return m_action;
}

bool DescribeMigrationDetailResponse::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

MigrateDetailInfo DescribeMigrationDetailResponse::GetStepInfo() const
{
    return m_stepInfo;
}

bool DescribeMigrationDetailResponse::StepInfoHasBeenSet() const
{
    return m_stepInfoHasBeenSet;
}

DBEndpointInfo DescribeMigrationDetailResponse::GetSrcInfo() const
{
    return m_srcInfo;
}

bool DescribeMigrationDetailResponse::SrcInfoHasBeenSet() const
{
    return m_srcInfoHasBeenSet;
}

DBEndpointInfo DescribeMigrationDetailResponse::GetDstInfo() const
{
    return m_dstInfo;
}

bool DescribeMigrationDetailResponse::DstInfoHasBeenSet() const
{
    return m_dstInfoHasBeenSet;
}

CompareTaskInfo DescribeMigrationDetailResponse::GetCompareTask() const
{
    return m_compareTask;
}

bool DescribeMigrationDetailResponse::CompareTaskHasBeenSet() const
{
    return m_compareTaskHasBeenSet;
}

vector<TagItem> DescribeMigrationDetailResponse::GetTags() const
{
    return m_tags;
}

bool DescribeMigrationDetailResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DescribeMigrationDetailResponse::GetRunMode() const
{
    return m_runMode;
}

bool DescribeMigrationDetailResponse::RunModeHasBeenSet() const
{
    return m_runModeHasBeenSet;
}

string DescribeMigrationDetailResponse::GetExpectRunTime() const
{
    return m_expectRunTime;
}

bool DescribeMigrationDetailResponse::ExpectRunTimeHasBeenSet() const
{
    return m_expectRunTimeHasBeenSet;
}

MigrateOption DescribeMigrationDetailResponse::GetMigrateOption() const
{
    return m_migrateOption;
}

bool DescribeMigrationDetailResponse::MigrateOptionHasBeenSet() const
{
    return m_migrateOptionHasBeenSet;
}

CheckStepInfo DescribeMigrationDetailResponse::GetCheckStepInfo() const
{
    return m_checkStepInfo;
}

bool DescribeMigrationDetailResponse::CheckStepInfoHasBeenSet() const
{
    return m_checkStepInfoHasBeenSet;
}

TradeInfo DescribeMigrationDetailResponse::GetTradeInfo() const
{
    return m_tradeInfo;
}

bool DescribeMigrationDetailResponse::TradeInfoHasBeenSet() const
{
    return m_tradeInfoHasBeenSet;
}

vector<ErrorInfoItem> DescribeMigrationDetailResponse::GetErrorInfo() const
{
    return m_errorInfo;
}

bool DescribeMigrationDetailResponse::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}

string DescribeMigrationDetailResponse::GetDumperResumeCtrl() const
{
    return m_dumperResumeCtrl;
}

bool DescribeMigrationDetailResponse::DumperResumeCtrlHasBeenSet() const
{
    return m_dumperResumeCtrlHasBeenSet;
}

RateLimitOption DescribeMigrationDetailResponse::GetRateLimitOption() const
{
    return m_rateLimitOption;
}

bool DescribeMigrationDetailResponse::RateLimitOptionHasBeenSet() const
{
    return m_rateLimitOptionHasBeenSet;
}


