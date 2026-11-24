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

#include <tencentcloud/tione/v20211111/model/ModifyTrainingTaskSchedulingPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ModifyTrainingTaskSchedulingPolicyRequest::ModifyTrainingTaskSchedulingPolicyRequest() :
    m_trainingTaskIdHasBeenSet(false),
    m_tiProjectIdHasBeenSet(false),
    m_crossResourceGroupSchedulingHasBeenSet(false),
    m_schedulePolicyHasBeenSet(false)
{
}

string ModifyTrainingTaskSchedulingPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_trainingTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trainingTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_tiProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TiProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tiProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_crossResourceGroupSchedulingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossResourceGroupScheduling";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_crossResourceGroupScheduling, allocator);
    }

    if (m_schedulePolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulePolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_schedulePolicy.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTrainingTaskSchedulingPolicyRequest::GetTrainingTaskId() const
{
    return m_trainingTaskId;
}

void ModifyTrainingTaskSchedulingPolicyRequest::SetTrainingTaskId(const string& _trainingTaskId)
{
    m_trainingTaskId = _trainingTaskId;
    m_trainingTaskIdHasBeenSet = true;
}

bool ModifyTrainingTaskSchedulingPolicyRequest::TrainingTaskIdHasBeenSet() const
{
    return m_trainingTaskIdHasBeenSet;
}

string ModifyTrainingTaskSchedulingPolicyRequest::GetTiProjectId() const
{
    return m_tiProjectId;
}

void ModifyTrainingTaskSchedulingPolicyRequest::SetTiProjectId(const string& _tiProjectId)
{
    m_tiProjectId = _tiProjectId;
    m_tiProjectIdHasBeenSet = true;
}

bool ModifyTrainingTaskSchedulingPolicyRequest::TiProjectIdHasBeenSet() const
{
    return m_tiProjectIdHasBeenSet;
}

bool ModifyTrainingTaskSchedulingPolicyRequest::GetCrossResourceGroupScheduling() const
{
    return m_crossResourceGroupScheduling;
}

void ModifyTrainingTaskSchedulingPolicyRequest::SetCrossResourceGroupScheduling(const bool& _crossResourceGroupScheduling)
{
    m_crossResourceGroupScheduling = _crossResourceGroupScheduling;
    m_crossResourceGroupSchedulingHasBeenSet = true;
}

bool ModifyTrainingTaskSchedulingPolicyRequest::CrossResourceGroupSchedulingHasBeenSet() const
{
    return m_crossResourceGroupSchedulingHasBeenSet;
}

SchedulePolicy ModifyTrainingTaskSchedulingPolicyRequest::GetSchedulePolicy() const
{
    return m_schedulePolicy;
}

void ModifyTrainingTaskSchedulingPolicyRequest::SetSchedulePolicy(const SchedulePolicy& _schedulePolicy)
{
    m_schedulePolicy = _schedulePolicy;
    m_schedulePolicyHasBeenSet = true;
}

bool ModifyTrainingTaskSchedulingPolicyRequest::SchedulePolicyHasBeenSet() const
{
    return m_schedulePolicyHasBeenSet;
}


