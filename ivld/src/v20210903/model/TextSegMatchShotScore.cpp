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

#include <tencentcloud/ivld/v20210903/model/TextSegMatchShotScore.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

TextSegMatchShotScore::TextSegMatchShotScore() :
    m_scoreSetHasBeenSet(false)
{
}

CoreInternalOutcome TextSegMatchShotScore::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScoreSet") && !value["ScoreSet"].IsNull())
    {
        if (!value["ScoreSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TextSegMatchShotScore.ScoreSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ScoreSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scoreSet.push_back((*itr).GetDouble());
        }
        m_scoreSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextSegMatchShotScore::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scoreSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScoreSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scoreSet.begin(); itr != m_scoreSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

}


vector<double> TextSegMatchShotScore::GetScoreSet() const
{
    return m_scoreSet;
}

void TextSegMatchShotScore::SetScoreSet(const vector<double>& _scoreSet)
{
    m_scoreSet = _scoreSet;
    m_scoreSetHasBeenSet = true;
}

bool TextSegMatchShotScore::ScoreSetHasBeenSet() const
{
    return m_scoreSetHasBeenSet;
}

