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

#include <tencentcloud/ms/v20180408/model/SDKPlan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

SDKPlan::SDKPlan() :
    m_planIdHasBeenSet(false)
{
}

CoreInternalOutcome SDKPlan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SDKPlan.PlanId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_planId = value["PlanId"].GetInt64();
        m_planIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SDKPlan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_planId, allocator);
    }

}


int64_t SDKPlan::GetPlanId() const
{
    return m_planId;
}

void SDKPlan::SetPlanId(const int64_t& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool SDKPlan::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

