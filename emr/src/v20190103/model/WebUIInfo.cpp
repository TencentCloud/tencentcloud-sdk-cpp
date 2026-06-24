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

#include <tencentcloud/emr/v20190103/model/WebUIInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

WebUIInfo::WebUIInfo() :
    m_urlHasBeenSet(false),
    m_webUIStatusHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

CoreInternalOutcome WebUIInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebUIInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("WebUIStatus") && !value["WebUIStatus"].IsNull())
    {
        if (!value["WebUIStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebUIInfo.WebUIStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_webUIStatus = value["WebUIStatus"].GetInt64();
        m_webUIStatusHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebUIInfo.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebUIInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_webUIStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebUIStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webUIStatus, allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

}


string WebUIInfo::GetUrl() const
{
    return m_url;
}

void WebUIInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool WebUIInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

int64_t WebUIInfo::GetWebUIStatus() const
{
    return m_webUIStatus;
}

void WebUIInfo::SetWebUIStatus(const int64_t& _webUIStatus)
{
    m_webUIStatus = _webUIStatus;
    m_webUIStatusHasBeenSet = true;
}

bool WebUIInfo::WebUIStatusHasBeenSet() const
{
    return m_webUIStatusHasBeenSet;
}

string WebUIInfo::GetServiceName() const
{
    return m_serviceName;
}

void WebUIInfo::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool WebUIInfo::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

