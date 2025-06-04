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

#include <tencentcloud/lowcode/v20210108/model/QureyKnowledgeDocumentSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

QureyKnowledgeDocumentSet::QureyKnowledgeDocumentSet() :
    m_documentSetIdHasBeenSet(false),
    m_documentSetNameHasBeenSet(false),
    m_textPrefixHasBeenSet(false),
    m_splitterPreprocessHasBeenSet(false),
    m_documentSetInfoHasBeenSet(false),
    m_fileTitleHasBeenSet(false),
    m_fileMetaDataHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_docStatusHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_fileIdHasBeenSet(false)
{
}

CoreInternalOutcome QureyKnowledgeDocumentSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DocumentSetId") && !value["DocumentSetId"].IsNull())
    {
        if (!value["DocumentSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSet.DocumentSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentSetId = string(value["DocumentSetId"].GetString());
        m_documentSetIdHasBeenSet = true;
    }

    if (value.HasMember("DocumentSetName") && !value["DocumentSetName"].IsNull())
    {
        if (!value["DocumentSetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSet.DocumentSetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentSetName = string(value["DocumentSetName"].GetString());
        m_documentSetNameHasBeenSet = true;
    }

    if (value.HasMember("TextPrefix") && !value["TextPrefix"].IsNull())
    {
        if (!value["TextPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSet.TextPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textPrefix = string(value["TextPrefix"].GetString());
        m_textPrefixHasBeenSet = true;
    }

    if (value.HasMember("SplitterPreprocess") && !value["SplitterPreprocess"].IsNull())
    {
        if (!value["SplitterPreprocess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSet.SplitterPreprocess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_splitterPreprocess.Deserialize(value["SplitterPreprocess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_splitterPreprocessHasBeenSet = true;
    }

    if (value.HasMember("DocumentSetInfo") && !value["DocumentSetInfo"].IsNull())
    {
        if (!value["DocumentSetInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSet.DocumentSetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_documentSetInfo.Deserialize(value["DocumentSetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_documentSetInfoHasBeenSet = true;
    }

    if (value.HasMember("FileTitle") && !value["FileTitle"].IsNull())
    {
        if (!value["FileTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSet.FileTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileTitle = string(value["FileTitle"].GetString());
        m_fileTitleHasBeenSet = true;
    }

    if (value.HasMember("FileMetaData") && !value["FileMetaData"].IsNull())
    {
        if (!value["FileMetaData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSet.FileMetaData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMetaData = string(value["FileMetaData"].GetString());
        m_fileMetaDataHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSet.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Author") && !value["Author"].IsNull())
    {
        if (!value["Author"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSet.Author` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_author = string(value["Author"].GetString());
        m_authorHasBeenSet = true;
    }

    if (value.HasMember("DocStatus") && !value["DocStatus"].IsNull())
    {
        if (!value["DocStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSet.DocStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docStatus = string(value["DocStatus"].GetString());
        m_docStatusHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSet.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSet.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QureyKnowledgeDocumentSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_documentSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_documentSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_documentSetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentSetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_documentSetName.c_str(), allocator).Move(), allocator);
    }

    if (m_textPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_textPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_splitterPreprocessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SplitterPreprocess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_splitterPreprocess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_documentSetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentSetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_documentSetInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMetaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMetaData.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_authorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Author";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_author.c_str(), allocator).Move(), allocator);
    }

    if (m_docStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

}


string QureyKnowledgeDocumentSet::GetDocumentSetId() const
{
    return m_documentSetId;
}

void QureyKnowledgeDocumentSet::SetDocumentSetId(const string& _documentSetId)
{
    m_documentSetId = _documentSetId;
    m_documentSetIdHasBeenSet = true;
}

bool QureyKnowledgeDocumentSet::DocumentSetIdHasBeenSet() const
{
    return m_documentSetIdHasBeenSet;
}

string QureyKnowledgeDocumentSet::GetDocumentSetName() const
{
    return m_documentSetName;
}

void QureyKnowledgeDocumentSet::SetDocumentSetName(const string& _documentSetName)
{
    m_documentSetName = _documentSetName;
    m_documentSetNameHasBeenSet = true;
}

bool QureyKnowledgeDocumentSet::DocumentSetNameHasBeenSet() const
{
    return m_documentSetNameHasBeenSet;
}

string QureyKnowledgeDocumentSet::GetTextPrefix() const
{
    return m_textPrefix;
}

void QureyKnowledgeDocumentSet::SetTextPrefix(const string& _textPrefix)
{
    m_textPrefix = _textPrefix;
    m_textPrefixHasBeenSet = true;
}

bool QureyKnowledgeDocumentSet::TextPrefixHasBeenSet() const
{
    return m_textPrefixHasBeenSet;
}

KnowledgeSplitterPreprocess QureyKnowledgeDocumentSet::GetSplitterPreprocess() const
{
    return m_splitterPreprocess;
}

void QureyKnowledgeDocumentSet::SetSplitterPreprocess(const KnowledgeSplitterPreprocess& _splitterPreprocess)
{
    m_splitterPreprocess = _splitterPreprocess;
    m_splitterPreprocessHasBeenSet = true;
}

bool QureyKnowledgeDocumentSet::SplitterPreprocessHasBeenSet() const
{
    return m_splitterPreprocessHasBeenSet;
}

QureyKnowledgeDocumentSetInfo QureyKnowledgeDocumentSet::GetDocumentSetInfo() const
{
    return m_documentSetInfo;
}

void QureyKnowledgeDocumentSet::SetDocumentSetInfo(const QureyKnowledgeDocumentSetInfo& _documentSetInfo)
{
    m_documentSetInfo = _documentSetInfo;
    m_documentSetInfoHasBeenSet = true;
}

bool QureyKnowledgeDocumentSet::DocumentSetInfoHasBeenSet() const
{
    return m_documentSetInfoHasBeenSet;
}

string QureyKnowledgeDocumentSet::GetFileTitle() const
{
    return m_fileTitle;
}

void QureyKnowledgeDocumentSet::SetFileTitle(const string& _fileTitle)
{
    m_fileTitle = _fileTitle;
    m_fileTitleHasBeenSet = true;
}

bool QureyKnowledgeDocumentSet::FileTitleHasBeenSet() const
{
    return m_fileTitleHasBeenSet;
}

string QureyKnowledgeDocumentSet::GetFileMetaData() const
{
    return m_fileMetaData;
}

void QureyKnowledgeDocumentSet::SetFileMetaData(const string& _fileMetaData)
{
    m_fileMetaData = _fileMetaData;
    m_fileMetaDataHasBeenSet = true;
}

bool QureyKnowledgeDocumentSet::FileMetaDataHasBeenSet() const
{
    return m_fileMetaDataHasBeenSet;
}

string QureyKnowledgeDocumentSet::GetName() const
{
    return m_name;
}

void QureyKnowledgeDocumentSet::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool QureyKnowledgeDocumentSet::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string QureyKnowledgeDocumentSet::GetAuthor() const
{
    return m_author;
}

void QureyKnowledgeDocumentSet::SetAuthor(const string& _author)
{
    m_author = _author;
    m_authorHasBeenSet = true;
}

bool QureyKnowledgeDocumentSet::AuthorHasBeenSet() const
{
    return m_authorHasBeenSet;
}

string QureyKnowledgeDocumentSet::GetDocStatus() const
{
    return m_docStatus;
}

void QureyKnowledgeDocumentSet::SetDocStatus(const string& _docStatus)
{
    m_docStatus = _docStatus;
    m_docStatusHasBeenSet = true;
}

bool QureyKnowledgeDocumentSet::DocStatusHasBeenSet() const
{
    return m_docStatusHasBeenSet;
}

string QureyKnowledgeDocumentSet::GetErrMsg() const
{
    return m_errMsg;
}

void QureyKnowledgeDocumentSet::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool QureyKnowledgeDocumentSet::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

string QureyKnowledgeDocumentSet::GetFileId() const
{
    return m_fileId;
}

void QureyKnowledgeDocumentSet::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool QureyKnowledgeDocumentSet::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

