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

#include <tencentcloud/wedata/v20210820/model/ExportRequestInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ExportRequestInfo::ExportRequestInfo() :
    m_projectIdHasBeenSet(false),
    m_fileListHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome ExportRequestInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportRequestInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("FileList") && !value["FileList"].IsNull())
    {
        if (!value["FileList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExportRequestInfo.FileList` is not array type"));

        const rapidjson::Value &tmpValue = value["FileList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileList.push_back((*itr).GetString());
        }
        m_fileListHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportRequestInfo.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportRequestInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExportRequestInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
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

}


string ExportRequestInfo::GetProjectId() const
{
    return m_projectId;
}

void ExportRequestInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ExportRequestInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> ExportRequestInfo::GetFileList() const
{
    return m_fileList;
}

void ExportRequestInfo::SetFileList(const vector<string>& _fileList)
{
    m_fileList = _fileList;
    m_fileListHasBeenSet = true;
}

bool ExportRequestInfo::FileListHasBeenSet() const
{
    return m_fileListHasBeenSet;
}

string ExportRequestInfo::GetBucketName() const
{
    return m_bucketName;
}

void ExportRequestInfo::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool ExportRequestInfo::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string ExportRequestInfo::GetRegion() const
{
    return m_region;
}

void ExportRequestInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ExportRequestInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

