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

#include <tencentcloud/tke/v20180525/model/PrometheusJobTargets.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PrometheusJobTargets::PrometheusJobTargets() :
    m_targetsHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_upHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusJobTargets::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Targets") && !value["Targets"].IsNull())
    {
        if (!value["Targets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusJobTargets.Targets` is not array type"));

        const rapidjson::Value &tmpValue = value["Targets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusTarget item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targets.push_back(item);
        }
        m_targetsHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusJobTargets.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusJobTargets.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Up") && !value["Up"].IsNull())
    {
        if (!value["Up"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusJobTargets.Up` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_up = value["Up"].GetUint64();
        m_upHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusJobTargets::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Targets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targets.begin(); itr != m_targets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_upHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Up";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_up, allocator);
    }

}


vector<PrometheusTarget> PrometheusJobTargets::GetTargets() const
{
    return m_targets;
}

void PrometheusJobTargets::SetTargets(const vector<PrometheusTarget>& _targets)
{
    m_targets = _targets;
    m_targetsHasBeenSet = true;
}

bool PrometheusJobTargets::TargetsHasBeenSet() const
{
    return m_targetsHasBeenSet;
}

string PrometheusJobTargets::GetJobName() const
{
    return m_jobName;
}

void PrometheusJobTargets::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool PrometheusJobTargets::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

uint64_t PrometheusJobTargets::GetTotal() const
{
    return m_total;
}

void PrometheusJobTargets::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool PrometheusJobTargets::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

uint64_t PrometheusJobTargets::GetUp() const
{
    return m_up;
}

void PrometheusJobTargets::SetUp(const uint64_t& _up)
{
    m_up = _up;
    m_upHasBeenSet = true;
}

bool PrometheusJobTargets::UpHasBeenSet() const
{
    return m_upHasBeenSet;
}

