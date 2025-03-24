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

#include <tencentcloud/chc/v20230418/model/WorkOrderData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

WorkOrderData::WorkOrderData() :
    m_workOrderIdHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_orderStatusHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false)
{
}

CoreInternalOutcome WorkOrderData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkOrderId") && !value["WorkOrderId"].IsNull())
    {
        if (!value["WorkOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkOrderData.WorkOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workOrderId = string(value["WorkOrderId"].GetString());
        m_workOrderIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkOrderData.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("OrderType") && !value["OrderType"].IsNull())
    {
        if (!value["OrderType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkOrderData.OrderType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderType = string(value["OrderType"].GetString());
        m_orderTypeHasBeenSet = true;
    }

    if (value.HasMember("OrderStatus") && !value["OrderStatus"].IsNull())
    {
        if (!value["OrderStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkOrderData.OrderStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderStatus = string(value["OrderStatus"].GetString());
        m_orderStatusHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkOrderData.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkOrderData.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkOrderData.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkOrderData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_orderStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

}


string WorkOrderData::GetWorkOrderId() const
{
    return m_workOrderId;
}

void WorkOrderData::SetWorkOrderId(const string& _workOrderId)
{
    m_workOrderId = _workOrderId;
    m_workOrderIdHasBeenSet = true;
}

bool WorkOrderData::WorkOrderIdHasBeenSet() const
{
    return m_workOrderIdHasBeenSet;
}

string WorkOrderData::GetServiceType() const
{
    return m_serviceType;
}

void WorkOrderData::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool WorkOrderData::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string WorkOrderData::GetOrderType() const
{
    return m_orderType;
}

void WorkOrderData::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool WorkOrderData::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string WorkOrderData::GetOrderStatus() const
{
    return m_orderStatus;
}

void WorkOrderData::SetOrderStatus(const string& _orderStatus)
{
    m_orderStatus = _orderStatus;
    m_orderStatusHasBeenSet = true;
}

bool WorkOrderData::OrderStatusHasBeenSet() const
{
    return m_orderStatusHasBeenSet;
}

string WorkOrderData::GetCreator() const
{
    return m_creator;
}

void WorkOrderData::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool WorkOrderData::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string WorkOrderData::GetCreateTime() const
{
    return m_createTime;
}

void WorkOrderData::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WorkOrderData::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WorkOrderData::GetFinishTime() const
{
    return m_finishTime;
}

void WorkOrderData::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool WorkOrderData::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

