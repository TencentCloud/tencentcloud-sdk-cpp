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

#include <tencentcloud/emr/v20190103/model/AutoScaleGroupAdvanceAttrs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

AutoScaleGroupAdvanceAttrs::AutoScaleGroupAdvanceAttrs() :
    m_computeResourceAdvanceParamsHasBeenSet(false)
{
}

CoreInternalOutcome AutoScaleGroupAdvanceAttrs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComputeResourceAdvanceParams") && !value["ComputeResourceAdvanceParams"].IsNull())
    {
        if (!value["ComputeResourceAdvanceParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleGroupAdvanceAttrs.ComputeResourceAdvanceParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_computeResourceAdvanceParams.Deserialize(value["ComputeResourceAdvanceParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_computeResourceAdvanceParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoScaleGroupAdvanceAttrs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_computeResourceAdvanceParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeResourceAdvanceParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_computeResourceAdvanceParams.ToJsonObject(value[key.c_str()], allocator);
    }

}


ComputeResourceAdvanceParams AutoScaleGroupAdvanceAttrs::GetComputeResourceAdvanceParams() const
{
    return m_computeResourceAdvanceParams;
}

void AutoScaleGroupAdvanceAttrs::SetComputeResourceAdvanceParams(const ComputeResourceAdvanceParams& _computeResourceAdvanceParams)
{
    m_computeResourceAdvanceParams = _computeResourceAdvanceParams;
    m_computeResourceAdvanceParamsHasBeenSet = true;
}

bool AutoScaleGroupAdvanceAttrs::ComputeResourceAdvanceParamsHasBeenSet() const
{
    return m_computeResourceAdvanceParamsHasBeenSet;
}

