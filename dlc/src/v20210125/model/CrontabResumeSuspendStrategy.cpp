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

#include <tencentcloud/dlc/v20210125/model/CrontabResumeSuspendStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CrontabResumeSuspendStrategy::CrontabResumeSuspendStrategy() :
    m_resumeTimeHasBeenSet(false),
    m_suspendTimeHasBeenSet(false),
    m_suspendStrategyHasBeenSet(false)
{
}

CoreInternalOutcome CrontabResumeSuspendStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResumeTime") && !value["ResumeTime"].IsNull())
    {
        if (!value["ResumeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabResumeSuspendStrategy.ResumeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resumeTime = string(value["ResumeTime"].GetString());
        m_resumeTimeHasBeenSet = true;
    }

    if (value.HasMember("SuspendTime") && !value["SuspendTime"].IsNull())
    {
        if (!value["SuspendTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabResumeSuspendStrategy.SuspendTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suspendTime = string(value["SuspendTime"].GetString());
        m_suspendTimeHasBeenSet = true;
    }

    if (value.HasMember("SuspendStrategy") && !value["SuspendStrategy"].IsNull())
    {
        if (!value["SuspendStrategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabResumeSuspendStrategy.SuspendStrategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_suspendStrategy = value["SuspendStrategy"].GetInt64();
        m_suspendStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CrontabResumeSuspendStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resumeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResumeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resumeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_suspendTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuspendTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suspendTime.c_str(), allocator).Move(), allocator);
    }

    if (m_suspendStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuspendStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_suspendStrategy, allocator);
    }

}


string CrontabResumeSuspendStrategy::GetResumeTime() const
{
    return m_resumeTime;
}

void CrontabResumeSuspendStrategy::SetResumeTime(const string& _resumeTime)
{
    m_resumeTime = _resumeTime;
    m_resumeTimeHasBeenSet = true;
}

bool CrontabResumeSuspendStrategy::ResumeTimeHasBeenSet() const
{
    return m_resumeTimeHasBeenSet;
}

string CrontabResumeSuspendStrategy::GetSuspendTime() const
{
    return m_suspendTime;
}

void CrontabResumeSuspendStrategy::SetSuspendTime(const string& _suspendTime)
{
    m_suspendTime = _suspendTime;
    m_suspendTimeHasBeenSet = true;
}

bool CrontabResumeSuspendStrategy::SuspendTimeHasBeenSet() const
{
    return m_suspendTimeHasBeenSet;
}

int64_t CrontabResumeSuspendStrategy::GetSuspendStrategy() const
{
    return m_suspendStrategy;
}

void CrontabResumeSuspendStrategy::SetSuspendStrategy(const int64_t& _suspendStrategy)
{
    m_suspendStrategy = _suspendStrategy;
    m_suspendStrategyHasBeenSet = true;
}

bool CrontabResumeSuspendStrategy::SuspendStrategyHasBeenSet() const
{
    return m_suspendStrategyHasBeenSet;
}

