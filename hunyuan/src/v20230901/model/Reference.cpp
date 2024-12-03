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

#include <tencentcloud/hunyuan/v20230901/model/Reference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

Reference::Reference() :
    m_typeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_translationHasBeenSet(false)
{
}

CoreInternalOutcome Reference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reference.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reference.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Translation") && !value["Translation"].IsNull())
    {
        if (!value["Translation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reference.Translation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translation = string(value["Translation"].GetString());
        m_translationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Reference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_translationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Translation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translation.c_str(), allocator).Move(), allocator);
    }

}


string Reference::GetType() const
{
    return m_type;
}

void Reference::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Reference::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Reference::GetText() const
{
    return m_text;
}

void Reference::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool Reference::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string Reference::GetTranslation() const
{
    return m_translation;
}

void Reference::SetTranslation(const string& _translation)
{
    m_translation = _translation;
    m_translationHasBeenSet = true;
}

bool Reference::TranslationHasBeenSet() const
{
    return m_translationHasBeenSet;
}

