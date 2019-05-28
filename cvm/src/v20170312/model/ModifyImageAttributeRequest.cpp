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
using namespace rapidjson;
using namespace std;

ModifyImageAttributeRequest::ModifyImageAttributeRequest() :
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageDescriptionHasBeenSet(false)
{
}

string ModifyImageAttributeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageDescription.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


