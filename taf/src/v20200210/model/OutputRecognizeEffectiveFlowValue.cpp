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

#include <tencentcloud/taf/v20200210/model/OutputRecognizeEffectiveFlowValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace rapidjson;
using namespace std;

OutputRecognizeEffectiveFlowValue::OutputRecognizeEffectiveFlowValue() :
    m_lableHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

CoreInternalOutcome OutputRecognizeEffectiveFlowValue::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Lable") && !value["Lable"].IsNull())
    {
        if (!value["Lable"].IsString())
        {
            return CoreInternalOutcome(Error("response `OutputRecognizeEffectiveFlowValue.Lable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lable = string(value["Lable"].GetString());
        m_lableHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `OutputRecognizeEffectiveFlowValue.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputRecognizeEffectiveFlowValue::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_lableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Lable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lable.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

}


string OutputRecognizeEffectiveFlowValue::GetLable() const
{
    return m_lable;
}

void OutputRecognizeEffectiveFlowValue::SetLable(const string& _lable)
{
    m_lable = _lable;
    m_lableHasBeenSet = true;
}

bool OutputRecognizeEffectiveFlowValue::LableHasBeenSet() const
{
    return m_lableHasBeenSet;
}

double OutputRecognizeEffectiveFlowValue::GetScore() const
{
    return m_score;
}

void OutputRecognizeEffectiveFlowValue::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool OutputRecognizeEffectiveFlowValue::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

