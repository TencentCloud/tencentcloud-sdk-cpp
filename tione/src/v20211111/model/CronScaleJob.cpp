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

#include <tencentcloud/tione/v20211111/model/CronScaleJob.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

CronScaleJob::CronScaleJob() :
    m_scheduleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_targetReplicasHasBeenSet(false),
    m_minReplicasHasBeenSet(false),
    m_maxReplicasHasBeenSet(false),
    m_excludeDatesHasBeenSet(false)
{
}

CoreInternalOutcome CronScaleJob::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Schedule") && !value["Schedule"].IsNull())
    {
        if (!value["Schedule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronScaleJob.Schedule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedule = string(value["Schedule"].GetString());
        m_scheduleHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronScaleJob.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TargetReplicas") && !value["TargetReplicas"].IsNull())
    {
        if (!value["TargetReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CronScaleJob.TargetReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetReplicas = value["TargetReplicas"].GetInt64();
        m_targetReplicasHasBeenSet = true;
    }

    if (value.HasMember("MinReplicas") && !value["MinReplicas"].IsNull())
    {
        if (!value["MinReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CronScaleJob.MinReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minReplicas = value["MinReplicas"].GetInt64();
        m_minReplicasHasBeenSet = true;
    }

    if (value.HasMember("MaxReplicas") && !value["MaxReplicas"].IsNull())
    {
        if (!value["MaxReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CronScaleJob.MaxReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReplicas = value["MaxReplicas"].GetInt64();
        m_maxReplicasHasBeenSet = true;
    }

    if (value.HasMember("ExcludeDates") && !value["ExcludeDates"].IsNull())
    {
        if (!value["ExcludeDates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CronScaleJob.ExcludeDates` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludeDates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeDates.push_back((*itr).GetString());
        }
        m_excludeDatesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CronScaleJob::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schedule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedule.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_targetReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetReplicas, allocator);
    }

    if (m_minReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minReplicas, allocator);
    }

    if (m_maxReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReplicas, allocator);
    }

    if (m_excludeDatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeDates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeDates.begin(); itr != m_excludeDates.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CronScaleJob::GetSchedule() const
{
    return m_schedule;
}

void CronScaleJob::SetSchedule(const string& _schedule)
{
    m_schedule = _schedule;
    m_scheduleHasBeenSet = true;
}

bool CronScaleJob::ScheduleHasBeenSet() const
{
    return m_scheduleHasBeenSet;
}

string CronScaleJob::GetName() const
{
    return m_name;
}

void CronScaleJob::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CronScaleJob::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CronScaleJob::GetTargetReplicas() const
{
    return m_targetReplicas;
}

void CronScaleJob::SetTargetReplicas(const int64_t& _targetReplicas)
{
    m_targetReplicas = _targetReplicas;
    m_targetReplicasHasBeenSet = true;
}

bool CronScaleJob::TargetReplicasHasBeenSet() const
{
    return m_targetReplicasHasBeenSet;
}

int64_t CronScaleJob::GetMinReplicas() const
{
    return m_minReplicas;
}

void CronScaleJob::SetMinReplicas(const int64_t& _minReplicas)
{
    m_minReplicas = _minReplicas;
    m_minReplicasHasBeenSet = true;
}

bool CronScaleJob::MinReplicasHasBeenSet() const
{
    return m_minReplicasHasBeenSet;
}

int64_t CronScaleJob::GetMaxReplicas() const
{
    return m_maxReplicas;
}

void CronScaleJob::SetMaxReplicas(const int64_t& _maxReplicas)
{
    m_maxReplicas = _maxReplicas;
    m_maxReplicasHasBeenSet = true;
}

bool CronScaleJob::MaxReplicasHasBeenSet() const
{
    return m_maxReplicasHasBeenSet;
}

vector<string> CronScaleJob::GetExcludeDates() const
{
    return m_excludeDates;
}

void CronScaleJob::SetExcludeDates(const vector<string>& _excludeDates)
{
    m_excludeDates = _excludeDates;
    m_excludeDatesHasBeenSet = true;
}

bool CronScaleJob::ExcludeDatesHasBeenSet() const
{
    return m_excludeDatesHasBeenSet;
}

