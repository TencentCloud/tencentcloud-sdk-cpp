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

#include <tencentcloud/mna/v20210119/model/ReportOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

ReportOrderRequest::ReportOrderRequest() :
    m_orderIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_reportMonthHasBeenSet(false)
{
}

string ReportOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_reportMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportMonth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reportMonth.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReportOrderRequest::GetOrderId() const
{
    return m_orderId;
}

void ReportOrderRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool ReportOrderRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string ReportOrderRequest::GetProjectId() const
{
    return m_projectId;
}

void ReportOrderRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ReportOrderRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ReportOrderRequest::GetPackageType() const
{
    return m_packageType;
}

void ReportOrderRequest::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool ReportOrderRequest::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string ReportOrderRequest::GetReportMonth() const
{
    return m_reportMonth;
}

void ReportOrderRequest::SetReportMonth(const string& _reportMonth)
{
    m_reportMonth = _reportMonth;
    m_reportMonthHasBeenSet = true;
}

bool ReportOrderRequest::ReportMonthHasBeenSet() const
{
    return m_reportMonthHasBeenSet;
}


