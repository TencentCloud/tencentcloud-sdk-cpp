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

#include <tencentcloud/adp/v20260520/model/LabelTerm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

LabelTerm::LabelTerm() :
    m_synonymListHasBeenSet(false),
    m_termHasBeenSet(false),
    m_termIdHasBeenSet(false)
{
}

CoreInternalOutcome LabelTerm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SynonymList") && !value["SynonymList"].IsNull())
    {
        if (!value["SynonymList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LabelTerm.SynonymList` is not array type"));

        const rapidjson::Value &tmpValue = value["SynonymList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_synonymList.push_back((*itr).GetString());
        }
        m_synonymListHasBeenSet = true;
    }

    if (value.HasMember("Term") && !value["Term"].IsNull())
    {
        if (!value["Term"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelTerm.Term` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_term = string(value["Term"].GetString());
        m_termHasBeenSet = true;
    }

    if (value.HasMember("TermId") && !value["TermId"].IsNull())
    {
        if (!value["TermId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelTerm.TermId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_termId = string(value["TermId"].GetString());
        m_termIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LabelTerm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_synonymListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SynonymList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_synonymList.begin(); itr != m_synonymList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_termHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Term";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_term.c_str(), allocator).Move(), allocator);
    }

    if (m_termIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TermId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_termId.c_str(), allocator).Move(), allocator);
    }

}


vector<string> LabelTerm::GetSynonymList() const
{
    return m_synonymList;
}

void LabelTerm::SetSynonymList(const vector<string>& _synonymList)
{
    m_synonymList = _synonymList;
    m_synonymListHasBeenSet = true;
}

bool LabelTerm::SynonymListHasBeenSet() const
{
    return m_synonymListHasBeenSet;
}

string LabelTerm::GetTerm() const
{
    return m_term;
}

void LabelTerm::SetTerm(const string& _term)
{
    m_term = _term;
    m_termHasBeenSet = true;
}

bool LabelTerm::TermHasBeenSet() const
{
    return m_termHasBeenSet;
}

string LabelTerm::GetTermId() const
{
    return m_termId;
}

void LabelTerm::SetTermId(const string& _termId)
{
    m_termId = _termId;
    m_termIdHasBeenSet = true;
}

bool LabelTerm::TermIdHasBeenSet() const
{
    return m_termIdHasBeenSet;
}

