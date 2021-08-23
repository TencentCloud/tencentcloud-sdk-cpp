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

#include <tencentcloud/cme/v20191029/model/LiveStreamClipProjectInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

LiveStreamClipProjectInput::LiveStreamClipProjectInput() :
    m_urlHasBeenSet(false),
    m_streamRecordDurationHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamClipProjectInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamClipProjectInput.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("StreamRecordDuration") && !value["StreamRecordDuration"].IsNull())
    {
        if (!value["StreamRecordDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamClipProjectInput.StreamRecordDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_streamRecordDuration = value["StreamRecordDuration"].GetUint64();
        m_streamRecordDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamClipProjectInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_streamRecordDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamRecordDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamRecordDuration, allocator);
    }

}


string LiveStreamClipProjectInput::GetUrl() const
{
    return m_url;
}

void LiveStreamClipProjectInput::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool LiveStreamClipProjectInput::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t LiveStreamClipProjectInput::GetStreamRecordDuration() const
{
    return m_streamRecordDuration;
}

void LiveStreamClipProjectInput::SetStreamRecordDuration(const uint64_t& _streamRecordDuration)
{
    m_streamRecordDuration = _streamRecordDuration;
    m_streamRecordDurationHasBeenSet = true;
}

bool LiveStreamClipProjectInput::StreamRecordDurationHasBeenSet() const
{
    return m_streamRecordDurationHasBeenSet;
}

