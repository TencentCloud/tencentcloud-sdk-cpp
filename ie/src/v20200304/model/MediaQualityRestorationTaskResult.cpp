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

#include <tencentcloud/ie/v20200304/model/MediaQualityRestorationTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

MediaQualityRestorationTaskResult::MediaQualityRestorationTaskResult() :
    m_taskIdHasBeenSet(false),
    m_subTaskResultHasBeenSet(false)
{
}

CoreInternalOutcome MediaQualityRestorationTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaQualityRestorationTaskResult.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("SubTaskResult") && !value["SubTaskResult"].IsNull())
    {
        if (!value["SubTaskResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaQualityRestorationTaskResult.SubTaskResult` is not array type"));

        const rapidjson::Value &tmpValue = value["SubTaskResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubTaskResultItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subTaskResult.push_back(item);
        }
        m_subTaskResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaQualityRestorationTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_subTaskResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTaskResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subTaskResult.begin(); itr != m_subTaskResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MediaQualityRestorationTaskResult::GetTaskId() const
{
    return m_taskId;
}

void MediaQualityRestorationTaskResult::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool MediaQualityRestorationTaskResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<SubTaskResultItem> MediaQualityRestorationTaskResult::GetSubTaskResult() const
{
    return m_subTaskResult;
}

void MediaQualityRestorationTaskResult::SetSubTaskResult(const vector<SubTaskResultItem>& _subTaskResult)
{
    m_subTaskResult = _subTaskResult;
    m_subTaskResultHasBeenSet = true;
}

bool MediaQualityRestorationTaskResult::SubTaskResultHasBeenSet() const
{
    return m_subTaskResultHasBeenSet;
}

