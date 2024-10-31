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

#include <tencentcloud/cfw/v20190904/model/AcListsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

AcListsData::AcListsData() :
    m_idHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_targetIpHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_countHasBeenSet(false),
    m_orderIndexHasBeenSet(false),
    m_logIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_srcTypeHasBeenSet(false),
    m_dstTypeHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_invalidHasBeenSet(false),
    m_isRegionHasBeenSet(false),
    m_cloudCodeHasBeenSet(false),
    m_autoTaskHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_regName1HasBeenSet(false),
    m_regName2HasBeenSet(false)
{
}

CoreInternalOutcome AcListsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SourceIp") && !value["SourceIp"].IsNull())
    {
        if (!value["SourceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.SourceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIp = string(value["SourceIp"].GetString());
        m_sourceIpHasBeenSet = true;
    }

    if (value.HasMember("TargetIp") && !value["TargetIp"].IsNull())
    {
        if (!value["TargetIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.TargetIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetIp = string(value["TargetIp"].GetString());
        m_targetIpHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Strategy") && !value["Strategy"].IsNull())
    {
        if (!value["Strategy"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.Strategy` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategy = value["Strategy"].GetUint64();
        m_strategyHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.OrderIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetUint64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("LogId") && !value["LogId"].IsNull())
    {
        if (!value["LogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.LogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logId = string(value["LogId"].GetString());
        m_logIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SrcType") && !value["SrcType"].IsNull())
    {
        if (!value["SrcType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.SrcType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_srcType = value["SrcType"].GetInt64();
        m_srcTypeHasBeenSet = true;
    }

    if (value.HasMember("DstType") && !value["DstType"].IsNull())
    {
        if (!value["DstType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.DstType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dstType = value["DstType"].GetInt64();
        m_dstTypeHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Invalid") && !value["Invalid"].IsNull())
    {
        if (!value["Invalid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.Invalid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invalid = value["Invalid"].GetInt64();
        m_invalidHasBeenSet = true;
    }

    if (value.HasMember("IsRegion") && !value["IsRegion"].IsNull())
    {
        if (!value["IsRegion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.IsRegion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRegion = value["IsRegion"].GetInt64();
        m_isRegionHasBeenSet = true;
    }

    if (value.HasMember("CloudCode") && !value["CloudCode"].IsNull())
    {
        if (!value["CloudCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.CloudCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudCode = string(value["CloudCode"].GetString());
        m_cloudCodeHasBeenSet = true;
    }

    if (value.HasMember("AutoTask") && !value["AutoTask"].IsNull())
    {
        if (!value["AutoTask"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.AutoTask` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoTask = string(value["AutoTask"].GetString());
        m_autoTaskHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("RegionCode") && !value["RegionCode"].IsNull())
    {
        if (!value["RegionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.RegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionCode = string(value["RegionCode"].GetString());
        m_regionCodeHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.Country` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_country = value["Country"].GetInt64();
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.City` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_city = value["City"].GetInt64();
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("RegName1") && !value["RegName1"].IsNull())
    {
        if (!value["RegName1"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.RegName1` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regName1 = string(value["RegName1"].GetString());
        m_regName1HasBeenSet = true;
    }

    if (value.HasMember("RegName2") && !value["RegName2"].IsNull())
    {
        if (!value["RegName2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcListsData.RegName2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regName2 = string(value["RegName2"].GetString());
        m_regName2HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AcListsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_sourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_targetIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetIp.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategy, allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_orderIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderIndex, allocator);
    }

    if (m_logIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_srcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_srcType, allocator);
    }

    if (m_dstTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstType, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_invalidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Invalid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalid, allocator);
    }

    if (m_isRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRegion, allocator);
    }

    if (m_cloudCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudCode.c_str(), allocator).Move(), allocator);
    }

    if (m_autoTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoTask.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_country, allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_city, allocator);
    }

    if (m_regName1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegName1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regName1.c_str(), allocator).Move(), allocator);
    }

    if (m_regName2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegName2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regName2.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AcListsData::GetId() const
{
    return m_id;
}

void AcListsData::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AcListsData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AcListsData::GetSourceIp() const
{
    return m_sourceIp;
}

void AcListsData::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool AcListsData::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

string AcListsData::GetTargetIp() const
{
    return m_targetIp;
}

void AcListsData::SetTargetIp(const string& _targetIp)
{
    m_targetIp = _targetIp;
    m_targetIpHasBeenSet = true;
}

bool AcListsData::TargetIpHasBeenSet() const
{
    return m_targetIpHasBeenSet;
}

string AcListsData::GetProtocol() const
{
    return m_protocol;
}

void AcListsData::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool AcListsData::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string AcListsData::GetPort() const
{
    return m_port;
}

void AcListsData::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AcListsData::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t AcListsData::GetStrategy() const
{
    return m_strategy;
}

void AcListsData::SetStrategy(const uint64_t& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool AcListsData::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

string AcListsData::GetDetail() const
{
    return m_detail;
}

void AcListsData::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool AcListsData::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

uint64_t AcListsData::GetCount() const
{
    return m_count;
}

void AcListsData::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool AcListsData::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

uint64_t AcListsData::GetOrderIndex() const
{
    return m_orderIndex;
}

void AcListsData::SetOrderIndex(const uint64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool AcListsData::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

string AcListsData::GetLogId() const
{
    return m_logId;
}

void AcListsData::SetLogId(const string& _logId)
{
    m_logId = _logId;
    m_logIdHasBeenSet = true;
}

bool AcListsData::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

int64_t AcListsData::GetStatus() const
{
    return m_status;
}

void AcListsData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AcListsData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AcListsData::GetSrcType() const
{
    return m_srcType;
}

void AcListsData::SetSrcType(const int64_t& _srcType)
{
    m_srcType = _srcType;
    m_srcTypeHasBeenSet = true;
}

bool AcListsData::SrcTypeHasBeenSet() const
{
    return m_srcTypeHasBeenSet;
}

int64_t AcListsData::GetDstType() const
{
    return m_dstType;
}

void AcListsData::SetDstType(const int64_t& _dstType)
{
    m_dstType = _dstType;
    m_dstTypeHasBeenSet = true;
}

bool AcListsData::DstTypeHasBeenSet() const
{
    return m_dstTypeHasBeenSet;
}

string AcListsData::GetUuid() const
{
    return m_uuid;
}

void AcListsData::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool AcListsData::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

int64_t AcListsData::GetInvalid() const
{
    return m_invalid;
}

void AcListsData::SetInvalid(const int64_t& _invalid)
{
    m_invalid = _invalid;
    m_invalidHasBeenSet = true;
}

bool AcListsData::InvalidHasBeenSet() const
{
    return m_invalidHasBeenSet;
}

int64_t AcListsData::GetIsRegion() const
{
    return m_isRegion;
}

void AcListsData::SetIsRegion(const int64_t& _isRegion)
{
    m_isRegion = _isRegion;
    m_isRegionHasBeenSet = true;
}

bool AcListsData::IsRegionHasBeenSet() const
{
    return m_isRegionHasBeenSet;
}

string AcListsData::GetCloudCode() const
{
    return m_cloudCode;
}

void AcListsData::SetCloudCode(const string& _cloudCode)
{
    m_cloudCode = _cloudCode;
    m_cloudCodeHasBeenSet = true;
}

bool AcListsData::CloudCodeHasBeenSet() const
{
    return m_cloudCodeHasBeenSet;
}

string AcListsData::GetAutoTask() const
{
    return m_autoTask;
}

void AcListsData::SetAutoTask(const string& _autoTask)
{
    m_autoTask = _autoTask;
    m_autoTaskHasBeenSet = true;
}

bool AcListsData::AutoTaskHasBeenSet() const
{
    return m_autoTaskHasBeenSet;
}

string AcListsData::GetInstanceName() const
{
    return m_instanceName;
}

void AcListsData::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AcListsData::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string AcListsData::GetRegionCode() const
{
    return m_regionCode;
}

void AcListsData::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool AcListsData::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

int64_t AcListsData::GetCountry() const
{
    return m_country;
}

void AcListsData::SetCountry(const int64_t& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool AcListsData::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

int64_t AcListsData::GetCity() const
{
    return m_city;
}

void AcListsData::SetCity(const int64_t& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool AcListsData::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string AcListsData::GetRegName1() const
{
    return m_regName1;
}

void AcListsData::SetRegName1(const string& _regName1)
{
    m_regName1 = _regName1;
    m_regName1HasBeenSet = true;
}

bool AcListsData::RegName1HasBeenSet() const
{
    return m_regName1HasBeenSet;
}

string AcListsData::GetRegName2() const
{
    return m_regName2;
}

void AcListsData::SetRegName2(const string& _regName2)
{
    m_regName2 = _regName2;
    m_regName2HasBeenSet = true;
}

bool AcListsData::RegName2HasBeenSet() const
{
    return m_regName2HasBeenSet;
}

