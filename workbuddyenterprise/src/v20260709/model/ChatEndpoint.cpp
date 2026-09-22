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

#include <tencentcloud/workbuddyenterprise/v20260709/model/ChatEndpoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

ChatEndpoint::ChatEndpoint() :
    m_endpointTypeHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome ChatEndpoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndpointType") && !value["EndpointType"].IsNull())
    {
        if (!value["EndpointType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatEndpoint.EndpointType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointType = string(value["EndpointType"].GetString());
        m_endpointTypeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatEndpoint.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChatEndpoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endpointTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointType.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


string ChatEndpoint::GetEndpointType() const
{
    return m_endpointType;
}

void ChatEndpoint::SetEndpointType(const string& _endpointType)
{
    m_endpointType = _endpointType;
    m_endpointTypeHasBeenSet = true;
}

bool ChatEndpoint::EndpointTypeHasBeenSet() const
{
    return m_endpointTypeHasBeenSet;
}

string ChatEndpoint::GetUrl() const
{
    return m_url;
}

void ChatEndpoint::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ChatEndpoint::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

