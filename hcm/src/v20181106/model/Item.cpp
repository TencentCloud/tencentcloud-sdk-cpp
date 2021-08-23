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

#include <tencentcloud/hcm/v20181106/model/Item.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hcm::V20181106::Model;
using namespace std;

Item::Item() :
    m_itemHasBeenSet(false),
    m_itemStringHasBeenSet(false),
    m_itemCoordHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_expressionTypeHasBeenSet(false),
    m_itemConfHasBeenSet(false),
    m_questionIdHasBeenSet(false)
{
}

CoreInternalOutcome Item::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Item.Item` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_item = string(value["Item"].GetString());
        m_itemHasBeenSet = true;
    }

    if (value.HasMember("ItemString") && !value["ItemString"].IsNull())
    {
        if (!value["ItemString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Item.ItemString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemString = string(value["ItemString"].GetString());
        m_itemStringHasBeenSet = true;
    }

    if (value.HasMember("ItemCoord") && !value["ItemCoord"].IsNull())
    {
        if (!value["ItemCoord"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Item.ItemCoord` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_itemCoord.Deserialize(value["ItemCoord"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_itemCoordHasBeenSet = true;
    }

    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Item.Answer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answer = string(value["Answer"].GetString());
        m_answerHasBeenSet = true;
    }

    if (value.HasMember("ExpressionType") && !value["ExpressionType"].IsNull())
    {
        if (!value["ExpressionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Item.ExpressionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expressionType = string(value["ExpressionType"].GetString());
        m_expressionTypeHasBeenSet = true;
    }

    if (value.HasMember("ItemConf") && !value["ItemConf"].IsNull())
    {
        if (!value["ItemConf"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Item.ItemConf` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_itemConf = value["ItemConf"].GetDouble();
        m_itemConfHasBeenSet = true;
    }

    if (value.HasMember("QuestionId") && !value["QuestionId"].IsNull())
    {
        if (!value["QuestionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Item.QuestionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_questionId = string(value["QuestionId"].GetString());
        m_questionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Item::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_item.c_str(), allocator).Move(), allocator);
    }

    if (m_itemStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemString.c_str(), allocator).Move(), allocator);
    }

    if (m_itemCoordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCoord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_itemCoord.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_answerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_answer.c_str(), allocator).Move(), allocator);
    }

    if (m_expressionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpressionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expressionType.c_str(), allocator).Move(), allocator);
    }

    if (m_itemConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemConf, allocator);
    }

    if (m_questionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_questionId.c_str(), allocator).Move(), allocator);
    }

}


string Item::GetItem() const
{
    return m_item;
}

void Item::SetItem(const string& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool Item::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

string Item::GetItemString() const
{
    return m_itemString;
}

void Item::SetItemString(const string& _itemString)
{
    m_itemString = _itemString;
    m_itemStringHasBeenSet = true;
}

bool Item::ItemStringHasBeenSet() const
{
    return m_itemStringHasBeenSet;
}

ItemCoord Item::GetItemCoord() const
{
    return m_itemCoord;
}

void Item::SetItemCoord(const ItemCoord& _itemCoord)
{
    m_itemCoord = _itemCoord;
    m_itemCoordHasBeenSet = true;
}

bool Item::ItemCoordHasBeenSet() const
{
    return m_itemCoordHasBeenSet;
}

string Item::GetAnswer() const
{
    return m_answer;
}

void Item::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool Item::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

string Item::GetExpressionType() const
{
    return m_expressionType;
}

void Item::SetExpressionType(const string& _expressionType)
{
    m_expressionType = _expressionType;
    m_expressionTypeHasBeenSet = true;
}

bool Item::ExpressionTypeHasBeenSet() const
{
    return m_expressionTypeHasBeenSet;
}

double Item::GetItemConf() const
{
    return m_itemConf;
}

void Item::SetItemConf(const double& _itemConf)
{
    m_itemConf = _itemConf;
    m_itemConfHasBeenSet = true;
}

bool Item::ItemConfHasBeenSet() const
{
    return m_itemConfHasBeenSet;
}

string Item::GetQuestionId() const
{
    return m_questionId;
}

void Item::SetQuestionId(const string& _questionId)
{
    m_questionId = _questionId;
    m_questionIdHasBeenSet = true;
}

bool Item::QuestionIdHasBeenSet() const
{
    return m_questionIdHasBeenSet;
}

