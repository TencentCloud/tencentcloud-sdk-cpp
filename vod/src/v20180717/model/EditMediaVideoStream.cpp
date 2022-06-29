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

#include <tencentcloud/vod/v20180717/model/EditMediaVideoStream.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

EditMediaVideoStream::EditMediaVideoStream() :
    m_resolutionAdaptiveHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false)
{
}

CoreInternalOutcome EditMediaVideoStream::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResolutionAdaptive") && !value["ResolutionAdaptive"].IsNull())
    {
        if (!value["ResolutionAdaptive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaVideoStream.ResolutionAdaptive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolutionAdaptive = string(value["ResolutionAdaptive"].GetString());
        m_resolutionAdaptiveHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaVideoStream.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaVideoStream.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EditMediaVideoStream::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resolutionAdaptiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolutionAdaptive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolutionAdaptive.c_str(), allocator).Move(), allocator);
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

}


string EditMediaVideoStream::GetResolutionAdaptive() const
{
    return m_resolutionAdaptive;
}

void EditMediaVideoStream::SetResolutionAdaptive(const string& _resolutionAdaptive)
{
    m_resolutionAdaptive = _resolutionAdaptive;
    m_resolutionAdaptiveHasBeenSet = true;
}

bool EditMediaVideoStream::ResolutionAdaptiveHasBeenSet() const
{
    return m_resolutionAdaptiveHasBeenSet;
}

uint64_t EditMediaVideoStream::GetWidth() const
{
    return m_width;
}

void EditMediaVideoStream::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool EditMediaVideoStream::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t EditMediaVideoStream::GetHeight() const
{
    return m_height;
}

void EditMediaVideoStream::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool EditMediaVideoStream::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

