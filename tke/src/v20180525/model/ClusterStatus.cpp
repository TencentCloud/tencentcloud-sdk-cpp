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

#include <tencentcloud/tke/v20180525/model/ClusterStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ClusterStatus::ClusterStatus() :
    m_clusterIdHasBeenSet(false),
    m_clusterStateHasBeenSet(false),
    m_clusterInstanceStateHasBeenSet(false),
    m_clusterBMonitorHasBeenSet(false),
    m_clusterInitNodeNumHasBeenSet(false),
    m_clusterRunningNodeNumHasBeenSet(false),
    m_clusterFailedNodeNumHasBeenSet(false),
    m_clusterClosedNodeNumHasBeenSet(false),
    m_clusterClosingNodeNumHasBeenSet(false),
    m_clusterDeletionProtectionHasBeenSet(false),
    m_clusterAuditEnabledHasBeenSet(false)
{
}

CoreInternalOutcome ClusterStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStatus.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterState") && !value["ClusterState"].IsNull())
    {
        if (!value["ClusterState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStatus.ClusterState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterState = string(value["ClusterState"].GetString());
        m_clusterStateHasBeenSet = true;
    }

    if (value.HasMember("ClusterInstanceState") && !value["ClusterInstanceState"].IsNull())
    {
        if (!value["ClusterInstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStatus.ClusterInstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterInstanceState = string(value["ClusterInstanceState"].GetString());
        m_clusterInstanceStateHasBeenSet = true;
    }

    if (value.HasMember("ClusterBMonitor") && !value["ClusterBMonitor"].IsNull())
    {
        if (!value["ClusterBMonitor"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStatus.ClusterBMonitor` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_clusterBMonitor = value["ClusterBMonitor"].GetBool();
        m_clusterBMonitorHasBeenSet = true;
    }

    if (value.HasMember("ClusterInitNodeNum") && !value["ClusterInitNodeNum"].IsNull())
    {
        if (!value["ClusterInitNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStatus.ClusterInitNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterInitNodeNum = value["ClusterInitNodeNum"].GetInt64();
        m_clusterInitNodeNumHasBeenSet = true;
    }

    if (value.HasMember("ClusterRunningNodeNum") && !value["ClusterRunningNodeNum"].IsNull())
    {
        if (!value["ClusterRunningNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStatus.ClusterRunningNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterRunningNodeNum = value["ClusterRunningNodeNum"].GetInt64();
        m_clusterRunningNodeNumHasBeenSet = true;
    }

    if (value.HasMember("ClusterFailedNodeNum") && !value["ClusterFailedNodeNum"].IsNull())
    {
        if (!value["ClusterFailedNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStatus.ClusterFailedNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterFailedNodeNum = value["ClusterFailedNodeNum"].GetInt64();
        m_clusterFailedNodeNumHasBeenSet = true;
    }

    if (value.HasMember("ClusterClosedNodeNum") && !value["ClusterClosedNodeNum"].IsNull())
    {
        if (!value["ClusterClosedNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStatus.ClusterClosedNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterClosedNodeNum = value["ClusterClosedNodeNum"].GetInt64();
        m_clusterClosedNodeNumHasBeenSet = true;
    }

    if (value.HasMember("ClusterClosingNodeNum") && !value["ClusterClosingNodeNum"].IsNull())
    {
        if (!value["ClusterClosingNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStatus.ClusterClosingNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterClosingNodeNum = value["ClusterClosingNodeNum"].GetInt64();
        m_clusterClosingNodeNumHasBeenSet = true;
    }

    if (value.HasMember("ClusterDeletionProtection") && !value["ClusterDeletionProtection"].IsNull())
    {
        if (!value["ClusterDeletionProtection"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStatus.ClusterDeletionProtection` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDeletionProtection = value["ClusterDeletionProtection"].GetBool();
        m_clusterDeletionProtectionHasBeenSet = true;
    }

    if (value.HasMember("ClusterAuditEnabled") && !value["ClusterAuditEnabled"].IsNull())
    {
        if (!value["ClusterAuditEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStatus.ClusterAuditEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_clusterAuditEnabled = value["ClusterAuditEnabled"].GetBool();
        m_clusterAuditEnabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterState.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterInstanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterInstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterInstanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterBMonitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterBMonitor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterBMonitor, allocator);
    }

    if (m_clusterInitNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterInitNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterInitNodeNum, allocator);
    }

    if (m_clusterRunningNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterRunningNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterRunningNodeNum, allocator);
    }

    if (m_clusterFailedNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterFailedNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterFailedNodeNum, allocator);
    }

    if (m_clusterClosedNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterClosedNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterClosedNodeNum, allocator);
    }

    if (m_clusterClosingNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterClosingNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterClosingNodeNum, allocator);
    }

    if (m_clusterDeletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterDeletionProtection, allocator);
    }

    if (m_clusterAuditEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterAuditEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterAuditEnabled, allocator);
    }

}


string ClusterStatus::GetClusterId() const
{
    return m_clusterId;
}

