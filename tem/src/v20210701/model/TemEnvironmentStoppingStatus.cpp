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

#include <tencentcloud/tem/v20210701/model/TemEnvironmentStoppingStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

TemEnvironmentStoppingStatus::TemEnvironmentStoppingStatus() :
    m_applicationNumNeedToStopHasBeenSet(false),
    m_stoppedApplicationNumHasBeenSet(false),
    m_stopFailedApplicationNumHasBeenSet(false)
{
}

CoreInternalOutcome TemEnvironmentStoppingStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationNumNeedToStop") && !value["ApplicationNumNeedToStop"].IsNull())
    {
        if (!value["ApplicationNumNeedToStop"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemEnvironmentStoppingStatus.ApplicationNumNeedToStop` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationNumNeedToStop = value["ApplicationNumNeedToStop"].GetInt64();
        m_applicationNumNeedToStopHasBeenSet = true;
    }

    if (value.HasMember("StoppedApplicationNum") && !value["StoppedApplicationNum"].IsNull())
    {
        if (!value["StoppedApplicationNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemEnvironmentStoppingStatus.StoppedApplicationNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stoppedApplicationNum = value["StoppedApplicationNum"].GetInt64();
        m_stoppedApplicationNumHasBeenSet = true;
    }

    if (value.HasMember("StopFailedApplicationNum") && !value["StopFailedApplicationNum"].IsNull())
    {
        if (!value["StopFailedApplicationNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemEnvironmentStoppingStatus.StopFailedApplicationNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stopFailedApplicationNum = value["StopFailedApplicationNum"].GetInt64();
        m_stopFailedApplicationNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemEnvironmentStoppingStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationNumNeedToStopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationNumNeedToStop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationNumNeedToStop, allocator);
    }

    if (m_stoppedApplicationNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoppedApplicationNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stoppedApplicationNum, allocator);
    }

    if (m_stopFailedApplicationNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopFailedApplicationNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stopFailedApplicationNum, allocator);
    }

}


int64_t TemEnvironmentStoppingStatus::GetApplicationNumNeedToStop() const
{
    return m_applicationNumNeedToStop;
}

void TemEnvironmentStoppingStatus::SetApplicationNumNeedToStop(const int64_t& _applicationNumNeedToStop)
{
    m_applicationNumNeedToStop = _applicationNumNeedToStop;
    m_applicationNumNeedToStopHasBeenSet = true;
}

bool TemEnvironmentStoppingStatus::ApplicationNumNeedToStopHasBeenSet() const
{
    return m_applicationNumNeedToStopHasBeenSet;
}

int64_t TemEnvironmentStoppingStatus::GetStoppedApplicationNum() const
{
    return m_stoppedApplicationNum;
}

void TemEnvironmentStoppingStatus::SetStoppedApplicationNum(const int64_t& _stoppedApplicationNum)
{
    m_stoppedApplicationNum = _stoppedApplicationNum;
    m_stoppedApplicationNumHasBeenSet = true;
}

bool TemEnvironmentStoppingStatus::StoppedApplicationNumHasBeenSet() const
{
    return m_stoppedApplicationNumHasBeenSet;
}

int64_t TemEnvironmentStoppingStatus::GetStopFailedApplicationNum() const
{
    return m_stopFailedApplicationNum;
}

void TemEnvironmentStoppingStatus::SetStopFailedApplicationNum(const int64_t& _stopFailedApplicationNum)
{
    m_stopFailedApplicationNum = _stopFailedApplicationNum;
    m_stopFailedApplicationNumHasBeenSet = true;
}

bool TemEnvironmentStoppingStatus::StopFailedApplicationNumHasBeenSet() const
{
    return m_stopFailedApplicationNumHasBeenSet;
}

