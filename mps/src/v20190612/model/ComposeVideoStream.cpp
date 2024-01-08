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

#include <tencentcloud/mps/v20190612/model/ComposeVideoStream.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ComposeVideoStream::ComposeVideoStream() :
    m_codecHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_bitrateHasBeenSet(false)
{
}

CoreInternalOutcome ComposeVideoStream::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeVideoStream.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeVideoStream.Fps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetInt64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeVideoStream.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComposeVideoStream::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codec.c_str(), allocator).Move(), allocator);
    }

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fps, allocator);
    }

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

}


string ComposeVideoStream::GetCodec() const
{
    return m_codec;
}

void ComposeVideoStream::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool ComposeVideoStream::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

int64_t ComposeVideoStream::GetFps() const
{
    return m_fps;
}

void ComposeVideoStream::SetFps(const int64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool ComposeVideoStream::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

int64_t ComposeVideoStream::GetBitrate() const
{
    return m_bitrate;
}

void ComposeVideoStream::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool ComposeVideoStream::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

