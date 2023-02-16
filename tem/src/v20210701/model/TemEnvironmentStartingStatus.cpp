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

#include <tencentcloud/tem/v20210701/model/TemEnvironmentStartingStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

TemEnvironmentStartingStatus::TemEnvironmentStartingStatus() :
    m_applicationNumNeedToStartHasBeenSet(false),
    m_startedApplicationNumHasBeenSet(false),
    m_startFailedApplicationNumHasBeenSet(false)
{
}

CoreInternalOutcome TemEnvironmentStartingStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationNumNeedToStart") && !value["ApplicationNumNeedToStart"].IsNull())
    {
        if (!value["ApplicationNumNeedToStart"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemEnvironmentStartingStatus.ApplicationNumNeedToStart` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationNumNeedToStart = value["ApplicationNumNeedToStart"].GetInt64();
        m_applicationNumNeedToStartHasBeenSet = true;
    }

    if (value.HasMember("StartedApplicationNum") && !value["StartedApplicationNum"].IsNull())
    {
        if (!value["StartedApplicationNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemEnvironmentStartingStatus.StartedApplicationNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startedApplicationNum = value["StartedApplicationNum"].GetInt64();
        m_startedApplicationNumHasBeenSet = true;
    }

    if (value.HasMember("StartFailedApplicationNum") && !value["StartFailedApplicationNum"].IsNull())
    {
        if (!value["StartFailedApplicationNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemEnvironmentStartingStatus.StartFailedApplicationNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startFailedApplicationNum = value["StartFailedApplicationNum"].GetInt64();
        m_startFailedApplicationNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemEnvironmentStartingStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationNumNeedToStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationNumNeedToStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationNumNeedToStart, allocator);
    }

    if (m_startedApplicationNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartedApplicationNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startedApplicationNum, allocator);
    }

    if (m_startFailedApplicationNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartFailedApplicationNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startFailedApplicationNum, allocator);
    }

}


int64_t TemEnvironmentStartingStatus::GetApplicationNumNeedToStart() const
{
    return m_applicationNumNeedToStart;
}

void TemEnvironmentStartingStatus::SetApplicationNumNeedToStart(const int64_t& _applicationNumNeedToStart)
{
    m_applicationNumNeedToStart = _applicationNumNeedToStart;
    m_applicationNumNeedToStartHasBeenSet = true;
}

bool TemEnvironmentStartingStatus::ApplicationNumNeedToStartHasBeenSet() const
{
    return m_applicationNumNeedToStartHasBeenSet;
}

int64_t TemEnvironmentStartingStatus::GetStartedApplicationNum() const
{
    return m_startedApplicationNum;
}

void TemEnvironmentStartingStatus::SetStartedApplicationNum(const int64_t& _startedApplicationNum)
{
    m_startedApplicationNum = _startedApplicationNum;
    m_startedApplicationNumHasBeenSet = true;
}

bool TemEnvironmentStartingStatus::StartedApplicationNumHasBeenSet() const
{
    return m_startedApplicationNumHasBeenSet;
}

int64_t TemEnvironmentStartingStatus::GetStartFailedApplicationNum() const
{
    return m_startFailedApplicationNum;
}

void TemEnvironmentStartingStatus::SetStartFailedApplicationNum(const int64_t& _startFailedApplicationNum)
{
    m_startFailedApplicationNum = _startFailedApplicationNum;
    m_startFailedApplicationNumHasBeenSet = true;
}

bool TemEnvironmentStartingStatus::StartFailedApplicationNumHasBeenSet() const
{
    return m_startFailedApplicationNumHasBeenSet;
}

