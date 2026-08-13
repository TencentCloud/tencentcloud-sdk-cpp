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

#include <tencentcloud/csip/v20221121/model/EdrAlertCountItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

EdrAlertCountItem::EdrAlertCountItem() :
    m_instanceIdHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_virusTrojanCountHasBeenSet(false),
    m_abnormalLoginCountHasBeenSet(false),
    m_hostBehaviorCountHasBeenSet(false),
    m_networkBehaviorCountHasBeenSet(false),
    m_instancesCountHasBeenSet(false)
{
}

CoreInternalOutcome EdrAlertCountItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertCountItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertCountItem.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("VirusTrojanCount") && !value["VirusTrojanCount"].IsNull())
    {
        if (!value["VirusTrojanCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertCountItem.VirusTrojanCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_virusTrojanCount = value["VirusTrojanCount"].GetInt64();
        m_virusTrojanCountHasBeenSet = true;
    }

    if (value.HasMember("AbnormalLoginCount") && !value["AbnormalLoginCount"].IsNull())
    {
        if (!value["AbnormalLoginCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertCountItem.AbnormalLoginCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalLoginCount = value["AbnormalLoginCount"].GetInt64();
        m_abnormalLoginCountHasBeenSet = true;
    }

    if (value.HasMember("HostBehaviorCount") && !value["HostBehaviorCount"].IsNull())
    {
        if (!value["HostBehaviorCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertCountItem.HostBehaviorCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostBehaviorCount = value["HostBehaviorCount"].GetInt64();
        m_hostBehaviorCountHasBeenSet = true;
    }

    if (value.HasMember("NetworkBehaviorCount") && !value["NetworkBehaviorCount"].IsNull())
    {
        if (!value["NetworkBehaviorCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertCountItem.NetworkBehaviorCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_networkBehaviorCount = value["NetworkBehaviorCount"].GetInt64();
        m_networkBehaviorCountHasBeenSet = true;
    }

    if (value.HasMember("InstancesCount") && !value["InstancesCount"].IsNull())
    {
        if (!value["InstancesCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertCountItem.InstancesCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instancesCount = value["InstancesCount"].GetUint64();
        m_instancesCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdrAlertCountItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_virusTrojanCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusTrojanCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virusTrojanCount, allocator);
    }

    if (m_abnormalLoginCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalLoginCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormalLoginCount, allocator);
    }

    if (m_hostBehaviorCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostBehaviorCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostBehaviorCount, allocator);
    }

    if (m_networkBehaviorCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkBehaviorCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkBehaviorCount, allocator);
    }

    if (m_instancesCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancesCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instancesCount, allocator);
    }

}


string EdrAlertCountItem::GetInstanceId() const
{
    return m_instanceId;
}

void EdrAlertCountItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool EdrAlertCountItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t EdrAlertCountItem::GetTotalCount() const
{
    return m_totalCount;
}

void EdrAlertCountItem::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool EdrAlertCountItem::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t EdrAlertCountItem::GetVirusTrojanCount() const
{
    return m_virusTrojanCount;
}

void EdrAlertCountItem::SetVirusTrojanCount(const int64_t& _virusTrojanCount)
{
    m_virusTrojanCount = _virusTrojanCount;
    m_virusTrojanCountHasBeenSet = true;
}

bool EdrAlertCountItem::VirusTrojanCountHasBeenSet() const
{
    return m_virusTrojanCountHasBeenSet;
}

int64_t EdrAlertCountItem::GetAbnormalLoginCount() const
{
    return m_abnormalLoginCount;
}

void EdrAlertCountItem::SetAbnormalLoginCount(const int64_t& _abnormalLoginCount)
{
    m_abnormalLoginCount = _abnormalLoginCount;
    m_abnormalLoginCountHasBeenSet = true;
}

bool EdrAlertCountItem::AbnormalLoginCountHasBeenSet() const
{
    return m_abnormalLoginCountHasBeenSet;
}

int64_t EdrAlertCountItem::GetHostBehaviorCount() const
{
    return m_hostBehaviorCount;
}

void EdrAlertCountItem::SetHostBehaviorCount(const int64_t& _hostBehaviorCount)
{
    m_hostBehaviorCount = _hostBehaviorCount;
    m_hostBehaviorCountHasBeenSet = true;
}

bool EdrAlertCountItem::HostBehaviorCountHasBeenSet() const
{
    return m_hostBehaviorCountHasBeenSet;
}

int64_t EdrAlertCountItem::GetNetworkBehaviorCount() const
{
    return m_networkBehaviorCount;
}

void EdrAlertCountItem::SetNetworkBehaviorCount(const int64_t& _networkBehaviorCount)
{
    m_networkBehaviorCount = _networkBehaviorCount;
    m_networkBehaviorCountHasBeenSet = true;
}

bool EdrAlertCountItem::NetworkBehaviorCountHasBeenSet() const
{
    return m_networkBehaviorCountHasBeenSet;
}

uint64_t EdrAlertCountItem::GetInstancesCount() const
{
    return m_instancesCount;
}

void EdrAlertCountItem::SetInstancesCount(const uint64_t& _instancesCount)
{
    m_instancesCount = _instancesCount;
    m_instancesCountHasBeenSet = true;
}

bool EdrAlertCountItem::InstancesCountHasBeenSet() const
{
    return m_instancesCountHasBeenSet;
}

