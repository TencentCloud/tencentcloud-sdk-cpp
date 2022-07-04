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

#include <tencentcloud/cpdp/v20190820/model/QueryFlexBillDownloadUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryFlexBillDownloadUrlRequest::QueryFlexBillDownloadUrlRequest() :
    m_billDateHasBeenSet(false),
    m_billTypeHasBeenSet(false),
    m_serviceProviderIdHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string QueryFlexBillDownloadUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_billDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_billDate.c_str(), allocator).Move(), allocator);
    }

    if (m_billTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_billType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceProviderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceProviderId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryFlexBillDownloadUrlRequest::GetBillDate() const
{
    return m_billDate;
}

void QueryFlexBillDownloadUrlRequest::SetBillDate(const string& _billDate)
{
    m_billDate = _billDate;
    m_billDateHasBeenSet = true;
}

bool QueryFlexBillDownloadUrlRequest::BillDateHasBeenSet() const
{
    return m_billDateHasBeenSet;
}

string QueryFlexBillDownloadUrlRequest::GetBillType() const
{
    return m_billType;
}

void QueryFlexBillDownloadUrlRequest::SetBillType(const string& _billType)
{
    m_billType = _billType;
    m_billTypeHasBeenSet = true;
}

bool QueryFlexBillDownloadUrlRequest::BillTypeHasBeenSet() const
{
    return m_billTypeHasBeenSet;
}

string QueryFlexBillDownloadUrlRequest::GetServiceProviderId() const
{
    return m_serviceProviderId;
}

void QueryFlexBillDownloadUrlRequest::SetServiceProviderId(const string& _serviceProviderId)
{
    m_serviceProviderId = _serviceProviderId;
    m_serviceProviderIdHasBeenSet = true;
}

bool QueryFlexBillDownloadUrlRequest::ServiceProviderIdHasBeenSet() const
{
    return m_serviceProviderIdHasBeenSet;
}

string QueryFlexBillDownloadUrlRequest::GetEnvironment() const
{
    return m_environment;
}

void QueryFlexBillDownloadUrlRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool QueryFlexBillDownloadUrlRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


