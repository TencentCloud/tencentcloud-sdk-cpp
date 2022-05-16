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

#include <tencentcloud/cdc/v20201214/model/DedicatedClusterType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

DedicatedClusterType::DedicatedClusterType() :
    m_dedicatedClusterTypeIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_supportedStorageTypeHasBeenSet(false),
    m_supportedUplinkGiBHasBeenSet(false),
    m_supportedInstanceFamilyHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_powerDrawKvaHasBeenSet(false),
    m_computeFormatDescHasBeenSet(false)
{
}

CoreInternalOutcome DedicatedClusterType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DedicatedClusterTypeId") && !value["DedicatedClusterTypeId"].IsNull())
    {
        if (!value["DedicatedClusterTypeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterType.DedicatedClusterTypeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dedicatedClusterTypeId = string(value["DedicatedClusterTypeId"].GetString());
        m_dedicatedClusterTypeIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterType.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterType.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterType.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SupportedStorageType") && !value["SupportedStorageType"].IsNull())
    {
        if (!value["SupportedStorageType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterType.SupportedStorageType` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportedStorageType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportedStorageType.push_back((*itr).GetString());
        }
        m_supportedStorageTypeHasBeenSet = true;
    }

    if (value.HasMember("SupportedUplinkGiB") && !value["SupportedUplinkGiB"].IsNull())
    {
        if (!value["SupportedUplinkGiB"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterType.SupportedUplinkGiB` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportedUplinkGiB"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportedUplinkGiB.push_back((*itr).GetInt64());
        }
        m_supportedUplinkGiBHasBeenSet = true;
    }

    if (value.HasMember("SupportedInstanceFamily") && !value["SupportedInstanceFamily"].IsNull())
    {
        if (!value["SupportedInstanceFamily"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterType.SupportedInstanceFamily` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterType.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("PowerDrawKva") && !value["PowerDrawKva"].IsNull())
    {
        if (!value["PowerDrawKva"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterType.PowerDrawKva` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_powerDrawKva = value["PowerDrawKva"].GetDouble();
        m_powerDrawKvaHasBeenSet = true;
    }

    if (value.HasMember("ComputeFormatDesc") && !value["ComputeFormatDesc"].IsNull())
    {
        if (!value["ComputeFormatDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterType.ComputeFormatDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeFormatDesc = string(value["ComputeFormatDesc"].GetString());
        m_computeFormatDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DedicatedClusterType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dedicatedClusterTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dedicatedClusterTypeId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_supportedUplinkGiBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportedUplinkGiB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportedUplinkGiB.begin(); itr != m_supportedUplinkGiB.end(); ++itr)
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

    if (m_powerDrawKvaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerDrawKva";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_powerDrawKva, allocator);
    }

    if (m_computeFormatDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeFormatDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeFormatDesc.c_str(), allocator).Move(), allocator);
    }

}


string DedicatedClusterType::GetDedicatedClusterTypeId() const
{
    return m_dedicatedClusterTypeId;
}

void DedicatedClusterType::SetDedicatedClusterTypeId(const string& _dedicatedClusterTypeId)
{
    m_dedicatedClusterTypeId = _dedicatedClusterTypeId;
    m_dedicatedClusterTypeIdHasBeenSet = true;
}

bool DedicatedClusterType::DedicatedClusterTypeIdHasBeenSet() const
{
    return m_dedicatedClusterTypeIdHasBeenSet;
}

string DedicatedClusterType::GetDescription() const
{
    return m_description;
}

void DedicatedClusterType::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DedicatedClusterType::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DedicatedClusterType::GetName() const
{
    return m_name;
}

void DedicatedClusterType::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DedicatedClusterType::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DedicatedClusterType::GetCreateTime() const
{
    return m_createTime;
}

void DedicatedClusterType::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DedicatedClusterType::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<string> DedicatedClusterType::GetSupportedStorageType() const
{
    return m_supportedStorageType;
}

void DedicatedClusterType::SetSupportedStorageType(const vector<string>& _supportedStorageType)
{
    m_supportedStorageType = _supportedStorageType;
    m_supportedStorageTypeHasBeenSet = true;
}

bool DedicatedClusterType::SupportedStorageTypeHasBeenSet() const
{
    return m_supportedStorageTypeHasBeenSet;
}

vector<int64_t> DedicatedClusterType::GetSupportedUplinkGiB() const
{
    return m_supportedUplinkGiB;
}

void DedicatedClusterType::SetSupportedUplinkGiB(const vector<int64_t>& _supportedUplinkGiB)
{
    m_supportedUplinkGiB = _supportedUplinkGiB;
    m_supportedUplinkGiBHasBeenSet = true;
}

bool DedicatedClusterType::SupportedUplinkGiBHasBeenSet() const
{
    return m_supportedUplinkGiBHasBeenSet;
}

vector<string> DedicatedClusterType::GetSupportedInstanceFamily() const
{
    return m_supportedInstanceFamily;
}

void DedicatedClusterType::SetSupportedInstanceFamily(const vector<string>& _supportedInstanceFamily)
{
    m_supportedInstanceFamily = _supportedInstanceFamily;
    m_supportedInstanceFamilyHasBeenSet = true;
}

bool DedicatedClusterType::SupportedInstanceFamilyHasBeenSet() const
{
    return m_supportedInstanceFamilyHasBeenSet;
}

int64_t DedicatedClusterType::GetWeight() const
{
    return m_weight;
}

void DedicatedClusterType::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool DedicatedClusterType::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

double DedicatedClusterType::GetPowerDrawKva() const
{
    return m_powerDrawKva;
}

void DedicatedClusterType::SetPowerDrawKva(const double& _powerDrawKva)
{
    m_powerDrawKva = _powerDrawKva;
    m_powerDrawKvaHasBeenSet = true;
}

bool DedicatedClusterType::PowerDrawKvaHasBeenSet() const
{
    return m_powerDrawKvaHasBeenSet;
}

string DedicatedClusterType::GetComputeFormatDesc() const
{
    return m_computeFormatDesc;
}

void DedicatedClusterType::SetComputeFormatDesc(const string& _computeFormatDesc)
{
    m_computeFormatDesc = _computeFormatDesc;
    m_computeFormatDescHasBeenSet = true;
}

bool DedicatedClusterType::ComputeFormatDescHasBeenSet() const
{
    return m_computeFormatDescHasBeenSet;
}

