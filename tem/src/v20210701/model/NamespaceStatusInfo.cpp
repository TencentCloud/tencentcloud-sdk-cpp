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

#include <tencentcloud/tem/v20210701/model/NamespaceStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

NamespaceStatusInfo::NamespaceStatusInfo() :
    m_environmentIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_environmentStartingStatusHasBeenSet(false),
    m_environmentStoppingStatusHasBeenSet(false)
{
}

CoreInternalOutcome NamespaceStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceStatusInfo.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentName") && !value["EnvironmentName"].IsNull())
    {
        if (!value["EnvironmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceStatusInfo.EnvironmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentName = string(value["EnvironmentName"].GetString());
        m_environmentNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceStatusInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceStatusInfo.ClusterStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = string(value["ClusterStatus"].GetString());
        m_clusterStatusHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentStartingStatus") && !value["EnvironmentStartingStatus"].IsNull())
    {
        if (!value["EnvironmentStartingStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceStatusInfo.EnvironmentStartingStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_environmentStartingStatus.Deserialize(value["EnvironmentStartingStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_environmentStartingStatusHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentStoppingStatus") && !value["EnvironmentStoppingStatus"].IsNull())
    {
        if (!value["EnvironmentStoppingStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceStatusInfo.EnvironmentStoppingStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_environmentStoppingStatus.Deserialize(value["EnvironmentStoppingStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_environmentStoppingStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NamespaceStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentStartingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentStartingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_environmentStartingStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_environmentStoppingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentStoppingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_environmentStoppingStatus.ToJsonObject(value[key.c_str()], allocator);
    }

}


string NamespaceStatusInfo::GetEnvironmentId() const
{
    return m_environmentId;
}

void NamespaceStatusInfo::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool NamespaceStatusInfo::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string NamespaceStatusInfo::GetEnvironmentName() const
{
    return m_environmentName;
}

void NamespaceStatusInfo::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool NamespaceStatusInfo::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

string NamespaceStatusInfo::GetClusterId() const
{
    return m_clusterId;
}

void NamespaceStatusInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool NamespaceStatusInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string NamespaceStatusInfo::GetClusterStatus() const
{
    return m_clusterStatus;
}

void NamespaceStatusInfo::SetClusterStatus(const string& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool NamespaceStatusInfo::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

TemEnvironmentStartingStatus NamespaceStatusInfo::GetEnvironmentStartingStatus() const
{
    return m_environmentStartingStatus;
}

void NamespaceStatusInfo::SetEnvironmentStartingStatus(const TemEnvironmentStartingStatus& _environmentStartingStatus)
{
    m_environmentStartingStatus = _environmentStartingStatus;
    m_environmentStartingStatusHasBeenSet = true;
}

bool NamespaceStatusInfo::EnvironmentStartingStatusHasBeenSet() const
{
    return m_environmentStartingStatusHasBeenSet;
}

TemEnvironmentStoppingStatus NamespaceStatusInfo::GetEnvironmentStoppingStatus() const
{
    return m_environmentStoppingStatus;
}

void NamespaceStatusInfo::SetEnvironmentStoppingStatus(const TemEnvironmentStoppingStatus& _environmentStoppingStatus)
{
    m_environmentStoppingStatus = _environmentStoppingStatus;
    m_environmentStoppingStatusHasBeenSet = true;
}

bool NamespaceStatusInfo::EnvironmentStoppingStatusHasBeenSet() const
{
    return m_environmentStoppingStatusHasBeenSet;
}

