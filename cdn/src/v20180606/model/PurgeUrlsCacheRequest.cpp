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

#include <tencentcloud/cdn/v20180606/model/PurgeUrlsCacheRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

PurgeUrlsCacheRequest::PurgeUrlsCacheRequest() :
    m_urlsHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_urlEncodeHasBeenSet(false)
{
}

string PurgeUrlsCacheRequest::ToJsonString() const
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

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
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


vector<string> PurgeUrlsCacheRequest::GetUrls() const
{
    return m_urls;
}

void PurgeUrlsCacheRequest::SetUrls(const vector<string>& _urls)
{
    m_urls = _urls;
    m_urlsHasBeenSet = true;
}

bool PurgeUrlsCacheRequest::UrlsHasBeenSet() const
{
    return m_urlsHasBeenSet;
}

string PurgeUrlsCacheRequest::GetArea() const
{
    return m_area;
}

void PurgeUrlsCacheRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool PurgeUrlsCacheRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

bool PurgeUrlsCacheRequest::GetUrlEncode() const
{
    return m_urlEncode;
}

void PurgeUrlsCacheRequest::SetUrlEncode(const bool& _urlEncode)
{
    m_urlEncode = _urlEncode;
    m_urlEncodeHasBeenSet = true;
}

bool PurgeUrlsCacheRequest::UrlEncodeHasBeenSet() const
{
    return m_urlEncodeHasBeenSet;
}


