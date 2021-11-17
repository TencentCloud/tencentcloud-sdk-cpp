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

#include <tencentcloud/cpdp/v20190820/model/QueryShopOpenIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryShopOpenIdRequest::QueryShopOpenIdRequest() :
    m_openIdHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_shopNoHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string QueryShopOpenIdRequest::ToJsonString() const
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

    if (m_shopNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shopNo.c_str(), allocator).Move(), allocator);
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


string QueryShopOpenIdRequest::GetOpenId() const
{
    return m_openId;
}

void QueryShopOpenIdRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool QueryShopOpenIdRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string QueryShopOpenIdRequest::GetOpenKey() const
{
    return m_openKey;
}

void QueryShopOpenIdRequest::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool QueryShopOpenIdRequest::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string QueryShopOpenIdRequest::GetShopNo() const
{
    return m_shopNo;
}

void QueryShopOpenIdRequest::SetShopNo(const string& _shopNo)
{
    m_shopNo = _shopNo;
    m_shopNoHasBeenSet = true;
}

bool QueryShopOpenIdRequest::ShopNoHasBeenSet() const
{
    return m_shopNoHasBeenSet;
}

string QueryShopOpenIdRequest::GetProfile() const
{
    return m_profile;
}

void QueryShopOpenIdRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool QueryShopOpenIdRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


