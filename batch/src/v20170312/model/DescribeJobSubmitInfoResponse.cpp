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

#include <tencentcloud/batch/v20170312/model/DescribeJobSubmitInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

DescribeJobSubmitInfoResponse::DescribeJobSubmitInfoResponse() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobDescriptionHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_dependencesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeJobSubmitInfoResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("JobId") && !rsp["JobId"].IsNull())
    {
        if (!rsp["JobId"].IsString())
        {
            return CoreInternalOutcome(Error("response `JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(rsp["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (rsp.HasMember("JobName") && !rsp["JobName"].IsNull())
    {
        if (!rsp["JobName"].IsString())
        {
            return CoreInternalOutcome(Error("response `JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(rsp["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (rsp.HasMember("JobDescription") && !rsp["JobDescription"].IsNull())
    {
        if (!rsp["JobDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `JobDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobDescription = string(rsp["JobDescription"].GetString());
        m_jobDescriptionHasBeenSet = true;
    }

    if (rsp.HasMember("Priority") && !rsp["Priority"].IsNull())
    {
        if (!rsp["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = rsp["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (rsp.HasMember("Tasks") && !rsp["Tasks"].IsNull())
    {
        if (!rsp["Tasks"].IsArray())
            return CoreInternalOutcome(Error("response `Tasks` is not array type"));

        const Value &tmpValue = rsp["Tasks"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Task item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tasks.push_back(item);
        }
        m_tasksHasBeenSet = true;
    }

    if (rsp.HasMember("Dependences") && !rsp["Dependences"].IsNull())
    {
        if (!rsp["Dependences"].IsArray())
            return CoreInternalOutcome(Error("response `Dependences` is not array type"));

        const Value &tmpValue = rsp["Dependences"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Dependence item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dependences.push_back(item);
        }
        m_dependencesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeJobSubmitInfoResponse::GetJobId() const
{
    return m_jobId;
}

bool DescribeJobSubmitInfoResponse::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeJobSubmitInfoResponse::GetJobName() const
{
    return m_jobName;
}

bool DescribeJobSubmitInfoResponse::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string DescribeJobSubmitInfoResponse::GetJobDescription() const
{
    return m_jobDescription;
}

bool DescribeJobSubmitInfoResponse::JobDescriptionHasBeenSet() const
{
    return m_jobDescriptionHasBeenSet;
}

int64_t DescribeJobSubmitInfoResponse::GetPriority() const
{
    return m_priority;
}

bool DescribeJobSubmitInfoResponse::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

vector<Task> DescribeJobSubmitInfoResponse::GetTasks() const
{
    return m_tasks;
}

bool DescribeJobSubmitInfoResponse::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

vector<Dependence> DescribeJobSubmitInfoResponse::GetDependences() const
{
    return m_dependences;
}

bool DescribeJobSubmitInfoResponse::DependencesHasBeenSet() const
{
    return m_dependencesHasBeenSet;
}


