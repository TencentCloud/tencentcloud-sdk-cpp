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

#include <tencentcloud/ses/v20201002/model/Simple.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

Simple::Simple() :
    m_htmlHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

CoreInternalOutcome Simple::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Html") && !value["Html"].IsNull())
    {
        if (!value["Html"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Simple.Html` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_html = string(value["Html"].GetString());
        m_htmlHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Simple.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Simple::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_htmlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Html";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_html.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

}


string Simple::GetHtml() const
{
    return m_html;
}

void Simple::SetHtml(const string& _html)
{
    m_html = _html;
    m_htmlHasBeenSet = true;
}

bool Simple::HtmlHasBeenSet() const
{
    return m_htmlHasBeenSet;
}

string Simple::GetText() const
{
    return m_text;
}

void Simple::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool Simple::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

