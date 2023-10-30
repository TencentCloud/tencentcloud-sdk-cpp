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

#include <tencentcloud/es/v20180416/model/DiagnoseResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DiagnoseResult::DiagnoseResult() :
    m_instanceIdHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_completedHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_jobParamHasBeenSet(false),
    m_jobResultsHasBeenSet(false)
{
}

CoreInternalOutcome DiagnoseResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Completed") && !value["Completed"].IsNull())
    {
        if (!value["Completed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.Completed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_completed = value["Completed"].GetBool();
        m_completedHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.JobType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = value["JobType"].GetInt64();
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("JobParam") && !value["JobParam"].IsNull())
    {
        if (!value["JobParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.JobParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_jobParam.Deserialize(value["JobParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jobParamHasBeenSet = true;
    }

    if (value.HasMember("JobResults") && !value["JobResults"].IsNull())
    {
        if (!value["JobResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.JobResults` is not array type"));

        const rapidjson::Value &tmpValue = value["JobResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiagnoseJobResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_jobResults.push_back(item);
        }
        m_jobResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiagnoseResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_completedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Completed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_completed, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobType, allocator);
    }

    if (m_jobParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jobParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_jobResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_jobResults.begin(); itr != m_jobResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DiagnoseResult::GetInstanceId() const
{
    return m_instanceId;
}

void DiagnoseResult::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DiagnoseResult::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DiagnoseResult::GetRequestId() const
{
    return m_requestId;
}

void DiagnoseResult::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool DiagnoseResult::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string DiagnoseResult::GetCreateTime() const
{
    return m_createTime;
}

void DiagnoseResult::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DiagnoseResult::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool DiagnoseResult::GetCompleted() const
{
    return m_completed;
}

void DiagnoseResult::SetCompleted(const bool& _completed)
{
    m_completed = _completed;
    m_completedHasBeenSet = true;
}

bool DiagnoseResult::CompletedHasBeenSet() const
{
    return m_completedHasBeenSet;
}

int64_t DiagnoseResult::GetScore() const
{
    return m_score;
}

void DiagnoseResult::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool DiagnoseResult::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

int64_t DiagnoseResult::GetJobType() const
{
    return m_jobType;
}

void DiagnoseResult::SetJobType(const int64_t& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool DiagnoseResult::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

JobParam DiagnoseResult::GetJobParam() const
{
    return m_jobParam;
}

void DiagnoseResult::SetJobParam(const JobParam& _jobParam)
{
    m_jobParam = _jobParam;
    m_jobParamHasBeenSet = true;
}

bool DiagnoseResult::JobParamHasBeenSet() const
{
    return m_jobParamHasBeenSet;
}

vector<DiagnoseJobResult> DiagnoseResult::GetJobResults() const
{
    return m_jobResults;
}

void DiagnoseResult::SetJobResults(const vector<DiagnoseJobResult>& _jobResults)
{
    m_jobResults = _jobResults;
    m_jobResultsHasBeenSet = true;
}

bool DiagnoseResult::JobResultsHasBeenSet() const
{
    return m_jobResultsHasBeenSet;
}

