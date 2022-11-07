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

#include <tencentcloud/tcr/v20190924/model/DescribeImagesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

DescribeImagesRequest::DescribeImagesRequest() :
    m_registryIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_imageVersionHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_digestHasBeenSet(false),
    m_exactMatchHasBeenSet(false)
{
}

string DescribeImagesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repositoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_digestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Digest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_digest.c_str(), allocator).Move(), allocator);
    }

    if (m_exactMatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExactMatch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exactMatch, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeImagesRequest::GetRegistryId() const
{
    return m_registryId;
}

void DescribeImagesRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool DescribeImagesRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string DescribeImagesRequest::GetNamespaceName() const
{
    return m_namespaceName;
}

void DescribeImagesRequest::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool DescribeImagesRequest::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string DescribeImagesRequest::GetRepositoryName() const
{
    return m_repositoryName;
}

void DescribeImagesRequest::SetRepositoryName(const string& _repositoryName)
{
    m_repositoryName = _repositoryName;
    m_repositoryNameHasBeenSet = true;
}

bool DescribeImagesRequest::RepositoryNameHasBeenSet() const
{
    return m_repositoryNameHasBeenSet;
}

string DescribeImagesRequest::GetImageVersion() const
{
    return m_imageVersion;
}

void DescribeImagesRequest::SetImageVersion(const string& _imageVersion)
{
    m_imageVersion = _imageVersion;
    m_imageVersionHasBeenSet = true;
}

bool DescribeImagesRequest::ImageVersionHasBeenSet() const
{
    return m_imageVersionHasBeenSet;
}

int64_t DescribeImagesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeImagesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeImagesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeImagesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeImagesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeImagesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeImagesRequest::GetDigest() const
{
    return m_digest;
}

void DescribeImagesRequest::SetDigest(const string& _digest)
{
    m_digest = _digest;
    m_digestHasBeenSet = true;
}

bool DescribeImagesRequest::DigestHasBeenSet() const
{
    return m_digestHasBeenSet;
}

bool DescribeImagesRequest::GetExactMatch() const
{
    return m_exactMatch;
}

void DescribeImagesRequest::SetExactMatch(const bool& _exactMatch)
{
    m_exactMatch = _exactMatch;
    m_exactMatchHasBeenSet = true;
}

bool DescribeImagesRequest::ExactMatchHasBeenSet() const
{
    return m_exactMatchHasBeenSet;
}


