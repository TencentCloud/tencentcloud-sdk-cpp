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

#include <tencentcloud/tsf/v20180326/model/CreateClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CreateClusterRequest::CreateClusterRequest() :
    m_clusterNameHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_clusterCIDRHasBeenSet(false),
    m_clusterDescHasBeenSet(false),
    m_tsfRegionIdHasBeenSet(false),
    m_tsfZoneIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_maxNodePodNumHasBeenSet(false),
    m_maxClusterServiceNumHasBeenSet(false),
    m_programIdHasBeenSet(false),
    m_kuberneteApiServerHasBeenSet(false),
    m_kuberneteNativeTypeHasBeenSet(false),
    m_kuberneteNativeSecretHasBeenSet(false),
    m_programIdListHasBeenSet(false),
    m_enableLogCollectionHasBeenSet(false)
{
}

string CreateClusterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCIDR";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_tsfRegionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TsfRegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tsfRegionId.c_str(), allocator).Move(), allocator);
    }

    if (m_tsfZoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TsfZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tsfZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_maxNodePodNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNodePodNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxNodePodNum, allocator);
    }

    if (m_maxClusterServiceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxClusterServiceNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxClusterServiceNum, allocator);
    }

    if (m_programIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_programId.c_str(), allocator).Move(), allocator);
    }

    if (m_kuberneteApiServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KuberneteApiServer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kuberneteApiServer.c_str(), allocator).Move(), allocator);
    }

    if (m_kuberneteNativeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KuberneteNativeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kuberneteNativeType.c_str(), allocator).Move(), allocator);
    }

    if (m_kuberneteNativeSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KuberneteNativeSecret";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kuberneteNativeSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_programIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programIdList.begin(); itr != m_programIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableLogCollectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableLogCollection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableLogCollection, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateClusterRequest::GetClusterName() const
{
    return m_clusterName;
}

void CreateClusterRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CreateClusterRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string CreateClusterRequest::GetClusterType() const
{
    return m_clusterType;
}

void CreateClusterRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool CreateClusterRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string CreateClusterRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateClusterRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateClusterRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateClusterRequest::GetClusterCIDR() const
{
    return m_clusterCIDR;
}

void CreateClusterRequest::SetClusterCIDR(const string& _clusterCIDR)
{
    m_clusterCIDR = _clusterCIDR;
    m_clusterCIDRHasBeenSet = true;
}

bool CreateClusterRequest::ClusterCIDRHasBeenSet() const
{
    return m_clusterCIDRHasBeenSet;
}

string CreateClusterRequest::GetClusterDesc() const
{
    return m_clusterDesc;
}

void CreateClusterRequest::SetClusterDesc(const string& _clusterDesc)
{
    m_clusterDesc = _clusterDesc;
    m_clusterDescHasBeenSet = true;
}

bool CreateClusterRequest::ClusterDescHasBeenSet() const
{
    return m_clusterDescHasBeenSet;
}

string CreateClusterRequest::GetTsfRegionId() const
{
    return m_tsfRegionId;
}

void CreateClusterRequest::SetTsfRegionId(const string& _tsfRegionId)
{
    m_tsfRegionId = _tsfRegionId;
    m_tsfRegionIdHasBeenSet = true;
}

bool CreateClusterRequest::TsfRegionIdHasBeenSet() const
{
    return m_tsfRegionIdHasBeenSet;
}

string CreateClusterRequest::GetTsfZoneId() const
{
    return m_tsfZoneId;
}

void CreateClusterRequest::SetTsfZoneId(const string& _tsfZoneId)
{
    m_tsfZoneId = _tsfZoneId;
    m_tsfZoneIdHasBeenSet = true;
}

bool CreateClusterRequest::TsfZoneIdHasBeenSet() const
{
    return m_tsfZoneIdHasBeenSet;
}

string CreateClusterRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateClusterRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateClusterRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateClusterRequest::GetClusterVersion() const
{
    return m_clusterVersion;
}

void CreateClusterRequest::SetClusterVersion(const string& _clusterVersion)
{
    m_clusterVersion = _clusterVersion;
    m_clusterVersionHasBeenSet = true;
}

bool CreateClusterRequest::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

uint64_t CreateClusterRequest::GetMaxNodePodNum() const
{
    return m_maxNodePodNum;
}

void CreateClusterRequest::SetMaxNodePodNum(const uint64_t& _maxNodePodNum)
{
    m_maxNodePodNum = _maxNodePodNum;
    m_maxNodePodNumHasBeenSet = true;
}

bool CreateClusterRequest::MaxNodePodNumHasBeenSet() const
{
    return m_maxNodePodNumHasBeenSet;
}

uint64_t CreateClusterRequest::GetMaxClusterServiceNum() const
{
    return m_maxClusterServiceNum;
}

void CreateClusterRequest::SetMaxClusterServiceNum(const uint64_t& _maxClusterServiceNum)
{
    m_maxClusterServiceNum = _maxClusterServiceNum;
    m_maxClusterServiceNumHasBeenSet = true;
}

bool CreateClusterRequest::MaxClusterServiceNumHasBeenSet() const
{
    return m_maxClusterServiceNumHasBeenSet;
}

string CreateClusterRequest::GetProgramId() const
{
    return m_programId;
}

void CreateClusterRequest::SetProgramId(const string& _programId)
{
    m_programId = _programId;
    m_programIdHasBeenSet = true;
}

bool CreateClusterRequest::ProgramIdHasBeenSet() const
{
    return m_programIdHasBeenSet;
}

string CreateClusterRequest::GetKuberneteApiServer() const
{
    return m_kuberneteApiServer;
}

void CreateClusterRequest::SetKuberneteApiServer(const string& _kuberneteApiServer)
{
    m_kuberneteApiServer = _kuberneteApiServer;
    m_kuberneteApiServerHasBeenSet = true;
}

bool CreateClusterRequest::KuberneteApiServerHasBeenSet() const
{
    return m_kuberneteApiServerHasBeenSet;
}

string CreateClusterRequest::GetKuberneteNativeType() const
{
    return m_kuberneteNativeType;
}

void CreateClusterRequest::SetKuberneteNativeType(const string& _kuberneteNativeType)
{
    m_kuberneteNativeType = _kuberneteNativeType;
    m_kuberneteNativeTypeHasBeenSet = true;
}

bool CreateClusterRequest::KuberneteNativeTypeHasBeenSet() const
{
    return m_kuberneteNativeTypeHasBeenSet;
}

string CreateClusterRequest::GetKuberneteNativeSecret() const
{
    return m_kuberneteNativeSecret;
}

void CreateClusterRequest::SetKuberneteNativeSecret(const string& _kuberneteNativeSecret)
{
    m_kuberneteNativeSecret = _kuberneteNativeSecret;
    m_kuberneteNativeSecretHasBeenSet = true;
}

bool CreateClusterRequest::KuberneteNativeSecretHasBeenSet() const
{
    return m_kuberneteNativeSecretHasBeenSet;
}

vector<string> CreateClusterRequest::GetProgramIdList() const
{
    return m_programIdList;
}

void CreateClusterRequest::SetProgramIdList(const vector<string>& _programIdList)
{
    m_programIdList = _programIdList;
    m_programIdListHasBeenSet = true;
}

bool CreateClusterRequest::ProgramIdListHasBeenSet() const
{
    return m_programIdListHasBeenSet;
}

bool CreateClusterRequest::GetEnableLogCollection() const
{
    return m_enableLogCollection;
}

void CreateClusterRequest::SetEnableLogCollection(const bool& _enableLogCollection)
{
    m_enableLogCollection = _enableLogCollection;
    m_enableLogCollectionHasBeenSet = true;
}

bool CreateClusterRequest::EnableLogCollectionHasBeenSet() const
{
    return m_enableLogCollectionHasBeenSet;
}


