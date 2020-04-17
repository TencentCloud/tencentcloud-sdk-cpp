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
using namespace rapidjson;
using namespace std;

DescribeImagesRequest::DescribeImagesRequest() :
    m_registryIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_imageVersionHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeImagesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RepositoryName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_repositoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


