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

#include <tencentcloud/adp/v20260520/model/QASourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

QASourceInfo::QASourceInfo() :
    m_docEffectiveDomainHasBeenSet(false),
    m_docIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_sourceDescHasBeenSet(false),
    m_sourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome QASourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DocEffectiveDomain") && !value["DocEffectiveDomain"].IsNull())
    {
        if (!value["DocEffectiveDomain"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QASourceInfo.DocEffectiveDomain` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_docEffectiveDomain = value["DocEffectiveDomain"].GetInt64();
        m_docEffectiveDomainHasBeenSet = true;
    }

    if (value.HasMember("DocId") && !value["DocId"].IsNull())
    {
        if (!value["DocId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QASourceInfo.DocId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docId = string(value["DocId"].GetString());
        m_docIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QASourceInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QASourceInfo.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceDesc") && !value["SourceDesc"].IsNull())
    {
        if (!value["SourceDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QASourceInfo.SourceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceDesc = string(value["SourceDesc"].GetString());
        m_sourceDescHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QASourceInfo.SourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetInt64();
        m_sourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QASourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_docEffectiveDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocEffectiveDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_docEffectiveDomain, allocator);
    }

    if (m_docIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

}


int64_t QASourceInfo::GetDocEffectiveDomain() const
{
    return m_docEffectiveDomain;
}

void QASourceInfo::SetDocEffectiveDomain(const int64_t& _docEffectiveDomain)
{
    m_docEffectiveDomain = _docEffectiveDomain;
    m_docEffectiveDomainHasBeenSet = true;
}

bool QASourceInfo::DocEffectiveDomainHasBeenSet() const
{
    return m_docEffectiveDomainHasBeenSet;
}

string QASourceInfo::GetDocId() const
{
    return m_docId;
}

void QASourceInfo::SetDocId(const string& _docId)
{
    m_docId = _docId;
    m_docIdHasBeenSet = true;
}

bool QASourceInfo::DocIdHasBeenSet() const
{
    return m_docIdHasBeenSet;
}

string QASourceInfo::GetFileName() const
{
    return m_fileName;
}

void QASourceInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool QASourceInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string QASourceInfo::GetFileType() const
{
    return m_fileType;
}

void QASourceInfo::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool QASourceInfo::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string QASourceInfo::GetSourceDesc() const
{
    return m_sourceDesc;
}

void QASourceInfo::SetSourceDesc(const string& _sourceDesc)
{
    m_sourceDesc = _sourceDesc;
    m_sourceDescHasBeenSet = true;
}

bool QASourceInfo::SourceDescHasBeenSet() const
{
    return m_sourceDescHasBeenSet;
}

int64_t QASourceInfo::GetSourceType() const
{
    return m_sourceType;
}

void QASourceInfo::SetSourceType(const int64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool QASourceInfo::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

