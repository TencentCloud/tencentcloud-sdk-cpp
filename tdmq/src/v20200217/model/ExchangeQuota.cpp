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

#include <tencentcloud/tdmq/v20200217/model/ExchangeQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ExchangeQuota::ExchangeQuota() :
    m_maxExchangeHasBeenSet(false),
    m_usedExchangeHasBeenSet(false)
{
}

CoreInternalOutcome ExchangeQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxExchange") && !value["MaxExchange"].IsNull())
    {
        if (!value["MaxExchange"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExchangeQuota.MaxExchange` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxExchange = value["MaxExchange"].GetInt64();
        m_maxExchangeHasBeenSet = true;
    }

    if (value.HasMember("UsedExchange") && !value["UsedExchange"].IsNull())
    {
        if (!value["UsedExchange"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExchangeQuota.UsedExchange` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedExchange = value["UsedExchange"].GetInt64();
        m_usedExchangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExchangeQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxExchangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxExchange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxExchange, allocator);
    }

    if (m_usedExchangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedExchange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedExchange, allocator);
    }

}


int64_t ExchangeQuota::GetMaxExchange() const
{
    return m_maxExchange;
}

void ExchangeQuota::SetMaxExchange(const int64_t& _maxExchange)
{
    m_maxExchange = _maxExchange;
    m_maxExchangeHasBeenSet = true;
}

bool ExchangeQuota::MaxExchangeHasBeenSet() const
{
    return m_maxExchangeHasBeenSet;
}

int64_t ExchangeQuota::GetUsedExchange() const
{
    return m_usedExchange;
}

void ExchangeQuota::SetUsedExchange(const int64_t& _usedExchange)
{
    m_usedExchange = _usedExchange;
    m_usedExchangeHasBeenSet = true;
}

bool ExchangeQuota::UsedExchangeHasBeenSet() const
{
    return m_usedExchangeHasBeenSet;
}

