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

#include <tencentcloud/adp/v20260520/model/SimilarQuestionStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SimilarQuestionStat::SimilarQuestionStat() :
    m_similarQuestionCountHasBeenSet(false),
    m_similarQuestionTipsHasBeenSet(false)
{
}

CoreInternalOutcome SimilarQuestionStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SimilarQuestionCount") && !value["SimilarQuestionCount"].IsNull())
    {
        if (!value["SimilarQuestionCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SimilarQuestionStat.SimilarQuestionCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_similarQuestionCount = value["SimilarQuestionCount"].GetUint64();
        m_similarQuestionCountHasBeenSet = true;
    }

    if (value.HasMember("SimilarQuestionTips") && !value["SimilarQuestionTips"].IsNull())
    {
        if (!value["SimilarQuestionTips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimilarQuestionStat.SimilarQuestionTips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_similarQuestionTips = string(value["SimilarQuestionTips"].GetString());
        m_similarQuestionTipsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SimilarQuestionStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_similarQuestionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimilarQuestionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_similarQuestionCount, allocator);
    }

    if (m_similarQuestionTipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimilarQuestionTips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_similarQuestionTips.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SimilarQuestionStat::GetSimilarQuestionCount() const
{
    return m_similarQuestionCount;
}

void SimilarQuestionStat::SetSimilarQuestionCount(const uint64_t& _similarQuestionCount)
{
    m_similarQuestionCount = _similarQuestionCount;
    m_similarQuestionCountHasBeenSet = true;
}

bool SimilarQuestionStat::SimilarQuestionCountHasBeenSet() const
{
    return m_similarQuestionCountHasBeenSet;
}

string SimilarQuestionStat::GetSimilarQuestionTips() const
{
    return m_similarQuestionTips;
}

void SimilarQuestionStat::SetSimilarQuestionTips(const string& _similarQuestionTips)
{
    m_similarQuestionTips = _similarQuestionTips;
    m_similarQuestionTipsHasBeenSet = true;
}

bool SimilarQuestionStat::SimilarQuestionTipsHasBeenSet() const
{
    return m_similarQuestionTipsHasBeenSet;
}

