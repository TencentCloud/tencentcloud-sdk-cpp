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

#include <tencentcloud/mps/v20190612/model/RTMPAddressDestination.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

RTMPAddressDestination::RTMPAddressDestination() :
    m_urlHasBeenSet(false),
    m_streamKeyHasBeenSet(false)
{
}

CoreInternalOutcome RTMPAddressDestination::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RTMPAddressDestination.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("StreamKey") && !value["StreamKey"].IsNull())
    {
        if (!value["StreamKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RTMPAddressDestination.StreamKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamKey = string(value["StreamKey"].GetString());
        m_streamKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RTMPAddressDestination::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_streamKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamKey.c_str(), allocator).Move(), allocator);
    }

}


string RTMPAddressDestination::GetUrl() const
{
    return m_url;
}

void RTMPAddressDestination::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool RTMPAddressDestination::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string RTMPAddressDestination::GetStreamKey() const
{
    return m_streamKey;
}

void RTMPAddressDestination::SetStreamKey(const string& _streamKey)
{
    m_streamKey = _streamKey;
    m_streamKeyHasBeenSet = true;
}

bool RTMPAddressDestination::StreamKeyHasBeenSet() const
{
    return m_streamKeyHasBeenSet;
}

