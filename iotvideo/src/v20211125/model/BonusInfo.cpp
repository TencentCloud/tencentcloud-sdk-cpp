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

#include <tencentcloud/iotvideo/v20211125/model/BonusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

BonusInfo::BonusInfo() :
    m_bonusIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_usedHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome BonusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BonusId") && !value["BonusId"].IsNull())
    {
        if (!value["BonusId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BonusInfo.BonusId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bonusId = value["BonusId"].GetUint64();
        m_bonusIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BonusInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BonusInfo.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BonusInfo.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BonusInfo.Used` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetUint64();
        m_usedHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BonusInfo.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BonusInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BonusInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BonusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bonusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BonusId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bonusId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_used, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


uint64_t BonusInfo::GetBonusId() const
{
    return m_bonusId;
}

void BonusInfo::SetBonusId(const uint64_t& _bonusId)
{
    m_bonusId = _bonusId;
    m_bonusIdHasBeenSet = true;
}

bool BonusInfo::BonusIdHasBeenSet() const
{
    return m_bonusIdHasBeenSet;
}

string BonusInfo::GetUserId() const
{
    return m_userId;
}

void BonusInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool BonusInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string BonusInfo::GetPackageId() const
{
    return m_packageId;
}

void BonusInfo::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool BonusInfo::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

uint64_t BonusInfo::GetTotal() const
{
    return m_total;
}

void BonusInfo::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool BonusInfo::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

uint64_t BonusInfo::GetUsed() const
{
    return m_used;
}

void BonusInfo::SetUsed(const uint64_t& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool BonusInfo::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

int64_t BonusInfo::GetExpireTime() const
{
    return m_expireTime;
}

void BonusInfo::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool BonusInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t BonusInfo::GetCreateTime() const
{
    return m_createTime;
}

void BonusInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BonusInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t BonusInfo::GetStatus() const
{
    return m_status;
}

void BonusInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BonusInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

