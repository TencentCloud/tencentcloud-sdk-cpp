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

#include <tencentcloud/cdc/v20201214/model/DedicatedClusterOrderItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

DedicatedClusterOrderItem::DedicatedClusterOrderItem() :
    m_dedicatedClusterTypeIdHasBeenSet(false),
    m_supportedStorageTypeHasBeenSet(false),
    m_supportedUplinkSpeedHasBeenSet(false),
    m_supportedInstanceFamilyHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_powerDrawHasBeenSet(false),
    m_subOrderStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_subOrderIdHasBeenSet(false),
    m_countHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_totalCpuHasBeenSet(false),
    m_totalMemHasBeenSet(false),
    m_totalGpuHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_computeFormatHasBeenSet(false),
    m_typeFamilyHasBeenSet(false),
    m_subOrderPayStatusHasBeenSet(false)
{
}

CoreInternalOutcome DedicatedClusterOrderItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DedicatedClusterTypeId") && !value["DedicatedClusterTypeId"].IsNull())
    {
        if (!value["DedicatedClusterTypeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.DedicatedClusterTypeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dedicatedClusterTypeId = string(value["DedicatedClusterTypeId"].GetString());
        m_dedicatedClusterTypeIdHasBeenSet = true;
    }

    if (value.HasMember("SupportedStorageType") && !value["SupportedStorageType"].IsNull())
    {
        if (!value["SupportedStorageType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.SupportedStorageType` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.SupportedUplinkSpeed` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.SupportedInstanceFamily` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("PowerDraw") && !value["PowerDraw"].IsNull())
    {
        if (!value["PowerDraw"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.PowerDraw` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_powerDraw = value["PowerDraw"].GetDouble();
        m_powerDrawHasBeenSet = true;
    }

    if (value.HasMember("SubOrderStatus") && !value["SubOrderStatus"].IsNull())
    {
        if (!value["SubOrderStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.SubOrderStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subOrderStatus = string(value["SubOrderStatus"].GetString());
        m_subOrderStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SubOrderId") && !value["SubOrderId"].IsNull())
    {
        if (!value["SubOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.SubOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subOrderId = string(value["SubOrderId"].GetString());
        m_subOrderIdHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("TotalCpu") && !value["TotalCpu"].IsNull())
    {
        if (!value["TotalCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.TotalCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCpu = value["TotalCpu"].GetInt64();
        m_totalCpuHasBeenSet = true;
    }

    if (value.HasMember("TotalMem") && !value["TotalMem"].IsNull())
    {
        if (!value["TotalMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.TotalMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalMem = value["TotalMem"].GetInt64();
        m_totalMemHasBeenSet = true;
    }

    if (value.HasMember("TotalGpu") && !value["TotalGpu"].IsNull())
    {
        if (!value["TotalGpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.TotalGpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalGpu = value["TotalGpu"].GetInt64();
        m_totalGpuHasBeenSet = true;
    }

    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("ComputeFormat") && !value["ComputeFormat"].IsNull())
    {
        if (!value["ComputeFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.ComputeFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeFormat = string(value["ComputeFormat"].GetString());
        m_computeFormatHasBeenSet = true;
    }

    if (value.HasMember("TypeFamily") && !value["TypeFamily"].IsNull())
    {
        if (!value["TypeFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.TypeFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeFamily = string(value["TypeFamily"].GetString());
        m_typeFamilyHasBeenSet = true;
    }

    if (value.HasMember("SubOrderPayStatus") && !value["SubOrderPayStatus"].IsNull())
    {
        if (!value["SubOrderPayStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterOrderItem.SubOrderPayStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subOrderPayStatus = value["SubOrderPayStatus"].GetInt64();
        m_subOrderPayStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DedicatedClusterOrderItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_subOrderStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOrderStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subOrderStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCpu, allocator);
    }

    if (m_totalMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalMem, allocator);
    }

    if (m_totalGpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalGpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalGpu, allocator);
    }

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_computeFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_typeFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_subOrderPayStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOrderPayStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subOrderPayStatus, allocator);
    }

}


string DedicatedClusterOrderItem::GetDedicatedClusterTypeId() const
{
    return m_dedicatedClusterTypeId;
}

void DedicatedClusterOrderItem::SetDedicatedClusterTypeId(const string& _dedicatedClusterTypeId)
{
    m_dedicatedClusterTypeId = _dedicatedClusterTypeId;
    m_dedicatedClusterTypeIdHasBeenSet = true;
}

bool DedicatedClusterOrderItem::DedicatedClusterTypeIdHasBeenSet() const
{
    return m_dedicatedClusterTypeIdHasBeenSet;
}

vector<string> DedicatedClusterOrderItem::GetSupportedStorageType() const
{
    return m_supportedStorageType;
}

void DedicatedClusterOrderItem::SetSupportedStorageType(const vector<string>& _supportedStorageType)
{
    m_supportedStorageType = _supportedStorageType;
    m_supportedStorageTypeHasBeenSet = true;
}

bool DedicatedClusterOrderItem::SupportedStorageTypeHasBeenSet() const
{
    return m_supportedStorageTypeHasBeenSet;
}

vector<int64_t> DedicatedClusterOrderItem::GetSupportedUplinkSpeed() const
{
    return m_supportedUplinkSpeed;
}

void DedicatedClusterOrderItem::SetSupportedUplinkSpeed(const vector<int64_t>& _supportedUplinkSpeed)
{
    m_supportedUplinkSpeed = _supportedUplinkSpeed;
    m_supportedUplinkSpeedHasBeenSet = true;
}

bool DedicatedClusterOrderItem::SupportedUplinkSpeedHasBeenSet() const
{
    return m_supportedUplinkSpeedHasBeenSet;
}

vector<string> DedicatedClusterOrderItem::GetSupportedInstanceFamily() const
{
    return m_supportedInstanceFamily;
}

void DedicatedClusterOrderItem::SetSupportedInstanceFamily(const vector<string>& _supportedInstanceFamily)
{
    m_supportedInstanceFamily = _supportedInstanceFamily;
    m_supportedInstanceFamilyHasBeenSet = true;
}

bool DedicatedClusterOrderItem::SupportedInstanceFamilyHasBeenSet() const
{
    return m_supportedInstanceFamilyHasBeenSet;
}

int64_t DedicatedClusterOrderItem::GetWeight() const
{
    return m_weight;
}

void DedicatedClusterOrderItem::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool DedicatedClusterOrderItem::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

double DedicatedClusterOrderItem::GetPowerDraw() const
{
    return m_powerDraw;
}

void DedicatedClusterOrderItem::SetPowerDraw(const double& _powerDraw)
{
    m_powerDraw = _powerDraw;
    m_powerDrawHasBeenSet = true;
}

bool DedicatedClusterOrderItem::PowerDrawHasBeenSet() const
{
    return m_powerDrawHasBeenSet;
}

string DedicatedClusterOrderItem::GetSubOrderStatus() const
{
    return m_subOrderStatus;
}

void DedicatedClusterOrderItem::SetSubOrderStatus(const string& _subOrderStatus)
{
    m_subOrderStatus = _subOrderStatus;
    m_subOrderStatusHasBeenSet = true;
}

bool DedicatedClusterOrderItem::SubOrderStatusHasBeenSet() const
{
    return m_subOrderStatusHasBeenSet;
}

string DedicatedClusterOrderItem::GetCreateTime() const
{
    return m_createTime;
}

void DedicatedClusterOrderItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DedicatedClusterOrderItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DedicatedClusterOrderItem::GetSubOrderId() const
{
    return m_subOrderId;
}

void DedicatedClusterOrderItem::SetSubOrderId(const string& _subOrderId)
{
    m_subOrderId = _subOrderId;
    m_subOrderIdHasBeenSet = true;
}

bool DedicatedClusterOrderItem::SubOrderIdHasBeenSet() const
{
    return m_subOrderIdHasBeenSet;
}

int64_t DedicatedClusterOrderItem::GetCount() const
{
    return m_count;
}

void DedicatedClusterOrderItem::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DedicatedClusterOrderItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string DedicatedClusterOrderItem::GetName() const
{
    return m_name;
}

void DedicatedClusterOrderItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DedicatedClusterOrderItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DedicatedClusterOrderItem::GetDescription() const
{
    return m_description;
}

void DedicatedClusterOrderItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DedicatedClusterOrderItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t DedicatedClusterOrderItem::GetTotalCpu() const
{
    return m_totalCpu;
}

void DedicatedClusterOrderItem::SetTotalCpu(const int64_t& _totalCpu)
{
    m_totalCpu = _totalCpu;
    m_totalCpuHasBeenSet = true;
}

bool DedicatedClusterOrderItem::TotalCpuHasBeenSet() const
{
    return m_totalCpuHasBeenSet;
}

int64_t DedicatedClusterOrderItem::GetTotalMem() const
{
    return m_totalMem;
}

void DedicatedClusterOrderItem::SetTotalMem(const int64_t& _totalMem)
{
    m_totalMem = _totalMem;
    m_totalMemHasBeenSet = true;
}

bool DedicatedClusterOrderItem::TotalMemHasBeenSet() const
{
    return m_totalMemHasBeenSet;
}

int64_t DedicatedClusterOrderItem::GetTotalGpu() const
{
    return m_totalGpu;
}

void DedicatedClusterOrderItem::SetTotalGpu(const int64_t& _totalGpu)
{
    m_totalGpu = _totalGpu;
    m_totalGpuHasBeenSet = true;
}

bool DedicatedClusterOrderItem::TotalGpuHasBeenSet() const
{
    return m_totalGpuHasBeenSet;
}

string DedicatedClusterOrderItem::GetTypeName() const
{
    return m_typeName;
}

void DedicatedClusterOrderItem::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool DedicatedClusterOrderItem::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

string DedicatedClusterOrderItem::GetComputeFormat() const
{
    return m_computeFormat;
}

void DedicatedClusterOrderItem::SetComputeFormat(const string& _computeFormat)
{
    m_computeFormat = _computeFormat;
    m_computeFormatHasBeenSet = true;
}

bool DedicatedClusterOrderItem::ComputeFormatHasBeenSet() const
{
    return m_computeFormatHasBeenSet;
}

string DedicatedClusterOrderItem::GetTypeFamily() const
{
    return m_typeFamily;
}

void DedicatedClusterOrderItem::SetTypeFamily(const string& _typeFamily)
{
    m_typeFamily = _typeFamily;
    m_typeFamilyHasBeenSet = true;
}

bool DedicatedClusterOrderItem::TypeFamilyHasBeenSet() const
{
    return m_typeFamilyHasBeenSet;
}

int64_t DedicatedClusterOrderItem::GetSubOrderPayStatus() const
{
    return m_subOrderPayStatus;
}

void DedicatedClusterOrderItem::SetSubOrderPayStatus(const int64_t& _subOrderPayStatus)
{
    m_subOrderPayStatus = _subOrderPayStatus;
    m_subOrderPayStatusHasBeenSet = true;
}

bool DedicatedClusterOrderItem::SubOrderPayStatusHasBeenSet() const
{
    return m_subOrderPayStatusHasBeenSet;
}

