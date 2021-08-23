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

#include <tencentcloud/vod/v20180717/model/ImageCenterCut.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ImageCenterCut::ImageCenterCut() :
    m_typeHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_radiusHasBeenSet(false)
{
}

CoreInternalOutcome ImageCenterCut::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCenterCut.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCenterCut.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCenterCut.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Radius") && !value["Radius"].IsNull())
    {
        if (!value["Radius"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCenterCut.Radius` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_radius = value["Radius"].GetInt64();
        m_radiusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageCenterCut::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_radiusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Radius";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_radius, allocator);
    }

}


string ImageCenterCut::GetType() const
{
    return m_type;
}

void ImageCenterCut::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ImageCenterCut::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ImageCenterCut::GetWidth() const
{
    return m_width;
}

void ImageCenterCut::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ImageCenterCut::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t ImageCenterCut::GetHeight() const
{
    return m_height;
}

void ImageCenterCut::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ImageCenterCut::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t ImageCenterCut::GetRadius() const
{
    return m_radius;
}

void ImageCenterCut::SetRadius(const int64_t& _radius)
{
    m_radius = _radius;
    m_radiusHasBeenSet = true;
}

bool ImageCenterCut::RadiusHasBeenSet() const
{
    return m_radiusHasBeenSet;
}

