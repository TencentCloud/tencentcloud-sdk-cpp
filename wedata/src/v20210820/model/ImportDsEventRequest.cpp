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

#include <tencentcloud/wedata/v20210820/model/ImportDsEventRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ImportDsEventRequest::ImportDsEventRequest() :
    m_projectIdHasBeenSet(false),
    m_fileCosHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_forceUpdateHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
}

string ImportDsEventRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileCos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileCos.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_forceUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceUpdate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceUpdate, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImportDsEventRequest::GetProjectId() const
{
    return m_projectId;
}

void ImportDsEventRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ImportDsEventRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ImportDsEventRequest::GetFileCos() const
{
    return m_fileCos;
}

void ImportDsEventRequest::SetFileCos(const string& _fileCos)
{
    m_fileCos = _fileCos;
    m_fileCosHasBeenSet = true;
}

bool ImportDsEventRequest::FileCosHasBeenSet() const
{
    return m_fileCosHasBeenSet;
}

string ImportDsEventRequest::GetBucketName() const
{
    return m_bucketName;
}

void ImportDsEventRequest::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool ImportDsEventRequest::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string ImportDsEventRequest::GetCosRegion() const
{
    return m_cosRegion;
}

void ImportDsEventRequest::SetCosRegion(const string& _cosRegion)
{
    m_cosRegion = _cosRegion;
    m_cosRegionHasBeenSet = true;
}

bool ImportDsEventRequest::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

bool ImportDsEventRequest::GetForceUpdate() const
{
    return m_forceUpdate;
}

void ImportDsEventRequest::SetForceUpdate(const bool& _forceUpdate)
{
    m_forceUpdate = _forceUpdate;
    m_forceUpdateHasBeenSet = true;
}

bool ImportDsEventRequest::ForceUpdateHasBeenSet() const
{
    return m_forceUpdateHasBeenSet;
}

string ImportDsEventRequest::GetFileName() const
{
    return m_fileName;
}

void ImportDsEventRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ImportDsEventRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}


