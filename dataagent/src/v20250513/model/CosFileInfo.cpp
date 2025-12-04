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

#include <tencentcloud/dataagent/v20250513/model/CosFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

CosFileInfo::CosFileInfo() :
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_userCosUrlHasBeenSet(false)
{
}

CoreInternalOutcome CosFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosFileInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosFileInfo.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("UserCosUrl") && !value["UserCosUrl"].IsNull())
    {
        if (!value["UserCosUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosFileInfo.UserCosUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userCosUrl = string(value["UserCosUrl"].GetString());
        m_userCosUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_userCosUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserCosUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userCosUrl.c_str(), allocator).Move(), allocator);
    }

}


string CosFileInfo::GetFileName() const
{
    return m_fileName;
}

void CosFileInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CosFileInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string CosFileInfo::GetFileType() const
{
    return m_fileType;
}

void CosFileInfo::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool CosFileInfo::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string CosFileInfo::GetUserCosUrl() const
{
    return m_userCosUrl;
}

void CosFileInfo::SetUserCosUrl(const string& _userCosUrl)
{
    m_userCosUrl = _userCosUrl;
    m_userCosUrlHasBeenSet = true;
}

bool CosFileInfo::UserCosUrlHasBeenSet() const
{
    return m_userCosUrlHasBeenSet;
}

