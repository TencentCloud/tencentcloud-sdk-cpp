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

#include <tencentcloud/workbuddyenterprise/v20260709/model/SessionArtifactDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

SessionArtifactDetail::SessionArtifactDetail() :
    m_artifactIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_fileSizeBytesHasBeenSet(false),
    m_fileSha256HasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_uploadedTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false)
{
}

CoreInternalOutcome SessionArtifactDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ArtifactId") && !value["ArtifactId"].IsNull())
    {
        if (!value["ArtifactId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionArtifactDetail.ArtifactId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_artifactId = string(value["ArtifactId"].GetString());
        m_artifactIdHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionArtifactDetail.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionArtifactDetail.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionArtifactDetail.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionArtifactDetail.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("FileSizeBytes") && !value["FileSizeBytes"].IsNull())
    {
        if (!value["FileSizeBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionArtifactDetail.FileSizeBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSizeBytes = value["FileSizeBytes"].GetInt64();
        m_fileSizeBytesHasBeenSet = true;
    }

    if (value.HasMember("FileSha256") && !value["FileSha256"].IsNull())
    {
        if (!value["FileSha256"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionArtifactDetail.FileSha256` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSha256 = string(value["FileSha256"].GetString());
        m_fileSha256HasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionArtifactDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionArtifactDetail.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UploadedTime") && !value["UploadedTime"].IsNull())
    {
        if (!value["UploadedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionArtifactDetail.UploadedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadedTime = string(value["UploadedTime"].GetString());
        m_uploadedTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionArtifactDetail.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SessionArtifactDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_artifactIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArtifactId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_artifactId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSizeBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSizeBytes, allocator);
    }

    if (m_fileSha256HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSha256";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSha256.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

}


string SessionArtifactDetail::GetArtifactId() const
{
    return m_artifactId;
}

void SessionArtifactDetail::SetArtifactId(const string& _artifactId)
{
    m_artifactId = _artifactId;
    m_artifactIdHasBeenSet = true;
}

bool SessionArtifactDetail::ArtifactIdHasBeenSet() const
{
    return m_artifactIdHasBeenSet;
}

string SessionArtifactDetail::GetSessionId() const
{
    return m_sessionId;
}

void SessionArtifactDetail::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool SessionArtifactDetail::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string SessionArtifactDetail::GetAgentId() const
{
    return m_agentId;
}

void SessionArtifactDetail::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool SessionArtifactDetail::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string SessionArtifactDetail::GetFileName() const
{
    return m_fileName;
}

void SessionArtifactDetail::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool SessionArtifactDetail::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string SessionArtifactDetail::GetFilePath() const
{
    return m_filePath;
}

void SessionArtifactDetail::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool SessionArtifactDetail::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

int64_t SessionArtifactDetail::GetFileSizeBytes() const
{
    return m_fileSizeBytes;
}

void SessionArtifactDetail::SetFileSizeBytes(const int64_t& _fileSizeBytes)
{
    m_fileSizeBytes = _fileSizeBytes;
    m_fileSizeBytesHasBeenSet = true;
}

bool SessionArtifactDetail::FileSizeBytesHasBeenSet() const
{
    return m_fileSizeBytesHasBeenSet;
}

string SessionArtifactDetail::GetFileSha256() const
{
    return m_fileSha256;
}

void SessionArtifactDetail::SetFileSha256(const string& _fileSha256)
{
    m_fileSha256 = _fileSha256;
    m_fileSha256HasBeenSet = true;
}

bool SessionArtifactDetail::FileSha256HasBeenSet() const
{
    return m_fileSha256HasBeenSet;
}

string SessionArtifactDetail::GetStatus() const
{
    return m_status;
}

void SessionArtifactDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SessionArtifactDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SessionArtifactDetail::GetCreatedTime() const
{
    return m_createdTime;
}

void SessionArtifactDetail::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool SessionArtifactDetail::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string SessionArtifactDetail::GetUploadedTime() const
{
    return m_uploadedTime;
}

void SessionArtifactDetail::SetUploadedTime(const string& _uploadedTime)
{
    m_uploadedTime = _uploadedTime;
    m_uploadedTimeHasBeenSet = true;
}

bool SessionArtifactDetail::UploadedTimeHasBeenSet() const
{
    return m_uploadedTimeHasBeenSet;
}

string SessionArtifactDetail::GetExpiredTime() const
{
    return m_expiredTime;
}

void SessionArtifactDetail::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool SessionArtifactDetail::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

