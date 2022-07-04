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

#include <tencentcloud/ie/v20200304/model/TaskResultFile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

TaskResultFile::TaskResultFile() :
    m_urlHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_mediaInfoHasBeenSet(false),
    m_md5HasBeenSet(false)
{
}

CoreInternalOutcome TaskResultFile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultFile.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultFile.FileSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetUint64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("MediaInfo") && !value["MediaInfo"].IsNull())
    {
        if (!value["MediaInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultFile.MediaInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaInfo.Deserialize(value["MediaInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaInfoHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultFile.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskResultFile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_mediaInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

}


string TaskResultFile::GetUrl() const
{
    return m_url;
}

void TaskResultFile::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool TaskResultFile::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t TaskResultFile::GetFileSize() const
{
    return m_fileSize;
}

void TaskResultFile::SetFileSize(const uint64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool TaskResultFile::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

MediaResultInfo TaskResultFile::GetMediaInfo() const
{
    return m_mediaInfo;
}

void TaskResultFile::SetMediaInfo(const MediaResultInfo& _mediaInfo)
{
    m_mediaInfo = _mediaInfo;
    m_mediaInfoHasBeenSet = true;
}

bool TaskResultFile::MediaInfoHasBeenSet() const
{
    return m_mediaInfoHasBeenSet;
}

string TaskResultFile::GetMd5() const
{
    return m_md5;
}

void TaskResultFile::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool TaskResultFile::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

