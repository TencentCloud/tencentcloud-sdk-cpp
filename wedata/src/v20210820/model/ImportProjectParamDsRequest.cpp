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

#include <tencentcloud/wedata/v20210820/model/ImportProjectParamDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ImportProjectParamDsRequest::ImportProjectParamDsRequest() :
    m_projectIdHasBeenSet(false),
    m_filesCosHasBeenSet(false),
    m_publishInfoIdHasBeenSet(false),
    m_globalConfigHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
}

string ImportProjectParamDsRequest::ToJsonString() const
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

    if (m_filesCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilesCos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filesCos.begin(); itr != m_filesCos.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_publishInfoIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishInfoId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publishInfoId.c_str(), allocator).Move(), allocator);
    }

    if (m_globalConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalConfig.c_str(), allocator).Move(), allocator);
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


string ImportProjectParamDsRequest::GetProjectId() const
{
    return m_projectId;
}

void ImportProjectParamDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ImportProjectParamDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> ImportProjectParamDsRequest::GetFilesCos() const
{
    return m_filesCos;
}

void ImportProjectParamDsRequest::SetFilesCos(const vector<string>& _filesCos)
{
    m_filesCos = _filesCos;
    m_filesCosHasBeenSet = true;
}

bool ImportProjectParamDsRequest::FilesCosHasBeenSet() const
{
    return m_filesCosHasBeenSet;
}

string ImportProjectParamDsRequest::GetPublishInfoId() const
{
    return m_publishInfoId;
}

void ImportProjectParamDsRequest::SetPublishInfoId(const string& _publishInfoId)
{
    m_publishInfoId = _publishInfoId;
    m_publishInfoIdHasBeenSet = true;
}

bool ImportProjectParamDsRequest::PublishInfoIdHasBeenSet() const
{
    return m_publishInfoIdHasBeenSet;
}

string ImportProjectParamDsRequest::GetGlobalConfig() const
{
    return m_globalConfig;
}

void ImportProjectParamDsRequest::SetGlobalConfig(const string& _globalConfig)
{
    m_globalConfig = _globalConfig;
    m_globalConfigHasBeenSet = true;
}

bool ImportProjectParamDsRequest::GlobalConfigHasBeenSet() const
{
    return m_globalConfigHasBeenSet;
}

string ImportProjectParamDsRequest::GetBucketName() const
{
    return m_bucketName;
}

void ImportProjectParamDsRequest::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool ImportProjectParamDsRequest::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string ImportProjectParamDsRequest::GetCosRegion() const
{
    return m_cosRegion;
}

void ImportProjectParamDsRequest::SetCosRegion(const string& _cosRegion)
{
    m_cosRegion = _cosRegion;
    m_cosRegionHasBeenSet = true;
}

bool ImportProjectParamDsRequest::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

string ImportProjectParamDsRequest::GetFileName() const
{
    return m_fileName;
}

void ImportProjectParamDsRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ImportProjectParamDsRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}


