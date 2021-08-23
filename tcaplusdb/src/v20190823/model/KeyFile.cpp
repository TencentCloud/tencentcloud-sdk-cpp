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

#include <tencentcloud/tcaplusdb/v20190823/model/KeyFile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

KeyFile::KeyFile() :
    m_fileNameHasBeenSet(false),
    m_fileExtTypeHasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_fileSizeHasBeenSet(false)
{
}

CoreInternalOutcome KeyFile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyFile.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileExtType") && !value["FileExtType"].IsNull())
    {
        if (!value["FileExtType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyFile.FileExtType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileExtType = string(value["FileExtType"].GetString());
        m_fileExtTypeHasBeenSet = true;
    }

    if (value.HasMember("FileContent") && !value["FileContent"].IsNull())
    {
        if (!value["FileContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyFile.FileContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileContent = string(value["FileContent"].GetString());
        m_fileContentHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KeyFile.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeyFile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileExtTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExtType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileExtType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

}


string KeyFile::GetFileName() const
{
    return m_fileName;
}

void KeyFile::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool KeyFile::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string KeyFile::GetFileExtType() const
{
    return m_fileExtType;
}

void KeyFile::SetFileExtType(const string& _fileExtType)
{
    m_fileExtType = _fileExtType;
    m_fileExtTypeHasBeenSet = true;
}

bool KeyFile::FileExtTypeHasBeenSet() const
{
    return m_fileExtTypeHasBeenSet;
}

string KeyFile::GetFileContent() const
{
    return m_fileContent;
}

void KeyFile::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool KeyFile::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

int64_t KeyFile::GetFileSize() const
{
    return m_fileSize;
}

void KeyFile::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool KeyFile::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

