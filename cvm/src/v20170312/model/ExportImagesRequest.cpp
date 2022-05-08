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

#include <tencentcloud/cvm/v20170312/model/ExportImagesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ExportImagesRequest::ExportImagesRequest() :
    m_bucketNameHasBeenSet(false),
    m_imageIdsHasBeenSet(false),
    m_exportFormatHasBeenSet(false),
    m_fileNamePrefixListHasBeenSet(false),
    m_onlyExportRootDiskHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_roleNameHasBeenSet(false)
{
}

string ExportImagesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageIds.begin(); itr != m_imageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_exportFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_exportFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNamePrefixListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNamePrefixList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileNamePrefixList.begin(); itr != m_fileNamePrefixList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_onlyExportRootDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyExportRootDisk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyExportRootDisk, allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExportImagesRequest::GetBucketName() const
{
    return m_bucketName;
}

void ExportImagesRequest::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool ExportImagesRequest::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

vector<string> ExportImagesRequest::GetImageIds() const
{
    return m_imageIds;
}

void ExportImagesRequest::SetImageIds(const vector<string>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool ExportImagesRequest::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

string ExportImagesRequest::GetExportFormat() const
{
    return m_exportFormat;
}

void ExportImagesRequest::SetExportFormat(const string& _exportFormat)
{
    m_exportFormat = _exportFormat;
    m_exportFormatHasBeenSet = true;
}

bool ExportImagesRequest::ExportFormatHasBeenSet() const
{
    return m_exportFormatHasBeenSet;
}

vector<string> ExportImagesRequest::GetFileNamePrefixList() const
{
    return m_fileNamePrefixList;
}

void ExportImagesRequest::SetFileNamePrefixList(const vector<string>& _fileNamePrefixList)
{
    m_fileNamePrefixList = _fileNamePrefixList;
    m_fileNamePrefixListHasBeenSet = true;
}

bool ExportImagesRequest::FileNamePrefixListHasBeenSet() const
{
    return m_fileNamePrefixListHasBeenSet;
}

bool ExportImagesRequest::GetOnlyExportRootDisk() const
{
    return m_onlyExportRootDisk;
}

void ExportImagesRequest::SetOnlyExportRootDisk(const bool& _onlyExportRootDisk)
{
    m_onlyExportRootDisk = _onlyExportRootDisk;
    m_onlyExportRootDiskHasBeenSet = true;
}

bool ExportImagesRequest::OnlyExportRootDiskHasBeenSet() const
{
    return m_onlyExportRootDiskHasBeenSet;
}

bool ExportImagesRequest::GetDryRun() const
{
    return m_dryRun;
}

void ExportImagesRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool ExportImagesRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

string ExportImagesRequest::GetRoleName() const
{
    return m_roleName;
}

void ExportImagesRequest::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool ExportImagesRequest::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}


