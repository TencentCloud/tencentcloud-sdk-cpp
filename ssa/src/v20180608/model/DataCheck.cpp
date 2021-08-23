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

#include <tencentcloud/ssa/v20180608/model/DataCheck.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

DataCheck::DataCheck() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_lastCheckTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isIgnoredHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_isCheckedHasBeenSet(false),
    m_assetTotalHasBeenSet(false),
    m_remarksHasBeenSet(false)
{
}

CoreInternalOutcome DataCheck::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCheck.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCheck.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCheck.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("LastCheckTime") && !value["LastCheckTime"].IsNull())
    {
        if (!value["LastCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCheck.LastCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCheckTime = string(value["LastCheckTime"].GetString());
        m_lastCheckTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCheck.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsIgnored") && !value["IsIgnored"].IsNull())
    {
        if (!value["IsIgnored"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCheck.IsIgnored` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isIgnored = value["IsIgnored"].GetUint64();
        m_isIgnoredHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCheck.RiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetUint64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("IsChecked") && !value["IsChecked"].IsNull())
    {
        if (!value["IsChecked"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCheck.IsChecked` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isChecked = value["IsChecked"].GetUint64();
        m_isCheckedHasBeenSet = true;
    }

    if (value.HasMember("AssetTotal") && !value["AssetTotal"].IsNull())
    {
        if (!value["AssetTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCheck.AssetTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetTotal = value["AssetTotal"].GetInt64();
        m_assetTotalHasBeenSet = true;
    }

    if (value.HasMember("Remarks") && !value["Remarks"].IsNull())
    {
        if (!value["Remarks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCheck.Remarks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remarks = string(value["Remarks"].GetString());
        m_remarksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataCheck::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_lastCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCheckTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isIgnoredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIgnored";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIgnored, allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

    if (m_isCheckedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsChecked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isChecked, allocator);
    }

    if (m_assetTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetTotal, allocator);
    }

    if (m_remarksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remarks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remarks.c_str(), allocator).Move(), allocator);
    }

}


string DataCheck::GetId() const
{
    return m_id;
}

void DataCheck::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DataCheck::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DataCheck::GetName() const
{
    return m_name;
}

void DataCheck::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DataCheck::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DataCheck::GetType() const
{
    return m_type;
}

void DataCheck::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DataCheck::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DataCheck::GetLastCheckTime() const
{
    return m_lastCheckTime;
}

void DataCheck::SetLastCheckTime(const string& _lastCheckTime)
{
    m_lastCheckTime = _lastCheckTime;
    m_lastCheckTimeHasBeenSet = true;
}

bool DataCheck::LastCheckTimeHasBeenSet() const
{
    return m_lastCheckTimeHasBeenSet;
}

uint64_t DataCheck::GetStatus() const
{
    return m_status;
}

void DataCheck::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DataCheck::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DataCheck::GetIsIgnored() const
{
    return m_isIgnored;
}

void DataCheck::SetIsIgnored(const uint64_t& _isIgnored)
{
    m_isIgnored = _isIgnored;
    m_isIgnoredHasBeenSet = true;
}

bool DataCheck::IsIgnoredHasBeenSet() const
{
    return m_isIgnoredHasBeenSet;
}

uint64_t DataCheck::GetRiskCount() const
{
    return m_riskCount;
}

void DataCheck::SetRiskCount(const uint64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool DataCheck::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

uint64_t DataCheck::GetIsChecked() const
{
    return m_isChecked;
}

void DataCheck::SetIsChecked(const uint64_t& _isChecked)
{
    m_isChecked = _isChecked;
    m_isCheckedHasBeenSet = true;
}

bool DataCheck::IsCheckedHasBeenSet() const
{
    return m_isCheckedHasBeenSet;
}

int64_t DataCheck::GetAssetTotal() const
{
    return m_assetTotal;
}

void DataCheck::SetAssetTotal(const int64_t& _assetTotal)
{
    m_assetTotal = _assetTotal;
    m_assetTotalHasBeenSet = true;
}

bool DataCheck::AssetTotalHasBeenSet() const
{
    return m_assetTotalHasBeenSet;
}

string DataCheck::GetRemarks() const
{
    return m_remarks;
}

void DataCheck::SetRemarks(const string& _remarks)
{
    m_remarks = _remarks;
    m_remarksHasBeenSet = true;
}

bool DataCheck::RemarksHasBeenSet() const
{
    return m_remarksHasBeenSet;
}

