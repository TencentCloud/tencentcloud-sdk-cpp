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

#include <tencentcloud/tione/v20211111/model/SchedulingPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

SchedulingPolicy::SchedulingPolicy() :
    m_crossResourceGroupSchedulingHasBeenSet(false)
{
}

CoreInternalOutcome SchedulingPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CrossResourceGroupScheduling") && !value["CrossResourceGroupScheduling"].IsNull())
    {
        if (!value["CrossResourceGroupScheduling"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingPolicy.CrossResourceGroupScheduling` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_crossResourceGroupScheduling = value["CrossResourceGroupScheduling"].GetBool();
        m_crossResourceGroupSchedulingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchedulingPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_crossResourceGroupSchedulingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossResourceGroupScheduling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossResourceGroupScheduling, allocator);
    }

}


bool SchedulingPolicy::GetCrossResourceGroupScheduling() const
{
    return m_crossResourceGroupScheduling;
}

void SchedulingPolicy::SetCrossResourceGroupScheduling(const bool& _crossResourceGroupScheduling)
{
    m_crossResourceGroupScheduling = _crossResourceGroupScheduling;
    m_crossResourceGroupSchedulingHasBeenSet = true;
}

bool SchedulingPolicy::CrossResourceGroupSchedulingHasBeenSet() const
{
    return m_crossResourceGroupSchedulingHasBeenSet;
}

