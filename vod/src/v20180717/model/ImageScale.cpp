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

#include <tencentcloud/vod/v20180717/model/ImageScale.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ImageScale::ImageScale() :
    m_typeHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_longEdgeHasBeenSet(false),
    m_shortEdgeHasBeenSet(false)
{
}

CoreInternalOutcome ImageScale::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScale.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScale.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScale.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("LongEdge") && !value["LongEdge"].IsNull())
    {
        if (!value["LongEdge"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScale.LongEdge` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_longEdge = value["LongEdge"].GetUint64();
        m_longEdgeHasBeenSet = true;
    }

    if (value.HasMember("ShortEdge") && !value["ShortEdge"].IsNull())
    {
        if (!value["ShortEdge"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScale.ShortEdge` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shortEdge = value["ShortEdge"].GetUint64();
        m_shortEdgeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageScale::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_longEdgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongEdge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_longEdge, allocator);
    }

    if (m_shortEdgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortEdge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shortEdge, allocator);
    }

}


string ImageScale::GetType() const
{
    return m_type;
}

void ImageScale::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ImageScale::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t ImageScale::GetHeight() const
{
    return m_height;
}

void ImageScale::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ImageScale::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

uint64_t ImageScale::GetWidth() const
{
    return m_width;
}

void ImageScale::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ImageScale::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t ImageScale::GetLongEdge() const
{
    return m_longEdge;
}

void ImageScale::SetLongEdge(const uint64_t& _longEdge)
{
    m_longEdge = _longEdge;
    m_longEdgeHasBeenSet = true;
}

bool ImageScale::LongEdgeHasBeenSet() const
{
    return m_longEdgeHasBeenSet;
}

uint64_t ImageScale::GetShortEdge() const
{
    return m_shortEdge;
}

void ImageScale::SetShortEdge(const uint64_t& _shortEdge)
{
    m_shortEdge = _shortEdge;
    m_shortEdgeHasBeenSet = true;
}

bool ImageScale::ShortEdgeHasBeenSet() const
{
    return m_shortEdgeHasBeenSet;
}

