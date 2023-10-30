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

#include <tencentcloud/es/v20180416/model/JobParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

JobParam::JobParam() :
    m_jobsHasBeenSet(false),
    m_indicesHasBeenSet(false),
    m_intervalHasBeenSet(false)
{
}

CoreInternalOutcome JobParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Jobs") && !value["Jobs"].IsNull())
    {
        if (!value["Jobs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobParam.Jobs` is not array type"));

        const rapidjson::Value &tmpValue = value["Jobs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_jobs.push_back((*itr).GetString());
        }
        m_jobsHasBeenSet = true;
    }

    if (value.HasMember("Indices") && !value["Indices"].IsNull())
    {
        if (!value["Indices"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobParam.Indices` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indices = string(value["Indices"].GetString());
        m_indicesHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobParam.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Jobs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_jobs.begin(); itr != m_jobs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_indicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Indices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indices.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

}


vector<string> JobParam::GetJobs() const
{
    return m_jobs;
}

void JobParam::SetJobs(const vector<string>& _jobs)
{
    m_jobs = _jobs;
    m_jobsHasBeenSet = true;
}

bool JobParam::JobsHasBeenSet() const
{
    return m_jobsHasBeenSet;
}

string JobParam::GetIndices() const
{
    return m_indices;
}

void JobParam::SetIndices(const string& _indices)
{
    m_indices = _indices;
    m_indicesHasBeenSet = true;
}

bool JobParam::IndicesHasBeenSet() const
{
    return m_indicesHasBeenSet;
}

uint64_t JobParam::GetInterval() const
{
    return m_interval;
}

void JobParam::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool JobParam::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

