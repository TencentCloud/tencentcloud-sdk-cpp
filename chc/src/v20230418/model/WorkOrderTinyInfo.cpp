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

#include <tencentcloud/chc/v20230418/model/WorkOrderTinyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

WorkOrderTinyInfo::WorkOrderTinyInfo() :
    m_workOrderIdHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_orderTypeHasBeenSet(false)
{
}

CoreInternalOutcome WorkOrderTinyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkOrderId") && !value["WorkOrderId"].IsNull())
    {
        if (!value["WorkOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkOrderTinyInfo.WorkOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workOrderId = string(value["WorkOrderId"].GetString());
        m_workOrderIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkOrderTinyInfo.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("OrderType") && !value["OrderType"].IsNull())
    {
        if (!value["OrderType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkOrderTinyInfo.OrderType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderType = string(value["OrderType"].GetString());
        m_orderTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkOrderTinyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
    }

}


string WorkOrderTinyInfo::GetWorkOrderId() const
{
    return m_workOrderId;
}

void WorkOrderTinyInfo::SetWorkOrderId(const string& _workOrderId)
{
    m_workOrderId = _workOrderId;
    m_workOrderIdHasBeenSet = true;
}

bool WorkOrderTinyInfo::WorkOrderIdHasBeenSet() const
{
    return m_workOrderIdHasBeenSet;
}

string WorkOrderTinyInfo::GetServiceType() const
{
    return m_serviceType;
}

void WorkOrderTinyInfo::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool WorkOrderTinyInfo::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string WorkOrderTinyInfo::GetOrderType() const
{
    return m_orderType;
}

void WorkOrderTinyInfo::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool WorkOrderTinyInfo::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

