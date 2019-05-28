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

#include <tencentcloud/tke/v20180525/model/ClusterBasicSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

ClusterBasicSettings::ClusterBasicSettings() :
    m_clusterOsHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterDescriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

CoreInternalOutcome ClusterBasicSettings::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterOs") && !value["ClusterOs"].IsNull())
    {
        if (!value["ClusterOs"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterBasicSettings.ClusterOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterOs = string(value["ClusterOs"].GetString());
        m_clusterOsHasBeenSet = true;
    }

    if (value.HasMember("ClusterVersion") && !value["ClusterVersion"].IsNull())
    {
        if (!value["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterBasicSettings.ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(value["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterBasicSettings.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterDescription") && !value["ClusterDescription"].IsNull())
    {
        if (!value["ClusterDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterBasicSettings.ClusterDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDescription = string(value["ClusterDescription"].GetString());
        m_clusterDescriptionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterBasicSettings.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterBasicSettings.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterBasicSettings::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_clusterOsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterOs.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

}


string ClusterBasicSettings::GetClusterOs() const
{
    return m_clusterOs;
}

void ClusterBasicSettings::SetClusterOs(const string& _clusterOs)
{
    m_clusterOs = _clusterOs;
    m_clusterOsHasBeenSet = true;
}

bool ClusterBasicSettings::ClusterOsHasBeenSet() const
{
    return m_clusterOsHasBeenSet;
}

string ClusterBasicSettings::GetClusterVersion() const
{
    return m_clusterVersion;
}

void ClusterBasicSettings::SetClusterVersion(const string& _clusterVersion)
{
    m_clusterVersion = _clusterVersion;
    m_clusterVersionHasBeenSet = true;
}

bool ClusterBasicSettings::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

string ClusterBasicSettings::GetClusterName() const
{
    return m_clusterName;
}

void ClusterBasicSettings::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ClusterBasicSettings::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ClusterBasicSettings::GetClusterDescription() const
{
    return m_clusterDescription;
}

void ClusterBasicSettings::SetClusterDescription(const string& _clusterDescription)
{
    m_clusterDescription = _clusterDescription;
    m_clusterDescriptionHasBeenSet = true;
}

bool ClusterBasicSettings::ClusterDescriptionHasBeenSet() const
{
    return m_clusterDescriptionHasBeenSet;
}

string ClusterBasicSettings::GetVpcId() const
{
    return m_vpcId;
}

void ClusterBasicSettings::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ClusterBasicSettings::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t ClusterBasicSettings::GetProjectId() const
{
    return m_projectId;
}

void ClusterBasicSettings::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ClusterBasicSettings::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

