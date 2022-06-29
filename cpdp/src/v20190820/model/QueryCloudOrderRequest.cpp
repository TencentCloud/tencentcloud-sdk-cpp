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

#include <tencentcloud/cpdp/v20190820/model/QueryCloudOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryCloudOrderRequest::QueryCloudOrderRequest() :
    m_midasAppIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false),
    m_outTradeNoHasBeenSet(false)
{
}

string QueryCloudOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_outTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutTradeNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outTradeNo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryCloudOrderRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void QueryCloudOrderRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool QueryCloudOrderRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string QueryCloudOrderRequest::GetUserId() const
{
    return m_userId;
}

void QueryCloudOrderRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool QueryCloudOrderRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string QueryCloudOrderRequest::GetType() const
{
    return m_type;
}

void QueryCloudOrderRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool QueryCloudOrderRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string QueryCloudOrderRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void QueryCloudOrderRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool QueryCloudOrderRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

string QueryCloudOrderRequest::GetOutTradeNo() const
{
    return m_outTradeNo;
}

void QueryCloudOrderRequest::SetOutTradeNo(const string& _outTradeNo)
{
    m_outTradeNo = _outTradeNo;
    m_outTradeNoHasBeenSet = true;
}

bool QueryCloudOrderRequest::OutTradeNoHasBeenSet() const
{
    return m_outTradeNoHasBeenSet;
}


