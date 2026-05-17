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

#include <tencentcloud/csip/v20221121/model/CosBucketBillingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosBucketBillingInfo::CosBucketBillingInfo() :
    m_appIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_ownerNickNameHasBeenSet(false),
    m_bucketCountHasBeenSet(false),
    m_buyStatusHasBeenSet(false),
    m_shareFromAppIdHasBeenSet(false),
    m_shareFromUinHasBeenSet(false),
    m_shareFromNickNameHasBeenSet(false),
    m_monitorBucketCountHasBeenSet(false),
    m_isAutoMonitorHasBeenSet(false)
{
}

CoreInternalOutcome CosBucketBillingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketBillingInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketBillingInfo.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerNickName") && !value["OwnerNickName"].IsNull())
    {
        if (!value["OwnerNickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketBillingInfo.OwnerNickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerNickName = string(value["OwnerNickName"].GetString());
        m_ownerNickNameHasBeenSet = true;
    }

    if (value.HasMember("BucketCount") && !value["BucketCount"].IsNull())
    {
        if (!value["BucketCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketBillingInfo.BucketCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bucketCount = value["BucketCount"].GetUint64();
        m_bucketCountHasBeenSet = true;
    }

    if (value.HasMember("BuyStatus") && !value["BuyStatus"].IsNull())
    {
        if (!value["BuyStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketBillingInfo.BuyStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_buyStatus = value["BuyStatus"].GetUint64();
        m_buyStatusHasBeenSet = true;
    }

    if (value.HasMember("ShareFromAppId") && !value["ShareFromAppId"].IsNull())
    {
        if (!value["ShareFromAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketBillingInfo.ShareFromAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shareFromAppId = value["ShareFromAppId"].GetUint64();
        m_shareFromAppIdHasBeenSet = true;
    }

    if (value.HasMember("ShareFromUin") && !value["ShareFromUin"].IsNull())
    {
        if (!value["ShareFromUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketBillingInfo.ShareFromUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareFromUin = string(value["ShareFromUin"].GetString());
        m_shareFromUinHasBeenSet = true;
    }

    if (value.HasMember("ShareFromNickName") && !value["ShareFromNickName"].IsNull())
    {
        if (!value["ShareFromNickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketBillingInfo.ShareFromNickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareFromNickName = string(value["ShareFromNickName"].GetString());
        m_shareFromNickNameHasBeenSet = true;
    }

    if (value.HasMember("MonitorBucketCount") && !value["MonitorBucketCount"].IsNull())
    {
        if (!value["MonitorBucketCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketBillingInfo.MonitorBucketCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorBucketCount = value["MonitorBucketCount"].GetUint64();
        m_monitorBucketCountHasBeenSet = true;
    }

    if (value.HasMember("IsAutoMonitor") && !value["IsAutoMonitor"].IsNull())
    {
        if (!value["IsAutoMonitor"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketBillingInfo.IsAutoMonitor` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAutoMonitor = value["IsAutoMonitor"].GetUint64();
        m_isAutoMonitorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosBucketBillingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerNickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerNickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerNickName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bucketCount, allocator);
    }

    if (m_buyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buyStatus, allocator);
    }

    if (m_shareFromAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareFromAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareFromAppId, allocator);
    }

    if (m_shareFromUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareFromUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shareFromUin.c_str(), allocator).Move(), allocator);
    }

    if (m_shareFromNickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareFromNickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shareFromNickName.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorBucketCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorBucketCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorBucketCount, allocator);
    }

    if (m_isAutoMonitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoMonitor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAutoMonitor, allocator);
    }

}


uint64_t CosBucketBillingInfo::GetAppId() const
{
    return m_appId;
}

void CosBucketBillingInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CosBucketBillingInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CosBucketBillingInfo::GetOwnerUin() const
{
    return m_ownerUin;
}

void CosBucketBillingInfo::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool CosBucketBillingInfo::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string CosBucketBillingInfo::GetOwnerNickName() const
{
    return m_ownerNickName;
}

void CosBucketBillingInfo::SetOwnerNickName(const string& _ownerNickName)
{
    m_ownerNickName = _ownerNickName;
    m_ownerNickNameHasBeenSet = true;
}

bool CosBucketBillingInfo::OwnerNickNameHasBeenSet() const
{
    return m_ownerNickNameHasBeenSet;
}

uint64_t CosBucketBillingInfo::GetBucketCount() const
{
    return m_bucketCount;
}

void CosBucketBillingInfo::SetBucketCount(const uint64_t& _bucketCount)
{
    m_bucketCount = _bucketCount;
    m_bucketCountHasBeenSet = true;
}

bool CosBucketBillingInfo::BucketCountHasBeenSet() const
{
    return m_bucketCountHasBeenSet;
}

uint64_t CosBucketBillingInfo::GetBuyStatus() const
{
    return m_buyStatus;
}

void CosBucketBillingInfo::SetBuyStatus(const uint64_t& _buyStatus)
{
    m_buyStatus = _buyStatus;
    m_buyStatusHasBeenSet = true;
}

bool CosBucketBillingInfo::BuyStatusHasBeenSet() const
{
    return m_buyStatusHasBeenSet;
}

uint64_t CosBucketBillingInfo::GetShareFromAppId() const
{
    return m_shareFromAppId;
}

void CosBucketBillingInfo::SetShareFromAppId(const uint64_t& _shareFromAppId)
{
    m_shareFromAppId = _shareFromAppId;
    m_shareFromAppIdHasBeenSet = true;
}

bool CosBucketBillingInfo::ShareFromAppIdHasBeenSet() const
{
    return m_shareFromAppIdHasBeenSet;
}

string CosBucketBillingInfo::GetShareFromUin() const
{
    return m_shareFromUin;
}

void CosBucketBillingInfo::SetShareFromUin(const string& _shareFromUin)
{
    m_shareFromUin = _shareFromUin;
    m_shareFromUinHasBeenSet = true;
}

bool CosBucketBillingInfo::ShareFromUinHasBeenSet() const
{
    return m_shareFromUinHasBeenSet;
}

string CosBucketBillingInfo::GetShareFromNickName() const
{
    return m_shareFromNickName;
}

void CosBucketBillingInfo::SetShareFromNickName(const string& _shareFromNickName)
{
    m_shareFromNickName = _shareFromNickName;
    m_shareFromNickNameHasBeenSet = true;
}

bool CosBucketBillingInfo::ShareFromNickNameHasBeenSet() const
{
    return m_shareFromNickNameHasBeenSet;
}

uint64_t CosBucketBillingInfo::GetMonitorBucketCount() const
{
    return m_monitorBucketCount;
}

void CosBucketBillingInfo::SetMonitorBucketCount(const uint64_t& _monitorBucketCount)
{
    m_monitorBucketCount = _monitorBucketCount;
    m_monitorBucketCountHasBeenSet = true;
}

bool CosBucketBillingInfo::MonitorBucketCountHasBeenSet() const
{
    return m_monitorBucketCountHasBeenSet;
}

uint64_t CosBucketBillingInfo::GetIsAutoMonitor() const
{
    return m_isAutoMonitor;
}

void CosBucketBillingInfo::SetIsAutoMonitor(const uint64_t& _isAutoMonitor)
{
    m_isAutoMonitor = _isAutoMonitor;
    m_isAutoMonitorHasBeenSet = true;
}

bool CosBucketBillingInfo::IsAutoMonitorHasBeenSet() const
{
    return m_isAutoMonitorHasBeenSet;
}

