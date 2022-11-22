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

#include <tencentcloud/tiia/v20190529/model/DetectChefDressRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

DetectChefDressRequest::DetectChefDressRequest() :
    m_imageUrlHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_enableDetectHasBeenSet(false),
    m_enablePreferredHasBeenSet(false)
{
}

string DetectChefDressRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_enableDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDetect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDetect, allocator);
    }

    if (m_enablePreferredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePreferred";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enablePreferred, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DetectChefDressRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void DetectChefDressRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool DetectChefDressRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string DetectChefDressRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void DetectChefDressRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool DetectChefDressRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

bool DetectChefDressRequest::GetEnableDetect() const
{
    return m_enableDetect;
}

void DetectChefDressRequest::SetEnableDetect(const bool& _enableDetect)
{
    m_enableDetect = _enableDetect;
    m_enableDetectHasBeenSet = true;
}

bool DetectChefDressRequest::EnableDetectHasBeenSet() const
{
    return m_enableDetectHasBeenSet;
}

bool DetectChefDressRequest::GetEnablePreferred() const
{
    return m_enablePreferred;
}

void DetectChefDressRequest::SetEnablePreferred(const bool& _enablePreferred)
{
    m_enablePreferred = _enablePreferred;
    m_enablePreferredHasBeenSet = true;
}

bool DetectChefDressRequest::EnablePreferredHasBeenSet() const
{
    return m_enablePreferredHasBeenSet;
}


