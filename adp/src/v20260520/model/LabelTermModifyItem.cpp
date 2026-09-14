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

#include <tencentcloud/adp/v20260520/model/LabelTermModifyItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

LabelTermModifyItem::LabelTermModifyItem() :
    m_modifyActionHasBeenSet(false),
    m_synonymListHasBeenSet(false),
    m_termHasBeenSet(false),
    m_termIdHasBeenSet(false)
{
}

CoreInternalOutcome LabelTermModifyItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModifyAction") && !value["ModifyAction"].IsNull())
    {
        if (!value["ModifyAction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LabelTermModifyItem.ModifyAction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyAction = value["ModifyAction"].GetInt64();
        m_modifyActionHasBeenSet = true;
    }

    if (value.HasMember("SynonymList") && !value["SynonymList"].IsNull())
    {
        if (!value["SynonymList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LabelTermModifyItem.SynonymList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `LabelTermModifyItem.Term` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_term = string(value["Term"].GetString());
        m_termHasBeenSet = true;
    }

    if (value.HasMember("TermId") && !value["TermId"].IsNull())
    {
        if (!value["TermId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelTermModifyItem.TermId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_termId = string(value["TermId"].GetString());
        m_termIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LabelTermModifyItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modifyActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyAction, allocator);
    }

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


int64_t LabelTermModifyItem::GetModifyAction() const
{
    return m_modifyAction;
}

void LabelTermModifyItem::SetModifyAction(const int64_t& _modifyAction)
{
    m_modifyAction = _modifyAction;
    m_modifyActionHasBeenSet = true;
}

bool LabelTermModifyItem::ModifyActionHasBeenSet() const
{
    return m_modifyActionHasBeenSet;
}

vector<string> LabelTermModifyItem::GetSynonymList() const
{
    return m_synonymList;
}

void LabelTermModifyItem::SetSynonymList(const vector<string>& _synonymList)
{
    m_synonymList = _synonymList;
    m_synonymListHasBeenSet = true;
}

bool LabelTermModifyItem::SynonymListHasBeenSet() const
{
    return m_synonymListHasBeenSet;
}

string LabelTermModifyItem::GetTerm() const
{
    return m_term;
}

void LabelTermModifyItem::SetTerm(const string& _term)
{
    m_term = _term;
    m_termHasBeenSet = true;
}

bool LabelTermModifyItem::TermHasBeenSet() const
{
    return m_termHasBeenSet;
}

string LabelTermModifyItem::GetTermId() const
{
    return m_termId;
}

void LabelTermModifyItem::SetTermId(const string& _termId)
{
    m_termId = _termId;
    m_termIdHasBeenSet = true;
}

bool LabelTermModifyItem::TermIdHasBeenSet() const
{
    return m_termIdHasBeenSet;
}

