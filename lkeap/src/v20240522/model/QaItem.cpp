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

#include <tencentcloud/lkeap/v20240522/model/QaItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

QaItem::QaItem() :
    m_qaIdHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_attributeLabelsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome QaItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QaId") && !value["QaId"].IsNull())
    {
        if (!value["QaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QaItem.QaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qaId = string(value["QaId"].GetString());
        m_qaIdHasBeenSet = true;
    }

    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QaItem.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QaItem.Answer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answer = string(value["Answer"].GetString());
        m_answerHasBeenSet = true;
    }

    if (value.HasMember("AttributeLabels") && !value["AttributeLabels"].IsNull())
    {
        if (!value["AttributeLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QaItem.AttributeLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["AttributeLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttributeLabelReferItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attributeLabels.push_back(item);
        }
        m_attributeLabelsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QaItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QaItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QaItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qaId.c_str(), allocator).Move(), allocator);
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_answerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_answer.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attributeLabels.begin(); itr != m_attributeLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string QaItem::GetQaId() const
{
    return m_qaId;
}

void QaItem::SetQaId(const string& _qaId)
{
    m_qaId = _qaId;
    m_qaIdHasBeenSet = true;
}

bool QaItem::QaIdHasBeenSet() const
{
    return m_qaIdHasBeenSet;
}

string QaItem::GetQuestion() const
{
    return m_question;
}

void QaItem::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool QaItem::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string QaItem::GetAnswer() const
{
    return m_answer;
}

void QaItem::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool QaItem::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

vector<AttributeLabelReferItem> QaItem::GetAttributeLabels() const
{
    return m_attributeLabels;
}

void QaItem::SetAttributeLabels(const vector<AttributeLabelReferItem>& _attributeLabels)
{
    m_attributeLabels = _attributeLabels;
    m_attributeLabelsHasBeenSet = true;
}

bool QaItem::AttributeLabelsHasBeenSet() const
{
    return m_attributeLabelsHasBeenSet;
}

string QaItem::GetCreateTime() const
{
    return m_createTime;
}

void QaItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool QaItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string QaItem::GetUpdateTime() const
{
    return m_updateTime;
}

void QaItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool QaItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

