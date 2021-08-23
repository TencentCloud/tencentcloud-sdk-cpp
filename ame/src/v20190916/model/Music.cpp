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

#include <tencentcloud/ame/v20190916/model/Music.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

Music::Music() :
    m_urlHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_fileExtensionHasBeenSet(false),
    m_auditionBeginHasBeenSet(false),
    m_auditionEndHasBeenSet(false),
    m_fullUrlHasBeenSet(false)
{
}

CoreInternalOutcome Music::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Music.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Music.FileSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetUint64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FileExtension") && !value["FileExtension"].IsNull())
    {
        if (!value["FileExtension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Music.FileExtension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileExtension = string(value["FileExtension"].GetString());
        m_fileExtensionHasBeenSet = true;
    }

    if (value.HasMember("AuditionBegin") && !value["AuditionBegin"].IsNull())
    {
        if (!value["AuditionBegin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Music.AuditionBegin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_auditionBegin = value["AuditionBegin"].GetUint64();
        m_auditionBeginHasBeenSet = true;
    }

    if (value.HasMember("AuditionEnd") && !value["AuditionEnd"].IsNull())
    {
        if (!value["AuditionEnd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Music.AuditionEnd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_auditionEnd = value["AuditionEnd"].GetUint64();
        m_auditionEndHasBeenSet = true;
    }

    if (value.HasMember("FullUrl") && !value["FullUrl"].IsNull())
    {
        if (!value["FullUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Music.FullUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullUrl = string(value["FullUrl"].GetString());
        m_fullUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Music::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_fileExtensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExtension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileExtension.c_str(), allocator).Move(), allocator);
    }

    if (m_auditionBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditionBegin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditionBegin, allocator);
    }

    if (m_auditionEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditionEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditionEnd, allocator);
    }

    if (m_fullUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullUrl.c_str(), allocator).Move(), allocator);
    }

}


string Music::GetUrl() const
{
    return m_url;
}

void Music::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool Music::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t Music::GetFileSize() const
{
    return m_fileSize;
}

void Music::SetFileSize(const uint64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool Music::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string Music::GetFileExtension() const
{
    return m_fileExtension;
}

void Music::SetFileExtension(const string& _fileExtension)
{
    m_fileExtension = _fileExtension;
    m_fileExtensionHasBeenSet = true;
}

bool Music::FileExtensionHasBeenSet() const
{
    return m_fileExtensionHasBeenSet;
}

uint64_t Music::GetAuditionBegin() const
{
    return m_auditionBegin;
}

void Music::SetAuditionBegin(const uint64_t& _auditionBegin)
{
    m_auditionBegin = _auditionBegin;
    m_auditionBeginHasBeenSet = true;
}

bool Music::AuditionBeginHasBeenSet() const
{
    return m_auditionBeginHasBeenSet;
}

uint64_t Music::GetAuditionEnd() const
{
    return m_auditionEnd;
}

void Music::SetAuditionEnd(const uint64_t& _auditionEnd)
{
    m_auditionEnd = _auditionEnd;
    m_auditionEndHasBeenSet = true;
}

bool Music::AuditionEndHasBeenSet() const
{
    return m_auditionEndHasBeenSet;
}

string Music::GetFullUrl() const
{
    return m_fullUrl;
}

void Music::SetFullUrl(const string& _fullUrl)
{
    m_fullUrl = _fullUrl;
    m_fullUrlHasBeenSet = true;
}

bool Music::FullUrlHasBeenSet() const
{
    return m_fullUrlHasBeenSet;
}

