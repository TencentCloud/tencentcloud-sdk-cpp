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

#include <tencentcloud/oceanus/v20190422/model/CopyJobResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

CopyJobResult::CopyJobResult() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_targetJobNameHasBeenSet(false),
    m_targetJobIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_jobTypeHasBeenSet(false)
{
}

CoreInternalOutcome CopyJobResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyJobResult.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyJobResult.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("TargetJobName") && !value["TargetJobName"].IsNull())
    {
        if (!value["TargetJobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyJobResult.TargetJobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetJobName = string(value["TargetJobName"].GetString());
        m_targetJobNameHasBeenSet = true;
    }

    if (value.HasMember("TargetJobId") && !value["TargetJobId"].IsNull())
    {
        if (!value["TargetJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyJobResult.TargetJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetJobId = string(value["TargetJobId"].GetString());
        m_targetJobIdHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyJobResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CopyJobResult.Result` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetInt64();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyJobResult.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyJobResult.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CopyJobResult.JobType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = value["JobType"].GetInt64();
        m_jobTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CopyJobResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetJobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetJobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetJobName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobType, allocator);
    }

}


string CopyJobResult::GetJobId() const
{
    return m_jobId;
}

void CopyJobResult::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool CopyJobResult::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string CopyJobResult::GetJobName() const
{
    return m_jobName;
}

void CopyJobResult::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool CopyJobResult::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string CopyJobResult::GetTargetJobName() const
{
    return m_targetJobName;
}

void CopyJobResult::SetTargetJobName(const string& _targetJobName)
{
    m_targetJobName = _targetJobName;
    m_targetJobNameHasBeenSet = true;
}

bool CopyJobResult::TargetJobNameHasBeenSet() const
{
    return m_targetJobNameHasBeenSet;
}

string CopyJobResult::GetTargetJobId() const
{
    return m_targetJobId;
}

void CopyJobResult::SetTargetJobId(const string& _targetJobId)
{
    m_targetJobId = _targetJobId;
    m_targetJobIdHasBeenSet = true;
}

bool CopyJobResult::TargetJobIdHasBeenSet() const
{
    return m_targetJobIdHasBeenSet;
}

string CopyJobResult::GetMessage() const
{
    return m_message;
}

void CopyJobResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool CopyJobResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t CopyJobResult::GetResult() const
{
    return m_result;
}

void CopyJobResult::SetResult(const int64_t& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool CopyJobResult::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string CopyJobResult::GetClusterName() const
{
    return m_clusterName;
}

void CopyJobResult::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CopyJobResult::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string CopyJobResult::GetClusterId() const
{
    return m_clusterId;
}

void CopyJobResult::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CopyJobResult::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t CopyJobResult::GetJobType() const
{
    return m_jobType;
}

void CopyJobResult::SetJobType(const int64_t& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool CopyJobResult::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

