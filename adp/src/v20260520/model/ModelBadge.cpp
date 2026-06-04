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

#include <tencentcloud/adp/v20260520/model/ModelBadge.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModelBadge::ModelBadge() :
    m_textHasBeenSet(false),
    m_themeHasBeenSet(false),
    m_tipsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome ModelBadge::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelBadge.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Theme") && !value["Theme"].IsNull())
    {
        if (!value["Theme"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelBadge.Theme` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_theme = value["Theme"].GetInt64();
        m_themeHasBeenSet = true;
    }

    if (value.HasMember("Tips") && !value["Tips"].IsNull())
    {
        if (!value["Tips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelBadge.Tips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tips = string(value["Tips"].GetString());
        m_tipsHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelBadge.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelBadge::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_themeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Theme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_theme, allocator);
    }

    if (m_tipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tips.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


string ModelBadge::GetText() const
{
    return m_text;
}

void ModelBadge::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ModelBadge::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

int64_t ModelBadge::GetTheme() const
{
    return m_theme;
}

void ModelBadge::SetTheme(const int64_t& _theme)
{
    m_theme = _theme;
    m_themeHasBeenSet = true;
}

bool ModelBadge::ThemeHasBeenSet() const
{
    return m_themeHasBeenSet;
}

string ModelBadge::GetTips() const
{
    return m_tips;
}

void ModelBadge::SetTips(const string& _tips)
{
    m_tips = _tips;
    m_tipsHasBeenSet = true;
}

bool ModelBadge::TipsHasBeenSet() const
{
    return m_tipsHasBeenSet;
}

int64_t ModelBadge::GetType() const
{
    return m_type;
}

void ModelBadge::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModelBadge::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

