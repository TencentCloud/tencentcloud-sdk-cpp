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

#include <tencentcloud/cpdp/v20190820/model/FileItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

FileItem::FileItem() :
    m_fileNameHasBeenSet(false),
    m_randomPasswordHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_drawCodeHasBeenSet(false)
{
}

CoreInternalOutcome FileItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileItem.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("RandomPassword") && !value["RandomPassword"].IsNull())
    {
        if (!value["RandomPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileItem.RandomPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_randomPassword = string(value["RandomPassword"].GetString());
        m_randomPasswordHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileItem.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("DrawCode") && !value["DrawCode"].IsNull())
    {
        if (!value["DrawCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileItem.DrawCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drawCode = string(value["DrawCode"].GetString());
        m_drawCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_randomPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RandomPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_randomPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_drawCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrawCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drawCode.c_str(), allocator).Move(), allocator);
    }

}


string FileItem::GetFileName() const
{
    return m_fileName;
}

void FileItem::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool FileItem::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string FileItem::GetRandomPassword() const
{
    return m_randomPassword;
}

void FileItem::SetRandomPassword(const string& _randomPassword)
{
    m_randomPassword = _randomPassword;
    m_randomPasswordHasBeenSet = true;
}

bool FileItem::RandomPasswordHasBeenSet() const
{
    return m_randomPasswordHasBeenSet;
}

string FileItem::GetFilePath() const
{
    return m_filePath;
}

void FileItem::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool FileItem::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string FileItem::GetDrawCode() const
{
    return m_drawCode;
}

void FileItem::SetDrawCode(const string& _drawCode)
{
    m_drawCode = _drawCode;
    m_drawCodeHasBeenSet = true;
}

bool FileItem::DrawCodeHasBeenSet() const
{
    return m_drawCodeHasBeenSet;
}

