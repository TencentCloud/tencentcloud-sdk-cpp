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

#include <tencentcloud/ioa/v20220601/model/CreateDLPFileDetectTaskData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

CreateDLPFileDetectTaskData::CreateDLPFileDetectTaskData() :
    m_taskRequestIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateDLPFileDetectTaskData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskRequestId") && !value["TaskRequestId"].IsNull())
    {
        if (!value["TaskRequestId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateDLPFileDetectTaskData.TaskRequestId` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskRequestId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskRequestId.push_back((*itr).GetString());
        }
        m_taskRequestIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateDLPFileDetectTaskData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskRequestId.begin(); itr != m_taskRequestId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> CreateDLPFileDetectTaskData::GetTaskRequestId() const
{
    return m_taskRequestId;
}

void CreateDLPFileDetectTaskData::SetTaskRequestId(const vector<string>& _taskRequestId)
{
    m_taskRequestId = _taskRequestId;
    m_taskRequestIdHasBeenSet = true;
}

bool CreateDLPFileDetectTaskData::TaskRequestIdHasBeenSet() const
{
    return m_taskRequestIdHasBeenSet;
}

