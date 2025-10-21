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

#include <tencentcloud/mps/v20190612/model/RTMPPullSourceAddress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

RTMPPullSourceAddress::RTMPPullSourceAddress() :
    m_tcUrlHasBeenSet(false),
    m_streamKeyHasBeenSet(false)
{
}

CoreInternalOutcome RTMPPullSourceAddress::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TcUrl") && !value["TcUrl"].IsNull())
    {
        if (!value["TcUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RTMPPullSourceAddress.TcUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tcUrl = string(value["TcUrl"].GetString());
        m_tcUrlHasBeenSet = true;
    }

    if (value.HasMember("StreamKey") && !value["StreamKey"].IsNull())
    {
        if (!value["StreamKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RTMPPullSourceAddress.StreamKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamKey = string(value["StreamKey"].GetString());
        m_streamKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RTMPPullSourceAddress::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tcUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tcUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_streamKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamKey.c_str(), allocator).Move(), allocator);
    }

}


string RTMPPullSourceAddress::GetTcUrl() const
{
    return m_tcUrl;
}

void RTMPPullSourceAddress::SetTcUrl(const string& _tcUrl)
{
    m_tcUrl = _tcUrl;
    m_tcUrlHasBeenSet = true;
}

bool RTMPPullSourceAddress::TcUrlHasBeenSet() const
{
    return m_tcUrlHasBeenSet;
}

string RTMPPullSourceAddress::GetStreamKey() const
{
    return m_streamKey;
}

void RTMPPullSourceAddress::SetStreamKey(const string& _streamKey)
{
    m_streamKey = _streamKey;
    m_streamKeyHasBeenSet = true;
}

bool RTMPPullSourceAddress::StreamKeyHasBeenSet() const
{
    return m_streamKeyHasBeenSet;
}

