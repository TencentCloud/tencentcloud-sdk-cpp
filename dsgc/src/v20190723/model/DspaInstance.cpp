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

#include <tencentcloud/dsgc/v20190723/model/DspaInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaInstance::DspaInstance() :
    m_dspaIdHasBeenSet(false),
    m_dspaNameHasBeenSet(false),
    m_dspaDescriptionHasBeenSet(false),
    m_dBAuthCountHasBeenSet(false),
    m_cosBindCountHasBeenSet(false),
    m_instanceVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_expiredAtHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_trialVersionHasBeenSet(false),
    m_trialEndAtHasBeenSet(false),
    m_dbTotalQuotaHasBeenSet(false),
    m_cosTotalQuotaHasBeenSet(false),
    m_cosQuotaUnitHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_insAuthCountHasBeenSet(false),
    m_insTotalQuotaHasBeenSet(false)
{
}

CoreInternalOutcome DspaInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DspaId") && !value["DspaId"].IsNull())
    {
        if (!value["DspaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.DspaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dspaId = string(value["DspaId"].GetString());
        m_dspaIdHasBeenSet = true;
    }

    if (value.HasMember("DspaName") && !value["DspaName"].IsNull())
    {
        if (!value["DspaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.DspaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dspaName = string(value["DspaName"].GetString());
        m_dspaNameHasBeenSet = true;
    }

    if (value.HasMember("DspaDescription") && !value["DspaDescription"].IsNull())
    {
        if (!value["DspaDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.DspaDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dspaDescription = string(value["DspaDescription"].GetString());
        m_dspaDescriptionHasBeenSet = true;
    }

    if (value.HasMember("DBAuthCount") && !value["DBAuthCount"].IsNull())
    {
        if (!value["DBAuthCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.DBAuthCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dBAuthCount = value["DBAuthCount"].GetUint64();
        m_dBAuthCountHasBeenSet = true;
    }

    if (value.HasMember("CosBindCount") && !value["CosBindCount"].IsNull())
    {
        if (!value["CosBindCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.CosBindCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cosBindCount = value["CosBindCount"].GetUint64();
        m_cosBindCountHasBeenSet = true;
    }

    if (value.HasMember("InstanceVersion") && !value["InstanceVersion"].IsNull())
    {
        if (!value["InstanceVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.InstanceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVersion = string(value["InstanceVersion"].GetString());
        m_instanceVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ExpiredAt") && !value["ExpiredAt"].IsNull())
    {
        if (!value["ExpiredAt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.ExpiredAt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredAt = value["ExpiredAt"].GetUint64();
        m_expiredAtHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("TrialVersion") && !value["TrialVersion"].IsNull())
    {
        if (!value["TrialVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.TrialVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trialVersion = string(value["TrialVersion"].GetString());
        m_trialVersionHasBeenSet = true;
    }

    if (value.HasMember("TrialEndAt") && !value["TrialEndAt"].IsNull())
    {
        if (!value["TrialEndAt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.TrialEndAt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trialEndAt = value["TrialEndAt"].GetUint64();
        m_trialEndAtHasBeenSet = true;
    }

    if (value.HasMember("DbTotalQuota") && !value["DbTotalQuota"].IsNull())
    {
        if (!value["DbTotalQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.DbTotalQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dbTotalQuota = value["DbTotalQuota"].GetInt64();
        m_dbTotalQuotaHasBeenSet = true;
    }

    if (value.HasMember("CosTotalQuota") && !value["CosTotalQuota"].IsNull())
    {
        if (!value["CosTotalQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.CosTotalQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cosTotalQuota = value["CosTotalQuota"].GetInt64();
        m_cosTotalQuotaHasBeenSet = true;
    }

    if (value.HasMember("CosQuotaUnit") && !value["CosQuotaUnit"].IsNull())
    {
        if (!value["CosQuotaUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.CosQuotaUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosQuotaUnit = string(value["CosQuotaUnit"].GetString());
        m_cosQuotaUnitHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.RenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetUint64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(value["Channel"].GetString());
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("InsAuthCount") && !value["InsAuthCount"].IsNull())
    {
        if (!value["InsAuthCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.InsAuthCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_insAuthCount = value["InsAuthCount"].GetInt64();
        m_insAuthCountHasBeenSet = true;
    }

    if (value.HasMember("InsTotalQuota") && !value["InsTotalQuota"].IsNull())
    {
        if (!value["InsTotalQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaInstance.InsTotalQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_insTotalQuota = value["InsTotalQuota"].GetInt64();
        m_insTotalQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_dspaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dspaName.c_str(), allocator).Move(), allocator);
    }

    if (m_dspaDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dspaDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_dBAuthCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBAuthCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dBAuthCount, allocator);
    }

    if (m_cosBindCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBindCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cosBindCount, allocator);
    }

    if (m_instanceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredAt, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_trialVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrialVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trialVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_trialEndAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrialEndAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trialEndAt, allocator);
    }

    if (m_dbTotalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbTotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbTotalQuota, allocator);
    }

    if (m_cosTotalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosTotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cosTotalQuota, allocator);
    }

    if (m_cosQuotaUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosQuotaUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosQuotaUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_insAuthCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsAuthCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_insAuthCount, allocator);
    }

    if (m_insTotalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsTotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_insTotalQuota, allocator);
    }

}


string DspaInstance::GetDspaId() const
{
    return m_dspaId;
}

void DspaInstance::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DspaInstance::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string DspaInstance::GetDspaName() const
{
    return m_dspaName;
}

void DspaInstance::SetDspaName(const string& _dspaName)
{
    m_dspaName = _dspaName;
    m_dspaNameHasBeenSet = true;
}

bool DspaInstance::DspaNameHasBeenSet() const
{
    return m_dspaNameHasBeenSet;
}

string DspaInstance::GetDspaDescription() const
{
    return m_dspaDescription;
}

void DspaInstance::SetDspaDescription(const string& _dspaDescription)
{
    m_dspaDescription = _dspaDescription;
    m_dspaDescriptionHasBeenSet = true;
}

bool DspaInstance::DspaDescriptionHasBeenSet() const
{
    return m_dspaDescriptionHasBeenSet;
}

uint64_t DspaInstance::GetDBAuthCount() const
{
    return m_dBAuthCount;
}

void DspaInstance::SetDBAuthCount(const uint64_t& _dBAuthCount)
{
    m_dBAuthCount = _dBAuthCount;
    m_dBAuthCountHasBeenSet = true;
}

bool DspaInstance::DBAuthCountHasBeenSet() const
{
    return m_dBAuthCountHasBeenSet;
}

uint64_t DspaInstance::GetCosBindCount() const
{
    return m_cosBindCount;
}

void DspaInstance::SetCosBindCount(const uint64_t& _cosBindCount)
{
    m_cosBindCount = _cosBindCount;
    m_cosBindCountHasBeenSet = true;
}

bool DspaInstance::CosBindCountHasBeenSet() const
{
    return m_cosBindCountHasBeenSet;
}

string DspaInstance::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void DspaInstance::SetInstanceVersion(const string& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool DspaInstance::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}

string DspaInstance::GetStatus() const
{
    return m_status;
}

void DspaInstance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspaInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DspaInstance::GetExpiredAt() const
{
    return m_expiredAt;
}

void DspaInstance::SetExpiredAt(const uint64_t& _expiredAt)
{
    m_expiredAt = _expiredAt;
    m_expiredAtHasBeenSet = true;
}

bool DspaInstance::ExpiredAtHasBeenSet() const
{
    return m_expiredAtHasBeenSet;
}

uint64_t DspaInstance::GetAppId() const
{
    return m_appId;
}

void DspaInstance::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DspaInstance::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DspaInstance::GetTrialVersion() const
{
    return m_trialVersion;
}

void DspaInstance::SetTrialVersion(const string& _trialVersion)
{
    m_trialVersion = _trialVersion;
    m_trialVersionHasBeenSet = true;
}

bool DspaInstance::TrialVersionHasBeenSet() const
{
    return m_trialVersionHasBeenSet;
}

uint64_t DspaInstance::GetTrialEndAt() const
{
    return m_trialEndAt;
}

void DspaInstance::SetTrialEndAt(const uint64_t& _trialEndAt)
{
    m_trialEndAt = _trialEndAt;
    m_trialEndAtHasBeenSet = true;
}

bool DspaInstance::TrialEndAtHasBeenSet() const
{
    return m_trialEndAtHasBeenSet;
}

int64_t DspaInstance::GetDbTotalQuota() const
{
    return m_dbTotalQuota;
}

void DspaInstance::SetDbTotalQuota(const int64_t& _dbTotalQuota)
{
    m_dbTotalQuota = _dbTotalQuota;
    m_dbTotalQuotaHasBeenSet = true;
}

bool DspaInstance::DbTotalQuotaHasBeenSet() const
{
    return m_dbTotalQuotaHasBeenSet;
}

int64_t DspaInstance::GetCosTotalQuota() const
{
    return m_cosTotalQuota;
}

void DspaInstance::SetCosTotalQuota(const int64_t& _cosTotalQuota)
{
    m_cosTotalQuota = _cosTotalQuota;
    m_cosTotalQuotaHasBeenSet = true;
}

bool DspaInstance::CosTotalQuotaHasBeenSet() const
{
    return m_cosTotalQuotaHasBeenSet;
}

string DspaInstance::GetCosQuotaUnit() const
{
    return m_cosQuotaUnit;
}

void DspaInstance::SetCosQuotaUnit(const string& _cosQuotaUnit)
{
    m_cosQuotaUnit = _cosQuotaUnit;
    m_cosQuotaUnitHasBeenSet = true;
}

bool DspaInstance::CosQuotaUnitHasBeenSet() const
{
    return m_cosQuotaUnitHasBeenSet;
}

uint64_t DspaInstance::GetRenewFlag() const
{
    return m_renewFlag;
}

void DspaInstance::SetRenewFlag(const uint64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool DspaInstance::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string DspaInstance::GetChannel() const
{
    return m_channel;
}

void DspaInstance::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool DspaInstance::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

int64_t DspaInstance::GetInsAuthCount() const
{
    return m_insAuthCount;
}

void DspaInstance::SetInsAuthCount(const int64_t& _insAuthCount)
{
    m_insAuthCount = _insAuthCount;
    m_insAuthCountHasBeenSet = true;
}

bool DspaInstance::InsAuthCountHasBeenSet() const
{
    return m_insAuthCountHasBeenSet;
}

int64_t DspaInstance::GetInsTotalQuota() const
{
    return m_insTotalQuota;
}

void DspaInstance::SetInsTotalQuota(const int64_t& _insTotalQuota)
{
    m_insTotalQuota = _insTotalQuota;
    m_insTotalQuotaHasBeenSet = true;
}

bool DspaInstance::InsTotalQuotaHasBeenSet() const
{
    return m_insTotalQuotaHasBeenSet;
}

