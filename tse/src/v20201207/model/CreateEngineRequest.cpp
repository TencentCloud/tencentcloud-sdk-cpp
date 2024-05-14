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

#include <tencentcloud/tse/v20201207/model/CreateEngineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreateEngineRequest::CreateEngineRequest() :
    m_engineTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_engineProductVersionHasBeenSet(false),
    m_engineRegionHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_tradeTypeHasBeenSet(false),
    m_engineResourceSpecHasBeenSet(false),
    m_engineNodeNumHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_apolloEnvParamsHasBeenSet(false),
    m_engineTagsHasBeenSet(false),
    m_engineAdminHasBeenSet(false),
    m_prepaidPeriodHasBeenSet(false),
    m_prepaidRenewFlagHasBeenSet(false),
    m_engineRegionInfosHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_storageCapacityHasBeenSet(false),
    m_storageOptionHasBeenSet(false),
    m_affinityConstraintHasBeenSet(false)
{
}

string CreateEngineRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_engineProductVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineProductVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineProductVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_engineRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_engineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineName.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tradeType, allocator);
    }

    if (m_engineResourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineResourceSpec.c_str(), allocator).Move(), allocator);
    }

    if (m_engineNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineNodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_engineNodeNum, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_apolloEnvParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApolloEnvParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apolloEnvParams.begin(); itr != m_apolloEnvParams.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_engineTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_engineTags.begin(); itr != m_engineTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_engineAdminHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineAdmin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_engineAdmin.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_prepaidPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepaidPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_prepaidPeriod, allocator);
    }

    if (m_prepaidRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepaidRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_prepaidRenewFlag, allocator);
    }

    if (m_engineRegionInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineRegionInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_engineRegionInfos.begin(); itr != m_engineRegionInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_storageCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageCapacity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageCapacity, allocator);
    }

    if (m_storageOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storageOption.begin(); itr != m_storageOption.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_affinityConstraintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffinityConstraint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_affinityConstraint.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEngineRequest::GetEngineType() const
{
    return m_engineType;
}

void CreateEngineRequest::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool CreateEngineRequest::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

string CreateEngineRequest::GetEngineVersion() const
{
    return m_engineVersion;
}

void CreateEngineRequest::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool CreateEngineRequest::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

string CreateEngineRequest::GetEngineProductVersion() const
{
    return m_engineProductVersion;
}

void CreateEngineRequest::SetEngineProductVersion(const string& _engineProductVersion)
{
    m_engineProductVersion = _engineProductVersion;
    m_engineProductVersionHasBeenSet = true;
}

bool CreateEngineRequest::EngineProductVersionHasBeenSet() const
{
    return m_engineProductVersionHasBeenSet;
}

string CreateEngineRequest::GetEngineRegion() const
{
    return m_engineRegion;
}

void CreateEngineRequest::SetEngineRegion(const string& _engineRegion)
{
    m_engineRegion = _engineRegion;
    m_engineRegionHasBeenSet = true;
}

bool CreateEngineRequest::EngineRegionHasBeenSet() const
{
    return m_engineRegionHasBeenSet;
}

string CreateEngineRequest::GetEngineName() const
{
    return m_engineName;
}

void CreateEngineRequest::SetEngineName(const string& _engineName)
{
    m_engineName = _engineName;
    m_engineNameHasBeenSet = true;
}

bool CreateEngineRequest::EngineNameHasBeenSet() const
{
    return m_engineNameHasBeenSet;
}

int64_t CreateEngineRequest::GetTradeType() const
{
    return m_tradeType;
}

void CreateEngineRequest::SetTradeType(const int64_t& _tradeType)
{
    m_tradeType = _tradeType;
    m_tradeTypeHasBeenSet = true;
}

bool CreateEngineRequest::TradeTypeHasBeenSet() const
{
    return m_tradeTypeHasBeenSet;
}

string CreateEngineRequest::GetEngineResourceSpec() const
{
    return m_engineResourceSpec;
}

void CreateEngineRequest::SetEngineResourceSpec(const string& _engineResourceSpec)
{
    m_engineResourceSpec = _engineResourceSpec;
    m_engineResourceSpecHasBeenSet = true;
}

bool CreateEngineRequest::EngineResourceSpecHasBeenSet() const
{
    return m_engineResourceSpecHasBeenSet;
}

int64_t CreateEngineRequest::GetEngineNodeNum() const
{
    return m_engineNodeNum;
}

void CreateEngineRequest::SetEngineNodeNum(const int64_t& _engineNodeNum)
{
    m_engineNodeNum = _engineNodeNum;
    m_engineNodeNumHasBeenSet = true;
}

bool CreateEngineRequest::EngineNodeNumHasBeenSet() const
{
    return m_engineNodeNumHasBeenSet;
}

string CreateEngineRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateEngineRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateEngineRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateEngineRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateEngineRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateEngineRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<ApolloEnvParam> CreateEngineRequest::GetApolloEnvParams() const
{
    return m_apolloEnvParams;
}

void CreateEngineRequest::SetApolloEnvParams(const vector<ApolloEnvParam>& _apolloEnvParams)
{
    m_apolloEnvParams = _apolloEnvParams;
    m_apolloEnvParamsHasBeenSet = true;
}

bool CreateEngineRequest::ApolloEnvParamsHasBeenSet() const
{
    return m_apolloEnvParamsHasBeenSet;
}

vector<InstanceTagInfo> CreateEngineRequest::GetEngineTags() const
{
    return m_engineTags;
}

void CreateEngineRequest::SetEngineTags(const vector<InstanceTagInfo>& _engineTags)
{
    m_engineTags = _engineTags;
    m_engineTagsHasBeenSet = true;
}

bool CreateEngineRequest::EngineTagsHasBeenSet() const
{
    return m_engineTagsHasBeenSet;
}

EngineAdmin CreateEngineRequest::GetEngineAdmin() const
{
    return m_engineAdmin;
}

void CreateEngineRequest::SetEngineAdmin(const EngineAdmin& _engineAdmin)
{
    m_engineAdmin = _engineAdmin;
    m_engineAdminHasBeenSet = true;
}

bool CreateEngineRequest::EngineAdminHasBeenSet() const
{
    return m_engineAdminHasBeenSet;
}

int64_t CreateEngineRequest::GetPrepaidPeriod() const
{
    return m_prepaidPeriod;
}

void CreateEngineRequest::SetPrepaidPeriod(const int64_t& _prepaidPeriod)
{
    m_prepaidPeriod = _prepaidPeriod;
    m_prepaidPeriodHasBeenSet = true;
}

bool CreateEngineRequest::PrepaidPeriodHasBeenSet() const
{
    return m_prepaidPeriodHasBeenSet;
}

int64_t CreateEngineRequest::GetPrepaidRenewFlag() const
{
    return m_prepaidRenewFlag;
}

void CreateEngineRequest::SetPrepaidRenewFlag(const int64_t& _prepaidRenewFlag)
{
    m_prepaidRenewFlag = _prepaidRenewFlag;
    m_prepaidRenewFlagHasBeenSet = true;
}

bool CreateEngineRequest::PrepaidRenewFlagHasBeenSet() const
{
    return m_prepaidRenewFlagHasBeenSet;
}

vector<EngineRegionInfo> CreateEngineRequest::GetEngineRegionInfos() const
{
    return m_engineRegionInfos;
}

void CreateEngineRequest::SetEngineRegionInfos(const vector<EngineRegionInfo>& _engineRegionInfos)
{
    m_engineRegionInfos = _engineRegionInfos;
    m_engineRegionInfosHasBeenSet = true;
}

bool CreateEngineRequest::EngineRegionInfosHasBeenSet() const
{
    return m_engineRegionInfosHasBeenSet;
}

string CreateEngineRequest::GetStorageType() const
{
    return m_storageType;
}

void CreateEngineRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool CreateEngineRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

int64_t CreateEngineRequest::GetStorageCapacity() const
{
    return m_storageCapacity;
}

void CreateEngineRequest::SetStorageCapacity(const int64_t& _storageCapacity)
{
    m_storageCapacity = _storageCapacity;
    m_storageCapacityHasBeenSet = true;
}

bool CreateEngineRequest::StorageCapacityHasBeenSet() const
{
    return m_storageCapacityHasBeenSet;
}

vector<StorageOption> CreateEngineRequest::GetStorageOption() const
{
    return m_storageOption;
}

void CreateEngineRequest::SetStorageOption(const vector<StorageOption>& _storageOption)
{
    m_storageOption = _storageOption;
    m_storageOptionHasBeenSet = true;
}

bool CreateEngineRequest::StorageOptionHasBeenSet() const
{
    return m_storageOptionHasBeenSet;
}

string CreateEngineRequest::GetAffinityConstraint() const
{
    return m_affinityConstraint;
}

void CreateEngineRequest::SetAffinityConstraint(const string& _affinityConstraint)
{
    m_affinityConstraint = _affinityConstraint;
    m_affinityConstraintHasBeenSet = true;
}

bool CreateEngineRequest::AffinityConstraintHasBeenSet() const
{
    return m_affinityConstraintHasBeenSet;
}


