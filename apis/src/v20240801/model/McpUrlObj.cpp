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

#include <tencentcloud/apis/v20240801/model/McpUrlObj.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

McpUrlObj::McpUrlObj() :
    m_sSEUrlHasBeenSet(false),
    m_streamAbleUrlHasBeenSet(false)
{
}

CoreInternalOutcome McpUrlObj::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SSEUrl") && !value["SSEUrl"].IsNull())
    {
        if (!value["SSEUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpUrlObj.SSEUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSEUrl = string(value["SSEUrl"].GetString());
        m_sSEUrlHasBeenSet = true;
    }

    if (value.HasMember("StreamAbleUrl") && !value["StreamAbleUrl"].IsNull())
    {
        if (!value["StreamAbleUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpUrlObj.StreamAbleUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamAbleUrl = string(value["StreamAbleUrl"].GetString());
        m_streamAbleUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McpUrlObj::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sSEUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSEUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSEUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_streamAbleUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamAbleUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamAbleUrl.c_str(), allocator).Move(), allocator);
    }

}


string McpUrlObj::GetSSEUrl() const
{
    return m_sSEUrl;
}

void McpUrlObj::SetSSEUrl(const string& _sSEUrl)
{
    m_sSEUrl = _sSEUrl;
    m_sSEUrlHasBeenSet = true;
}

bool McpUrlObj::SSEUrlHasBeenSet() const
{
    return m_sSEUrlHasBeenSet;
}

string McpUrlObj::GetStreamAbleUrl() const
{
    return m_streamAbleUrl;
}

void McpUrlObj::SetStreamAbleUrl(const string& _streamAbleUrl)
{
    m_streamAbleUrl = _streamAbleUrl;
    m_streamAbleUrlHasBeenSet = true;
}

bool McpUrlObj::StreamAbleUrlHasBeenSet() const
{
    return m_streamAbleUrlHasBeenSet;
}

