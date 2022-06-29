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

#include <tencentcloud/cdc/v20201214/model/DedicatedClusterOrder.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

DedicatedClusterOrder::DedicatedClusterOrder() :
    m_dedicatedClusterIdHasBeenSet(false),
    m_dedicatedClusterTypeIdHasBeenSet(false),
    m_supportedStorageTypeHasBeenSet(false),
    m_supportedUplinkSpeedHasBeenSet(false),
    m_supportedInstanceFamilyHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_powerDrawHasBeenSet(false),
    m_orderStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_dedicatedClusterOrderIdHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_dedicatedClusterOrderItemsHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_gpuHasBeenSet(false),
    m_payStatusHasBeenSet(false)
{
}

CoreInternalOutcome DedicatedClusterOrder::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DedicatedClusterId") && !value["DedicatedClusterId"].IsNull())
    {
        if (!value["DedicatedClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrder.DedicatedClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dedicatedClusterId = string(value["DedicatedClusterId"].GetString());
        m_dedicatedClusterIdHasBeenSet = true;
    }

    if (value.HasMember("DedicatedClusterTypeId") && !value["DedicatedClusterTypeId"].IsNull())
    {
        if (!value["DedicatedClusterTypeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrder.DedicatedClusterTypeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dedicatedClusterTypeId = string(value["DedicatedClusterTypeId"].GetString());
        m_dedicatedClusterTypeIdHasBeenSet = true;
    }

    if (value.HasMember("SupportedStorageType") && !value["SupportedStorageType"].IsNull())
    {
        if (!value["SupportedStorageType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrder.SupportedStorageType` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportedStorageType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportedStorageType.push_back((*itr).GetString());
        }
        m_supportedStorageTypeHasBeenSet = true;
    }

    if (value.HasMember("SupportedUplinkSpeed") && !value["SupportedUplinkSpeed"].IsNull())
    {
        if (!value["SupportedUplinkSpeed"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrder.SupportedUplinkSpeed` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportedUplinkSpeed"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportedUplinkSpeed.push_back((*itr).GetInt64());
        }
        m_supportedUplinkSpeedHasBeenSet = true;
    }

    if (value.HasMember("SupportedInstanceFamily") && !value["SupportedInstanceFamily"].IsNull())
    {
        if (!value["SupportedInstanceFamily"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrder.SupportedInstanceFamily` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportedInstanceFamily"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportedInstanceFamily.push_back((*itr).GetString());
        }
        m_supportedInstanceFamilyHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrder.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("PowerDraw") && !value["PowerDraw"].IsNull())
    {
        if (!value["PowerDraw"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrder.PowerDraw` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_powerDraw = value["PowerDraw"].GetDouble();
        m_powerDrawHasBeenSet = true;
    }

    if (value.HasMember("OrderStatus") && !value["OrderStatus"].IsNull())
    {
        if (!value["OrderStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrder.OrderStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderStatus = string(value["OrderStatus"].GetString());
        m_orderStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrder.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DedicatedClusterOrderId") && !value["DedicatedClusterOrderId"].IsNull())
    {
        if (!value["DedicatedClusterOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrder.DedicatedClusterOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dedicatedClusterOrderId = string(value["DedicatedClusterOrderId"].GetString());
        m_dedicatedClusterOrderIdHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrder.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("DedicatedClusterOrderItems") && !value["DedicatedClusterOrderItems"].IsNull())
    {
        if (!value["DedicatedClusterOrderItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrder.DedicatedClusterOrderItems` is not array type"));

        const rapidjson::Value &tmpValue = value["DedicatedClusterOrderItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DedicatedClusterOrderItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dedicatedClusterOrderItems.push_back(item);
        }
        m_dedicatedClusterOrderItemsHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrder.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrder.Mem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetInt64();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("Gpu") && !value["Gpu"].IsNull())
    {
        if (!value["Gpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrder.Gpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gpu = value["Gpu"].GetInt64();
        m_gpuHasBeenSet = true;
    }

    if (value.HasMember("PayStatus") && !value["PayStatus"].IsNull())
    {
        if (!value["PayStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrder.PayStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payStatus = value["PayStatus"].GetInt64();
        m_payStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DedicatedClusterOrder::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dedicatedClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dedicatedClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_dedicatedClusterTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dedicatedClusterTypeId.c_str(), allocator).Move(), allocator);
    }

    if (m_supportedStorageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportedStorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportedStorageType.begin(); itr != m_supportedStorageType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_supportedUplinkSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportedUplinkSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportedUplinkSpeed.begin(); itr != m_supportedUplinkSpeed.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_supportedInstanceFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportedInstanceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportedInstanceFamily.begin(); itr != m_supportedInstanceFamily.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_powerDrawHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerDraw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_powerDraw, allocator);
    }

    if (m_orderStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dedicatedClusterOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dedicatedClusterOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_dedicatedClusterOrderItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterOrderItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dedicatedClusterOrderItems.begin(); itr != m_dedicatedClusterOrderItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

    if (m_gpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpu, allocator);
    }

    if (m_payStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payStatus, allocator);
    }

}


string DedicatedClusterOrder::GetDedicatedClusterId() const
{
    return m_dedicatedClusterId;
}

void DedicatedClusterOrder::SetDedicatedClusterId(const string& _dedicatedClusterId)
{
    m_dedicatedClusterId = _dedicatedClusterId;
    m_dedicatedClusterIdHasBeenSet = true;
}

bool DedicatedClusterOrder::DedicatedClusterIdHasBeenSet() const
{
    return m_dedicatedClusterIdHasBeenSet;
}

string DedicatedClusterOrder::GetDedicatedClusterTypeId() const
{
    return m_dedicatedClusterTypeId;
}

void DedicatedClusterOrder::SetDedicatedClusterTypeId(const string& _dedicatedClusterTypeId)
{
    m_dedicatedClusterTypeId = _dedicatedClusterTypeId;
    m_dedicatedClusterTypeIdHasBeenSet = true;
}

bool DedicatedClusterOrder::DedicatedClusterTypeIdHasBeenSet() const
{
    return m_dedicatedClusterTypeIdHasBeenSet;
}

vector<string> DedicatedClusterOrder::GetSupportedStorageType() const
{
    return m_supportedStorageType;
}

void DedicatedClusterOrder::SetSupportedStorageType(const vector<string>& _supportedStorageType)
{
    m_supportedStorageType = _supportedStorageType;
    m_supportedStorageTypeHasBeenSet = true;
}

bool DedicatedClusterOrder::SupportedStorageTypeHasBeenSet() const
{
    return m_supportedStorageTypeHasBeenSet;
}

vector<int64_t> DedicatedClusterOrder::GetSupportedUplinkSpeed() const
{
    return m_supportedUplinkSpeed;
}

void DedicatedClusterOrder::SetSupportedUplinkSpeed(const vector<int64_t>& _supportedUplinkSpeed)
{
    m_supportedUplinkSpeed = _supportedUplinkSpeed;
    m_supportedUplinkSpeedHasBeenSet = true;
}

bool DedicatedClusterOrder::SupportedUplinkSpeedHasBeenSet() const
{
    return m_supportedUplinkSpeedHasBeenSet;
}

vector<string> DedicatedClusterOrder::GetSupportedInstanceFamily() const
{
    return m_supportedInstanceFamily;
}

void DedicatedClusterOrder::SetSupportedInstanceFamily(const vector<string>& _supportedInstanceFamily)
{
    m_supportedInstanceFamily = _supportedInstanceFamily;
    m_supportedInstanceFamilyHasBeenSet = true;
}

bool DedicatedClusterOrder::SupportedInstanceFamilyHasBeenSet() const
{
    return m_supportedInstanceFamilyHasBeenSet;
}

int64_t DedicatedClusterOrder::GetWeight() const
{
    return m_weight;
}

void DedicatedClusterOrder::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool DedicatedClusterOrder::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

double DedicatedClusterOrder::GetPowerDraw() const
{
    return m_powerDraw;
}

void DedicatedClusterOrder::SetPowerDraw(const double& _powerDraw)
{
    m_powerDraw = _powerDraw;
    m_powerDrawHasBeenSet = true;
}

bool DedicatedClusterOrder::PowerDrawHasBeenSet() const
{
    return m_powerDrawHasBeenSet;
}

string DedicatedClusterOrder::GetOrderStatus() const
{
    return m_orderStatus;
}

void DedicatedClusterOrder::SetOrderStatus(const string& _orderStatus)
{
    m_orderStatus = _orderStatus;
    m_orderStatusHasBeenSet = true;
}

bool DedicatedClusterOrder::OrderStatusHasBeenSet() const
{
    return m_orderStatusHasBeenSet;
}

string DedicatedClusterOrder::GetCreateTime() const
{
    return m_createTime;
}

void DedicatedClusterOrder::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DedicatedClusterOrder::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DedicatedClusterOrder::GetDedicatedClusterOrderId() const
{
    return m_dedicatedClusterOrderId;
}

void DedicatedClusterOrder::SetDedicatedClusterOrderId(const string& _dedicatedClusterOrderId)
{
    m_dedicatedClusterOrderId = _dedicatedClusterOrderId;
    m_dedicatedClusterOrderIdHasBeenSet = true;
}

bool DedicatedClusterOrder::DedicatedClusterOrderIdHasBeenSet() const
{
    return m_dedicatedClusterOrderIdHasBeenSet;
}

string DedicatedClusterOrder::GetAction() const
{
    return m_action;
}

void DedicatedClusterOrder::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool DedicatedClusterOrder::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

vector<DedicatedClusterOrderItem> DedicatedClusterOrder::GetDedicatedClusterOrderItems() const
{
    return m_dedicatedClusterOrderItems;
}

void DedicatedClusterOrder::SetDedicatedClusterOrderItems(const vector<DedicatedClusterOrderItem>& _dedicatedClusterOrderItems)
{
    m_dedicatedClusterOrderItems = _dedicatedClusterOrderItems;
    m_dedicatedClusterOrderItemsHasBeenSet = true;
}

bool DedicatedClusterOrder::DedicatedClusterOrderItemsHasBeenSet() const
{
    return m_dedicatedClusterOrderItemsHasBeenSet;
}

int64_t DedicatedClusterOrder::GetCpu() const
{
    return m_cpu;
}

void DedicatedClusterOrder::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DedicatedClusterOrder::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t DedicatedClusterOrder::GetMem() const
{
    return m_mem;
}

void DedicatedClusterOrder::SetMem(const int64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool DedicatedClusterOrder::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

int64_t DedicatedClusterOrder::GetGpu() const
{
    return m_gpu;
}

void DedicatedClusterOrder::SetGpu(const int64_t& _gpu)
{
    m_gpu = _gpu;
    m_gpuHasBeenSet = true;
}

bool DedicatedClusterOrder::GpuHasBeenSet() const
{
    return m_gpuHasBeenSet;
}

int64_t DedicatedClusterOrder::GetPayStatus() const
{
    return m_payStatus;
}

void DedicatedClusterOrder::SetPayStatus(const int64_t& _payStatus)
{
    m_payStatus = _payStatus;
    m_payStatusHasBeenSet = true;
}

bool DedicatedClusterOrder::PayStatusHasBeenSet() const
{
    return m_payStatusHasBeenSet;
}

