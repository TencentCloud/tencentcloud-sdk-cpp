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

#include <tencentcloud/oceanus/v20190422/model/StopJobDescription.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

StopJobDescription::StopJobDescription() :
    m_jobIdHasBeenSet(false),
    m_stopTypeHasBeenSet(false)
{
}

CoreInternalOutcome StopJobDescription::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StopJobDescription.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("StopType") && !value["StopType"].IsNull())
    {
        if (!value["StopType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StopJobDescription.StopType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stopType = value["StopType"].GetInt64();
        m_stopTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StopJobDescription::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_stopTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stopType, allocator);
    }

}


string StopJobDescription::GetJobId() const
{
    return m_jobId;
}

void StopJobDescription::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool StopJobDescription::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

int64_t StopJobDescription::GetStopType() const
{
    return m_stopType;
}

void StopJobDescription::SetStopType(const int64_t& _stopType)
{
    m_stopType = _stopType;
    m_stopTypeHasBeenSet = true;
}

bool StopJobDescription::StopTypeHasBeenSet() const
{
    return m_stopTypeHasBeenSet;
}

