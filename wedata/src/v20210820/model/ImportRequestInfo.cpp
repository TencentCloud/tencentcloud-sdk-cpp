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

#include <tencentcloud/wedata/v20210820/model/ImportRequestInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ImportRequestInfo::ImportRequestInfo() :
    m_projectIdHasBeenSet(false),
    m_fileCosHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_filePathHasBeenSet(false)
{
}

CoreInternalOutcome ImportRequestInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRequestInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("FileCos") && !value["FileCos"].IsNull())
    {
        if (!value["FileCos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRequestInfo.FileCos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileCos = string(value["FileCos"].GetString());
        m_fileCosHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRequestInfo.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRequestInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRequestInfo.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImportRequestInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileCos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileCos.c_str(), allocator).Move(), allocator);
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

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

}


string ImportRequestInfo::GetProjectId() const
{
    return m_projectId;
}

void ImportRequestInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ImportRequestInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ImportRequestInfo::GetFileCos() const
{
    return m_fileCos;
}

void ImportRequestInfo::SetFileCos(const string& _fileCos)
{
    m_fileCos = _fileCos;
    m_fileCosHasBeenSet = true;
}

bool ImportRequestInfo::FileCosHasBeenSet() const
{
    return m_fileCosHasBeenSet;
}

string ImportRequestInfo::GetBucketName() const
{
    return m_bucketName;
}

void ImportRequestInfo::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool ImportRequestInfo::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string ImportRequestInfo::GetRegion() const
{
    return m_region;
}

void ImportRequestInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ImportRequestInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ImportRequestInfo::GetFilePath() const
{
    return m_filePath;
}

void ImportRequestInfo::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool ImportRequestInfo::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

