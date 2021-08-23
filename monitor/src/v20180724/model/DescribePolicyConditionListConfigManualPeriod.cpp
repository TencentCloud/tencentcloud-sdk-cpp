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

#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualPeriod.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePolicyConditionListConfigManualPeriod::DescribePolicyConditionListConfigManualPeriod() :
    m_defaultHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_needHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyConditionListConfigManualPeriod::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManualPeriod.Default` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_default = value["Default"].GetInt64();
        m_defaultHasBeenSet = true;
    }

    if (value.HasMember("Keys") && !value["Keys"].IsNull())
    {
        if (!value["Keys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManualPeriod.Keys` is not array type"));

        const rapidjson::Value &tmpValue = value["Keys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keys.push_back((*itr).GetInt64());
        }
        m_keysHasBeenSet = true;
    }

    if (value.HasMember("Need") && !value["Need"].IsNull())
    {
        if (!value["Need"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManualPeriod.Need` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_need = value["Need"].GetBool();
        m_needHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePolicyConditionListConfigManualPeriod::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_defaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_default, allocator);
    }

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keys.begin(); itr != m_keys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_needHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Need";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_need, allocator);
    }

}


int64_t DescribePolicyConditionListConfigManualPeriod::GetDefault() const
{
    return m_default;
}

void DescribePolicyConditionListConfigManualPeriod::SetDefault(const int64_t& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool DescribePolicyConditionListConfigManualPeriod::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}

vector<int64_t> DescribePolicyConditionListConfigManualPeriod::GetKeys() const
{
    return m_keys;
}

void DescribePolicyConditionListConfigManualPeriod::SetKeys(const vector<int64_t>& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool DescribePolicyConditionListConfigManualPeriod::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

bool DescribePolicyConditionListConfigManualPeriod::GetNeed() const
{
    return m_need;
}

void DescribePolicyConditionListConfigManualPeriod::SetNeed(const bool& _need)
{
    m_need = _need;
    m_needHasBeenSet = true;
}

bool DescribePolicyConditionListConfigManualPeriod::NeedHasBeenSet() const
{
    return m_needHasBeenSet;
}

