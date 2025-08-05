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

#include <tencentcloud/thpc/v20230321/model/JobView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

JobView::JobView() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobDescriptionHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_jobStateHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_occupyResourcesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome JobView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobView.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobView.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("JobDescription") && !value["JobDescription"].IsNull())
    {
        if (!value["JobDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobView.JobDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobDescription = string(value["JobDescription"].GetString());
        m_jobDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobView.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("JobState") && !value["JobState"].IsNull())
    {
        if (!value["JobState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobView.JobState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobState = string(value["JobState"].GetString());
        m_jobStateHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobView.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobView.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("OccupyResources") && !value["OccupyResources"].IsNull())
    {
        if (!value["OccupyResources"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobView.OccupyResources` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_occupyResources = string(value["OccupyResources"].GetString());
        m_occupyResourcesHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobView.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobView.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_jobDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_jobStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobState.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_occupyResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OccupyResources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_occupyResources.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string JobView::GetJobId() const
{
    return m_jobId;
}

void JobView::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool JobView::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string JobView::GetJobName() const
{
    return m_jobName;
}

void JobView::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool JobView::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string JobView::GetJobDescription() const
{
    return m_jobDescription;
}

void JobView::SetJobDescription(const string& _jobDescription)
{
    m_jobDescription = _jobDescription;
    m_jobDescriptionHasBeenSet = true;
}

bool JobView::JobDescriptionHasBeenSet() const
{
    return m_jobDescriptionHasBeenSet;
}

uint64_t JobView::GetPriority() const
{
    return m_priority;
}

void JobView::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool JobView::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string JobView::GetJobState() const
{
    return m_jobState;
}

void JobView::SetJobState(const string& _jobState)
{
    m_jobState = _jobState;
    m_jobStateHasBeenSet = true;
}

bool JobView::JobStateHasBeenSet() const
{
    return m_jobStateHasBeenSet;
}

string JobView::GetClusterId() const
{
    return m_clusterId;
}

void JobView::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool JobView::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string JobView::GetQueueName() const
{
    return m_queueName;
}

void JobView::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool JobView::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string JobView::GetOccupyResources() const
{
    return m_occupyResources;
}

void JobView::SetOccupyResources(const string& _occupyResources)
{
    m_occupyResources = _occupyResources;
    m_occupyResourcesHasBeenSet = true;
}

bool JobView::OccupyResourcesHasBeenSet() const
{
    return m_occupyResourcesHasBeenSet;
}

string JobView::GetCreateTime() const
{
    return m_createTime;
}

void JobView::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool JobView::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string JobView::GetEndTime() const
{
    return m_endTime;
}

void JobView::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool JobView::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

