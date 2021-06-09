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

#include <tencentcloud/tsf/v20180326/model/DescribeUploadInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeUploadInfoRequest::DescribeUploadInfoRequest() :
    m_applicationIdHasBeenSet(false),
    m_pkgNameHasBeenSet(false),
    m_pkgVersionHasBeenSet(false),
    m_pkgTypeHasBeenSet(false),
    m_pkgDescHasBeenSet(false),
    m_repositoryTypeHasBeenSet(false),
    m_repositoryIdHasBeenSet(false)
{
}

string DescribeUploadInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pkgName.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pkgVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pkgType.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pkgDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repositoryType.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repositoryId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeUploadInfoRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeUploadInfoRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeUploadInfoRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string DescribeUploadInfoRequest::GetPkgName() const
{
    return m_pkgName;
}

void DescribeUploadInfoRequest::SetPkgName(const string& _pkgName)
{
    m_pkgName = _pkgName;
    m_pkgNameHasBeenSet = true;
}

bool DescribeUploadInfoRequest::PkgNameHasBeenSet() const
{
    return m_pkgNameHasBeenSet;
}

string DescribeUploadInfoRequest::GetPkgVersion() const
{
    return m_pkgVersion;
}

void DescribeUploadInfoRequest::SetPkgVersion(const string& _pkgVersion)
{
    m_pkgVersion = _pkgVersion;
    m_pkgVersionHasBeenSet = true;
}

bool DescribeUploadInfoRequest::PkgVersionHasBeenSet() const
{
    return m_pkgVersionHasBeenSet;
}

string DescribeUploadInfoRequest::GetPkgType() const
{
    return m_pkgType;
}

void DescribeUploadInfoRequest::SetPkgType(const string& _pkgType)
{
    m_pkgType = _pkgType;
    m_pkgTypeHasBeenSet = true;
}

bool DescribeUploadInfoRequest::PkgTypeHasBeenSet() const
{
    return m_pkgTypeHasBeenSet;
}

string DescribeUploadInfoRequest::GetPkgDesc() const
{
    return m_pkgDesc;
}

void DescribeUploadInfoRequest::SetPkgDesc(const string& _pkgDesc)
{
    m_pkgDesc = _pkgDesc;
    m_pkgDescHasBeenSet = true;
}

bool DescribeUploadInfoRequest::PkgDescHasBeenSet() const
{
    return m_pkgDescHasBeenSet;
}

string DescribeUploadInfoRequest::GetRepositoryType() const
{
    return m_repositoryType;
}

void DescribeUploadInfoRequest::SetRepositoryType(const string& _repositoryType)
{
    m_repositoryType = _repositoryType;
    m_repositoryTypeHasBeenSet = true;
}

bool DescribeUploadInfoRequest::RepositoryTypeHasBeenSet() const
{
    return m_repositoryTypeHasBeenSet;
}

string DescribeUploadInfoRequest::GetRepositoryId() const
{
    return m_repositoryId;
}

void DescribeUploadInfoRequest::SetRepositoryId(const string& _repositoryId)
{
    m_repositoryId = _repositoryId;
    m_repositoryIdHasBeenSet = true;
}

bool DescribeUploadInfoRequest::RepositoryIdHasBeenSet() const
{
    return m_repositoryIdHasBeenSet;
}


