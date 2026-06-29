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

#include <tencentcloud/mps/v20190612/model/RecipeItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

RecipeItem::RecipeItem() :
    m_themeHasBeenSet(false),
    m_numHasBeenSet(false)
{
}

CoreInternalOutcome RecipeItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Theme") && !value["Theme"].IsNull())
    {
        if (!value["Theme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecipeItem.Theme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_theme = string(value["Theme"].GetString());
        m_themeHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecipeItem.Num` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetInt64();
        m_numHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecipeItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_themeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Theme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_theme.c_str(), allocator).Move(), allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

}


string RecipeItem::GetTheme() const
{
    return m_theme;
}

void RecipeItem::SetTheme(const string& _theme)
{
    m_theme = _theme;
    m_themeHasBeenSet = true;
}

bool RecipeItem::ThemeHasBeenSet() const
{
    return m_themeHasBeenSet;
}

int64_t RecipeItem::GetNum() const
{
    return m_num;
}

void RecipeItem::SetNum(const int64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool RecipeItem::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

