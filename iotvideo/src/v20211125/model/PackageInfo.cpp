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

#include <tencentcloud/iotvideo/v20211125/model/PackageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

PackageInfo::PackageInfo() :
    m_statusHasBeenSet(false),
    m_cSTypeHasBeenSet(false),
    m_cSShiftDurationHasBeenSet(false),
    m_cSExpiredTimeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_cSUserIdHasBeenSet(false)
{
}

CoreInternalOutcome PackageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CSType") && !value["CSType"].IsNull())
    {
        if (!value["CSType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.CSType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cSType = value["CSType"].GetUint64();
        m_cSTypeHasBeenSet = true;
    }

    if (value.HasMember("CSShiftDuration") && !value["CSShiftDuration"].IsNull())
    {
        if (!value["CSShiftDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.CSShiftDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cSShiftDuration = value["CSShiftDuration"].GetUint64();
        m_cSShiftDurationHasBeenSet = true;
    }

    if (value.HasMember("CSExpiredTime") && !value["CSExpiredTime"].IsNull())
    {
        if (!value["CSExpiredTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.CSExpiredTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cSExpiredTime = value["CSExpiredTime"].GetInt64();
        m_cSExpiredTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.CreatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = value["CreatedAt"].GetInt64();
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.UpdatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = value["UpdatedAt"].GetInt64();
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.ChannelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = value["ChannelId"].GetUint64();
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("CSUserId") && !value["CSUserId"].IsNull())
    {
        if (!value["CSUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.CSUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cSUserId = string(value["CSUserId"].GetString());
        m_cSUserIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cSTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cSType, allocator);
    }

    if (m_cSShiftDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSShiftDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cSShiftDuration, allocator);
    }

    if (m_cSExpiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cSExpiredTime, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdAt, allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatedAt, allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelId, allocator);
    }

    if (m_cSUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cSUserId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t PackageInfo::GetStatus() const
{
    return m_status;
}

void PackageInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PackageInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t PackageInfo::GetCSType() const
{
    return m_cSType;
}

void PackageInfo::SetCSType(const uint64_t& _cSType)
{
    m_cSType = _cSType;
    m_cSTypeHasBeenSet = true;
}

bool PackageInfo::CSTypeHasBeenSet() const
{
    return m_cSTypeHasBeenSet;
}

uint64_t PackageInfo::GetCSShiftDuration() const
{
    return m_cSShiftDuration;
}

void PackageInfo::SetCSShiftDuration(const uint64_t& _cSShiftDuration)
{
    m_cSShiftDuration = _cSShiftDuration;
    m_cSShiftDurationHasBeenSet = true;
}

bool PackageInfo::CSShiftDurationHasBeenSet() const
{
    return m_cSShiftDurationHasBeenSet;
}

int64_t PackageInfo::GetCSExpiredTime() const
{
    return m_cSExpiredTime;
}

void PackageInfo::SetCSExpiredTime(const int64_t& _cSExpiredTime)
{
    m_cSExpiredTime = _cSExpiredTime;
    m_cSExpiredTimeHasBeenSet = true;
}

bool PackageInfo::CSExpiredTimeHasBeenSet() const
{
    return m_cSExpiredTimeHasBeenSet;
}

int64_t PackageInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void PackageInfo::SetCreatedAt(const int64_t& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool PackageInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

int64_t PackageInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void PackageInfo::SetUpdatedAt(const int64_t& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool PackageInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string PackageInfo::GetPackageId() const
{
    return m_packageId;
}

void PackageInfo::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool PackageInfo::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

string PackageInfo::GetOrderId() const
{
    return m_orderId;
}

void PackageInfo::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool PackageInfo::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

uint64_t PackageInfo::GetChannelId() const
{
    return m_channelId;
}

void PackageInfo::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool PackageInfo::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string PackageInfo::GetCSUserId() const
{
    return m_cSUserId;
}

void PackageInfo::SetCSUserId(const string& _cSUserId)
{
    m_cSUserId = _cSUserId;
    m_cSUserIdHasBeenSet = true;
}

bool PackageInfo::CSUserIdHasBeenSet() const
{
    return m_cSUserIdHasBeenSet;
}

