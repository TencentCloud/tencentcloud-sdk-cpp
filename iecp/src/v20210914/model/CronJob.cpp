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

#include <tencentcloud/iecp/v20210914/model/CronJob.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

CronJob::CronJob() :
    m_scheduleHasBeenSet(false),
    m_startingDeadlineSecondsHasBeenSet(false),
    m_concurrencyPolicyHasBeenSet(false),
    m_jobHasBeenSet(false)
{
}

CoreInternalOutcome CronJob::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Schedule") && !value["Schedule"].IsNull())
    {
        if (!value["Schedule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.Schedule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedule = string(value["Schedule"].GetString());
        m_scheduleHasBeenSet = true;
    }

    if (value.HasMember("StartingDeadlineSeconds") && !value["StartingDeadlineSeconds"].IsNull())
    {
        if (!value["StartingDeadlineSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.StartingDeadlineSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startingDeadlineSeconds = value["StartingDeadlineSeconds"].GetInt64();
        m_startingDeadlineSecondsHasBeenSet = true;
    }

    if (value.HasMember("ConcurrencyPolicy") && !value["ConcurrencyPolicy"].IsNull())
    {
        if (!value["ConcurrencyPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.ConcurrencyPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_concurrencyPolicy = string(value["ConcurrencyPolicy"].GetString());
        m_concurrencyPolicyHasBeenSet = true;
    }

    if (value.HasMember("Job") && !value["Job"].IsNull())
    {
        if (!value["Job"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.Job` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_job.Deserialize(value["Job"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jobHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CronJob::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schedule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedule.c_str(), allocator).Move(), allocator);
    }

    if (m_startingDeadlineSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartingDeadlineSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startingDeadlineSeconds, allocator);
    }

    if (m_concurrencyPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrencyPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_concurrencyPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_jobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Job";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_job.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CronJob::GetSchedule() const
{
    return m_schedule;
}

void CronJob::SetSchedule(const string& _schedule)
{
    m_schedule = _schedule;
    m_scheduleHasBeenSet = true;
}

bool CronJob::ScheduleHasBeenSet() const
{
    return m_scheduleHasBeenSet;
}

int64_t CronJob::GetStartingDeadlineSeconds() const
{
    return m_startingDeadlineSeconds;
}

void CronJob::SetStartingDeadlineSeconds(const int64_t& _startingDeadlineSeconds)
{
    m_startingDeadlineSeconds = _startingDeadlineSeconds;
    m_startingDeadlineSecondsHasBeenSet = true;
}

bool CronJob::StartingDeadlineSecondsHasBeenSet() const
{
    return m_startingDeadlineSecondsHasBeenSet;
}

string CronJob::GetConcurrencyPolicy() const
{
    return m_concurrencyPolicy;
}

void CronJob::SetConcurrencyPolicy(const string& _concurrencyPolicy)
{
    m_concurrencyPolicy = _concurrencyPolicy;
    m_concurrencyPolicyHasBeenSet = true;
}

bool CronJob::ConcurrencyPolicyHasBeenSet() const
{
    return m_concurrencyPolicyHasBeenSet;
}

Job CronJob::GetJob() const
{
    return m_job;
}

void CronJob::SetJob(const Job& _job)
{
    m_job = _job;
    m_jobHasBeenSet = true;
}

bool CronJob::JobHasBeenSet() const
{
    return m_jobHasBeenSet;
}

