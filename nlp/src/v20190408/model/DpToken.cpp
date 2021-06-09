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

#include <tencentcloud/nlp/v20190408/model/DpToken.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

DpToken::DpToken() :
    m_relationHasBeenSet(false),
    m_headIdHasBeenSet(false),
    m_wordHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome DpToken::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Relation") && !value["Relation"].IsNull())
    {
        if (!value["Relation"].IsString())
        {
            return CoreInternalOutcome(Error("response `DpToken.Relation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relation = string(value["Relation"].GetString());
        m_relationHasBeenSet = true;
    }

    if (value.HasMember("HeadId") && !value["HeadId"].IsNull())
    {
        if (!value["HeadId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DpToken.HeadId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_headId = value["HeadId"].GetUint64();
        m_headIdHasBeenSet = true;
    }

    if (value.HasMember("Word") && !value["Word"].IsNull())
    {
        if (!value["Word"].IsString())
        {
            return CoreInternalOutcome(Error("response `DpToken.Word` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_word = string(value["Word"].GetString());
        m_wordHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DpToken.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DpToken::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_relationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Relation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relation.c_str(), allocator).Move(), allocator);
    }

    if (m_headIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headId, allocator);
    }

    if (m_wordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Word";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_word.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

}


string DpToken::GetRelation() const
{
    return m_relation;
}

void DpToken::SetRelation(const string& _relation)
{
    m_relation = _relation;
    m_relationHasBeenSet = true;
}

bool DpToken::RelationHasBeenSet() const
{
    return m_relationHasBeenSet;
}

uint64_t DpToken::GetHeadId() const
{
    return m_headId;
}

void DpToken::SetHeadId(const uint64_t& _headId)
{
    m_headId = _headId;
    m_headIdHasBeenSet = true;
}

bool DpToken::HeadIdHasBeenSet() const
{
    return m_headIdHasBeenSet;
}

string DpToken::GetWord() const
{
    return m_word;
}

void DpToken::SetWord(const string& _word)
{
    m_word = _word;
    m_wordHasBeenSet = true;
}

bool DpToken::WordHasBeenSet() const
{
    return m_wordHasBeenSet;
}

uint64_t DpToken::GetId() const
{
    return m_id;
}

void DpToken::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DpToken::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

