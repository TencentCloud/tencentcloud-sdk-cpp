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

#include <tencentcloud/lkeap/v20240522/model/RetrievalSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

RetrievalSetting::RetrievalSetting() :
    m_typeHasBeenSet(false),
    m_topKHasBeenSet(false),
    m_scoreThresholdHasBeenSet(false)
{
}

CoreInternalOutcome RetrievalSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetrievalSetting.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TopK") && !value["TopK"].IsNull())
    {
        if (!value["TopK"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetrievalSetting.TopK` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topK = value["TopK"].GetInt64();
        m_topKHasBeenSet = true;
    }

    if (value.HasMember("ScoreThreshold") && !value["ScoreThreshold"].IsNull())
    {
        if (!value["ScoreThreshold"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RetrievalSetting.ScoreThreshold` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_scoreThreshold = value["ScoreThreshold"].GetDouble();
        m_scoreThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RetrievalSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_topKHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopK";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topK, allocator);
    }

    if (m_scoreThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScoreThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scoreThreshold, allocator);
    }

}


string RetrievalSetting::GetType() const
{
    return m_type;
}

void RetrievalSetting::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RetrievalSetting::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t RetrievalSetting::GetTopK() const
{
    return m_topK;
}

void RetrievalSetting::SetTopK(const int64_t& _topK)
{
    m_topK = _topK;
    m_topKHasBeenSet = true;
}

bool RetrievalSetting::TopKHasBeenSet() const
{
    return m_topKHasBeenSet;
}

double RetrievalSetting::GetScoreThreshold() const
{
    return m_scoreThreshold;
}

void RetrievalSetting::SetScoreThreshold(const double& _scoreThreshold)
{
    m_scoreThreshold = _scoreThreshold;
    m_scoreThresholdHasBeenSet = true;
}

bool RetrievalSetting::ScoreThresholdHasBeenSet() const
{
    return m_scoreThresholdHasBeenSet;
}

