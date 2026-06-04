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

#include <tencentcloud/adp/v20260520/model/SupportedFileType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SupportedFileType::SupportedFileType() :
    m_descriptionHasBeenSet(false),
    m_fileExtHasBeenSet(false),
    m_maxSizeBytesHasBeenSet(false)
{
}

CoreInternalOutcome SupportedFileType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportedFileType.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("FileExt") && !value["FileExt"].IsNull())
    {
        if (!value["FileExt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportedFileType.FileExt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileExt = string(value["FileExt"].GetString());
        m_fileExtHasBeenSet = true;
    }

    if (value.HasMember("MaxSizeBytes") && !value["MaxSizeBytes"].IsNull())
    {
        if (!value["MaxSizeBytes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportedFileType.MaxSizeBytes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxSizeBytes = string(value["MaxSizeBytes"].GetString());
        m_maxSizeBytesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SupportedFileType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_fileExtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileExt.c_str(), allocator).Move(), allocator);
    }

    if (m_maxSizeBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSizeBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxSizeBytes.c_str(), allocator).Move(), allocator);
    }

}


string SupportedFileType::GetDescription() const
{
    return m_description;
}

void SupportedFileType::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SupportedFileType::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SupportedFileType::GetFileExt() const
{
    return m_fileExt;
}

void SupportedFileType::SetFileExt(const string& _fileExt)
{
    m_fileExt = _fileExt;
    m_fileExtHasBeenSet = true;
}

bool SupportedFileType::FileExtHasBeenSet() const
{
    return m_fileExtHasBeenSet;
}

string SupportedFileType::GetMaxSizeBytes() const
{
    return m_maxSizeBytes;
}

void SupportedFileType::SetMaxSizeBytes(const string& _maxSizeBytes)
{
    m_maxSizeBytes = _maxSizeBytes;
    m_maxSizeBytesHasBeenSet = true;
}

bool SupportedFileType::MaxSizeBytesHasBeenSet() const
{
    return m_maxSizeBytesHasBeenSet;
}

