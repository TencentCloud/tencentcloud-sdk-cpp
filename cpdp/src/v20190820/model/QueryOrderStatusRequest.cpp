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

#include <tencentcloud/cpdp/v20190820/model/QueryOrderStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOrderStatusRequest::QueryOrderStatusRequest() :
    m_openIdHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_developerNoHasBeenSet(false),
    m_orderNoHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string QueryOrderStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_openKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openKey.c_str(), allocator).Move(), allocator);
    }

    if (m_developerNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeveloperNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_developerNo.c_str(), allocator).Move(), allocator);
    }

    if (m_orderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderNo.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryOrderStatusRequest::GetOpenId() const
{
    return m_openId;
}

void QueryOrderStatusRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool QueryOrderStatusRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string QueryOrderStatusRequest::GetOpenKey() const
{
    return m_openKey;
}

void QueryOrderStatusRequest::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool QueryOrderStatusRequest::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string QueryOrderStatusRequest::GetDeveloperNo() const
{
    return m_developerNo;
}

void QueryOrderStatusRequest::SetDeveloperNo(const string& _developerNo)
{
    m_developerNo = _developerNo;
    m_developerNoHasBeenSet = true;
}

bool QueryOrderStatusRequest::DeveloperNoHasBeenSet() const
{
    return m_developerNoHasBeenSet;
}

string QueryOrderStatusRequest::GetOrderNo() const
{
    return m_orderNo;
}

void QueryOrderStatusRequest::SetOrderNo(const string& _orderNo)
{
    m_orderNo = _orderNo;
    m_orderNoHasBeenSet = true;
}

bool QueryOrderStatusRequest::OrderNoHasBeenSet() const
{
    return m_orderNoHasBeenSet;
}

string QueryOrderStatusRequest::GetProfile() const
{
    return m_profile;
}

void QueryOrderStatusRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool QueryOrderStatusRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


