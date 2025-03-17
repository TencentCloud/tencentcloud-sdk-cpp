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

#include <tencentcloud/hunyuan/v20230901/model/Image.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

Image::Image() :
    m_imageUrlHasBeenSet(false),
    m_imageBase64HasBeenSet(false)
{
}

CoreInternalOutcome Image::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("ImageBase64") && !value["ImageBase64"].IsNull())
    {
        if (!value["ImageBase64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageBase64 = string(value["ImageBase64"].GetString());
        m_imageBase64HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Image::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

}


string Image::GetImageUrl() const
{
    return m_imageUrl;
}

void Image::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool Image::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string Image::GetImageBase64() const
{
    return m_imageBase64;
}

void Image::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool Image::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

