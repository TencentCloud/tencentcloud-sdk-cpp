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

#include <tencentcloud/ivld/v20210903/model/TextMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

TextMetadata::TextMetadata() :
    m_fileSizeHasBeenSet(false),
    m_mD5HasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_shortFormatHasBeenSet(false)
{
}

CoreInternalOutcome TextMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextMetadata.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("MD5") && !value["MD5"].IsNull())
    {
        if (!value["MD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextMetadata.MD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mD5 = string(value["MD5"].GetString());
        m_mD5HasBeenSet = true;
    }

    if (value.HasMember("Length") && !value["Length"].IsNull())
    {
        if (!value["Length"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextMetadata.Length` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_length = value["Length"].GetInt64();
        m_lengthHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextMetadata.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("ShortFormat") && !value["ShortFormat"].IsNull())
    {
        if (!value["ShortFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextMetadata.ShortFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shortFormat = string(value["ShortFormat"].GetString());
        m_shortFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_mD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mD5.c_str(), allocator).Move(), allocator);
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_length, allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_shortFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shortFormat.c_str(), allocator).Move(), allocator);
    }

}


int64_t TextMetadata::GetFileSize() const
{
    return m_fileSize;
}

void TextMetadata::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool TextMetadata::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string TextMetadata::GetMD5() const
{
    return m_mD5;
}

void TextMetadata::SetMD5(const string& _mD5)
{
    m_mD5 = _mD5;
    m_mD5HasBeenSet = true;
}

bool TextMetadata::MD5HasBeenSet() const
{
    return m_mD5HasBeenSet;
}

int64_t TextMetadata::GetLength() const
{
    return m_length;
}

void TextMetadata::SetLength(const int64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool TextMetadata::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

string TextMetadata::GetFormat() const
{
    return m_format;
}

void TextMetadata::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool TextMetadata::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string TextMetadata::GetShortFormat() const
{
    return m_shortFormat;
}

void TextMetadata::SetShortFormat(const string& _shortFormat)
{
    m_shortFormat = _shortFormat;
    m_shortFormatHasBeenSet = true;
}

bool TextMetadata::ShortFormatHasBeenSet() const
{
    return m_shortFormatHasBeenSet;
}

