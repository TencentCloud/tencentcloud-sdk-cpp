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

#include <tencentcloud/cvm/v20170312/model/ModifyImageAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ModifyImageAttributeRequest::ModifyImageAttributeRequest() :
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageDescriptionHasBeenSet(false),
    m_imageFamilyHasBeenSet(false),
    m_imageDeprecatedHasBeenSet(false)
{
}

string ModifyImageAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_imageFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageFamily";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDeprecatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageDeprecated";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_imageDeprecated, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyImageAttributeRequest::GetImageId() const
{
    return m_imageId;
}

void ModifyImageAttributeRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ModifyImageAttributeRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string ModifyImageAttributeRequest::GetImageName() const
{
    return m_imageName;
}

void ModifyImageAttributeRequest::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool ModifyImageAttributeRequest::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string ModifyImageAttributeRequest::GetImageDescription() const
{
    return m_imageDescription;
}

void ModifyImageAttributeRequest::SetImageDescription(const string& _imageDescription)
{
    m_imageDescription = _imageDescription;
    m_imageDescriptionHasBeenSet = true;
}

bool ModifyImageAttributeRequest::ImageDescriptionHasBeenSet() const
{
    return m_imageDescriptionHasBeenSet;
}

string ModifyImageAttributeRequest::GetImageFamily() const
{
    return m_imageFamily;
}

void ModifyImageAttributeRequest::SetImageFamily(const string& _imageFamily)
{
    m_imageFamily = _imageFamily;
    m_imageFamilyHasBeenSet = true;
}

bool ModifyImageAttributeRequest::ImageFamilyHasBeenSet() const
{
    return m_imageFamilyHasBeenSet;
}

bool ModifyImageAttributeRequest::GetImageDeprecated() const
{
    return m_imageDeprecated;
}

void ModifyImageAttributeRequest::SetImageDeprecated(const bool& _imageDeprecated)
{
    m_imageDeprecated = _imageDeprecated;
    m_imageDeprecatedHasBeenSet = true;
}

bool ModifyImageAttributeRequest::ImageDeprecatedHasBeenSet() const
{
    return m_imageDeprecatedHasBeenSet;
}


