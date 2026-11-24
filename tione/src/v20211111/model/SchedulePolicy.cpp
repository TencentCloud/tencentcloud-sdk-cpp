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

#include <tencentcloud/tione/v20211111/model/SchedulePolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

SchedulePolicy::SchedulePolicy() :
    m_priorityClassHasBeenSet(false)
{
}

CoreInternalOutcome SchedulePolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PriorityClass") && !value["PriorityClass"].IsNull())
    {
        if (!value["PriorityClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulePolicy.PriorityClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_priorityClass = string(value["PriorityClass"].GetString());
        m_priorityClassHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchedulePolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_priorityClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriorityClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_priorityClass.c_str(), allocator).Move(), allocator);
    }

}


string SchedulePolicy::GetPriorityClass() const
{
    return m_priorityClass;
}

void SchedulePolicy::SetPriorityClass(const string& _priorityClass)
{
    m_priorityClass = _priorityClass;
    m_priorityClassHasBeenSet = true;
}

bool SchedulePolicy::PriorityClassHasBeenSet() const
{
    return m_priorityClassHasBeenSet;
}

