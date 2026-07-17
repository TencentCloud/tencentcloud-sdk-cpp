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

#include <tencentcloud/teo/v20220901/model/InferenceManualInstanceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceManualInstanceConfig::InferenceManualInstanceConfig() :
    m_fixedInstanceCountHasBeenSet(false)
{
}

CoreInternalOutcome InferenceManualInstanceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FixedInstanceCount") && !value["FixedInstanceCount"].IsNull())
    {
        if (!value["FixedInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceManualInstanceConfig.FixedInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fixedInstanceCount = value["FixedInstanceCount"].GetInt64();
        m_fixedInstanceCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceManualInstanceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fixedInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixedInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixedInstanceCount, allocator);
    }

}


int64_t InferenceManualInstanceConfig::GetFixedInstanceCount() const
{
    return m_fixedInstanceCount;
}

void InferenceManualInstanceConfig::SetFixedInstanceCount(const int64_t& _fixedInstanceCount)
{
    m_fixedInstanceCount = _fixedInstanceCount;
    m_fixedInstanceCountHasBeenSet = true;
}

bool InferenceManualInstanceConfig::FixedInstanceCountHasBeenSet() const
{
    return m_fixedInstanceCountHasBeenSet;
}

