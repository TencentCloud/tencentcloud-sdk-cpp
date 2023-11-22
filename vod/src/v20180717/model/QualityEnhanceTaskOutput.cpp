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

#include <tencentcloud/vod/v20180717/model/QualityEnhanceTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

QualityEnhanceTaskOutput::QualityEnhanceTaskOutput() :
    m_fileTypeHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_mediaNameHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome QualityEnhanceTaskOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityEnhanceTaskOutput.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityEnhanceTaskOutput.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityEnhanceTaskOutput.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("MediaName") && !value["MediaName"].IsNull())
    {
        if (!value["MediaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityEnhanceTaskOutput.MediaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaName = string(value["MediaName"].GetString());
        m_mediaNameHasBeenSet = true;
    }

    if (value.HasMember("ClassId") && !value["ClassId"].IsNull())
    {
        if (!value["ClassId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityEnhanceTaskOutput.ClassId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_classId = value["ClassId"].GetInt64();
        m_classIdHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityEnhanceTaskOutput.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityEnhanceTaskOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mediaName.c_str(), allocator).Move(), allocator);
    }

    if (m_classIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_classId, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

}


string QualityEnhanceTaskOutput::GetFileType() const
{
    return m_fileType;
}

void QualityEnhanceTaskOutput::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool QualityEnhanceTaskOutput::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string QualityEnhanceTaskOutput::GetFileUrl() const
{
    return m_fileUrl;
}

void QualityEnhanceTaskOutput::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool QualityEnhanceTaskOutput::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string QualityEnhanceTaskOutput::GetFileId() const
{
    return m_fileId;
}

void QualityEnhanceTaskOutput::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool QualityEnhanceTaskOutput::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string QualityEnhanceTaskOutput::GetMediaName() const
{
    return m_mediaName;
}

void QualityEnhanceTaskOutput::SetMediaName(const string& _mediaName)
{
    m_mediaName = _mediaName;
    m_mediaNameHasBeenSet = true;
}

bool QualityEnhanceTaskOutput::MediaNameHasBeenSet() const
{
    return m_mediaNameHasBeenSet;
}

int64_t QualityEnhanceTaskOutput::GetClassId() const
{
    return m_classId;
}

void QualityEnhanceTaskOutput::SetClassId(const int64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool QualityEnhanceTaskOutput::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

string QualityEnhanceTaskOutput::GetExpireTime() const
{
    return m_expireTime;
}

void QualityEnhanceTaskOutput::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool QualityEnhanceTaskOutput::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

