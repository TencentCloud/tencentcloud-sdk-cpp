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

#include <tencentcloud/cpdp/v20190820/model/DistributeQueryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

DistributeQueryRequest::DistributeQueryRequest() :
    m_openIdHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_outDistributeNoHasBeenSet(false),
    m_distributeNoHasBeenSet(false),
    m_orderNoHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string DistributeQueryRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_outDistributeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutDistributeNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outDistributeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_distributeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistributeNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_distributeNo.c_str(), allocator).Move(), allocator);
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


string DistributeQueryRequest::GetOpenId() const
{
    return m_openId;
}

void DistributeQueryRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool DistributeQueryRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string DistributeQueryRequest::GetOpenKey() const
{
    return m_openKey;
}

void DistributeQueryRequest::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool DistributeQueryRequest::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string DistributeQueryRequest::GetType() const
{
    return m_type;
}

void DistributeQueryRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DistributeQueryRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DistributeQueryRequest::GetOutDistributeNo() const
{
    return m_outDistributeNo;
}

void DistributeQueryRequest::SetOutDistributeNo(const string& _outDistributeNo)
{
    m_outDistributeNo = _outDistributeNo;
    m_outDistributeNoHasBeenSet = true;
}

bool DistributeQueryRequest::OutDistributeNoHasBeenSet() const
{
    return m_outDistributeNoHasBeenSet;
}

string DistributeQueryRequest::GetDistributeNo() const
{
    return m_distributeNo;
}

void DistributeQueryRequest::SetDistributeNo(const string& _distributeNo)
{
    m_distributeNo = _distributeNo;
    m_distributeNoHasBeenSet = true;
}

bool DistributeQueryRequest::DistributeNoHasBeenSet() const
{
    return m_distributeNoHasBeenSet;
}

string DistributeQueryRequest::GetOrderNo() const
{
    return m_orderNo;
}

void DistributeQueryRequest::SetOrderNo(const string& _orderNo)
{
    m_orderNo = _orderNo;
    m_orderNoHasBeenSet = true;
}

bool DistributeQueryRequest::OrderNoHasBeenSet() const
{
    return m_orderNoHasBeenSet;
}

string DistributeQueryRequest::GetProfile() const
{
    return m_profile;
}

void DistributeQueryRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool DistributeQueryRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


