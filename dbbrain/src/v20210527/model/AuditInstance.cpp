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

#include <tencentcloud/dbbrain/v20210527/model/AuditInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

AuditInstance::AuditInstance() :
    m_auditStatusHasBeenSet(false),
    m_billingAmountHasBeenSet(false),
    m_billingConfirmedHasBeenSet(false),
    m_coldLogExpireDayHasBeenSet(false),
    m_coldLogSizeHasBeenSet(false),
    m_hotLogExpireDayHasBeenSet(false),
    m_hotLogSizeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_logExpireDayHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_instanceInfoHasBeenSet(false)
{
}

CoreInternalOutcome AuditInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstance.AuditStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = string(value["AuditStatus"].GetString());
        m_auditStatusHasBeenSet = true;
    }

    if (value.HasMember("BillingAmount") && !value["BillingAmount"].IsNull())
    {
        if (!value["BillingAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstance.BillingAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingAmount = value["BillingAmount"].GetInt64();
        m_billingAmountHasBeenSet = true;
    }

    if (value.HasMember("BillingConfirmed") && !value["BillingConfirmed"].IsNull())
    {
        if (!value["BillingConfirmed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstance.BillingConfirmed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingConfirmed = value["BillingConfirmed"].GetInt64();
        m_billingConfirmedHasBeenSet = true;
    }

    if (value.HasMember("ColdLogExpireDay") && !value["ColdLogExpireDay"].IsNull())
    {
        if (!value["ColdLogExpireDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstance.ColdLogExpireDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_coldLogExpireDay = value["ColdLogExpireDay"].GetInt64();
        m_coldLogExpireDayHasBeenSet = true;
    }

    if (value.HasMember("ColdLogSize") && !value["ColdLogSize"].IsNull())
    {
        if (!value["ColdLogSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstance.ColdLogSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_coldLogSize = value["ColdLogSize"].GetInt64();
        m_coldLogSizeHasBeenSet = true;
    }

    if (value.HasMember("HotLogExpireDay") && !value["HotLogExpireDay"].IsNull())
    {
        if (!value["HotLogExpireDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstance.HotLogExpireDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hotLogExpireDay = value["HotLogExpireDay"].GetInt64();
        m_hotLogExpireDayHasBeenSet = true;
    }

    if (value.HasMember("HotLogSize") && !value["HotLogSize"].IsNull())
    {
        if (!value["HotLogSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstance.HotLogSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hotLogSize = value["HotLogSize"].GetInt64();
        m_hotLogSizeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("LogExpireDay") && !value["LogExpireDay"].IsNull())
    {
        if (!value["LogExpireDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstance.LogExpireDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logExpireDay = value["LogExpireDay"].GetInt64();
        m_logExpireDayHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceInfo") && !value["InstanceInfo"].IsNull())
    {
        if (!value["InstanceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstance.InstanceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceInfo.Deserialize(value["InstanceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_billingAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingAmount, allocator);
    }

    if (m_billingConfirmedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingConfirmed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingConfirmed, allocator);
    }

    if (m_coldLogExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColdLogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coldLogExpireDay, allocator);
    }

    if (m_coldLogSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColdLogSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coldLogSize, allocator);
    }

    if (m_hotLogExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotLogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hotLogExpireDay, allocator);
    }

    if (m_hotLogSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotLogSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hotLogSize, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_logExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logExpireDay, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AuditInstance::GetAuditStatus() const
{
    return m_auditStatus;
}

void AuditInstance::SetAuditStatus(const string& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool AuditInstance::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

int64_t AuditInstance::GetBillingAmount() const
{
    return m_billingAmount;
}

void AuditInstance::SetBillingAmount(const int64_t& _billingAmount)
{
    m_billingAmount = _billingAmount;
    m_billingAmountHasBeenSet = true;
}

bool AuditInstance::BillingAmountHasBeenSet() const
{
    return m_billingAmountHasBeenSet;
}

int64_t AuditInstance::GetBillingConfirmed() const
{
    return m_billingConfirmed;
}

void AuditInstance::SetBillingConfirmed(const int64_t& _billingConfirmed)
{
    m_billingConfirmed = _billingConfirmed;
    m_billingConfirmedHasBeenSet = true;
}

bool AuditInstance::BillingConfirmedHasBeenSet() const
{
    return m_billingConfirmedHasBeenSet;
}

int64_t AuditInstance::GetColdLogExpireDay() const
{
    return m_coldLogExpireDay;
}

void AuditInstance::SetColdLogExpireDay(const int64_t& _coldLogExpireDay)
{
    m_coldLogExpireDay = _coldLogExpireDay;
    m_coldLogExpireDayHasBeenSet = true;
}

bool AuditInstance::ColdLogExpireDayHasBeenSet() const
{
    return m_coldLogExpireDayHasBeenSet;
}

int64_t AuditInstance::GetColdLogSize() const
{
    return m_coldLogSize;
}

void AuditInstance::SetColdLogSize(const int64_t& _coldLogSize)
{
    m_coldLogSize = _coldLogSize;
    m_coldLogSizeHasBeenSet = true;
}

bool AuditInstance::ColdLogSizeHasBeenSet() const
{
    return m_coldLogSizeHasBeenSet;
}

int64_t AuditInstance::GetHotLogExpireDay() const
{
    return m_hotLogExpireDay;
}

void AuditInstance::SetHotLogExpireDay(const int64_t& _hotLogExpireDay)
{
    m_hotLogExpireDay = _hotLogExpireDay;
    m_hotLogExpireDayHasBeenSet = true;
}

bool AuditInstance::HotLogExpireDayHasBeenSet() const
{
    return m_hotLogExpireDayHasBeenSet;
}

int64_t AuditInstance::GetHotLogSize() const
{
    return m_hotLogSize;
}

void AuditInstance::SetHotLogSize(const int64_t& _hotLogSize)
{
    m_hotLogSize = _hotLogSize;
    m_hotLogSizeHasBeenSet = true;
}

bool AuditInstance::HotLogSizeHasBeenSet() const
{
    return m_hotLogSizeHasBeenSet;
}

string AuditInstance::GetInstanceId() const
{
    return m_instanceId;
}

void AuditInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AuditInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t AuditInstance::GetLogExpireDay() const
{
    return m_logExpireDay;
}

void AuditInstance::SetLogExpireDay(const int64_t& _logExpireDay)
{
    m_logExpireDay = _logExpireDay;
    m_logExpireDayHasBeenSet = true;
}

bool AuditInstance::LogExpireDayHasBeenSet() const
{
    return m_logExpireDayHasBeenSet;
}

string AuditInstance::GetCreateTime() const
{
    return m_createTime;
}

void AuditInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AuditInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

AuditInstanceInfo AuditInstance::GetInstanceInfo() const
{
    return m_instanceInfo;
}

void AuditInstance::SetInstanceInfo(const AuditInstanceInfo& _instanceInfo)
{
    m_instanceInfo = _instanceInfo;
    m_instanceInfoHasBeenSet = true;
}

bool AuditInstance::InstanceInfoHasBeenSet() const
{
    return m_instanceInfoHasBeenSet;
}

