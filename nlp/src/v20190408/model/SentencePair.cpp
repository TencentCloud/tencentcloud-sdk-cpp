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

#include <tencentcloud/nlp/v20190408/model/SentencePair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

SentencePair::SentencePair() :
    m_sourceTextHasBeenSet(false),
    m_targetTextHasBeenSet(false)
{
}

CoreInternalOutcome SentencePair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceText") && !value["SourceText"].IsNull())
    {
        if (!value["SourceText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SentencePair.SourceText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceText = string(value["SourceText"].GetString());
        m_sourceTextHasBeenSet = true;
    }

    if (value.HasMember("TargetText") && !value["TargetText"].IsNull())
    {
        if (!value["TargetText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SentencePair.TargetText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetText = string(value["TargetText"].GetString());
        m_targetTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SentencePair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceText.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetText.c_str(), allocator).Move(), allocator);
    }

}


string SentencePair::GetSourceText() const
{
    return m_sourceText;
}

void SentencePair::SetSourceText(const string& _sourceText)
{
    m_sourceText = _sourceText;
    m_sourceTextHasBeenSet = true;
}

bool SentencePair::SourceTextHasBeenSet() const
{
    return m_sourceTextHasBeenSet;
}

string SentencePair::GetTargetText() const
{
    return m_targetText;
}

void SentencePair::SetTargetText(const string& _targetText)
{
    m_targetText = _targetText;
    m_targetTextHasBeenSet = true;
}

bool SentencePair::TargetTextHasBeenSet() const
{
    return m_targetTextHasBeenSet;
}

