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

#include <tencentcloud/rum/v20210622/model/BusinessSystemItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

BusinessSystemItem::BusinessSystemItem() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceDescHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_chargeStatusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome BusinessSystemItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessSystemItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessSystemItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceDesc") && !value["InstanceDesc"].IsNull())
    {
        if (!value["InstanceDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessSystemItem.InstanceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceDesc = string(value["InstanceDesc"].GetString());
        m_instanceDescHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessSystemItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ChargeStatus") && !value["ChargeStatus"].IsNull())
    {
        if (!value["ChargeStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessSystemItem.ChargeStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeStatus = value["ChargeStatus"].GetInt64();
        m_chargeStatusHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessSystemItem.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessSystemItem.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BusinessSystemItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_chargeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeStatus, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

}


string BusinessSystemItem::GetInstanceId() const
{
    return m_instanceId;
}

void BusinessSystemItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BusinessSystemItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string BusinessSystemItem::GetInstanceName() const
{
    return m_instanceName;
}

void BusinessSystemItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool BusinessSystemItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string BusinessSystemItem::GetInstanceDesc() const
{
    return m_instanceDesc;
}

void BusinessSystemItem::SetInstanceDesc(const string& _instanceDesc)
{
    m_instanceDesc = _instanceDesc;
    m_instanceDescHasBeenSet = true;
}

bool BusinessSystemItem::InstanceDescHasBeenSet() const
{
    return m_instanceDescHasBeenSet;
}

int64_t BusinessSystemItem::GetStatus() const
{
    return m_status;
}

void BusinessSystemItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BusinessSystemItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t BusinessSystemItem::GetChargeStatus() const
{
    return m_chargeStatus;
}

void BusinessSystemItem::SetChargeStatus(const int64_t& _chargeStatus)
{
    m_chargeStatus = _chargeStatus;
    m_chargeStatusHasBeenSet = true;
}

bool BusinessSystemItem::ChargeStatusHasBeenSet() const
{
    return m_chargeStatusHasBeenSet;
}

string BusinessSystemItem::GetCreatedAt() const
{
    return m_createdAt;
}

void BusinessSystemItem::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool BusinessSystemItem::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string BusinessSystemItem::GetUpdatedAt() const
{
    return m_updatedAt;
}

void BusinessSystemItem::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool BusinessSystemItem::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

