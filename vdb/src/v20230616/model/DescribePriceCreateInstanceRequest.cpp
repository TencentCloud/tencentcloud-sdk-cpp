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

#include <tencentcloud/vdb/v20230616/model/DescribePriceCreateInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vdb::V20230616::Model;
using namespace std;

DescribePriceCreateInstanceRequest::DescribePriceCreateInstanceRequest() :
    m_instanceTypeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_workerNodeNumHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_productTypeHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_payPeriodHasBeenSet(false)
{
}

string DescribePriceCreateInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_workerNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerNodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workerNodeNum, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_productType, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_payPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payPeriod, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePriceCreateInstanceRequest::GetInstanceType() const
{
    return m_instanceType;
}

void DescribePriceCreateInstanceRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DescribePriceCreateInstanceRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

uint64_t DescribePriceCreateInstanceRequest::GetCpu() const
{
    return m_cpu;
}

void DescribePriceCreateInstanceRequest::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DescribePriceCreateInstanceRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t DescribePriceCreateInstanceRequest::GetMemory() const
{
    return m_memory;
}

void DescribePriceCreateInstanceRequest::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DescribePriceCreateInstanceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t DescribePriceCreateInstanceRequest::GetDiskSize() const
{
    return m_diskSize;
}

void DescribePriceCreateInstanceRequest::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool DescribePriceCreateInstanceRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

uint64_t DescribePriceCreateInstanceRequest::GetWorkerNodeNum() const
{
    return m_workerNodeNum;
}

void DescribePriceCreateInstanceRequest::SetWorkerNodeNum(const uint64_t& _workerNodeNum)
{
    m_workerNodeNum = _workerNodeNum;
    m_workerNodeNumHasBeenSet = true;
}

bool DescribePriceCreateInstanceRequest::WorkerNodeNumHasBeenSet() const
{
    return m_workerNodeNumHasBeenSet;
}

int64_t DescribePriceCreateInstanceRequest::GetPayMode() const
{
    return m_payMode;
}

void DescribePriceCreateInstanceRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool DescribePriceCreateInstanceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t DescribePriceCreateInstanceRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void DescribePriceCreateInstanceRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool DescribePriceCreateInstanceRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

int64_t DescribePriceCreateInstanceRequest::GetProductType() const
{
    return m_productType;
}

void DescribePriceCreateInstanceRequest::SetProductType(const int64_t& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool DescribePriceCreateInstanceRequest::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

string DescribePriceCreateInstanceRequest::GetMode() const
{
    return m_mode;
}

void DescribePriceCreateInstanceRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DescribePriceCreateInstanceRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t DescribePriceCreateInstanceRequest::GetPayPeriod() const
{
    return m_payPeriod;
}

void DescribePriceCreateInstanceRequest::SetPayPeriod(const int64_t& _payPeriod)
{
    m_payPeriod = _payPeriod;
    m_payPeriodHasBeenSet = true;
}

bool DescribePriceCreateInstanceRequest::PayPeriodHasBeenSet() const
{
    return m_payPeriodHasBeenSet;
}


