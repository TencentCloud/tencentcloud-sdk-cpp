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

#include <tencentcloud/wedata/v20210820/model/UploadResourceRequestInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

UploadResourceRequestInfo::UploadResourceRequestInfo() :
    m_projectIdHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_newFileHasBeenSet(false),
    m_fileListHasBeenSet(false),
    m_fileSizeListHasBeenSet(false),
    m_fileMd5HasBeenSet(false)
{
}

CoreInternalOutcome UploadResourceRequestInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadResourceRequestInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadResourceRequestInfo.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadResourceRequestInfo.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadResourceRequestInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("NewFile") && !value["NewFile"].IsNull())
    {
        if (!value["NewFile"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UploadResourceRequestInfo.NewFile` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_newFile = value["NewFile"].GetBool();
        m_newFileHasBeenSet = true;
    }

    if (value.HasMember("FileList") && !value["FileList"].IsNull())
    {
        if (!value["FileList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UploadResourceRequestInfo.FileList` is not array type"));

        const rapidjson::Value &tmpValue = value["FileList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileList.push_back((*itr).GetString());
        }
        m_fileListHasBeenSet = true;
    }

    if (value.HasMember("FileSizeList") && !value["FileSizeList"].IsNull())
    {
        if (!value["FileSizeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UploadResourceRequestInfo.FileSizeList` is not array type"));

        const rapidjson::Value &tmpValue = value["FileSizeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileSizeList.push_back((*itr).GetString());
        }
        m_fileSizeListHasBeenSet = true;
    }

    if (value.HasMember("FileMd5") && !value["FileMd5"].IsNull())
    {
        if (!value["FileMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadResourceRequestInfo.FileMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMd5 = string(value["FileMd5"].GetString());
        m_fileMd5HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UploadResourceRequestInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_newFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newFile, allocator);
    }

    if (m_fileListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileList.begin(); itr != m_fileList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileSizeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSizeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileSizeList.begin(); itr != m_fileSizeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

}


string UploadResourceRequestInfo::GetProjectId() const
{
    return m_projectId;
}

void UploadResourceRequestInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UploadResourceRequestInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string UploadResourceRequestInfo::GetFilePath() const
{
    return m_filePath;
}

void UploadResourceRequestInfo::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool UploadResourceRequestInfo::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string UploadResourceRequestInfo::GetBucketName() const
{
    return m_bucketName;
}

void UploadResourceRequestInfo::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool UploadResourceRequestInfo::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string UploadResourceRequestInfo::GetRegion() const
{
    return m_region;
}

void UploadResourceRequestInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool UploadResourceRequestInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

bool UploadResourceRequestInfo::GetNewFile() const
{
    return m_newFile;
}

void UploadResourceRequestInfo::SetNewFile(const bool& _newFile)
{
    m_newFile = _newFile;
    m_newFileHasBeenSet = true;
}

bool UploadResourceRequestInfo::NewFileHasBeenSet() const
{
    return m_newFileHasBeenSet;
}

vector<string> UploadResourceRequestInfo::GetFileList() const
{
    return m_fileList;
}

void UploadResourceRequestInfo::SetFileList(const vector<string>& _fileList)
{
    m_fileList = _fileList;
    m_fileListHasBeenSet = true;
}

bool UploadResourceRequestInfo::FileListHasBeenSet() const
{
    return m_fileListHasBeenSet;
}

vector<string> UploadResourceRequestInfo::GetFileSizeList() const
{
    return m_fileSizeList;
}

void UploadResourceRequestInfo::SetFileSizeList(const vector<string>& _fileSizeList)
{
    m_fileSizeList = _fileSizeList;
    m_fileSizeListHasBeenSet = true;
}

bool UploadResourceRequestInfo::FileSizeListHasBeenSet() const
{
    return m_fileSizeListHasBeenSet;
}

string UploadResourceRequestInfo::GetFileMd5() const
{
    return m_fileMd5;
}

void UploadResourceRequestInfo::SetFileMd5(const string& _fileMd5)
{
    m_fileMd5 = _fileMd5;
    m_fileMd5HasBeenSet = true;
}

bool UploadResourceRequestInfo::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

