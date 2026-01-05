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

#include <tencentcloud/wedata/v20250806/model/TriggerWorkflowTaskRunDetailBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TriggerWorkflowTaskRunDetailBrief::TriggerWorkflowTaskRunDetailBrief() :
    m_triggerWorkflowRunHasBeenSet(false),
    m_triggerTaskRunsHasBeenSet(false),
    m_bizStateEnumInfosHasBeenSet(false)
{
}

CoreInternalOutcome TriggerWorkflowTaskRunDetailBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TriggerWorkflowRun") && !value["TriggerWorkflowRun"].IsNull())
    {
        if (!value["TriggerWorkflowRun"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowTaskRunDetailBrief.TriggerWorkflowRun` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_triggerWorkflowRun.Deserialize(value["TriggerWorkflowRun"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_triggerWorkflowRunHasBeenSet = true;
    }

    if (value.HasMember("TriggerTaskRuns") && !value["TriggerTaskRuns"].IsNull())
    {
        if (!value["TriggerTaskRuns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowTaskRunDetailBrief.TriggerTaskRuns` is not array type"));

        const rapidjson::Value &tmpValue = value["TriggerTaskRuns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TriggerTaskRunBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_triggerTaskRuns.push_back(item);
        }
        m_triggerTaskRunsHasBeenSet = true;
    }

    if (value.HasMember("BizStateEnumInfos") && !value["BizStateEnumInfos"].IsNull())
    {
        if (!value["BizStateEnumInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowTaskRunDetailBrief.BizStateEnumInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["BizStateEnumInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BizStateEnumInfoBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bizStateEnumInfos.push_back(item);
        }
        m_bizStateEnumInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerWorkflowTaskRunDetailBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_triggerWorkflowRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerWorkflowRun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_triggerWorkflowRun.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_triggerTaskRunsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTaskRuns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_triggerTaskRuns.begin(); itr != m_triggerTaskRuns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bizStateEnumInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizStateEnumInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bizStateEnumInfos.begin(); itr != m_bizStateEnumInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


TriggerWorkflowRunBrief TriggerWorkflowTaskRunDetailBrief::GetTriggerWorkflowRun() const
{
    return m_triggerWorkflowRun;
}

void TriggerWorkflowTaskRunDetailBrief::SetTriggerWorkflowRun(const TriggerWorkflowRunBrief& _triggerWorkflowRun)
{
    m_triggerWorkflowRun = _triggerWorkflowRun;
    m_triggerWorkflowRunHasBeenSet = true;
}

bool TriggerWorkflowTaskRunDetailBrief::TriggerWorkflowRunHasBeenSet() const
{
    return m_triggerWorkflowRunHasBeenSet;
}

vector<TriggerTaskRunBrief> TriggerWorkflowTaskRunDetailBrief::GetTriggerTaskRuns() const
{
    return m_triggerTaskRuns;
}

void TriggerWorkflowTaskRunDetailBrief::SetTriggerTaskRuns(const vector<TriggerTaskRunBrief>& _triggerTaskRuns)
{
    m_triggerTaskRuns = _triggerTaskRuns;
    m_triggerTaskRunsHasBeenSet = true;
}

bool TriggerWorkflowTaskRunDetailBrief::TriggerTaskRunsHasBeenSet() const
{
    return m_triggerTaskRunsHasBeenSet;
}

vector<BizStateEnumInfoBrief> TriggerWorkflowTaskRunDetailBrief::GetBizStateEnumInfos() const
{
    return m_bizStateEnumInfos;
}

void TriggerWorkflowTaskRunDetailBrief::SetBizStateEnumInfos(const vector<BizStateEnumInfoBrief>& _bizStateEnumInfos)
{
    m_bizStateEnumInfos = _bizStateEnumInfos;
    m_bizStateEnumInfosHasBeenSet = true;
}

bool TriggerWorkflowTaskRunDetailBrief::BizStateEnumInfosHasBeenSet() const
{
    return m_bizStateEnumInfosHasBeenSet;
}

