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

#include <tencentcloud/waf/v20180125/model/LLMTokenTrendItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

LLMTokenTrendItem::LLMTokenTrendItem() :
    m_dayTimeHasBeenSet(false),
    m_tokenUsageHasBeenSet(false)
{
}

CoreInternalOutcome LLMTokenTrendItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DayTime") && !value["DayTime"].IsNull())
    {
        if (!value["DayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMTokenTrendItem.DayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dayTime = string(value["DayTime"].GetString());
        m_dayTimeHasBeenSet = true;
    }

    if (value.HasMember("TokenUsage") && !value["TokenUsage"].IsNull())
    {
        if (!value["TokenUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMTokenTrendItem.TokenUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tokenUsage = value["TokenUsage"].GetInt64();
        m_tokenUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LLMTokenTrendItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dayTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenUsage, allocator);
    }

}


string LLMTokenTrendItem::GetDayTime() const
{
    return m_dayTime;
}

void LLMTokenTrendItem::SetDayTime(const string& _dayTime)
{
    m_dayTime = _dayTime;
    m_dayTimeHasBeenSet = true;
}

bool LLMTokenTrendItem::DayTimeHasBeenSet() const
{
    return m_dayTimeHasBeenSet;
}

int64_t LLMTokenTrendItem::GetTokenUsage() const
{
    return m_tokenUsage;
}

void LLMTokenTrendItem::SetTokenUsage(const int64_t& _tokenUsage)
{
    m_tokenUsage = _tokenUsage;
    m_tokenUsageHasBeenSet = true;
}

bool LLMTokenTrendItem::TokenUsageHasBeenSet() const
{
    return m_tokenUsageHasBeenSet;
}

