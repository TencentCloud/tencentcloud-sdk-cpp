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

#include <tencentcloud/tem/v20210701/model/GenerateApplicationPackageDownloadUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

GenerateApplicationPackageDownloadUrlRequest::GenerateApplicationPackageDownloadUrlRequest() :
    m_applicationIdHasBeenSet(false),
    m_pkgNameHasBeenSet(false),
    m_deployVersionHasBeenSet(false),
    m_sourceChannelHasBeenSet(false)
{
}

string GenerateApplicationPackageDownloadUrlRequest::ToJsonString() const
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

    if (m_deployVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceChannel, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GenerateApplicationPackageDownloadUrlRequest::GetApplicationId() const
{
    return m_applicationId;
}

void GenerateApplicationPackageDownloadUrlRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool GenerateApplicationPackageDownloadUrlRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string GenerateApplicationPackageDownloadUrlRequest::GetPkgName() const
{
    return m_pkgName;
}

void GenerateApplicationPackageDownloadUrlRequest::SetPkgName(const string& _pkgName)
{
    m_pkgName = _pkgName;
    m_pkgNameHasBeenSet = true;
}

bool GenerateApplicationPackageDownloadUrlRequest::PkgNameHasBeenSet() const
{
    return m_pkgNameHasBeenSet;
}

string GenerateApplicationPackageDownloadUrlRequest::GetDeployVersion() const
{
    return m_deployVersion;
}

void GenerateApplicationPackageDownloadUrlRequest::SetDeployVersion(const string& _deployVersion)
{
    m_deployVersion = _deployVersion;
    m_deployVersionHasBeenSet = true;
}

bool GenerateApplicationPackageDownloadUrlRequest::DeployVersionHasBeenSet() const
{
    return m_deployVersionHasBeenSet;
}

int64_t GenerateApplicationPackageDownloadUrlRequest::GetSourceChannel() const
{
    return m_sourceChannel;
}

void GenerateApplicationPackageDownloadUrlRequest::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool GenerateApplicationPackageDownloadUrlRequest::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}


