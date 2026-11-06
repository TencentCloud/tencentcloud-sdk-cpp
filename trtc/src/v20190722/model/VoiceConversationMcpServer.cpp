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

#include <tencentcloud/trtc/v20190722/model/VoiceConversationMcpServer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

VoiceConversationMcpServer::VoiceConversationMcpServer() :
    m_nameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_toolListHasBeenSet(false)
{
}

CoreInternalOutcome VoiceConversationMcpServer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationMcpServer.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationMcpServer.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationMcpServer.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoiceConversationMcpServer.Headers` is not array type"));

        const rapidjson::Value &tmpValue = value["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headers.push_back(item);
        }
        m_headersHasBeenSet = true;
    }

    if (value.HasMember("ToolList") && !value["ToolList"].IsNull())
    {
        if (!value["ToolList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoiceConversationMcpServer.ToolList` is not array type"));

        const rapidjson::Value &tmpValue = value["ToolList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_toolList.push_back((*itr).GetString());
        }
        m_toolListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoiceConversationMcpServer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_toolListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_toolList.begin(); itr != m_toolList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string VoiceConversationMcpServer::GetName() const
{
    return m_name;
}

void VoiceConversationMcpServer::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VoiceConversationMcpServer::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VoiceConversationMcpServer::GetUrl() const
{
    return m_url;
}

void VoiceConversationMcpServer::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool VoiceConversationMcpServer::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t VoiceConversationMcpServer::GetTimeout() const
{
    return m_timeout;
}

void VoiceConversationMcpServer::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool VoiceConversationMcpServer::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

vector<KeyValueItem> VoiceConversationMcpServer::GetHeaders() const
{
    return m_headers;
}

void VoiceConversationMcpServer::SetHeaders(const vector<KeyValueItem>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool VoiceConversationMcpServer::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

vector<string> VoiceConversationMcpServer::GetToolList() const
{
    return m_toolList;
}

void VoiceConversationMcpServer::SetToolList(const vector<string>& _toolList)
{
    m_toolList = _toolList;
    m_toolListHasBeenSet = true;
}

bool VoiceConversationMcpServer::ToolListHasBeenSet() const
{
    return m_toolListHasBeenSet;
}

