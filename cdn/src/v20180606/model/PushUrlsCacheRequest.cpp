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

#include <tencentcloud/cdn/v20180606/model/PushUrlsCacheRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

PushUrlsCacheRequest::PushUrlsCacheRequest() :
    m_urlsHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_layerHasBeenSet(false),
    m_parseM3U8HasBeenSet(false),
    m_disableRangeHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_urlEncodeHasBeenSet(false)
{
}

string PushUrlsCacheRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_urlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Urls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_urls.begin(); itr != m_urls.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_layerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Layer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_layer.c_str(), allocator).Move(), allocator);
    }

    if (m_parseM3U8HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParseM3U8";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parseM3U8, allocator);
    }

    if (m_disableRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableRange, allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_urlEncodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlEncode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_urlEncode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> PushUrlsCacheRequest::GetUrls() const
{
    return m_urls;
}

void PushUrlsCacheRequest::SetUrls(const vector<string>& _urls)
{
    m_urls = _urls;
    m_urlsHasBeenSet = true;
}

bool PushUrlsCacheRequest::UrlsHasBeenSet() const
{
    return m_urlsHasBeenSet;
}

string PushUrlsCacheRequest::GetUserAgent() const
{
    return m_userAgent;
}

void PushUrlsCacheRequest::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool PushUrlsCacheRequest::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string PushUrlsCacheRequest::GetArea() const
{
    return m_area;
}

void PushUrlsCacheRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool PushUrlsCacheRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string PushUrlsCacheRequest::GetLayer() const
{
    return m_layer;
}

void PushUrlsCacheRequest::SetLayer(const string& _layer)
{
    m_layer = _layer;
    m_layerHasBeenSet = true;
}

bool PushUrlsCacheRequest::LayerHasBeenSet() const
{
    return m_layerHasBeenSet;
}

bool PushUrlsCacheRequest::GetParseM3U8() const
{
    return m_parseM3U8;
}

void PushUrlsCacheRequest::SetParseM3U8(const bool& _parseM3U8)
{
    m_parseM3U8 = _parseM3U8;
    m_parseM3U8HasBeenSet = true;
}

bool PushUrlsCacheRequest::ParseM3U8HasBeenSet() const
{
    return m_parseM3U8HasBeenSet;
}

bool PushUrlsCacheRequest::GetDisableRange() const
{
    return m_disableRange;
}

void PushUrlsCacheRequest::SetDisableRange(const bool& _disableRange)
{
    m_disableRange = _disableRange;
    m_disableRangeHasBeenSet = true;
}

bool PushUrlsCacheRequest::DisableRangeHasBeenSet() const
{
    return m_disableRangeHasBeenSet;
}

vector<HTTPHeader> PushUrlsCacheRequest::GetHeaders() const
{
    return m_headers;
}

void PushUrlsCacheRequest::SetHeaders(const vector<HTTPHeader>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool PushUrlsCacheRequest::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

bool PushUrlsCacheRequest::GetUrlEncode() const
{
    return m_urlEncode;
}

void PushUrlsCacheRequest::SetUrlEncode(const bool& _urlEncode)
{
    m_urlEncode = _urlEncode;
    m_urlEncodeHasBeenSet = true;
}

bool PushUrlsCacheRequest::UrlEncodeHasBeenSet() const
{
    return m_urlEncodeHasBeenSet;
}


