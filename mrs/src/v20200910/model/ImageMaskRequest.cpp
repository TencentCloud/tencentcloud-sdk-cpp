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

#include <tencentcloud/mrs/v20200910/model/ImageMaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ImageMaskRequest::ImageMaskRequest() :
    m_imageHasBeenSet(false),
    m_maskFlagHasBeenSet(false),
    m_autoFixImageDirectionHasBeenSet(false)
{
}

string ImageMaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_image.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_maskFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaskFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maskFlag.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_autoFixImageDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoFixImageDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoFixImageDirection, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


ImageInfo ImageMaskRequest::GetImage() const
{
    return m_image;
}

void ImageMaskRequest::SetImage(const ImageInfo& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool ImageMaskRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

ImageMaskFlags ImageMaskRequest::GetMaskFlag() const
{
    return m_maskFlag;
}

void ImageMaskRequest::SetMaskFlag(const ImageMaskFlags& _maskFlag)
{
    m_maskFlag = _maskFlag;
    m_maskFlagHasBeenSet = true;
}

bool ImageMaskRequest::MaskFlagHasBeenSet() const
{
    return m_maskFlagHasBeenSet;
}

bool ImageMaskRequest::GetAutoFixImageDirection() const
{
    return m_autoFixImageDirection;
}

void ImageMaskRequest::SetAutoFixImageDirection(const bool& _autoFixImageDirection)
{
    m_autoFixImageDirection = _autoFixImageDirection;
    m_autoFixImageDirectionHasBeenSet = true;
}

bool ImageMaskRequest::AutoFixImageDirectionHasBeenSet() const
{
    return m_autoFixImageDirectionHasBeenSet;
}


