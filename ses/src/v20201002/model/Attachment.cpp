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

#include <tencentcloud/ses/v20201002/model/Attachment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

Attachment::Attachment() :
    m_fileNameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_fileURLHasBeenSet(false)
{
}

CoreInternalOutcome Attachment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Attachment.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Attachment.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("FileURL") && !value["FileURL"].IsNull())
    {
        if (!value["FileURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Attachment.FileURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileURL = string(value["FileURL"].GetString());
        m_fileURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Attachment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_fileURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileURL.c_str(), allocator).Move(), allocator);
    }

}


string Attachment::GetFileName() const
{
    return m_fileName;
}

void Attachment::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool Attachment::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string Attachment::GetContent() const
{
    return m_content;
}

void Attachment::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool Attachment::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string Attachment::GetFileURL() const
{
    return m_fileURL;
}

void Attachment::SetFileURL(const string& _fileURL)
{
    m_fileURL = _fileURL;
    m_fileURLHasBeenSet = true;
}

bool Attachment::FileURLHasBeenSet() const
{
    return m_fileURLHasBeenSet;
}

