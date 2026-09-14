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

#include <tencentcloud/adp/v20260520/model/DocTaskStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DocTaskStatus::DocTaskStatus() :
    m_completedTaskTypeListHasBeenSet(false),
    m_ongoingTaskTypeListHasBeenSet(false)
{
}

CoreInternalOutcome DocTaskStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CompletedTaskTypeList") && !value["CompletedTaskTypeList"].IsNull())
    {
        if (!value["CompletedTaskTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocTaskStatus.CompletedTaskTypeList` is not array type"));

        const rapidjson::Value &tmpValue = value["CompletedTaskTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_completedTaskTypeList.push_back((*itr).GetInt64());
        }
        m_completedTaskTypeListHasBeenSet = true;
    }

    if (value.HasMember("OngoingTaskTypeList") && !value["OngoingTaskTypeList"].IsNull())
    {
        if (!value["OngoingTaskTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocTaskStatus.OngoingTaskTypeList` is not array type"));

        const rapidjson::Value &tmpValue = value["OngoingTaskTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ongoingTaskTypeList.push_back((*itr).GetInt64());
        }
        m_ongoingTaskTypeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocTaskStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_completedTaskTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompletedTaskTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_completedTaskTypeList.begin(); itr != m_completedTaskTypeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_ongoingTaskTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OngoingTaskTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ongoingTaskTypeList.begin(); itr != m_ongoingTaskTypeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<int64_t> DocTaskStatus::GetCompletedTaskTypeList() const
{
    return m_completedTaskTypeList;
}

void DocTaskStatus::SetCompletedTaskTypeList(const vector<int64_t>& _completedTaskTypeList)
{
    m_completedTaskTypeList = _completedTaskTypeList;
    m_completedTaskTypeListHasBeenSet = true;
}

bool DocTaskStatus::CompletedTaskTypeListHasBeenSet() const
{
    return m_completedTaskTypeListHasBeenSet;
}

vector<int64_t> DocTaskStatus::GetOngoingTaskTypeList() const
{
    return m_ongoingTaskTypeList;
}

void DocTaskStatus::SetOngoingTaskTypeList(const vector<int64_t>& _ongoingTaskTypeList)
{
    m_ongoingTaskTypeList = _ongoingTaskTypeList;
    m_ongoingTaskTypeListHasBeenSet = true;
}

bool DocTaskStatus::OngoingTaskTypeListHasBeenSet() const
{
    return m_ongoingTaskTypeListHasBeenSet;
}

