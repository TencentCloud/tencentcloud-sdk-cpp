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

#include <tencentcloud/tse/v20201207/model/EngineRegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

EngineRegionInfo::EngineRegionInfo() :
    m_engineRegionHasBeenSet(false),
    m_replicaHasBeenSet(false),
    m_vpcInfosHasBeenSet(false),
    m_mainRegionHasBeenSet(false),
    m_specIdHasBeenSet(false)
{
}

CoreInternalOutcome EngineRegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EngineRegion") && !value["EngineRegion"].IsNull())
    {
        if (!value["EngineRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineRegionInfo.EngineRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineRegion = string(value["EngineRegion"].GetString());
        m_engineRegionHasBeenSet = true;
    }

    if (value.HasMember("Replica") && !value["Replica"].IsNull())
    {
        if (!value["Replica"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineRegionInfo.Replica` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replica = value["Replica"].GetInt64();
        m_replicaHasBeenSet = true;
    }

    if (value.HasMember("VpcInfos") && !value["VpcInfos"].IsNull())
    {
        if (!value["VpcInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EngineRegionInfo.VpcInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcInfos.push_back(item);
        }
        m_vpcInfosHasBeenSet = true;
    }

    if (value.HasMember("MainRegion") && !value["MainRegion"].IsNull())
    {
        if (!value["MainRegion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EngineRegionInfo.MainRegion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_mainRegion = value["MainRegion"].GetBool();
        m_mainRegionHasBeenSet = true;
    }

    if (value.HasMember("SpecId") && !value["SpecId"].IsNull())
    {
        if (!value["SpecId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineRegionInfo.SpecId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specId = string(value["SpecId"].GetString());
        m_specIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EngineRegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_engineRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_replicaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replica";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replica, allocator);
    }

    if (m_vpcInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcInfos.begin(); itr != m_vpcInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mainRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainRegion, allocator);
    }

    if (m_specIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specId.c_str(), allocator).Move(), allocator);
    }

}


string EngineRegionInfo::GetEngineRegion() const
{
    return m_engineRegion;
}

void EngineRegionInfo::SetEngineRegion(const string& _engineRegion)
{
    m_engineRegion = _engineRegion;
    m_engineRegionHasBeenSet = true;
}

bool EngineRegionInfo::EngineRegionHasBeenSet() const
{
    return m_engineRegionHasBeenSet;
}

int64_t EngineRegionInfo::GetReplica() const
{
    return m_replica;
}

void EngineRegionInfo::SetReplica(const int64_t& _replica)
{
    m_replica = _replica;
    m_replicaHasBeenSet = true;
}

bool EngineRegionInfo::ReplicaHasBeenSet() const
{
    return m_replicaHasBeenSet;
}

vector<VpcInfo> EngineRegionInfo::GetVpcInfos() const
{
    return m_vpcInfos;
}

void EngineRegionInfo::SetVpcInfos(const vector<VpcInfo>& _vpcInfos)
{
    m_vpcInfos = _vpcInfos;
    m_vpcInfosHasBeenSet = true;
}

bool EngineRegionInfo::VpcInfosHasBeenSet() const
{
    return m_vpcInfosHasBeenSet;
}

bool EngineRegionInfo::GetMainRegion() const
{
    return m_mainRegion;
}

void EngineRegionInfo::SetMainRegion(const bool& _mainRegion)
{
    m_mainRegion = _mainRegion;
    m_mainRegionHasBeenSet = true;
}

bool EngineRegionInfo::MainRegionHasBeenSet() const
{
    return m_mainRegionHasBeenSet;
}

string EngineRegionInfo::GetSpecId() const
{
    return m_specId;
}

void EngineRegionInfo::SetSpecId(const string& _specId)
{
    m_specId = _specId;
    m_specIdHasBeenSet = true;
}

bool EngineRegionInfo::SpecIdHasBeenSet() const
{
    return m_specIdHasBeenSet;
}

