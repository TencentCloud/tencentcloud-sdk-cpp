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

#include <tencentcloud/ocr/v20181119/model/ResultList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ResultList::ResultList() :
    m_questionHasBeenSet(false),
    m_optionHasBeenSet(false),
    m_figureHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_parseHasBeenSet(false),
    m_coordHasBeenSet(false)
{
}

CoreInternalOutcome ResultList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResultList.Question` is not array type"));

        const rapidjson::Value &tmpValue = value["Question"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Element item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_question.push_back(item);
        }
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("Option") && !value["Option"].IsNull())
    {
        if (!value["Option"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResultList.Option` is not array type"));

        const rapidjson::Value &tmpValue = value["Option"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Element item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_option.push_back(item);
        }
        m_optionHasBeenSet = true;
    }

    if (value.HasMember("Figure") && !value["Figure"].IsNull())
    {
        if (!value["Figure"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResultList.Figure` is not array type"));

        const rapidjson::Value &tmpValue = value["Figure"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Element item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_figure.push_back(item);
        }
        m_figureHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResultList.Table` is not array type"));

        const rapidjson::Value &tmpValue = value["Table"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Element item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_table.push_back(item);
        }
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResultList.Answer` is not array type"));

        const rapidjson::Value &tmpValue = value["Answer"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Element item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_answer.push_back(item);
        }
        m_answerHasBeenSet = true;
    }

    if (value.HasMember("Parse") && !value["Parse"].IsNull())
    {
        if (!value["Parse"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResultList.Parse` is not array type"));

        const rapidjson::Value &tmpValue = value["Parse"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Element item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_parse.push_back(item);
        }
        m_parseHasBeenSet = true;
    }

    if (value.HasMember("Coord") && !value["Coord"].IsNull())
    {
        if (!value["Coord"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResultList.Coord` is not array type"));

        const rapidjson::Value &tmpValue = value["Coord"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Polygon item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_coord.push_back(item);
        }
        m_coordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResultList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_question.begin(); itr != m_question.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_optionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Option";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_option.begin(); itr != m_option.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_figureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Figure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_figure.begin(); itr != m_figure.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_table.begin(); itr != m_table.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_answerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_answer.begin(); itr != m_answer.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_parseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parse.begin(); itr != m_parse.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_coordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_coord.begin(); itr != m_coord.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<Element> ResultList::GetQuestion() const
{
    return m_question;
}

void ResultList::SetQuestion(const vector<Element>& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool ResultList::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

vector<Element> ResultList::GetOption() const
{
    return m_option;
}

void ResultList::SetOption(const vector<Element>& _option)
{
    m_option = _option;
    m_optionHasBeenSet = true;
}

bool ResultList::OptionHasBeenSet() const
{
    return m_optionHasBeenSet;
}

vector<Element> ResultList::GetFigure() const
{
    return m_figure;
}

void ResultList::SetFigure(const vector<Element>& _figure)
{
    m_figure = _figure;
    m_figureHasBeenSet = true;
}

bool ResultList::FigureHasBeenSet() const
{
    return m_figureHasBeenSet;
}

vector<Element> ResultList::GetTable() const
{
    return m_table;
}

void ResultList::SetTable(const vector<Element>& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool ResultList::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

vector<Element> ResultList::GetAnswer() const
{
    return m_answer;
}

void ResultList::SetAnswer(const vector<Element>& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool ResultList::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

vector<Element> ResultList::GetParse() const
{
    return m_parse;
}

void ResultList::SetParse(const vector<Element>& _parse)
{
    m_parse = _parse;
    m_parseHasBeenSet = true;
}

bool ResultList::ParseHasBeenSet() const
{
    return m_parseHasBeenSet;
}

vector<Polygon> ResultList::GetCoord() const
{
    return m_coord;
}

void ResultList::SetCoord(const vector<Polygon>& _coord)
{
    m_coord = _coord;
    m_coordHasBeenSet = true;
}

bool ResultList::CoordHasBeenSet() const
{
    return m_coordHasBeenSet;
}

