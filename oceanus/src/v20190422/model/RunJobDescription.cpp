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

#include <tencentcloud/oceanus/v20190422/model/RunJobDescription.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace rapidjson;
using namespace std;

RunJobDescription::RunJobDescription() :
    m_jobIdHasBeenSet(false),
    m_runTypeHasBeenSet(false),
    m_startModeHasBeenSet(false),
    m_jobConfigVersionHasBeenSet(false)
{
}

CoreInternalOutcome RunJobDescription::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RunJobDescription.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("RunType") && !value["RunType"].IsNull())
    {
        if (!value["RunType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RunJobDescription.RunType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runType = value["RunType"].GetInt64();
        m_runTypeHasBeenSet = true;
    }

    if (value.HasMember("StartMode") && !value["StartMode"].IsNull())
    {
        if (!value["StartMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `RunJobDescription.StartMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startMode = string(value["StartMode"].GetString());
        m_startModeHasBeenSet = true;
    }

    if (value.HasMember("JobConfigVersion") && !value["JobConfigVersion"].IsNull())
    {
        if (!value["JobConfigVersion"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RunJobDescription.JobConfigVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_jobConfigVersion = value["JobConfigVersion"].GetUint64();
        m_jobConfigVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunJobDescription::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_runTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RunType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runType, allocator);
    }

    if (m_startModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_startMode.c_str(), allocator).Move(), allocator);
    }

    if (m_jobConfigVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JobConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobConfigVersion, allocator);
    }

}


string RunJobDescription::GetJobId() const
{
    return m_jobId;
}

void RunJobDescription::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool RunJobDescription::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

int64_t RunJobDescription::GetRunType() const
{
    return m_runType;
}

void RunJobDescription::SetRunType(const int64_t& _runType)
{
    m_runType = _runType;
    m_runTypeHasBeenSet = true;
}

bool RunJobDescription::RunTypeHasBeenSet() const
{
    return m_runTypeHasBeenSet;
}

string RunJobDescription::GetStartMode() const
{
    return m_startMode;
}

void RunJobDescription::SetStartMode(const string& _startMode)
{
    m_startMode = _startMode;
    m_startModeHasBeenSet = true;
}

bool RunJobDescription::StartModeHasBeenSet() const
{
    return m_startModeHasBeenSet;
}

uint64_t RunJobDescription::GetJobConfigVersion() const
{
    return m_jobConfigVersion;
}

void RunJobDescription::SetJobConfigVersion(const uint64_t& _jobConfigVersion)
{
    m_jobConfigVersion = _jobConfigVersion;
    m_jobConfigVersionHasBeenSet = true;
}

bool RunJobDescription::JobConfigVersionHasBeenSet() const
{
    return m_jobConfigVersionHasBeenSet;
}

