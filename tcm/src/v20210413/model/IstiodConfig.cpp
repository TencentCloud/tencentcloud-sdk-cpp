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

#include <tencentcloud/tcm/v20210413/model/IstiodConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

IstiodConfig::IstiodConfig() :
    m_workloadHasBeenSet(false)
{
}

CoreInternalOutcome IstiodConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Workload") && !value["Workload"].IsNull())
    {
        if (!value["Workload"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IstiodConfig.Workload` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workload.Deserialize(value["Workload"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workloadHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IstiodConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Workload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workload.ToJsonObject(value[key.c_str()], allocator);
    }

}


WorkloadConfig IstiodConfig::GetWorkload() const
{
    return m_workload;
}

void IstiodConfig::SetWorkload(const WorkloadConfig& _workload)
{
    m_workload = _workload;
    m_workloadHasBeenSet = true;
}

bool IstiodConfig::WorkloadHasBeenSet() const
{
    return m_workloadHasBeenSet;
}

