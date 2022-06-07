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

#include <tencentcloud/trp/v20210515/model/PackSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

PackSpec::PackSpec() :
    m_levelHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_amountHasBeenSet(false)
{
}

CoreInternalOutcome PackSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackSpec.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackSpec.Rate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rate = value["Rate"].GetUint64();
        m_rateHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackSpec.Amount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_amount = value["Amount"].GetUint64();
        m_amountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rate, allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amount, allocator);
    }

}


uint64_t PackSpec::GetLevel() const
{
    return m_level;
}

void PackSpec::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool PackSpec::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

uint64_t PackSpec::GetRate() const
{
    return m_rate;
}

void PackSpec::SetRate(const uint64_t& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool PackSpec::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

uint64_t PackSpec::GetAmount() const
{
    return m_amount;
}

void PackSpec::SetAmount(const uint64_t& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool PackSpec::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