void ClusterStatus::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterStatus::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterStatus::GetClusterState() const
{
    return m_clusterState;
}

void ClusterStatus::SetClusterState(const string& _clusterState)
{
    m_clusterState = _clusterState;
    m_clusterStateHasBeenSet = true;
}

bool ClusterStatus::ClusterStateHasBeenSet() const
{
    return m_clusterStateHasBeenSet;
}

string ClusterStatus::GetClusterInstanceState() const
{
    return m_clusterInstanceState;
}

void ClusterStatus::SetClusterInstanceState(const string& _clusterInstanceState)
{
    m_clusterInstanceState = _clusterInstanceState;
    m_clusterInstanceStateHasBeenSet = true;
}

bool ClusterStatus::ClusterInstanceStateHasBeenSet() const
{
    return m_clusterInstanceStateHasBeenSet;
}

bool ClusterStatus::GetClusterBMonitor() const
{
    return m_clusterBMonitor;
}

void ClusterStatus::SetClusterBMonitor(const bool& _clusterBMonitor)
{
    m_clusterBMonitor = _clusterBMonitor;
    m_clusterBMonitorHasBeenSet = true;
}

bool ClusterStatus::ClusterBMonitorHasBeenSet() const
{
    return m_clusterBMonitorHasBeenSet;
}

int64_t ClusterStatus::GetClusterInitNodeNum() const
{
    return m_clusterInitNodeNum;
}

void ClusterStatus::SetClusterInitNodeNum(const int64_t& _clusterInitNodeNum)
{
    m_clusterInitNodeNum = _clusterInitNodeNum;
    m_clusterInitNodeNumHasBeenSet = true;
}

bool ClusterStatus::ClusterInitNodeNumHasBeenSet() const
{
    return m_clusterInitNodeNumHasBeenSet;
}

int64_t ClusterStatus::GetClusterRunningNodeNum() const
{
    return m_clusterRunningNodeNum;
}

void ClusterStatus::SetClusterRunningNodeNum(const int64_t& _clusterRunningNodeNum)
{
    m_clusterRunningNodeNum = _clusterRunningNodeNum;
    m_clusterRunningNodeNumHasBeenSet = true;
}

bool ClusterStatus::ClusterRunningNodeNumHasBeenSet() const
{
    return m_clusterRunningNodeNumHasBeenSet;
}

int64_t ClusterStatus::GetClusterFailedNodeNum() const
{
    return m_clusterFailedNodeNum;
}

void ClusterStatus::SetClusterFailedNodeNum(const int64_t& _clusterFailedNodeNum)
{
    m_clusterFailedNodeNum = _clusterFailedNodeNum;
    m_clusterFailedNodeNumHasBeenSet = true;
}

bool ClusterStatus::ClusterFailedNodeNumHasBeenSet() const
{
    return m_clusterFailedNodeNumHasBeenSet;
}

int64_t ClusterStatus::GetClusterClosedNodeNum() const
{
    return m_clusterClosedNodeNum;
}

void ClusterStatus::SetClusterClosedNodeNum(const int64_t& _clusterClosedNodeNum)
{
    m_clusterClosedNodeNum = _clusterClosedNodeNum;
    m_clusterClosedNodeNumHasBeenSet = true;
}

bool ClusterStatus::ClusterClosedNodeNumHasBeenSet() const
{
    return m_clusterClosedNodeNumHasBeenSet;
}

int64_t ClusterStatus::GetClusterClosingNodeNum() const
{
    return m_clusterClosingNodeNum;
}

void ClusterStatus::SetClusterClosingNodeNum(const int64_t& _clusterClosingNodeNum)
{
    m_clusterClosingNodeNum = _clusterClosingNodeNum;
    m_clusterClosingNodeNumHasBeenSet = true;
}

bool ClusterStatus::ClusterClosingNodeNumHasBeenSet() const
{
    return m_clusterClosingNodeNumHasBeenSet;
}

bool ClusterStatus::GetClusterDeletionProtection() const
{
    return m_clusterDeletionProtection;
}

void ClusterStatus::SetClusterDeletionProtection(const bool& _clusterDeletionProtection)
{
    m_clusterDeletionProtection = _clusterDeletionProtection;
    m_clusterDeletionProtectionHasBeenSet = true;
}

bool ClusterStatus::ClusterDeletionProtectionHasBeenSet() const
{
    return m_clusterDeletionProtectionHasBeenSet;
}

bool ClusterStatus::GetClusterAuditEnabled() const
{
    return m_clusterAuditEnabled;
}

void ClusterStatus::SetClusterAuditEnabled(const bool& _clusterAuditEnabled)
{
    m_clusterAuditEnabled = _clusterAuditEnabled;
    m_clusterAuditEnabledHasBeenSet = true;
}

bool ClusterStatus::ClusterAuditEnabledHasBeenSet() const
{
    return m_clusterAuditEnabledHasBeenSet;
}

