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

#include <tencentcloud/emr/v20190103/model/SchedulerTaskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

SchedulerTaskDetail::SchedulerTaskDetail() :
    m_stepHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_jobIdHasBeenSet(false)
{
}

CoreInternalOutcome SchedulerTaskDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Step") && !value["Step"].IsNull())
    {
        if (!value["Step"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulerTaskDetail.Step` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_step = string(value["Step"].GetString());
        m_stepHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulerTaskDetail.Progress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_progress = string(value["Progress"].GetString());
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulerTaskDetail.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulerTaskDetail.JobId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = value["JobId"].GetUint64();
        m_jobIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchedulerTaskDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Step";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_step.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_progress.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobId, allocator);
    }

}


string SchedulerTaskDetail::GetStep() const
{
    return m_step;
}

void SchedulerTaskDetail::SetStep(const string& _step)
{
    m_step = _step;
    m_stepHasBeenSet = true;
}

bool SchedulerTaskDetail::StepHasBeenSet() const
{
    return m_stepHasBeenSet;
}

string SchedulerTaskDetail::GetProgress() const
{
    return m_progress;
}

void SchedulerTaskDetail::SetProgress(const string& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool SchedulerTaskDetail::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string SchedulerTaskDetail::GetFailReason() const
{
    return m_failReason;
}

void SchedulerTaskDetail::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool SchedulerTaskDetail::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

uint64_t SchedulerTaskDetail::GetJobId() const
{
    return m_jobId;
}

void SchedulerTaskDetail::SetJobId(const uint64_t& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool SchedulerTaskDetail::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

