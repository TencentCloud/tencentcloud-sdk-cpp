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
using namespace rapidjson;
using namespace std;

RiskDetails::RiskDetails() :
    m_keywordsHasBeenSet(false),
    m_lableHasBeenSet(false),
    m_levelHasBeenSet(false)
{
}

CoreInternalOutcome RiskDetails::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Error("response `RiskDetails.Keywords` is not array type"));

        const Value &tmpValue = value["Keywords"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("Lable") && !value["Lable"].IsNull())
    {
        if (!value["Lable"].IsString())
        {
            return CoreInternalOutcome(Error("response `RiskDetails.Lable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lable = string(value["Lable"].GetString());
        m_lableHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RiskDetails.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskDetails::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_keywordsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Lable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lable.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        Value iKey(kStringType);
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

