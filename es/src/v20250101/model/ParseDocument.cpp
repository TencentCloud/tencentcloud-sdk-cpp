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

#include <tencentcloud/es/v20250101/model/ParseDocument.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20250101::Model;
using namespace std;

ParseDocument::ParseDocument() :
    m_fileTypeHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_documentParseConfigHasBeenSet(false),
    m_fileStartPageNumberHasBeenSet(false),
    m_fileEndPageNumberHasBeenSet(false)
{
}

CoreInternalOutcome ParseDocument::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParseDocument.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParseDocument.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("FileContent") && !value["FileContent"].IsNull())
    {
        if (!value["FileContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParseDocument.FileContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileContent = string(value["FileContent"].GetString());
        m_fileContentHasBeenSet = true;
    }

    if (value.HasMember("DocumentParseConfig") && !value["DocumentParseConfig"].IsNull())
    {
        if (!value["DocumentParseConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ParseDocument.DocumentParseConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_documentParseConfig.Deserialize(value["DocumentParseConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_documentParseConfigHasBeenSet = true;
    }

    if (value.HasMember("FileStartPageNumber") && !value["FileStartPageNumber"].IsNull())
    {
        if (!value["FileStartPageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParseDocument.FileStartPageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileStartPageNumber = value["FileStartPageNumber"].GetInt64();
        m_fileStartPageNumberHasBeenSet = true;
    }

    if (value.HasMember("FileEndPageNumber") && !value["FileEndPageNumber"].IsNull())
    {
        if (!value["FileEndPageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParseDocument.FileEndPageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileEndPageNumber = value["FileEndPageNumber"].GetInt64();
        m_fileEndPageNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParseDocument::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_documentParseConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentParseConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_documentParseConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileStartPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileStartPageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileStartPageNumber, allocator);
    }

    if (m_fileEndPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileEndPageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileEndPageNumber, allocator);
    }

}


string ParseDocument::GetFileType() const
{
    return m_fileType;
}

void ParseDocument::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool ParseDocument::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string ParseDocument::GetFileUrl() const
{
    return m_fileUrl;
}

void ParseDocument::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool ParseDocument::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string ParseDocument::GetFileContent() const
{
    return m_fileContent;
}

void ParseDocument::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool ParseDocument::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

DocumentParseConfig ParseDocument::GetDocumentParseConfig() const
{
    return m_documentParseConfig;
}

void ParseDocument::SetDocumentParseConfig(const DocumentParseConfig& _documentParseConfig)
{
    m_documentParseConfig = _documentParseConfig;
    m_documentParseConfigHasBeenSet = true;
}

bool ParseDocument::DocumentParseConfigHasBeenSet() const
{
    return m_documentParseConfigHasBeenSet;
}

int64_t ParseDocument::GetFileStartPageNumber() const
{
    return m_fileStartPageNumber;
}

void ParseDocument::SetFileStartPageNumber(const int64_t& _fileStartPageNumber)
{
    m_fileStartPageNumber = _fileStartPageNumber;
    m_fileStartPageNumberHasBeenSet = true;
}

bool ParseDocument::FileStartPageNumberHasBeenSet() const
{
    return m_fileStartPageNumberHasBeenSet;
}

int64_t ParseDocument::GetFileEndPageNumber() const
{
    return m_fileEndPageNumber;
}

void ParseDocument::SetFileEndPageNumber(const int64_t& _fileEndPageNumber)
{
    m_fileEndPageNumber = _fileEndPageNumber;
    m_fileEndPageNumberHasBeenSet = true;
}

bool ParseDocument::FileEndPageNumberHasBeenSet() const
{
    return m_fileEndPageNumberHasBeenSet;
}

