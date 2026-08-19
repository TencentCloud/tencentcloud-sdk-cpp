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

#include <tencentcloud/csip/v20221121/model/AssetFilterOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetFilterOptions::AssetFilterOptions() :
    m_textHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_styleHasBeenSet(false)
{
}

CoreInternalOutcome AssetFilterOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetFilterOptions.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetFilterOptions.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Style") && !value["Style"].IsNull())
    {
        if (!value["Style"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetFilterOptions.Style` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_style = string(value["Style"].GetString());
        m_styleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetFilterOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_style.c_str(), allocator).Move(), allocator);
    }

}


string AssetFilterOptions::GetText() const
{
    return m_text;
}

void AssetFilterOptions::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool AssetFilterOptions::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string AssetFilterOptions::GetValue() const
{
    return m_value;
}

void AssetFilterOptions::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AssetFilterOptions::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string AssetFilterOptions::GetStyle() const
{
    return m_style;
}

void AssetFilterOptions::SetStyle(const string& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool AssetFilterOptions::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}

