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

#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DTaskOutputFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcHunyuan3DTaskOutputFileInfo::AigcHunyuan3DTaskOutputFileInfo() :
    m_storageModeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_previewFileUrlHasBeenSet(false)
{
}

CoreInternalOutcome AigcHunyuan3DTaskOutputFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageMode") && !value["StorageMode"].IsNull())
    {
        if (!value["StorageMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskOutputFileInfo.StorageMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageMode = string(value["StorageMode"].GetString());
        m_storageModeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskOutputFileInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskOutputFileInfo.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskOutputFileInfo.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("PreviewFileUrl") && !value["PreviewFileUrl"].IsNull())
    {
        if (!value["PreviewFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskOutputFileInfo.PreviewFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewFileUrl = string(value["PreviewFileUrl"].GetString());
        m_previewFileUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcHunyuan3DTaskOutputFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageMode.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

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

    if (m_previewFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewFileUrl.c_str(), allocator).Move(), allocator);
    }

}


string AigcHunyuan3DTaskOutputFileInfo::GetStorageMode() const
{
    return m_storageMode;
}

void AigcHunyuan3DTaskOutputFileInfo::SetStorageMode(const string& _storageMode)
{
    m_storageMode = _storageMode;
    m_storageModeHasBeenSet = true;
}

bool AigcHunyuan3DTaskOutputFileInfo::StorageModeHasBeenSet() const
{
    return m_storageModeHasBeenSet;
}

string AigcHunyuan3DTaskOutputFileInfo::GetExpireTime() const
{
    return m_expireTime;
}

void AigcHunyuan3DTaskOutputFileInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool AigcHunyuan3DTaskOutputFileInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string AigcHunyuan3DTaskOutputFileInfo::GetFileType() const
{
    return m_fileType;
}

void AigcHunyuan3DTaskOutputFileInfo::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool AigcHunyuan3DTaskOutputFileInfo::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string AigcHunyuan3DTaskOutputFileInfo::GetFileUrl() const
{
    return m_fileUrl;
}

void AigcHunyuan3DTaskOutputFileInfo::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool AigcHunyuan3DTaskOutputFileInfo::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string AigcHunyuan3DTaskOutputFileInfo::GetPreviewFileUrl() const
{
    return m_previewFileUrl;
}

void AigcHunyuan3DTaskOutputFileInfo::SetPreviewFileUrl(const string& _previewFileUrl)
{
    m_previewFileUrl = _previewFileUrl;
    m_previewFileUrlHasBeenSet = true;
}

bool AigcHunyuan3DTaskOutputFileInfo::PreviewFileUrlHasBeenSet() const
{
    return m_previewFileUrlHasBeenSet;
}

