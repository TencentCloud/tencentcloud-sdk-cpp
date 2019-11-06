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

#include <tencentcloud/nlp/v20190408/model/EvilToken.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace rapidjson;
using namespace std;

EvilToken::EvilToken() :
    m_evilFlagHasBeenSet(false),
    m_evilKeywordsHasBeenSet(false),
    m_evilTypeHasBeenSet(false)
{
}

CoreInternalOutcome EvilToken::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("EvilFlag") && !value["EvilFlag"].IsNull())
    {
        if (!value["EvilFlag"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EvilToken.EvilFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_evilFlag = value["EvilFlag"].GetUint64();
        m_evilFlagHasBeenSet = true;
    }

    if (value.HasMember("EvilKeywords") && !value["EvilKeywords"].IsNull())
    {
        if (!value["EvilKeywords"].IsArray())
            return CoreInternalOutcome(Error("response `EvilToken.EvilKeywords` is not array type"));

        const Value &tmpValue = value["EvilKeywords"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_evilKeywords.push_back((*itr).GetString());
        }
        m_evilKeywordsHasBeenSet = true;
    }

    if (value.HasMember("EvilType") && !value["EvilType"].IsNull())
    {
        if (!value["EvilType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EvilToken.EvilType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = value["EvilType"].GetUint64();
        m_evilTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EvilToken::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_evilFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvilFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilFlag, allocator);
    }

    if (m_evilKeywordsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvilKeywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_evilKeywords.begin(); itr != m_evilKeywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_evilTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilType, allocator);
    }

}


uint64_t EvilToken::GetEvilFlag() const
{
    return m_evilFlag;
}

void EvilToken::SetEvilFlag(const uint64_t& _evilFlag)
{
    m_evilFlag = _evilFlag;
    m_evilFlagHasBeenSet = true;
}

bool EvilToken::EvilFlagHasBeenSet() const
{
    return m_evilFlagHasBeenSet;
}

vector<string> EvilToken::GetEvilKeywords() const
{
    return m_evilKeywords;
}

void EvilToken::SetEvilKeywords(const vector<string>& _evilKeywords)
{
    m_evilKeywords = _evilKeywords;
    m_evilKeywordsHasBeenSet = true;
}

bool EvilToken::EvilKeywordsHasBeenSet() const
{
    return m_evilKeywordsHasBeenSet;
}

uint64_t EvilToken::GetEvilType() const
{
    return m_evilType;
}

void EvilToken::SetEvilType(const uint64_t& _evilType)
{
    m_evilType = _evilType;
    m_evilTypeHasBeenSet = true;
}

bool EvilToken::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

