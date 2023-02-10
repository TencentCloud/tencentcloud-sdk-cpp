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

#include <tencentcloud/tse/v20201207/model/ApolloEnvParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ApolloEnvParam::ApolloEnvParam() :
    m_nameHasBeenSet(false),
    m_engineResourceSpecHasBeenSet(false),
    m_engineNodeNumHasBeenSet(false),
    m_storageCapacityHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_envDescHasBeenSet(false)
{
}

CoreInternalOutcome ApolloEnvParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApolloEnvParam.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("EngineResourceSpec") && !value["EngineResourceSpec"].IsNull())
    {
        if (!value["EngineResourceSpec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApolloEnvParam.EngineResourceSpec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineResourceSpec = string(value["EngineResourceSpec"].GetString());
        m_engineResourceSpecHasBeenSet = true;
    }

    if (value.HasMember("EngineNodeNum") && !value["EngineNodeNum"].IsNull())
    {
        if (!value["EngineNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApolloEnvParam.EngineNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_engineNodeNum = value["EngineNodeNum"].GetInt64();
        m_engineNodeNumHasBeenSet = true;
    }

    if (value.HasMember("StorageCapacity") && !value["StorageCapacity"].IsNull())
    {
        if (!value["StorageCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApolloEnvParam.StorageCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageCapacity = value["StorageCapacity"].GetInt64();
        m_storageCapacityHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApolloEnvParam.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApolloEnvParam.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("EnvDesc") && !value["EnvDesc"].IsNull())
    {
        if (!value["EnvDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApolloEnvParam.EnvDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envDesc = string(value["EnvDesc"].GetString());
        m_envDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApolloEnvParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_engineResourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineResourceSpec.c_str(), allocator).Move(), allocator);
    }

    if (m_engineNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_engineNodeNum, allocator);
    }

    if (m_storageCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageCapacity, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_envDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envDesc.c_str(), allocator).Move(), allocator);
    }

}


string ApolloEnvParam::GetName() const
{
    return m_name;
}

void ApolloEnvParam::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ApolloEnvParam::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ApolloEnvParam::GetEngineResourceSpec() const
{
    return m_engineResourceSpec;
}

void ApolloEnvParam::SetEngineResourceSpec(const string& _engineResourceSpec)
{
    m_engineResourceSpec = _engineResourceSpec;
    m_engineResourceSpecHasBeenSet = true;
}

bool ApolloEnvParam::EngineResourceSpecHasBeenSet() const
{
    return m_engineResourceSpecHasBeenSet;
}

int64_t ApolloEnvParam::GetEngineNodeNum() const
{
    return m_engineNodeNum;
}

void ApolloEnvParam::SetEngineNodeNum(const int64_t& _engineNodeNum)
{
    m_engineNodeNum = _engineNodeNum;
    m_engineNodeNumHasBeenSet = true;
}

bool ApolloEnvParam::EngineNodeNumHasBeenSet() const
{
    return m_engineNodeNumHasBeenSet;
}

int64_t ApolloEnvParam::GetStorageCapacity() const
{
    return m_storageCapacity;
}

void ApolloEnvParam::SetStorageCapacity(const int64_t& _storageCapacity)
{
    m_storageCapacity = _storageCapacity;
    m_storageCapacityHasBeenSet = true;
}

bool ApolloEnvParam::StorageCapacityHasBeenSet() const
{
    return m_storageCapacityHasBeenSet;
}

string ApolloEnvParam::GetVpcId() const
{
    return m_vpcId;
}

void ApolloEnvParam::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ApolloEnvParam::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ApolloEnvParam::GetSubnetId() const
{
    return m_subnetId;
}

void ApolloEnvParam::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ApolloEnvParam::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ApolloEnvParam::GetEnvDesc() const
{
    return m_envDesc;
}

void ApolloEnvParam::SetEnvDesc(const string& _envDesc)
{
    m_envDesc = _envDesc;
    m_envDescHasBeenSet = true;
}

bool ApolloEnvParam::EnvDescHasBeenSet() const
{
    return m_envDescHasBeenSet;
}

