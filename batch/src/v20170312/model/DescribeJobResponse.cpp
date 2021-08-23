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

#include <tencentcloud/batch/v20170312/model/DescribeJobResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

DescribeJobResponse::DescribeJobResponse() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_jobStateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskSetHasBeenSet(false),
    m_dependenceSetHasBeenSet(false),
    m_taskMetricsHasBeenSet(false),
    m_taskInstanceMetricsHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_nextActionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeJobResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("JobId") && !rsp["JobId"].IsNull())
    {
        if (!rsp["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(rsp["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (rsp.HasMember("JobName") && !rsp["JobName"].IsNull())
    {
        if (!rsp["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(rsp["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (rsp.HasMember("Zone") && !rsp["Zone"].IsNull())
    {
        if (!rsp["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(rsp["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (rsp.HasMember("Priority") && !rsp["Priority"].IsNull())
    {
        if (!rsp["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = rsp["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (rsp.HasMember("JobState") && !rsp["JobState"].IsNull())
    {
        if (!rsp["JobState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobState = string(rsp["JobState"].GetString());
        m_jobStateHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("TaskSet") && !rsp["TaskSet"].IsNull())
    {
        if (!rsp["TaskSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TaskSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskView item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskSet.push_back(item);
        }
        m_taskSetHasBeenSet = true;
    }

    if (rsp.HasMember("DependenceSet") && !rsp["DependenceSet"].IsNull())
    {
        if (!rsp["DependenceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DependenceSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DependenceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Dependence item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dependenceSet.push_back(item);
        }
        m_dependenceSetHasBeenSet = true;
    }

    if (rsp.HasMember("TaskMetrics") && !rsp["TaskMetrics"].IsNull())
    {
        if (!rsp["TaskMetrics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMetrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskMetrics.Deserialize(rsp["TaskMetrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskMetricsHasBeenSet = true;
    }

    if (rsp.HasMember("TaskInstanceMetrics") && !rsp["TaskInstanceMetrics"].IsNull())
    {
        if (!rsp["TaskInstanceMetrics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceMetrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskInstanceMetrics.Deserialize(rsp["TaskInstanceMetrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskInstanceMetricsHasBeenSet = true;
    }

    if (rsp.HasMember("StateReason") && !rsp["StateReason"].IsNull())
    {
        if (!rsp["StateReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StateReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateReason = string(rsp["StateReason"].GetString());
        m_stateReasonHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("NextAction") && !rsp["NextAction"].IsNull())
    {
        if (!rsp["NextAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NextAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextAction = string(rsp["NextAction"].GetString());
        m_nextActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeJobResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
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

    if (m_taskSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskSet.begin(); itr != m_taskSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dependenceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependenceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dependenceSet.begin(); itr != m_dependenceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskMetrics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskInstanceMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInstanceMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskInstanceMetrics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stateReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateReason.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nextActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextAction.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeJobResponse::GetJobId() const
{
    return m_jobId;
}

bool DescribeJobResponse::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeJobResponse::GetJobName() const
{
    return m_jobName;
}

bool DescribeJobResponse::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string DescribeJobResponse::GetZone() const
{
    return m_zone;
}

bool DescribeJobResponse::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t DescribeJobResponse::GetPriority() const
{
    return m_priority;
}

bool DescribeJobResponse::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string DescribeJobResponse::GetJobState() const
{
    return m_jobState;
}

bool DescribeJobResponse::JobStateHasBeenSet() const
{
    return m_jobStateHasBeenSet;
}

string DescribeJobResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeJobResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeJobResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeJobResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<TaskView> DescribeJobResponse::GetTaskSet() const
{
    return m_taskSet;
}

bool DescribeJobResponse::TaskSetHasBeenSet() const
{
    return m_taskSetHasBeenSet;
}

vector<Dependence> DescribeJobResponse::GetDependenceSet() const
{
    return m_dependenceSet;
}

bool DescribeJobResponse::DependenceSetHasBeenSet() const
{
    return m_dependenceSetHasBeenSet;
}

TaskMetrics DescribeJobResponse::GetTaskMetrics() const
{
    return m_taskMetrics;
}

bool DescribeJobResponse::TaskMetricsHasBeenSet() const
{
    return m_taskMetricsHasBeenSet;
}

TaskInstanceMetrics DescribeJobResponse::GetTaskInstanceMetrics() const
{
    return m_taskInstanceMetrics;
}

bool DescribeJobResponse::TaskInstanceMetricsHasBeenSet() const
{
    return m_taskInstanceMetricsHasBeenSet;
}

string DescribeJobResponse::GetStateReason() const
{
    return m_stateReason;
}

bool DescribeJobResponse::StateReasonHasBeenSet() const
{
    return m_stateReasonHasBeenSet;
}

vector<Tag> DescribeJobResponse::GetTags() const
{
    return m_tags;
}

bool DescribeJobResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DescribeJobResponse::GetNextAction() const
{
    return m_nextAction;
}

bool DescribeJobResponse::NextActionHasBeenSet() const
{
    return m_nextActionHasBeenSet;
}


