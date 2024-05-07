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

#include <tencentcloud/trtc/v20190722/model/WebRecordVideoParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

WebRecordVideoParams::WebRecordVideoParams() :
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_maxMediaFileDurationHasBeenSet(false)
{
}

CoreInternalOutcome WebRecordVideoParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebRecordVideoParams.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebRecordVideoParams.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebRecordVideoParams.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("MaxMediaFileDuration") && !value["MaxMediaFileDuration"].IsNull())
    {
        if (!value["MaxMediaFileDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebRecordVideoParams.MaxMediaFileDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMediaFileDuration = value["MaxMediaFileDuration"].GetInt64();
        m_maxMediaFileDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebRecordVideoParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_maxMediaFileDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMediaFileDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMediaFileDuration, allocator);
    }

}


uint64_t WebRecordVideoParams::GetWidth() const
{
    return m_width;
}

void WebRecordVideoParams::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool WebRecordVideoParams::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t WebRecordVideoParams::GetHeight() const
{
    return m_height;
}

void WebRecordVideoParams::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool WebRecordVideoParams::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string WebRecordVideoParams::GetFormat() const
{
    return m_format;
}

void WebRecordVideoParams::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool WebRecordVideoParams::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

int64_t WebRecordVideoParams::GetMaxMediaFileDuration() const
{
    return m_maxMediaFileDuration;
}

void WebRecordVideoParams::SetMaxMediaFileDuration(const int64_t& _maxMediaFileDuration)
{
    m_maxMediaFileDuration = _maxMediaFileDuration;
    m_maxMediaFileDurationHasBeenSet = true;
}

bool WebRecordVideoParams::MaxMediaFileDurationHasBeenSet() const
{
    return m_maxMediaFileDurationHasBeenSet;
}

