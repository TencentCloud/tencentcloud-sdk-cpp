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

#include <tencentcloud/ecm/v20190719/model/ImportCustomImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ImportCustomImageRequest::ImportCustomImageRequest() :
    m_imageNameHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_osVersionHasBeenSet(false),
    m_imageDescriptionHasBeenSet(false),
    m_initFlagHasBeenSet(false),
    m_imageUrlsHasBeenSet(false)
{
}

string ImportCustomImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_architectureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Architecture";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_architecture.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_osType.c_str(), allocator).Move(), allocator);
    }

    if (m_osVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_osVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_initFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_initFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageUrls.begin(); itr != m_imageUrls.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImportCustomImageRequest::GetImageName() const
{
    return m_imageName;
}

void ImportCustomImageRequest::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool ImportCustomImageRequest::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string ImportCustomImageRequest::GetArchitecture() const
{
    return m_architecture;
}

void ImportCustomImageRequest::SetArchitecture(const string& _architecture)
{
    m_architecture = _architecture;
    m_architectureHasBeenSet = true;
}

bool ImportCustomImageRequest::ArchitectureHasBeenSet() const
{
    return m_architectureHasBeenSet;
}

string ImportCustomImageRequest::GetOsType() const
{
    return m_osType;
}

void ImportCustomImageRequest::SetOsType(const string& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool ImportCustomImageRequest::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

string ImportCustomImageRequest::GetOsVersion() const
{
    return m_osVersion;
}

void ImportCustomImageRequest::SetOsVersion(const string& _osVersion)
{
    m_osVersion = _osVersion;
    m_osVersionHasBeenSet = true;
}

bool ImportCustomImageRequest::OsVersionHasBeenSet() const
{
    return m_osVersionHasBeenSet;
}

string ImportCustomImageRequest::GetImageDescription() const
{
    return m_imageDescription;
}

void ImportCustomImageRequest::SetImageDescription(const string& _imageDescription)
{
    m_imageDescription = _imageDescription;
    m_imageDescriptionHasBeenSet = true;
}

bool ImportCustomImageRequest::ImageDescriptionHasBeenSet() const
{
    return m_imageDescriptionHasBeenSet;
}

string ImportCustomImageRequest::GetInitFlag() const
{
    return m_initFlag;
}

void ImportCustomImageRequest::SetInitFlag(const string& _initFlag)
{
    m_initFlag = _initFlag;
    m_initFlagHasBeenSet = true;
}

bool ImportCustomImageRequest::InitFlagHasBeenSet() const
{
    return m_initFlagHasBeenSet;
}

vector<ImageUrl> ImportCustomImageRequest::GetImageUrls() const
{
    return m_imageUrls;
}

void ImportCustomImageRequest::SetImageUrls(const vector<ImageUrl>& _imageUrls)
{
    m_imageUrls = _imageUrls;
    m_imageUrlsHasBeenSet = true;
}

bool ImportCustomImageRequest::ImageUrlsHasBeenSet() const
{
    return m_imageUrlsHasBeenSet;
}


