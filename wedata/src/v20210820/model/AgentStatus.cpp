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

#include <tencentcloud/wedata/v20210820/model/AgentStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AgentStatus::AgentStatus() :
    m_runningHasBeenSet(false),
    m_abnormalHasBeenSet(false),
    m_inOperationHasBeenSet(false)
{
}

CoreInternalOutcome AgentStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Running") && !value["Running"].IsNull())
    {
        if (!value["Running"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentStatus.Running` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_running = value["Running"].GetInt64();
        m_runningHasBeenSet = true;
    }

    if (value.HasMember("Abnormal") && !value["Abnormal"].IsNull())
    {
        if (!value["Abnormal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentStatus.Abnormal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormal = value["Abnormal"].GetInt64();
        m_abnormalHasBeenSet = true;
    }

    if (value.HasMember("InOperation") && !value["InOperation"].IsNull())
    {
        if (!value["InOperation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentStatus.InOperation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inOperation = value["InOperation"].GetInt64();
        m_inOperationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_runningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Running";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_running, allocator);
    }

    if (m_abnormalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Abnormal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormal, allocator);
    }

    if (m_inOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inOperation, allocator);
    }

}


int64_t AgentStatus::GetRunning() const
{
    return m_running;
}

void AgentStatus::SetRunning(const int64_t& _running)
{
    m_running = _running;
    m_runningHasBeenSet = true;
}

bool AgentStatus::RunningHasBeenSet() const
{
    return m_runningHasBeenSet;
}

int64_t AgentStatus::GetAbnormal() const
{
    return m_abnormal;
}

void AgentStatus::SetAbnormal(const int64_t& _abnormal)
{
    m_abnormal = _abnormal;
    m_abnormalHasBeenSet = true;
}

bool AgentStatus::AbnormalHasBeenSet() const
{
    return m_abnormalHasBeenSet;
}

int64_t AgentStatus::GetInOperation() const
{
    return m_inOperation;
}

void AgentStatus::SetInOperation(const int64_t& _inOperation)
{
    m_inOperation = _inOperation;
    m_inOperationHasBeenSet = true;
}

bool AgentStatus::InOperationHasBeenSet() const
{
    return m_inOperationHasBeenSet;
}

