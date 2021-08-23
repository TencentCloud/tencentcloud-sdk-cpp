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

#include <tencentcloud/gse/v20191112/model/TargetConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

TargetConfiguration::TargetConfiguration() :
    m_targetValueHasBeenSet(false)
{
}

CoreInternalOutcome TargetConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetValue") && !value["TargetValue"].IsNull())
    {
        if (!value["TargetValue"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetConfiguration.TargetValue` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetValue = value["TargetValue"].GetUint64();
        m_targetValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetValue, allocator);
    }

}


uint64_t TargetConfiguration::GetTargetValue() const
{
    return m_targetValue;
}

void TargetConfiguration::SetTargetValue(const uint64_t& _targetValue)
{
    m_targetValue = _targetValue;
    m_targetValueHasBeenSet = true;
}

bool TargetConfiguration::TargetValueHasBeenSet() const
{
    return m_targetValueHasBeenSet;
}

