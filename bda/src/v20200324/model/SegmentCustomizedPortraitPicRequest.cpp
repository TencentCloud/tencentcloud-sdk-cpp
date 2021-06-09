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

#include <tencentcloud/bda/v20200324/model/SegmentCustomizedPortraitPicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

SegmentCustomizedPortraitPicRequest::SegmentCustomizedPortraitPicRequest() :
    m_segmentationOptionsHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

string SegmentCustomizedPortraitPicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_segmentationOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentationOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_segmentationOptions.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


SegmentationOptions SegmentCustomizedPortraitPicRequest::GetSegmentationOptions() const
{
    return m_segmentationOptions;
}

void SegmentCustomizedPortraitPicRequest::SetSegmentationOptions(const SegmentationOptions& _segmentationOptions)
{
    m_segmentationOptions = _segmentationOptions;
    m_segmentationOptionsHasBeenSet = true;
}

bool SegmentCustomizedPortraitPicRequest::SegmentationOptionsHasBeenSet() const
{
    return m_segmentationOptionsHasBeenSet;
}

string SegmentCustomizedPortraitPicRequest::GetImage() const
{
    return m_image;
}

void SegmentCustomizedPortraitPicRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool SegmentCustomizedPortraitPicRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string SegmentCustomizedPortraitPicRequest::GetUrl() const
{
    return m_url;
}

void SegmentCustomizedPortraitPicRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SegmentCustomizedPortraitPicRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}


