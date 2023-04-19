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

#include <tencentcloud/live/v20180801/model/LivePackageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

LivePackageInfo::LivePackageInfo() :
    m_idHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_usedHasBeenSet(false),
    m_leftHasBeenSet(false),
    m_buyTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_willRenewHasBeenSet(false),
    m_renewalResultHasBeenSet(false)
{
}

CoreInternalOutcome LivePackageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LivePackageInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LivePackageInfo.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LivePackageInfo.Used` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetInt64();
        m_usedHasBeenSet = true;
    }

    if (value.HasMember("Left") && !value["Left"].IsNull())
    {
        if (!value["Left"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LivePackageInfo.Left` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_left = value["Left"].GetInt64();
        m_leftHasBeenSet = true;
    }

    if (value.HasMember("BuyTime") && !value["BuyTime"].IsNull())
    {
        if (!value["BuyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LivePackageInfo.BuyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyTime = string(value["BuyTime"].GetString());
        m_buyTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LivePackageInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LivePackageInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LivePackageInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("WillRenew") && !value["WillRenew"].IsNull())
    {
        if (!value["WillRenew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LivePackageInfo.WillRenew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_willRenew = value["WillRenew"].GetInt64();
        m_willRenewHasBeenSet = true;
    }

    if (value.HasMember("RenewalResult") && !value["RenewalResult"].IsNull())
    {
        if (!value["RenewalResult"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LivePackageInfo.RenewalResult` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewalResult = value["RenewalResult"].GetInt64();
        m_renewalResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LivePackageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
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

    if (m_leftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Left";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_left, allocator);
    }

    if (m_buyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_willRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WillRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_willRenew, allocator);
    }

    if (m_renewalResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewalResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewalResult, allocator);
    }

}


string LivePackageInfo::GetId() const
{
    return m_id;
}

void LivePackageInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool LivePackageInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t LivePackageInfo::GetTotal() const
{
    return m_total;
}

void LivePackageInfo::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool LivePackageInfo::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t LivePackageInfo::GetUsed() const
{
    return m_used;
}

void LivePackageInfo::SetUsed(const int64_t& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool LivePackageInfo::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

int64_t LivePackageInfo::GetLeft() const
{
    return m_left;
}

void LivePackageInfo::SetLeft(const int64_t& _left)
{
    m_left = _left;
    m_leftHasBeenSet = true;
}

bool LivePackageInfo::LeftHasBeenSet() const
{
    return m_leftHasBeenSet;
}

string LivePackageInfo::GetBuyTime() const
{
    return m_buyTime;
}

void LivePackageInfo::SetBuyTime(const string& _buyTime)
{
    m_buyTime = _buyTime;
    m_buyTimeHasBeenSet = true;
}

bool LivePackageInfo::BuyTimeHasBeenSet() const
{
    return m_buyTimeHasBeenSet;
}

string LivePackageInfo::GetExpireTime() const
{
    return m_expireTime;
}

void LivePackageInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool LivePackageInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t LivePackageInfo::GetType() const
{
    return m_type;
}

void LivePackageInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LivePackageInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t LivePackageInfo::GetStatus() const
{
    return m_status;
}

void LivePackageInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LivePackageInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t LivePackageInfo::GetWillRenew() const
{
    return m_willRenew;
}

void LivePackageInfo::SetWillRenew(const int64_t& _willRenew)
{
    m_willRenew = _willRenew;
    m_willRenewHasBeenSet = true;
}

bool LivePackageInfo::WillRenewHasBeenSet() const
{
    return m_willRenewHasBeenSet;
}

int64_t LivePackageInfo::GetRenewalResult() const
{
    return m_renewalResult;
}

void LivePackageInfo::SetRenewalResult(const int64_t& _renewalResult)
{
    m_renewalResult = _renewalResult;
    m_renewalResultHasBeenSet = true;
}

bool LivePackageInfo::RenewalResultHasBeenSet() const
{
    return m_renewalResultHasBeenSet;
}

