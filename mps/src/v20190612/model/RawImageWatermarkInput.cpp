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

#include <tencentcloud/mps/v20190612/model/RawImageWatermarkInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

RawImageWatermarkInput::RawImageWatermarkInput() :
    m_imageContentHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false)
{
}

CoreInternalOutcome RawImageWatermarkInput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageContent") && !value["ImageContent"].IsNull())
    {
        if (!value["ImageContent"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RawImageWatermarkInput.ImageContent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageContent.Deserialize(value["ImageContent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageContentHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsString())
        {
            return CoreInternalOutcome(Error("response `RawImageWatermarkInput.Width` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_width = string(value["Width"].GetString());
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsString())
        {
            return CoreInternalOutcome(Error("response `RawImageWatermarkInput.Height` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_height = string(value["Height"].GetString());
        m_heightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RawImageWatermarkInput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_imageContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_imageContent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_widthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_width.c_str(), allocator).Move(), allocator);
    }

    if (m_heightHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_height.c_str(), allocator).Move(), allocator);
    }

}


MediaInputInfo RawImageWatermarkInput::GetImageContent() const
{
    return m_imageContent;
}

void RawImageWatermarkInput::SetImageContent(const MediaInputInfo& _imageContent)
{
    m_imageContent = _imageContent;
    m_imageContentHasBeenSet = true;
}

bool RawImageWatermarkInput::ImageContentHasBeenSet() const
{
    return m_imageContentHasBeenSet;
}

string RawImageWatermarkInput::GetWidth() const
{
    return m_width;
}

void RawImageWatermarkInput::SetWidth(const string& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool RawImageWatermarkInput::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

string RawImageWatermarkInput::GetHeight() const
{
    return m_height;
}

void RawImageWatermarkInput::SetHeight(const string& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool RawImageWatermarkInput::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

