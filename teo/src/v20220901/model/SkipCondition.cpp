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

#include <tencentcloud/teo/v20220901/model/SkipCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SkipCondition::SkipCondition() :
    m_typeHasBeenSet(false),
    m_selectorHasBeenSet(false),
    m_matchFromTypeHasBeenSet(false),
    m_matchFromHasBeenSet(false),
    m_matchContentTypeHasBeenSet(false),
    m_matchContentHasBeenSet(false)
{
}

CoreInternalOutcome SkipCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkipCondition.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Selector") && !value["Selector"].IsNull())
    {
        if (!value["Selector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkipCondition.Selector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selector = string(value["Selector"].GetString());
        m_selectorHasBeenSet = true;
    }

    if (value.HasMember("MatchFromType") && !value["MatchFromType"].IsNull())
    {
        if (!value["MatchFromType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkipCondition.MatchFromType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchFromType = string(value["MatchFromType"].GetString());
        m_matchFromTypeHasBeenSet = true;
    }

    if (value.HasMember("MatchFrom") && !value["MatchFrom"].IsNull())
    {
        if (!value["MatchFrom"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkipCondition.MatchFrom` is not array type"));

        const rapidjson::Value &tmpValue = value["MatchFrom"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_matchFrom.push_back((*itr).GetString());
        }
        m_matchFromHasBeenSet = true;
    }

    if (value.HasMember("MatchContentType") && !value["MatchContentType"].IsNull())
    {
        if (!value["MatchContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkipCondition.MatchContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchContentType = string(value["MatchContentType"].GetString());
        m_matchContentTypeHasBeenSet = true;
    }

    if (value.HasMember("MatchContent") && !value["MatchContent"].IsNull())
    {
        if (!value["MatchContent"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkipCondition.MatchContent` is not array type"));

        const rapidjson::Value &tmpValue = value["MatchContent"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_matchContent.push_back((*itr).GetString());
        }
        m_matchContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkipCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_selectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Selector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selector.c_str(), allocator).Move(), allocator);
    }

    if (m_matchFromTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchFromType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchFromType.c_str(), allocator).Move(), allocator);
    }

    if (m_matchFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_matchFrom.begin(); itr != m_matchFrom.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_matchContentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchContentType.c_str(), allocator).Move(), allocator);
    }

    if (m_matchContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_matchContent.begin(); itr != m_matchContent.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string SkipCondition::GetType() const
{
    return m_type;
}

void SkipCondition::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SkipCondition::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SkipCondition::GetSelector() const
{
    return m_selector;
}

void SkipCondition::SetSelector(const string& _selector)
{
    m_selector = _selector;
    m_selectorHasBeenSet = true;
}

bool SkipCondition::SelectorHasBeenSet() const
{
    return m_selectorHasBeenSet;
}

string SkipCondition::GetMatchFromType() const
{
    return m_matchFromType;
}

void SkipCondition::SetMatchFromType(const string& _matchFromType)
{
    m_matchFromType = _matchFromType;
    m_matchFromTypeHasBeenSet = true;
}

bool SkipCondition::MatchFromTypeHasBeenSet() const
{
    return m_matchFromTypeHasBeenSet;
}

vector<string> SkipCondition::GetMatchFrom() const
{
    return m_matchFrom;
}

void SkipCondition::SetMatchFrom(const vector<string>& _matchFrom)
{
    m_matchFrom = _matchFrom;
    m_matchFromHasBeenSet = true;
}

bool SkipCondition::MatchFromHasBeenSet() const
{
    return m_matchFromHasBeenSet;
}

string SkipCondition::GetMatchContentType() const
{
    return m_matchContentType;
}

void SkipCondition::SetMatchContentType(const string& _matchContentType)
{
    m_matchContentType = _matchContentType;
    m_matchContentTypeHasBeenSet = true;
}

bool SkipCondition::MatchContentTypeHasBeenSet() const
{
    return m_matchContentTypeHasBeenSet;
}

vector<string> SkipCondition::GetMatchContent() const
{
    return m_matchContent;
}

void SkipCondition::SetMatchContent(const vector<string>& _matchContent)
{
    m_matchContent = _matchContent;
    m_matchContentHasBeenSet = true;
}

bool SkipCondition::MatchContentHasBeenSet() const
{
    return m_matchContentHasBeenSet;
}

