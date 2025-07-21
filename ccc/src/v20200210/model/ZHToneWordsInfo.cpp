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

#include <tencentcloud/ccc/v20200210/model/ZHToneWordsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

ZHToneWordsInfo::ZHToneWordsInfo() :
    m_neutralHasBeenSet(false),
    m_positiveHasBeenSet(false),
    m_negativeHasBeenSet(false)
{
}

CoreInternalOutcome ZHToneWordsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Neutral") && !value["Neutral"].IsNull())
    {
        if (!value["Neutral"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZHToneWordsInfo.Neutral` is not array type"));

        const rapidjson::Value &tmpValue = value["Neutral"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_neutral.push_back((*itr).GetString());
        }
        m_neutralHasBeenSet = true;
    }

    if (value.HasMember("Positive") && !value["Positive"].IsNull())
    {
        if (!value["Positive"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZHToneWordsInfo.Positive` is not array type"));

        const rapidjson::Value &tmpValue = value["Positive"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_positive.push_back((*itr).GetString());
        }
        m_positiveHasBeenSet = true;
    }

    if (value.HasMember("Negative") && !value["Negative"].IsNull())
    {
        if (!value["Negative"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZHToneWordsInfo.Negative` is not array type"));

        const rapidjson::Value &tmpValue = value["Negative"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_negative.push_back((*itr).GetString());
        }
        m_negativeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZHToneWordsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_neutralHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Neutral";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_neutral.begin(); itr != m_neutral.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_positiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Positive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_positive.begin(); itr != m_positive.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_negativeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Negative";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_negative.begin(); itr != m_negative.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> ZHToneWordsInfo::GetNeutral() const
{
    return m_neutral;
}

void ZHToneWordsInfo::SetNeutral(const vector<string>& _neutral)
{
    m_neutral = _neutral;
    m_neutralHasBeenSet = true;
}

bool ZHToneWordsInfo::NeutralHasBeenSet() const
{
    return m_neutralHasBeenSet;
}

vector<string> ZHToneWordsInfo::GetPositive() const
{
    return m_positive;
}

void ZHToneWordsInfo::SetPositive(const vector<string>& _positive)
{
    m_positive = _positive;
    m_positiveHasBeenSet = true;
}

bool ZHToneWordsInfo::PositiveHasBeenSet() const
{
    return m_positiveHasBeenSet;
}

vector<string> ZHToneWordsInfo::GetNegative() const
{
    return m_negative;
}

void ZHToneWordsInfo::SetNegative(const vector<string>& _negative)
{
    m_negative = _negative;
    m_negativeHasBeenSet = true;
}

bool ZHToneWordsInfo::NegativeHasBeenSet() const
{
    return m_negativeHasBeenSet;
}

