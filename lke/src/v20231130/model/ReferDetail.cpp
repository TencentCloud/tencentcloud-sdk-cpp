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

#include <tencentcloud/lke/v20231130/model/ReferDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ReferDetail::ReferDetail() :
    m_referBizIdHasBeenSet(false),
    m_docTypeHasBeenSet(false),
    m_docNameHasBeenSet(false),
    m_pageContentHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_markHasBeenSet(false),
    m_highlightsHasBeenSet(false),
    m_orgDataHasBeenSet(false),
    m_pageInfosHasBeenSet(false),
    m_sheetInfosHasBeenSet(false),
    m_docBizIdHasBeenSet(false),
    m_knowledgeBizIdHasBeenSet(false)
{
}

CoreInternalOutcome ReferDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReferBizId") && !value["ReferBizId"].IsNull())
    {
        if (!value["ReferBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferDetail.ReferBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referBizId = string(value["ReferBizId"].GetString());
        m_referBizIdHasBeenSet = true;
    }

    if (value.HasMember("DocType") && !value["DocType"].IsNull())
    {
        if (!value["DocType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReferDetail.DocType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_docType = value["DocType"].GetUint64();
        m_docTypeHasBeenSet = true;
    }

    if (value.HasMember("DocName") && !value["DocName"].IsNull())
    {
        if (!value["DocName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferDetail.DocName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docName = string(value["DocName"].GetString());
        m_docNameHasBeenSet = true;
    }

    if (value.HasMember("PageContent") && !value["PageContent"].IsNull())
    {
        if (!value["PageContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferDetail.PageContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageContent = string(value["PageContent"].GetString());
        m_pageContentHasBeenSet = true;
    }

    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferDetail.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferDetail.Answer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answer = string(value["Answer"].GetString());
        m_answerHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReferDetail.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Mark") && !value["Mark"].IsNull())
    {
        if (!value["Mark"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReferDetail.Mark` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mark = value["Mark"].GetUint64();
        m_markHasBeenSet = true;
    }

    if (value.HasMember("Highlights") && !value["Highlights"].IsNull())
    {
        if (!value["Highlights"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReferDetail.Highlights` is not array type"));

        const rapidjson::Value &tmpValue = value["Highlights"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Highlight item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_highlights.push_back(item);
        }
        m_highlightsHasBeenSet = true;
    }

    if (value.HasMember("OrgData") && !value["OrgData"].IsNull())
    {
        if (!value["OrgData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferDetail.OrgData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgData = string(value["OrgData"].GetString());
        m_orgDataHasBeenSet = true;
    }

    if (value.HasMember("PageInfos") && !value["PageInfos"].IsNull())
    {
        if (!value["PageInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReferDetail.PageInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["PageInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_pageInfos.push_back((*itr).GetUint64());
        }
        m_pageInfosHasBeenSet = true;
    }

    if (value.HasMember("SheetInfos") && !value["SheetInfos"].IsNull())
    {
        if (!value["SheetInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReferDetail.SheetInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["SheetInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sheetInfos.push_back((*itr).GetString());
        }
        m_sheetInfosHasBeenSet = true;
    }

    if (value.HasMember("DocBizId") && !value["DocBizId"].IsNull())
    {
        if (!value["DocBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferDetail.DocBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docBizId = string(value["DocBizId"].GetString());
        m_docBizIdHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeBizId") && !value["KnowledgeBizId"].IsNull())
    {
        if (!value["KnowledgeBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferDetail.KnowledgeBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeBizId = string(value["KnowledgeBizId"].GetString());
        m_knowledgeBizIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReferDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_referBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_docTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_docType, allocator);
    }

    if (m_docNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docName.c_str(), allocator).Move(), allocator);
    }

    if (m_pageContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageContent.c_str(), allocator).Move(), allocator);
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

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_markHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mark, allocator);
    }

    if (m_highlightsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Highlights";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_highlights.begin(); itr != m_highlights.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_orgDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgData.c_str(), allocator).Move(), allocator);
    }

    if (m_pageInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_pageInfos.begin(); itr != m_pageInfos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_sheetInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SheetInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sheetInfos.begin(); itr != m_sheetInfos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_docBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeBizId.c_str(), allocator).Move(), allocator);
    }

}


string ReferDetail::GetReferBizId() const
{
    return m_referBizId;
}

void ReferDetail::SetReferBizId(const string& _referBizId)
{
    m_referBizId = _referBizId;
    m_referBizIdHasBeenSet = true;
}

bool ReferDetail::ReferBizIdHasBeenSet() const
{
    return m_referBizIdHasBeenSet;
}

uint64_t ReferDetail::GetDocType() const
{
    return m_docType;
}

void ReferDetail::SetDocType(const uint64_t& _docType)
{
    m_docType = _docType;
    m_docTypeHasBeenSet = true;
}

bool ReferDetail::DocTypeHasBeenSet() const
{
    return m_docTypeHasBeenSet;
}

string ReferDetail::GetDocName() const
{
    return m_docName;
}

void ReferDetail::SetDocName(const string& _docName)
{
    m_docName = _docName;
    m_docNameHasBeenSet = true;
}

bool ReferDetail::DocNameHasBeenSet() const
{
    return m_docNameHasBeenSet;
}

string ReferDetail::GetPageContent() const
{
    return m_pageContent;
}

void ReferDetail::SetPageContent(const string& _pageContent)
{
    m_pageContent = _pageContent;
    m_pageContentHasBeenSet = true;
}

bool ReferDetail::PageContentHasBeenSet() const
{
    return m_pageContentHasBeenSet;
}

string ReferDetail::GetQuestion() const
{
    return m_question;
}

void ReferDetail::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool ReferDetail::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string ReferDetail::GetAnswer() const
{
    return m_answer;
}

void ReferDetail::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool ReferDetail::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

double ReferDetail::GetConfidence() const
{
    return m_confidence;
}

void ReferDetail::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool ReferDetail::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

uint64_t ReferDetail::GetMark() const
{
    return m_mark;
}

void ReferDetail::SetMark(const uint64_t& _mark)
{
    m_mark = _mark;
    m_markHasBeenSet = true;
}

bool ReferDetail::MarkHasBeenSet() const
{
    return m_markHasBeenSet;
}

vector<Highlight> ReferDetail::GetHighlights() const
{
    return m_highlights;
}

void ReferDetail::SetHighlights(const vector<Highlight>& _highlights)
{
    m_highlights = _highlights;
    m_highlightsHasBeenSet = true;
}

bool ReferDetail::HighlightsHasBeenSet() const
{
    return m_highlightsHasBeenSet;
}

string ReferDetail::GetOrgData() const
{
    return m_orgData;
}

void ReferDetail::SetOrgData(const string& _orgData)
{
    m_orgData = _orgData;
    m_orgDataHasBeenSet = true;
}

bool ReferDetail::OrgDataHasBeenSet() const
{
    return m_orgDataHasBeenSet;
}

vector<uint64_t> ReferDetail::GetPageInfos() const
{
    return m_pageInfos;
}

void ReferDetail::SetPageInfos(const vector<uint64_t>& _pageInfos)
{
    m_pageInfos = _pageInfos;
    m_pageInfosHasBeenSet = true;
}

bool ReferDetail::PageInfosHasBeenSet() const
{
    return m_pageInfosHasBeenSet;
}

vector<string> ReferDetail::GetSheetInfos() const
{
    return m_sheetInfos;
}

void ReferDetail::SetSheetInfos(const vector<string>& _sheetInfos)
{
    m_sheetInfos = _sheetInfos;
    m_sheetInfosHasBeenSet = true;
}

bool ReferDetail::SheetInfosHasBeenSet() const
{
    return m_sheetInfosHasBeenSet;
}

string ReferDetail::GetDocBizId() const
{
    return m_docBizId;
}

void ReferDetail::SetDocBizId(const string& _docBizId)
{
    m_docBizId = _docBizId;
    m_docBizIdHasBeenSet = true;
}

bool ReferDetail::DocBizIdHasBeenSet() const
{
    return m_docBizIdHasBeenSet;
}

string ReferDetail::GetKnowledgeBizId() const
{
    return m_knowledgeBizId;
}

void ReferDetail::SetKnowledgeBizId(const string& _knowledgeBizId)
{
    m_knowledgeBizId = _knowledgeBizId;
    m_knowledgeBizIdHasBeenSet = true;
}

bool ReferDetail::KnowledgeBizIdHasBeenSet() const
{
    return m_knowledgeBizIdHasBeenSet;
}

