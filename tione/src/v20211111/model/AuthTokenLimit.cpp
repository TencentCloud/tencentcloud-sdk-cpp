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

#include <tencentcloud/tione/v20211111/model/AuthTokenLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

AuthTokenLimit::AuthTokenLimit() :
    m_strategyHasBeenSet(false),
    m_maxHasBeenSet(false)
{
}

CoreInternalOutcome AuthTokenLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Strategy") && !value["Strategy"].IsNull())
    {
        if (!value["Strategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthTokenLimit.Strategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategy = string(value["Strategy"].GetString());
        m_strategyHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthTokenLimit.Max` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetUint64();
        m_maxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthTokenLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategy.c_str(), allocator).Move(), allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_max, allocator);
    }

}


string AuthTokenLimit::GetStrategy() const
{
    return m_strategy;
}

void AuthTokenLimit::SetStrategy(const string& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool AuthTokenLimit::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

uint64_t AuthTokenLimit::GetMax() const
{
    return m_max;
}

void AuthTokenLimit::SetMax(const uint64_t& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool AuthTokenLimit::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

