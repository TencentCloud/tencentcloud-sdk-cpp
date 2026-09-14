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

#include <tencentcloud/adp/v20260520/model/KnowledgeSnippetProfile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

KnowledgeSnippetProfile::KnowledgeSnippetProfile() :
    m_contentHasBeenSet(false),
    m_docIdHasBeenSet(false),
    m_docNameHasBeenSet(false),
    m_kbIdHasBeenSet(false),
    m_knowledgeIdHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeSnippetProfile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSnippetProfile.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("DocId") && !value["DocId"].IsNull())
    {
        if (!value["DocId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSnippetProfile.DocId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docId = string(value["DocId"].GetString());
        m_docIdHasBeenSet = true;
    }

    if (value.HasMember("DocName") && !value["DocName"].IsNull())
    {
        if (!value["DocName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSnippetProfile.DocName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docName = string(value["DocName"].GetString());
        m_docNameHasBeenSet = true;
    }

    if (value.HasMember("KbId") && !value["KbId"].IsNull())
    {
        if (!value["KbId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSnippetProfile.KbId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kbId = string(value["KbId"].GetString());
        m_kbIdHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeId") && !value["KnowledgeId"].IsNull())
    {
        if (!value["KnowledgeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSnippetProfile.KnowledgeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeId = string(value["KnowledgeId"].GetString());
        m_knowledgeIdHasBeenSet = true;
    }

    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSnippetProfile.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSnippetProfile.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeSnippetProfile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_docIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docId.c_str(), allocator).Move(), allocator);
    }

    if (m_docNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docName.c_str(), allocator).Move(), allocator);
    }

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kbId.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeId.c_str(), allocator).Move(), allocator);
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

}


string KnowledgeSnippetProfile::GetContent() const
{
    return m_content;
}

void KnowledgeSnippetProfile::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool KnowledgeSnippetProfile::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string KnowledgeSnippetProfile::GetDocId() const
{
    return m_docId;
}

void KnowledgeSnippetProfile::SetDocId(const string& _docId)
{
    m_docId = _docId;
    m_docIdHasBeenSet = true;
}

bool KnowledgeSnippetProfile::DocIdHasBeenSet() const
{
    return m_docIdHasBeenSet;
}

string KnowledgeSnippetProfile::GetDocName() const
{
    return m_docName;
}

void KnowledgeSnippetProfile::SetDocName(const string& _docName)
{
    m_docName = _docName;
    m_docNameHasBeenSet = true;
}

bool KnowledgeSnippetProfile::DocNameHasBeenSet() const
{
    return m_docNameHasBeenSet;
}

string KnowledgeSnippetProfile::GetKbId() const
{
    return m_kbId;
}

void KnowledgeSnippetProfile::SetKbId(const string& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool KnowledgeSnippetProfile::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

string KnowledgeSnippetProfile::GetKnowledgeId() const
{
    return m_knowledgeId;
}

void KnowledgeSnippetProfile::SetKnowledgeId(const string& _knowledgeId)
{
    m_knowledgeId = _knowledgeId;
    m_knowledgeIdHasBeenSet = true;
}

bool KnowledgeSnippetProfile::KnowledgeIdHasBeenSet() const
{
    return m_knowledgeIdHasBeenSet;
}

string KnowledgeSnippetProfile::GetQuestion() const
{
    return m_question;
}

void KnowledgeSnippetProfile::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool KnowledgeSnippetProfile::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string KnowledgeSnippetProfile::GetTitle() const
{
    return m_title;
}

void KnowledgeSnippetProfile::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool KnowledgeSnippetProfile::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

