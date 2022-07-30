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

#include <tencentcloud/pts/v20210728/model/ScenarioWithJobs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

ScenarioWithJobs::ScenarioWithJobs() :
    m_scenarioHasBeenSet(false),
    m_jobsHasBeenSet(false)
{
}

CoreInternalOutcome ScenarioWithJobs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scenario") && !value["Scenario"].IsNull())
    {
        if (!value["Scenario"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScenarioWithJobs.Scenario` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scenario.Deserialize(value["Scenario"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scenarioHasBeenSet = true;
    }

    if (value.HasMember("Jobs") && !value["Jobs"].IsNull())
    {
        if (!value["Jobs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScenarioWithJobs.Jobs` is not array type"));

        const rapidjson::Value &tmpValue = value["Jobs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Job item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_jobs.push_back(item);
        }
        m_jobsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScenarioWithJobs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scenarioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scenario";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scenario.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_jobsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Jobs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_jobs.begin(); itr != m_jobs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


Scenario ScenarioWithJobs::GetScenario() const
{
    return m_scenario;
}

void ScenarioWithJobs::SetScenario(const Scenario& _scenario)
{
    m_scenario = _scenario;
    m_scenarioHasBeenSet = true;
}

bool ScenarioWithJobs::ScenarioHasBeenSet() const
{
    return m_scenarioHasBeenSet;
}

vector<Job> ScenarioWithJobs::GetJobs() const
{
    return m_jobs;
}

void ScenarioWithJobs::SetJobs(const vector<Job>& _jobs)
{
    m_jobs = _jobs;
    m_jobsHasBeenSet = true;
}

bool ScenarioWithJobs::JobsHasBeenSet() const
{
    return m_jobsHasBeenSet;
}

