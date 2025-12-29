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

#include <tencentcloud/dlc/v20210125/model/GPUInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

GPUInfo::GPUInfo() :
    m_billingItemHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_cUHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_numHasBeenSet(false),
    m_gPUMemoryHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_saleStatusHasBeenSet(false)
{
}

CoreInternalOutcome GPUInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BillingItem") && !value["BillingItem"].IsNull())
    {
        if (!value["BillingItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUInfo.BillingItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItem = string(value["BillingItem"].GetString());
        m_billingItemHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUInfo.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("CU") && !value["CU"].IsNull())
    {
        if (!value["CU"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GPUInfo.CU` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cU = value["CU"].GetInt64();
        m_cUHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GPUInfo.Num` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetInt64();
        m_numHasBeenSet = true;
    }

    if (value.HasMember("GPUMemory") && !value["GPUMemory"].IsNull())
    {
        if (!value["GPUMemory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GPUInfo.GPUMemory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gPUMemory = value["GPUMemory"].GetInt64();
        m_gPUMemoryHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("SaleStatus") && !value["SaleStatus"].IsNull())
    {
        if (!value["SaleStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GPUInfo.SaleStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_saleStatus = value["SaleStatus"].GetInt64();
        m_saleStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GPUInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_billingItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItem.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_cUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cU, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

    if (m_gPUMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gPUMemory, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_saleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_saleStatus, allocator);
    }

}


string GPUInfo::GetBillingItem() const
{
    return m_billingItem;
}

void GPUInfo::SetBillingItem(const string& _billingItem)
{
    m_billingItem = _billingItem;
    m_billingItemHasBeenSet = true;
}

bool GPUInfo::BillingItemHasBeenSet() const
{
    return m_billingItemHasBeenSet;
}

string GPUInfo::GetModel() const
{
    return m_model;
}

void GPUInfo::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool GPUInfo::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

int64_t GPUInfo::GetCU() const
{
    return m_cU;
}

void GPUInfo::SetCU(const int64_t& _cU)
{
    m_cU = _cU;
    m_cUHasBeenSet = true;
}

bool GPUInfo::CUHasBeenSet() const
{
    return m_cUHasBeenSet;
}

string GPUInfo::GetType() const
{
    return m_type;
}

void GPUInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool GPUInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t GPUInfo::GetNum() const
{
    return m_num;
}

void GPUInfo::SetNum(const int64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool GPUInfo::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

int64_t GPUInfo::GetGPUMemory() const
{
    return m_gPUMemory;
}

void GPUInfo::SetGPUMemory(const int64_t& _gPUMemory)
{
    m_gPUMemory = _gPUMemory;
    m_gPUMemoryHasBeenSet = true;
}

bool GPUInfo::GPUMemoryHasBeenSet() const
{
    return m_gPUMemoryHasBeenSet;
}

string GPUInfo::GetInstanceType() const
{
    return m_instanceType;
}

void GPUInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool GPUInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t GPUInfo::GetSaleStatus() const
{
    return m_saleStatus;
}

void GPUInfo::SetSaleStatus(const int64_t& _saleStatus)
{
    m_saleStatus = _saleStatus;
    m_saleStatusHasBeenSet = true;
}

bool GPUInfo::SaleStatusHasBeenSet() const
{
    return m_saleStatusHasBeenSet;
}

