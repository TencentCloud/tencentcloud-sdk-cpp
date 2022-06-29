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

#include <tencentcloud/ivld/v20210903/model/AddCustomPersonImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

AddCustomPersonImageRequest::AddCustomPersonImageRequest() :
    m_personIdHasBeenSet(false),
    m_imageURLHasBeenSet(false),
    m_imageHasBeenSet(false)
{
}

string AddCustomPersonImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageURL.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddCustomPersonImageRequest::GetPersonId() const
{
    return m_personId;
}

void AddCustomPersonImageRequest::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool AddCustomPersonImageRequest::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string AddCustomPersonImageRequest::GetImageURL() const
{
    return m_imageURL;
}

void AddCustomPersonImageRequest::SetImageURL(const string& _imageURL)
{
    m_imageURL = _imageURL;
    m_imageURLHasBeenSet = true;
}

bool AddCustomPersonImageRequest::ImageURLHasBeenSet() const
{
    return m_imageURLHasBeenSet;
}

string AddCustomPersonImageRequest::GetImage() const
{
    return m_image;
}

void AddCustomPersonImageRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool AddCustomPersonImageRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}


