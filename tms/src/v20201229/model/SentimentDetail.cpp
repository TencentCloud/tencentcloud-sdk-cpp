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

#include <tencentcloud/tms/v20201229/model/SentimentDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tms::V20201229::Model;
using namespace std;

SentimentDetail::SentimentDetail() :
    m_positiveHasBeenSet(false),
    m_negativeHasBeenSet(false)
{
}

CoreInternalOutcome SentimentDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Positive") && !value["Positive"].IsNull())
    {
        if (!value["Positive"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SentimentDetail.Positive` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_positive = value["Positive"].GetInt64();
        m_positiveHasBeenSet = true;
    }

    if (value.HasMember("Negative") && !value["Negative"].IsNull())
    {
        if (!value["Negative"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SentimentDetail.Negative` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_negative = value["Negative"].GetInt64();
        m_negativeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SentimentDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_positiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Positive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_positive, allocator);
    }

    if (m_negativeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Negative";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_negative, allocator);
    }

}


int64_t SentimentDetail::GetPositive() const
{
    return m_positive;
}

void SentimentDetail::SetPositive(const int64_t& _positive)
{
    m_positive = _positive;
    m_positiveHasBeenSet = true;
}

bool SentimentDetail::PositiveHasBeenSet() const
{
    return m_positiveHasBeenSet;
}

int64_t SentimentDetail::GetNegative() const
{
    return m_negative;
}

void SentimentDetail::SetNegative(const int64_t& _negative)
{
    m_negative = _negative;
    m_negativeHasBeenSet = true;
}

bool SentimentDetail::NegativeHasBeenSet() const
{
    return m_negativeHasBeenSet;
}

