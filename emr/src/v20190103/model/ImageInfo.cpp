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

#include <tencentcloud/emr/v20190103/model/ImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ImageInfo::ImageInfo() :
    m_regionHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_imageVersionHasBeenSet(false),
    m_imagePullPolicyHasBeenSet(false),
    m_imageHasBeenSet(false)
{
}

CoreInternalOutcome ImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.RegistryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = string(value["RegistryId"].GetString());
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("RepositoryName") && !value["RepositoryName"].IsNull())
    {
        if (!value["RepositoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.RepositoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryName = string(value["RepositoryName"].GetString());
        m_repositoryNameHasBeenSet = true;
    }

    if (value.HasMember("ImageVersion") && !value["ImageVersion"].IsNull())
    {
        if (!value["ImageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.ImageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageVersion = string(value["ImageVersion"].GetString());
        m_imageVersionHasBeenSet = true;
    }

    if (value.HasMember("ImagePullPolicy") && !value["ImagePullPolicy"].IsNull())
    {
        if (!value["ImagePullPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.ImagePullPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePullPolicy = string(value["ImagePullPolicy"].GetString());
        m_imagePullPolicyHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imagePullPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

}


string ImageInfo::GetRegion() const
{
    return m_region;
}

void ImageInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ImageInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ImageInfo::GetRegistryId() const
{
    return m_registryId;
}

void ImageInfo::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool ImageInfo::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string ImageInfo::GetDomainName() const
{
    return m_domainName;
}

void ImageInfo::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool ImageInfo::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string ImageInfo::GetNamespaceName() const
{
    return m_namespaceName;
}

void ImageInfo::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool ImageInfo::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string ImageInfo::GetRepositoryName() const
{
    return m_repositoryName;
}

void ImageInfo::SetRepositoryName(const string& _repositoryName)
{
    m_repositoryName = _repositoryName;
    m_repositoryNameHasBeenSet = true;
}

bool ImageInfo::RepositoryNameHasBeenSet() const
{
    return m_repositoryNameHasBeenSet;
}

string ImageInfo::GetImageVersion() const
{
    return m_imageVersion;
}

void ImageInfo::SetImageVersion(const string& _imageVersion)
{
    m_imageVersion = _imageVersion;
    m_imageVersionHasBeenSet = true;
}

bool ImageInfo::ImageVersionHasBeenSet() const
{
    return m_imageVersionHasBeenSet;
}

string ImageInfo::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

void ImageInfo::SetImagePullPolicy(const string& _imagePullPolicy)
{
    m_imagePullPolicy = _imagePullPolicy;
    m_imagePullPolicyHasBeenSet = true;
}

bool ImageInfo::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

string ImageInfo::GetImage() const
{
    return m_image;
}

void ImageInfo::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool ImageInfo::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

