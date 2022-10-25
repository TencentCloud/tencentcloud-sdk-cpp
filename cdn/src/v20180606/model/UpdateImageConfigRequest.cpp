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

#include <tencentcloud/cdn/v20180606/model/UpdateImageConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

UpdateImageConfigRequest::UpdateImageConfigRequest() :
    m_domainHasBeenSet(false),
    m_webpAdapterHasBeenSet(false),
    m_tpgAdapterHasBeenSet(false),
    m_guetzliAdapterHasBeenSet(false),
    m_avifAdapterHasBeenSet(false)
{
}

string UpdateImageConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_webpAdapterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebpAdapter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webpAdapter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tpgAdapterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TpgAdapter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tpgAdapter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_guetzliAdapterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GuetzliAdapter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_guetzliAdapter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_avifAdapterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvifAdapter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_avifAdapter.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateImageConfigRequest::GetDomain() const
{
    return m_domain;
}

void UpdateImageConfigRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool UpdateImageConfigRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

WebpAdapter UpdateImageConfigRequest::GetWebpAdapter() const
{
    return m_webpAdapter;
}

void UpdateImageConfigRequest::SetWebpAdapter(const WebpAdapter& _webpAdapter)
{
    m_webpAdapter = _webpAdapter;
    m_webpAdapterHasBeenSet = true;
}

bool UpdateImageConfigRequest::WebpAdapterHasBeenSet() const
{
    return m_webpAdapterHasBeenSet;
}

TpgAdapter UpdateImageConfigRequest::GetTpgAdapter() const
{
    return m_tpgAdapter;
}

void UpdateImageConfigRequest::SetTpgAdapter(const TpgAdapter& _tpgAdapter)
{
    m_tpgAdapter = _tpgAdapter;
    m_tpgAdapterHasBeenSet = true;
}

bool UpdateImageConfigRequest::TpgAdapterHasBeenSet() const
{
    return m_tpgAdapterHasBeenSet;
}

GuetzliAdapter UpdateImageConfigRequest::GetGuetzliAdapter() const
{
    return m_guetzliAdapter;
}

void UpdateImageConfigRequest::SetGuetzliAdapter(const GuetzliAdapter& _guetzliAdapter)
{
    m_guetzliAdapter = _guetzliAdapter;
    m_guetzliAdapterHasBeenSet = true;
}

bool UpdateImageConfigRequest::GuetzliAdapterHasBeenSet() const
{
    return m_guetzliAdapterHasBeenSet;
}

AvifAdapter UpdateImageConfigRequest::GetAvifAdapter() const
{
    return m_avifAdapter;
}

void UpdateImageConfigRequest::SetAvifAdapter(const AvifAdapter& _avifAdapter)
{
    m_avifAdapter = _avifAdapter;
    m_avifAdapterHasBeenSet = true;
}

bool UpdateImageConfigRequest::AvifAdapterHasBeenSet() const
{
    return m_avifAdapterHasBeenSet;
}


