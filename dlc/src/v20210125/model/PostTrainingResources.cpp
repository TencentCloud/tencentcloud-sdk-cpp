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

#include <tencentcloud/dlc/v20210125/model/PostTrainingResources.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

PostTrainingResources::PostTrainingResources() :
    m_headHasBeenSet(false),
    m_workerHasBeenSet(false)
{
}

CoreInternalOutcome PostTrainingResources::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Head") && !value["Head"].IsNull())
    {
        if (!value["Head"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PostTrainingResources.Head` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_head.Deserialize(value["Head"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_headHasBeenSet = true;
    }

    if (value.HasMember("Worker") && !value["Worker"].IsNull())
    {
        if (!value["Worker"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PostTrainingResources.Worker` is not array type"));

        const rapidjson::Value &tmpValue = value["Worker"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkerSpecDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_worker.push_back(item);
        }
        m_workerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PostTrainingResources::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Head";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_head.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Worker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_worker.begin(); itr != m_worker.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


HeadSpecDTO PostTrainingResources::GetHead() const
{
    return m_head;
}

void PostTrainingResources::SetHead(const HeadSpecDTO& _head)
{
    m_head = _head;
    m_headHasBeenSet = true;
}

bool PostTrainingResources::HeadHasBeenSet() const
{
    return m_headHasBeenSet;
}

vector<WorkerSpecDTO> PostTrainingResources::GetWorker() const
{
    return m_worker;
}

void PostTrainingResources::SetWorker(const vector<WorkerSpecDTO>& _worker)
{
    m_worker = _worker;
    m_workerHasBeenSet = true;
}

bool PostTrainingResources::WorkerHasBeenSet() const
{
    return m_workerHasBeenSet;
}

