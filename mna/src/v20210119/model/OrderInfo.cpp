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

#include <tencentcloud/mna/v20210119/model/OrderInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

OrderInfo::OrderInfo() :
    m_uinHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_reportMonthHasBeenSet(false),
    m_updatedHasBeenSet(false)
{
}

CoreInternalOutcome OrderInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(value["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("ReportMonth") && !value["ReportMonth"].IsNull())
    {
        if (!value["ReportMonth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.ReportMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportMonth = string(value["ReportMonth"].GetString());
        m_reportMonthHasBeenSet = true;
    }

    if (value.HasMember("Updated") && !value["Updated"].IsNull())
    {
        if (!value["Updated"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.Updated` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updated = string(value["Updated"].GetString());
        m_updatedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrderInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_reportMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Updated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updated.c_str(), allocator).Move(), allocator);
    }

}


string OrderInfo::GetUin() const
{
    return m_uin;
}

void OrderInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool OrderInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string OrderInfo::GetProjectId() const
{
    return m_projectId;
}

void OrderInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool OrderInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string OrderInfo::GetPackageType() const
{
    return m_packageType;
}

void OrderInfo::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool OrderInfo::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string OrderInfo::GetOrderId() const
{
    return m_orderId;
}

void OrderInfo::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool OrderInfo::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string OrderInfo::GetReportMonth() const
{
    return m_reportMonth;
}

void OrderInfo::SetReportMonth(const string& _reportMonth)
{
    m_reportMonth = _reportMonth;
    m_reportMonthHasBeenSet = true;
}

bool OrderInfo::ReportMonthHasBeenSet() const
{
    return m_reportMonthHasBeenSet;
}

string OrderInfo::GetUpdated() const
{
    return m_updated;
}

void OrderInfo::SetUpdated(const string& _updated)
{
    m_updated = _updated;
    m_updatedHasBeenSet = true;
}

bool OrderInfo::UpdatedHasBeenSet() const
{
    return m_updatedHasBeenSet;
}

