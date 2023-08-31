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

#include <tencentcloud/oceanus/v20190422/model/Order.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

Order::Order() :
    m_typeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_operateUinHasBeenSet(false),
    m_computeCuHasBeenSet(false),
    m_orderTimeHasBeenSet(false)
{
}

CoreInternalOutcome Order::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Order.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Order.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Order.OperateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = string(value["OperateUin"].GetString());
        m_operateUinHasBeenSet = true;
    }

    if (value.HasMember("ComputeCu") && !value["ComputeCu"].IsNull())
    {
        if (!value["ComputeCu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Order.ComputeCu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_computeCu = value["ComputeCu"].GetInt64();
        m_computeCuHasBeenSet = true;
    }

    if (value.HasMember("OrderTime") && !value["OrderTime"].IsNull())
    {
        if (!value["OrderTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Order.OrderTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderTime = string(value["OrderTime"].GetString());
        m_orderTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Order::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_operateUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateUin.c_str(), allocator).Move(), allocator);
    }

    if (m_computeCuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeCu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_computeCu, allocator);
    }

    if (m_orderTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t Order::GetType() const
{
    return m_type;
}

void Order::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Order::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t Order::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void Order::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool Order::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string Order::GetOperateUin() const
{
    return m_operateUin;
}

void Order::SetOperateUin(const string& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool Order::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

int64_t Order::GetComputeCu() const
{
    return m_computeCu;
}

void Order::SetComputeCu(const int64_t& _computeCu)
{
    m_computeCu = _computeCu;
    m_computeCuHasBeenSet = true;
}

bool Order::ComputeCuHasBeenSet() const
{
    return m_computeCuHasBeenSet;
}

string Order::GetOrderTime() const
{
    return m_orderTime;
}

void Order::SetOrderTime(const string& _orderTime)
{
    m_orderTime = _orderTime;
    m_orderTimeHasBeenSet = true;
}

bool Order::OrderTimeHasBeenSet() const
{
    return m_orderTimeHasBeenSet;
}

