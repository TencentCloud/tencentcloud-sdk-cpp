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

#include <tencentcloud/rum/v20210622/model/ReleaseFile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

ReleaseFile::ReleaseFile() :
    m_versionHasBeenSet(false),
    m_fileKeyHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileHashHasBeenSet(false),
    m_iDHasBeenSet(false)
{
}

CoreInternalOutcome ReleaseFile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseFile.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("FileKey") && !value["FileKey"].IsNull())
    {
        if (!value["FileKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseFile.FileKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileKey = string(value["FileKey"].GetString());
        m_fileKeyHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseFile.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileHash") && !value["FileHash"].IsNull())
    {
        if (!value["FileHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseFile.FileHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileHash = string(value["FileHash"].GetString());
        m_fileHashHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseFile.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReleaseFile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_fileKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileKey.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileHash.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

}


string ReleaseFile::GetVersion() const
{
    return m_version;
}

void ReleaseFile::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ReleaseFile::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ReleaseFile::GetFileKey() const
{
    return m_fileKey;
}

void ReleaseFile::SetFileKey(const string& _fileKey)
{
    m_fileKey = _fileKey;
    m_fileKeyHasBeenSet = true;
}

bool ReleaseFile::FileKeyHasBeenSet() const
{
    return m_fileKeyHasBeenSet;
}

string ReleaseFile::GetFileName() const
{
    return m_fileName;
}

void ReleaseFile::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ReleaseFile::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ReleaseFile::GetFileHash() const
{
    return m_fileHash;
}

void ReleaseFile::SetFileHash(const string& _fileHash)
{
    m_fileHash = _fileHash;
    m_fileHashHasBeenSet = true;
}

bool ReleaseFile::FileHashHasBeenSet() const
{
    return m_fileHashHasBeenSet;
}

int64_t ReleaseFile::GetID() const
{
    return m_iD;
}

void ReleaseFile::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ReleaseFile::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

