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

#include <tencentcloud/tione/v20211111/model/TextLabelDistributionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

TextLabelDistributionInfo::TextLabelDistributionInfo() :
    m_themeHasBeenSet(false),
    m_classLabelListHasBeenSet(false)
{
}

CoreInternalOutcome TextLabelDistributionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Theme") && !value["Theme"].IsNull())
    {
        if (!value["Theme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextLabelDistributionInfo.Theme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_theme = string(value["Theme"].GetString());
        m_themeHasBeenSet = true;
    }

    if (value.HasMember("ClassLabelList") && !value["ClassLabelList"].IsNull())
    {
        if (!value["ClassLabelList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TextLabelDistributionInfo.ClassLabelList` is not array type"));

        const rapidjson::Value &tmpValue = value["ClassLabelList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TextLabelDistributionDetailInfoFirstClass item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_classLabelList.push_back(item);
        }
        m_classLabelListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextLabelDistributionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_themeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Theme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_theme.c_str(), allocator).Move(), allocator);
    }

    if (m_classLabelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassLabelList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_classLabelList.begin(); itr != m_classLabelList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TextLabelDistributionInfo::GetTheme() const
{
    return m_theme;
}

void TextLabelDistributionInfo::SetTheme(const string& _theme)
{
    m_theme = _theme;
    m_themeHasBeenSet = true;
}

bool TextLabelDistributionInfo::ThemeHasBeenSet() const
{
    return m_themeHasBeenSet;
}

vector<TextLabelDistributionDetailInfoFirstClass> TextLabelDistributionInfo::GetClassLabelList() const
{
    return m_classLabelList;
}

void TextLabelDistributionInfo::SetClassLabelList(const vector<TextLabelDistributionDetailInfoFirstClass>& _classLabelList)
{
    m_classLabelList = _classLabelList;
    m_classLabelListHasBeenSet = true;
}

bool TextLabelDistributionInfo::ClassLabelListHasBeenSet() const
{
    return m_classLabelListHasBeenSet;
}

