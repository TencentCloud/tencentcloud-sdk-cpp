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

#include <tencentcloud/nlp/v20190408/model/Embellish.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

Embellish::Embellish() :
    m_textHasBeenSet(false),
    m_embellishTypeHasBeenSet(false)
{
}

CoreInternalOutcome Embellish::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Embellish.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("EmbellishType") && !value["EmbellishType"].IsNull())
    {
        if (!value["EmbellishType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Embellish.EmbellishType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_embellishType = string(value["EmbellishType"].GetString());
        m_embellishTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Embellish::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_embellishTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmbellishType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_embellishType.c_str(), allocator).Move(), allocator);
    }

}


string Embellish::GetText() const
{
    return m_text;
}

void Embellish::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool Embellish::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string Embellish::GetEmbellishType() const
{
    return m_embellishType;
}

void Embellish::SetEmbellishType(const string& _embellishType)
{
    m_embellishType = _embellishType;
    m_embellishTypeHasBeenSet = true;
}

bool Embellish::EmbellishTypeHasBeenSet() const
{
    return m_embellishTypeHasBeenSet;
}

