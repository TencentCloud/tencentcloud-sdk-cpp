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

#include <tencentcloud/teo/v20220901/model/DetectLengthLimitConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DetectLengthLimitConfig::DetectLengthLimitConfig() :
    m_detectLengthLimitRulesHasBeenSet(false)
{
}

CoreInternalOutcome DetectLengthLimitConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DetectLengthLimitRules") && !value["DetectLengthLimitRules"].IsNull())
    {
        if (!value["DetectLengthLimitRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetectLengthLimitConfig.DetectLengthLimitRules` is not array type"));

        const rapidjson::Value &tmpValue = value["DetectLengthLimitRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetectLengthLimitRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detectLengthLimitRules.push_back(item);
        }
        m_detectLengthLimitRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetectLengthLimitConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_detectLengthLimitRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectLengthLimitRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detectLengthLimitRules.begin(); itr != m_detectLengthLimitRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<DetectLengthLimitRule> DetectLengthLimitConfig::GetDetectLengthLimitRules() const
{
    return m_detectLengthLimitRules;
}

void DetectLengthLimitConfig::SetDetectLengthLimitRules(const vector<DetectLengthLimitRule>& _detectLengthLimitRules)
{
    m_detectLengthLimitRules = _detectLengthLimitRules;
    m_detectLengthLimitRulesHasBeenSet = true;
}

bool DetectLengthLimitConfig::DetectLengthLimitRulesHasBeenSet() const
{
    return m_detectLengthLimitRulesHasBeenSet;
}

