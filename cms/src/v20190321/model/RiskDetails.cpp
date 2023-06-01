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

#include <tencentcloud/cms/v20190321/model/RiskDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

RiskDetails::RiskDetails() :
    m_keywordsHasBeenSet(false),
    m_lableHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_levelHasBeenSet(false)
{
}

CoreInternalOutcome RiskDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskDetails.Keywords` is not array type"));

        const rapidjson::Value &tmpValue = value["Keywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("Lable") && !value["Lable"].IsNull())
    {
        if (!value["Lable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetails.Lable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lable = string(value["Lable"].GetString());
        m_lableHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetails.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetails.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lable.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

}


vector<string> RiskDetails::GetKeywords() const
{
    return m_keywords;
}

void RiskDetails::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool RiskDetails::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

string RiskDetails::GetLable() const
{
    return m_lable;
}

void RiskDetails::SetLable(const string& _lable)
{
    m_lable = _lable;
    m_lableHasBeenSet = true;
}

bool RiskDetails::LableHasBeenSet() const
{
    return m_lableHasBeenSet;
}

string RiskDetails::GetLabel() const
{
    return m_label;
}

void RiskDetails::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool RiskDetails::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

int64_t RiskDetails::GetLevel() const
{
    return m_level;
}

void RiskDetails::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool RiskDetails::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

