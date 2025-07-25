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

#include <tencentcloud/bda/v20200324/model/DetectBodyJointsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

DetectBodyJointsRequest::DetectBodyJointsRequest() :
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_localBodySwitchHasBeenSet(false)
{
}

string DetectBodyJointsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_localBodySwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalBodySwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_localBodySwitch, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DetectBodyJointsRequest::GetImage() const
{
    return m_image;
}

void DetectBodyJointsRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool DetectBodyJointsRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string DetectBodyJointsRequest::GetUrl() const
{
    return m_url;
}

void DetectBodyJointsRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DetectBodyJointsRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

bool DetectBodyJointsRequest::GetLocalBodySwitch() const
{
    return m_localBodySwitch;
}

void DetectBodyJointsRequest::SetLocalBodySwitch(const bool& _localBodySwitch)
{
    m_localBodySwitch = _localBodySwitch;
    m_localBodySwitchHasBeenSet = true;
}

bool DetectBodyJointsRequest::LocalBodySwitchHasBeenSet() const
{
    return m_localBodySwitchHasBeenSet;
}


