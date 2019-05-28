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

#include <tencentcloud/cms/v20190321/model/TextData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

TextData::TextData() :
    m_evilFlagHasBeenSet(false),
    m_evilTypeHasBeenSet(false),
    m_keywordsHasBeenSet(false)
{
}

CoreInternalOutcome TextData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("EvilFlag") && !value["EvilFlag"].IsNull())
    {
        if (!value["EvilFlag"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TextData.EvilFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilFlag = value["EvilFlag"].GetInt64();
        m_evilFlagHasBeenSet = true;
    }

    if (value.HasMember("EvilType") && !value["EvilType"].IsNull())
    {
        if (!value["EvilType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TextData.EvilType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = value["EvilType"].GetInt64();
        m_evilTypeHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Error("response `TextData.Keywords` is not array type"));

        const Value &tmpValue = value["Keywords"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_evilFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvilFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilFlag, allocator);
    }

    if (m_evilTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilType, allocator);
    }

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

}


int64_t TextData::GetEvilFlag() const
{
    return m_evilFlag;
}

void TextData::SetEvilFlag(const int64_t& _evilFlag)
{
    m_evilFlag = _evilFlag;
    m_evilFlagHasBeenSet = true;
}

bool TextData::EvilFlagHasBeenSet() const
{
    return m_evilFlagHasBeenSet;
}

int64_t TextData::GetEvilType() const
{
    return m_evilType;
}

void TextData::SetEvilType(const int64_t& _evilType)
{
    m_evilType = _evilType;
    m_evilTypeHasBeenSet = true;
}

bool TextData::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

vector<string> TextData::GetKeywords() const
{
    return m_keywords;
}

void TextData::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool TextData::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

