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

#include <tencentcloud/cdb/v20170320/model/Rule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

Rule::Rule() :
    m_lessThanHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

CoreInternalOutcome Rule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LessThan") && !value["LessThan"].IsNull())
    {
        if (!value["LessThan"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.LessThan` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lessThan = value["LessThan"].GetUint64();
        m_lessThanHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Rule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lessThanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LessThan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lessThan, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

}


uint64_t Rule::GetLessThan() const
{
    return m_lessThan;
}

void Rule::SetLessThan(const uint64_t& _lessThan)
{
    m_lessThan = _lessThan;
    m_lessThanHasBeenSet = true;
}

bool Rule::LessThanHasBeenSet() const
{
    return m_lessThanHasBeenSet;
}

uint64_t Rule::GetWeight() const
{
    return m_weight;
}

void Rule::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool Rule::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

