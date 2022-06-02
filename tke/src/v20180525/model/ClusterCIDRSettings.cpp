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

#include <tencentcloud/tke/v20180525/model/ClusterCIDRSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ClusterCIDRSettings::ClusterCIDRSettings() :
    m_clusterCIDRHasBeenSet(false),
    m_ignoreClusterCIDRConflictHasBeenSet(false),
    m_maxNodePodNumHasBeenSet(false),
    m_maxClusterServiceNumHasBeenSet(false),
    m_serviceCIDRHasBeenSet(false),
    m_eniSubnetIdsHasBeenSet(false),
    m_claimExpiredSecondsHasBeenSet(false),
    m_ignoreServiceCIDRConflictHasBeenSet(false)
{
}

CoreInternalOutcome ClusterCIDRSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterCIDR") && !value["ClusterCIDR"].IsNull())
    {
        if (!value["ClusterCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCIDRSettings.ClusterCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterCIDR = string(value["ClusterCIDR"].GetString());
        m_clusterCIDRHasBeenSet = true;
    }

    if (value.HasMember("IgnoreClusterCIDRConflict") && !value["IgnoreClusterCIDRConflict"].IsNull())
    {
        if (!value["IgnoreClusterCIDRConflict"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCIDRSettings.IgnoreClusterCIDRConflict` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreClusterCIDRConflict = value["IgnoreClusterCIDRConflict"].GetBool();
        m_ignoreClusterCIDRConflictHasBeenSet = true;
    }

    if (value.HasMember("MaxNodePodNum") && !value["MaxNodePodNum"].IsNull())
    {
        if (!value["MaxNodePodNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCIDRSettings.MaxNodePodNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNodePodNum = value["MaxNodePodNum"].GetUint64();
        m_maxNodePodNumHasBeenSet = true;
    }

    if (value.HasMember("MaxClusterServiceNum") && !value["MaxClusterServiceNum"].IsNull())
    {
        if (!value["MaxClusterServiceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCIDRSettings.MaxClusterServiceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxClusterServiceNum = value["MaxClusterServiceNum"].GetUint64();
        m_maxClusterServiceNumHasBeenSet = true;
    }

    if (value.HasMember("ServiceCIDR") && !value["ServiceCIDR"].IsNull())
    {
        if (!value["ServiceCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCIDRSettings.ServiceCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCIDR = string(value["ServiceCIDR"].GetString());
        m_serviceCIDRHasBeenSet = true;
    }

    if (value.HasMember("EniSubnetIds") && !value["EniSubnetIds"].IsNull())
    {
        if (!value["EniSubnetIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterCIDRSettings.EniSubnetIds` is not array type"));

        const rapidjson::Value &tmpValue = value["EniSubnetIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eniSubnetIds.push_back((*itr).GetString());
        }
        m_eniSubnetIdsHasBeenSet = true;
    }

    if (value.HasMember("ClaimExpiredSeconds") && !value["ClaimExpiredSeconds"].IsNull())
    {
        if (!value["ClaimExpiredSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCIDRSettings.ClaimExpiredSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_claimExpiredSeconds = value["ClaimExpiredSeconds"].GetInt64();
        m_claimExpiredSecondsHasBeenSet = true;
    }

    if (value.HasMember("IgnoreServiceCIDRConflict") && !value["IgnoreServiceCIDRConflict"].IsNull())
    {
        if (!value["IgnoreServiceCIDRConflict"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCIDRSettings.IgnoreServiceCIDRConflict` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreServiceCIDRConflict = value["IgnoreServiceCIDRConflict"].GetBool();
        m_ignoreServiceCIDRConflictHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterCIDRSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreClusterCIDRConflictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreClusterCIDRConflict";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoreClusterCIDRConflict, allocator);
    }

    if (m_maxNodePodNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNodePodNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNodePodNum, allocator);
    }

    if (m_maxClusterServiceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxClusterServiceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxClusterServiceNum, allocator);
    }

    if (m_serviceCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_eniSubnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniSubnetIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eniSubnetIds.begin(); itr != m_eniSubnetIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_claimExpiredSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClaimExpiredSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_claimExpiredSeconds, allocator);
    }

    if (m_ignoreServiceCIDRConflictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreServiceCIDRConflict";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoreServiceCIDRConflict, allocator);
    }

}


string ClusterCIDRSettings::GetClusterCIDR() const
{
    return m_clusterCIDR;
}

void ClusterCIDRSettings::SetClusterCIDR(const string& _clusterCIDR)
{
    m_clusterCIDR = _clusterCIDR;
    m_clusterCIDRHasBeenSet = true;
}

bool ClusterCIDRSettings::ClusterCIDRHasBeenSet() const
{
    return m_clusterCIDRHasBeenSet;
}

bool ClusterCIDRSettings::GetIgnoreClusterCIDRConflict() const
{
    return m_ignoreClusterCIDRConflict;
}

void ClusterCIDRSettings::SetIgnoreClusterCIDRConflict(const bool& _ignoreClusterCIDRConflict)
{
    m_ignoreClusterCIDRConflict = _ignoreClusterCIDRConflict;
    m_ignoreClusterCIDRConflictHasBeenSet = true;
}

bool ClusterCIDRSettings::IgnoreClusterCIDRConflictHasBeenSet() const
{
    return m_ignoreClusterCIDRConflictHasBeenSet;
}

uint64_t ClusterCIDRSettings::GetMaxNodePodNum() const
{
    return m_maxNodePodNum;
}

void ClusterCIDRSettings::SetMaxNodePodNum(const uint64_t& _maxNodePodNum)
{
    m_maxNodePodNum = _maxNodePodNum;
    m_maxNodePodNumHasBeenSet = true;
}

bool ClusterCIDRSettings::MaxNodePodNumHasBeenSet() const
{
    return m_maxNodePodNumHasBeenSet;
}

uint64_t ClusterCIDRSettings::GetMaxClusterServiceNum() const
{
    return m_maxClusterServiceNum;
}

void ClusterCIDRSettings::SetMaxClusterServiceNum(const uint64_t& _maxClusterServiceNum)
{
    m_maxClusterServiceNum = _maxClusterServiceNum;
    m_maxClusterServiceNumHasBeenSet = true;
}

bool ClusterCIDRSettings::MaxClusterServiceNumHasBeenSet() const
{
    return m_maxClusterServiceNumHasBeenSet;
}

string ClusterCIDRSettings::GetServiceCIDR() const
{
    return m_serviceCIDR;
}

void ClusterCIDRSettings::SetServiceCIDR(const string& _serviceCIDR)
{
    m_serviceCIDR = _serviceCIDR;
    m_serviceCIDRHasBeenSet = true;
}

bool ClusterCIDRSettings::ServiceCIDRHasBeenSet() const
{
    return m_serviceCIDRHasBeenSet;
}

vector<string> ClusterCIDRSettings::GetEniSubnetIds() const
{
    return m_eniSubnetIds;
}

void ClusterCIDRSettings::SetEniSubnetIds(const vector<string>& _eniSubnetIds)
{
    m_eniSubnetIds = _eniSubnetIds;
    m_eniSubnetIdsHasBeenSet = true;
}

bool ClusterCIDRSettings::EniSubnetIdsHasBeenSet() const
{
    return m_eniSubnetIdsHasBeenSet;
}

int64_t ClusterCIDRSettings::GetClaimExpiredSeconds() const
{
    return m_claimExpiredSeconds;
}

void ClusterCIDRSettings::SetClaimExpiredSeconds(const int64_t& _claimExpiredSeconds)
{
    m_claimExpiredSeconds = _claimExpiredSeconds;
    m_claimExpiredSecondsHasBeenSet = true;
}

bool ClusterCIDRSettings::ClaimExpiredSecondsHasBeenSet() const
{
    return m_claimExpiredSecondsHasBeenSet;
}

bool ClusterCIDRSettings::GetIgnoreServiceCIDRConflict() const
{
    return m_ignoreServiceCIDRConflict;
}

void ClusterCIDRSettings::SetIgnoreServiceCIDRConflict(const bool& _ignoreServiceCIDRConflict)
{
    m_ignoreServiceCIDRConflict = _ignoreServiceCIDRConflict;
    m_ignoreServiceCIDRConflictHasBeenSet = true;
}

bool ClusterCIDRSettings::IgnoreServiceCIDRConflictHasBeenSet() const
{
    return m_ignoreServiceCIDRConflictHasBeenSet;
}

