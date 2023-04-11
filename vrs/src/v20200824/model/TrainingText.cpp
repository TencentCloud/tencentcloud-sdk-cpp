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

#include <tencentcloud/vrs/v20200824/model/TrainingText.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vrs::V20200824::Model;
using namespace std;

TrainingText::TrainingText() :
    m_textIdHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

CoreInternalOutcome TrainingText::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TextId") && !value["TextId"].IsNull())
    {
        if (!value["TextId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingText.TextId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textId = string(value["TextId"].GetString());
        m_textIdHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingText.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrainingText::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_textId.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

}


string TrainingText::GetTextId() const
{
    return m_textId;
}

void TrainingText::SetTextId(const string& _textId)
{
    m_textId = _textId;
    m_textIdHasBeenSet = true;
}

bool TrainingText::TextIdHasBeenSet() const
{
    return m_textIdHasBeenSet;
}

string TrainingText::GetText() const
{
    return m_text;
}

void TrainingText::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool TrainingText::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

