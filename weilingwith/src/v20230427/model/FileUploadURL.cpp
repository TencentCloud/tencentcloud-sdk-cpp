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

#include <tencentcloud/weilingwith/v20230427/model/FileUploadURL.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

FileUploadURL::FileUploadURL() :
    m_uploadURLHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_downloadURLHasBeenSet(false)
{
}

CoreInternalOutcome FileUploadURL::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UploadURL") && !value["UploadURL"].IsNull())
    {
        if (!value["UploadURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileUploadURL.UploadURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadURL = string(value["UploadURL"].GetString());
        m_uploadURLHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileUploadURL.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("DownloadURL") && !value["DownloadURL"].IsNull())
    {
        if (!value["DownloadURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileUploadURL.DownloadURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadURL = string(value["DownloadURL"].GetString());
        m_downloadURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileUploadURL::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uploadURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadURL.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadURL.c_str(), allocator).Move(), allocator);
    }

}


string FileUploadURL::GetUploadURL() const
{
    return m_uploadURL;
}

void FileUploadURL::SetUploadURL(const string& _uploadURL)
{
    m_uploadURL = _uploadURL;
    m_uploadURLHasBeenSet = true;
}

bool FileUploadURL::UploadURLHasBeenSet() const
{
    return m_uploadURLHasBeenSet;
}

string FileUploadURL::GetFileId() const
{
    return m_fileId;
}

void FileUploadURL::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool FileUploadURL::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string FileUploadURL::GetDownloadURL() const
{
    return m_downloadURL;
}

void FileUploadURL::SetDownloadURL(const string& _downloadURL)
{
    m_downloadURL = _downloadURL;
    m_downloadURLHasBeenSet = true;
}

bool FileUploadURL::DownloadURLHasBeenSet() const
{
    return m_downloadURLHasBeenSet;
}

