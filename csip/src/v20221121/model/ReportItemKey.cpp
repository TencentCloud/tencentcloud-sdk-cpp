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

#include <tencentcloud/csip/v20221121/model/ReportItemKey.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ReportItemKey::ReportItemKey() :
    m_taskLogListHasBeenSet(false)
{
}

CoreInternalOutcome ReportItemKey::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskLogList") && !value["TaskLogList"].IsNull())
    {
        if (!value["TaskLogList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReportItemKey.TaskLogList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskLogList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskLogList.push_back((*itr).GetString());
        }
        m_taskLogListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReportItemKey::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskLogListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskLogList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskLogList.begin(); itr != m_taskLogList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> ReportItemKey::GetTaskLogList() const
{
    return m_taskLogList;
}

void ReportItemKey::SetTaskLogList(const vector<string>& _taskLogList)
{
    m_taskLogList = _taskLogList;
    m_taskLogListHasBeenSet = true;
}

bool ReportItemKey::TaskLogListHasBeenSet() const
{
    return m_taskLogListHasBeenSet;
}

