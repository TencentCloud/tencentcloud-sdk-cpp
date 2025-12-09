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

#include <tencentcloud/dataagent/v20250513/model/FileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

FileInfo::FileInfo() :
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_chunkConfigHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_isShowCaseHasBeenSet(false),
    m_documentSummaryHasBeenSet(false)
{
}

CoreInternalOutcome FileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.FileSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetDouble();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ChunkConfig") && !value["ChunkConfig"].IsNull())
    {
        if (!value["ChunkConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.ChunkConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_chunkConfig.Deserialize(value["ChunkConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_chunkConfigHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("IsShowCase") && !value["IsShowCase"].IsNull())
    {
        if (!value["IsShowCase"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.IsShowCase` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isShowCase = value["IsShowCase"].GetInt64();
        m_isShowCaseHasBeenSet = true;
    }

    if (value.HasMember("DocumentSummary") && !value["DocumentSummary"].IsNull())
    {
        if (!value["DocumentSummary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.DocumentSummary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentSummary = string(value["DocumentSummary"].GetString());
        m_documentSummaryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUser.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_chunkConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChunkConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chunkConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_isShowCaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShowCase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isShowCase, allocator);
    }

    if (m_documentSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_documentSummary.c_str(), allocator).Move(), allocator);
    }

}


string FileInfo::GetFileName() const
{
    return m_fileName;
}

void FileInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool FileInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

double FileInfo::GetFileSize() const
{
    return m_fileSize;
}

void FileInfo::SetFileSize(const double& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool FileInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

int64_t FileInfo::GetType() const
{
    return m_type;
}

void FileInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool FileInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string FileInfo::GetFileId() const
{
    return m_fileId;
}

void FileInfo::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool FileInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

int64_t FileInfo::GetStatus() const
{
    return m_status;
}

void FileInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FileInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string FileInfo::GetCreateUser() const
{
    return m_createUser;
}

void FileInfo::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool FileInfo::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

string FileInfo::GetCreateTime() const
{
    return m_createTime;
}

void FileInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FileInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

KnowledgeTaskConfig FileInfo::GetChunkConfig() const
{
    return m_chunkConfig;
}

void FileInfo::SetChunkConfig(const KnowledgeTaskConfig& _chunkConfig)
{
    m_chunkConfig = _chunkConfig;
    m_chunkConfigHasBeenSet = true;
}

bool FileInfo::ChunkConfigHasBeenSet() const
{
    return m_chunkConfigHasBeenSet;
}

int64_t FileInfo::GetSource() const
{
    return m_source;
}

void FileInfo::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool FileInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string FileInfo::GetFileUrl() const
{
    return m_fileUrl;
}

void FileInfo::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool FileInfo::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

int64_t FileInfo::GetIsShowCase() const
{
    return m_isShowCase;
}

void FileInfo::SetIsShowCase(const int64_t& _isShowCase)
{
    m_isShowCase = _isShowCase;
    m_isShowCaseHasBeenSet = true;
}

bool FileInfo::IsShowCaseHasBeenSet() const
{
    return m_isShowCaseHasBeenSet;
}

string FileInfo::GetDocumentSummary() const
{
    return m_documentSummary;
}

void FileInfo::SetDocumentSummary(const string& _documentSummary)
{
    m_documentSummary = _documentSummary;
    m_documentSummaryHasBeenSet = true;
}

bool FileInfo::DocumentSummaryHasBeenSet() const
{
    return m_documentSummaryHasBeenSet;
}

