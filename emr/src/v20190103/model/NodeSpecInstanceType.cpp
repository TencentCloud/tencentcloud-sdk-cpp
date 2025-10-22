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

#include <tencentcloud/emr/v20190103/model/NodeSpecInstanceType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

NodeSpecInstanceType::NodeSpecInstanceType() :
    m_instanceTypeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_numHasBeenSet(false),
    m_sellOutReasonHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_dataDiskHasBeenSet(false),
    m_localDataDiskHasBeenSet(false),
    m_soldOutReasonHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_familyNameHasBeenSet(false),
    m_cpuTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_originPriceHasBeenSet(false),
    m_prepaidUnderwritePeriodsHasBeenSet(false),
    m_gpuDescHasBeenSet(false)
{
}

CoreInternalOutcome NodeSpecInstanceType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.Num` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetInt64();
        m_numHasBeenSet = true;
    }

    if (value.HasMember("SellOutReason") && !value["SellOutReason"].IsNull())
    {
        if (!value["SellOutReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.SellOutReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellOutReason = string(value["SellOutReason"].GetString());
        m_sellOutReasonHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.SystemDisk` is not array type"));

        const rapidjson::Value &tmpValue = value["SystemDisk"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeSpecDisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_systemDisk.push_back(item);
        }
        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("DataDisk") && !value["DataDisk"].IsNull())
    {
        if (!value["DataDisk"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.DataDisk` is not array type"));

        const rapidjson::Value &tmpValue = value["DataDisk"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeSpecDisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataDisk.push_back(item);
        }
        m_dataDiskHasBeenSet = true;
    }

    if (value.HasMember("LocalDataDisk") && !value["LocalDataDisk"].IsNull())
    {
        if (!value["LocalDataDisk"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.LocalDataDisk` is not array type"));

        const rapidjson::Value &tmpValue = value["LocalDataDisk"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeSpecDisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_localDataDisk.push_back(item);
        }
        m_localDataDiskHasBeenSet = true;
    }

    if (value.HasMember("SoldOutReason") && !value["SoldOutReason"].IsNull())
    {
        if (!value["SoldOutReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.SoldOutReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_soldOutReason = string(value["SoldOutReason"].GetString());
        m_soldOutReasonHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamily") && !value["InstanceFamily"].IsNull())
    {
        if (!value["InstanceFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.InstanceFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamily = string(value["InstanceFamily"].GetString());
        m_instanceFamilyHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("FamilyName") && !value["FamilyName"].IsNull())
    {
        if (!value["FamilyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.FamilyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_familyName = string(value["FamilyName"].GetString());
        m_familyNameHasBeenSet = true;
    }

    if (value.HasMember("CpuType") && !value["CpuType"].IsNull())
    {
        if (!value["CpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.CpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuType = string(value["CpuType"].GetString());
        m_cpuTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("OriginPrice") && !value["OriginPrice"].IsNull())
    {
        if (!value["OriginPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.OriginPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originPrice = value["OriginPrice"].GetDouble();
        m_originPriceHasBeenSet = true;
    }

    if (value.HasMember("PrepaidUnderwritePeriods") && !value["PrepaidUnderwritePeriods"].IsNull())
    {
        if (!value["PrepaidUnderwritePeriods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.PrepaidUnderwritePeriods` is not array type"));

        const rapidjson::Value &tmpValue = value["PrepaidUnderwritePeriods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_prepaidUnderwritePeriods.push_back((*itr).GetInt64());
        }
        m_prepaidUnderwritePeriodsHasBeenSet = true;
    }

    if (value.HasMember("GpuDesc") && !value["GpuDesc"].IsNull())
    {
        if (!value["GpuDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecInstanceType.GpuDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuDesc = string(value["GpuDesc"].GetString());
        m_gpuDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeSpecInstanceType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_order, allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

    if (m_sellOutReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellOutReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellOutReason.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_systemDisk.begin(); itr != m_systemDisk.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dataDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDisk.begin(); itr != m_dataDisk.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_localDataDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalDataDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_localDataDisk.begin(); itr != m_localDataDisk.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_soldOutReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoldOutReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_soldOutReason.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_familyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FamilyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_familyName.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_originPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originPrice, allocator);
    }

    if (m_prepaidUnderwritePeriodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepaidUnderwritePeriods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_prepaidUnderwritePeriods.begin(); itr != m_prepaidUnderwritePeriods.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_gpuDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuDesc.c_str(), allocator).Move(), allocator);
    }

}


string NodeSpecInstanceType::GetInstanceType() const
{
    return m_instanceType;
}

void NodeSpecInstanceType::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool NodeSpecInstanceType::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t NodeSpecInstanceType::GetCpu() const
{
    return m_cpu;
}

void NodeSpecInstanceType::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool NodeSpecInstanceType::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t NodeSpecInstanceType::GetMemory() const
{
    return m_memory;
}

void NodeSpecInstanceType::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool NodeSpecInstanceType::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t NodeSpecInstanceType::GetOrder() const
{
    return m_order;
}

void NodeSpecInstanceType::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool NodeSpecInstanceType::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

int64_t NodeSpecInstanceType::GetNum() const
{
    return m_num;
}

void NodeSpecInstanceType::SetNum(const int64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool NodeSpecInstanceType::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

string NodeSpecInstanceType::GetSellOutReason() const
{
    return m_sellOutReason;
}

void NodeSpecInstanceType::SetSellOutReason(const string& _sellOutReason)
{
    m_sellOutReason = _sellOutReason;
    m_sellOutReasonHasBeenSet = true;
}

bool NodeSpecInstanceType::SellOutReasonHasBeenSet() const
{
    return m_sellOutReasonHasBeenSet;
}

vector<NodeSpecDisk> NodeSpecInstanceType::GetSystemDisk() const
{
    return m_systemDisk;
}

void NodeSpecInstanceType::SetSystemDisk(const vector<NodeSpecDisk>& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool NodeSpecInstanceType::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<NodeSpecDisk> NodeSpecInstanceType::GetDataDisk() const
{
    return m_dataDisk;
}

void NodeSpecInstanceType::SetDataDisk(const vector<NodeSpecDisk>& _dataDisk)
{
    m_dataDisk = _dataDisk;
    m_dataDiskHasBeenSet = true;
}

bool NodeSpecInstanceType::DataDiskHasBeenSet() const
{
    return m_dataDiskHasBeenSet;
}

vector<NodeSpecDisk> NodeSpecInstanceType::GetLocalDataDisk() const
{
    return m_localDataDisk;
}

void NodeSpecInstanceType::SetLocalDataDisk(const vector<NodeSpecDisk>& _localDataDisk)
{
    m_localDataDisk = _localDataDisk;
    m_localDataDiskHasBeenSet = true;
}

bool NodeSpecInstanceType::LocalDataDiskHasBeenSet() const
{
    return m_localDataDiskHasBeenSet;
}

string NodeSpecInstanceType::GetSoldOutReason() const
{
    return m_soldOutReason;
}

void NodeSpecInstanceType::SetSoldOutReason(const string& _soldOutReason)
{
    m_soldOutReason = _soldOutReason;
    m_soldOutReasonHasBeenSet = true;
}

bool NodeSpecInstanceType::SoldOutReasonHasBeenSet() const
{
    return m_soldOutReasonHasBeenSet;
}

string NodeSpecInstanceType::GetInstanceFamily() const
{
    return m_instanceFamily;
}

void NodeSpecInstanceType::SetInstanceFamily(const string& _instanceFamily)
{
    m_instanceFamily = _instanceFamily;
    m_instanceFamilyHasBeenSet = true;
}

bool NodeSpecInstanceType::InstanceFamilyHasBeenSet() const
{
    return m_instanceFamilyHasBeenSet;
}

string NodeSpecInstanceType::GetNodeName() const
{
    return m_nodeName;
}

void NodeSpecInstanceType::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool NodeSpecInstanceType::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string NodeSpecInstanceType::GetNodeType() const
{
    return m_nodeType;
}

void NodeSpecInstanceType::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool NodeSpecInstanceType::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string NodeSpecInstanceType::GetType() const
{
    return m_type;
}

void NodeSpecInstanceType::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool NodeSpecInstanceType::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string NodeSpecInstanceType::GetTypeName() const
{
    return m_typeName;
}

void NodeSpecInstanceType::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool NodeSpecInstanceType::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

string NodeSpecInstanceType::GetFamilyName() const
{
    return m_familyName;
}

void NodeSpecInstanceType::SetFamilyName(const string& _familyName)
{
    m_familyName = _familyName;
    m_familyNameHasBeenSet = true;
}

bool NodeSpecInstanceType::FamilyNameHasBeenSet() const
{
    return m_familyNameHasBeenSet;
}

string NodeSpecInstanceType::GetCpuType() const
{
    return m_cpuType;
}

void NodeSpecInstanceType::SetCpuType(const string& _cpuType)
{
    m_cpuType = _cpuType;
    m_cpuTypeHasBeenSet = true;
}

bool NodeSpecInstanceType::CpuTypeHasBeenSet() const
{
    return m_cpuTypeHasBeenSet;
}

string NodeSpecInstanceType::GetRemark() const
{
    return m_remark;
}

void NodeSpecInstanceType::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool NodeSpecInstanceType::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

double NodeSpecInstanceType::GetOriginPrice() const
{
    return m_originPrice;
}

void NodeSpecInstanceType::SetOriginPrice(const double& _originPrice)
{
    m_originPrice = _originPrice;
    m_originPriceHasBeenSet = true;
}

bool NodeSpecInstanceType::OriginPriceHasBeenSet() const
{
    return m_originPriceHasBeenSet;
}

vector<int64_t> NodeSpecInstanceType::GetPrepaidUnderwritePeriods() const
{
    return m_prepaidUnderwritePeriods;
}

void NodeSpecInstanceType::SetPrepaidUnderwritePeriods(const vector<int64_t>& _prepaidUnderwritePeriods)
{
    m_prepaidUnderwritePeriods = _prepaidUnderwritePeriods;
    m_prepaidUnderwritePeriodsHasBeenSet = true;
}

bool NodeSpecInstanceType::PrepaidUnderwritePeriodsHasBeenSet() const
{
    return m_prepaidUnderwritePeriodsHasBeenSet;
}

string NodeSpecInstanceType::GetGpuDesc() const
{
    return m_gpuDesc;
}

void NodeSpecInstanceType::SetGpuDesc(const string& _gpuDesc)
{
    m_gpuDesc = _gpuDesc;
    m_gpuDescHasBeenSet = true;
}

bool NodeSpecInstanceType::GpuDescHasBeenSet() const
{
    return m_gpuDescHasBeenSet;
}

