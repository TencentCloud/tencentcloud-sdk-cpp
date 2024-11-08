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

#include <tencentcloud/wedata/v20210820/model/GetCosTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

GetCosTokenRequest::GetCosTokenRequest() :
    m_projectIdHasBeenSet(false),
    m_originDomainHasBeenSet(false),
    m_crossFlagHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_remotePathHasBeenSet(false),
    m_remoteRegionHasBeenSet(false)
{
}

string GetCosTokenRequest::ToJsonString() const
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

    if (m_originDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_crossFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_crossFlag, allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_remotePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemotePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remotePath.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remoteRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetCosTokenRequest::GetProjectId() const
{
    return m_projectId;
}

void GetCosTokenRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GetCosTokenRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GetCosTokenRequest::GetOriginDomain() const
{
    return m_originDomain;
}

void GetCosTokenRequest::SetOriginDomain(const string& _originDomain)
{
    m_originDomain = _originDomain;
    m_originDomainHasBeenSet = true;
}

bool GetCosTokenRequest::OriginDomainHasBeenSet() const
{
    return m_originDomainHasBeenSet;
}

bool GetCosTokenRequest::GetCrossFlag() const
{
    return m_crossFlag;
}

void GetCosTokenRequest::SetCrossFlag(const bool& _crossFlag)
{
    m_crossFlag = _crossFlag;
    m_crossFlagHasBeenSet = true;
}

bool GetCosTokenRequest::CrossFlagHasBeenSet() const
{
    return m_crossFlagHasBeenSet;
}

string GetCosTokenRequest::GetBucketName() const
{
    return m_bucketName;
}

void GetCosTokenRequest::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool GetCosTokenRequest::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string GetCosTokenRequest::GetRemotePath() const
{
    return m_remotePath;
}

void GetCosTokenRequest::SetRemotePath(const string& _remotePath)
{
    m_remotePath = _remotePath;
    m_remotePathHasBeenSet = true;
}

bool GetCosTokenRequest::RemotePathHasBeenSet() const
{
    return m_remotePathHasBeenSet;
}

string GetCosTokenRequest::GetRemoteRegion() const
{
    return m_remoteRegion;
}

void GetCosTokenRequest::SetRemoteRegion(const string& _remoteRegion)
{
    m_remoteRegion = _remoteRegion;
    m_remoteRegionHasBeenSet = true;
}

bool GetCosTokenRequest::RemoteRegionHasBeenSet() const
{
    return m_remoteRegionHasBeenSet;
}


