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

#include <tencentcloud/tse/v20201207/model/ServiceGovernanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ServiceGovernanceInfo::ServiceGovernanceInfo() :
    m_engineRegionHasBeenSet(false),
    m_boundK8SInfosHasBeenSet(false),
    m_vpcInfosHasBeenSet(false),
    m_authOpenHasBeenSet(false),
    m_featuresHasBeenSet(false),
    m_mainPasswordHasBeenSet(false)
{
}

CoreInternalOutcome ServiceGovernanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EngineRegion") && !value["EngineRegion"].IsNull())
    {
        if (!value["EngineRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGovernanceInfo.EngineRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineRegion = string(value["EngineRegion"].GetString());
        m_engineRegionHasBeenSet = true;
    }

    if (value.HasMember("BoundK8SInfos") && !value["BoundK8SInfos"].IsNull())
    {
        if (!value["BoundK8SInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceGovernanceInfo.BoundK8SInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["BoundK8SInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BoundK8SInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_boundK8SInfos.push_back(item);
        }
        m_boundK8SInfosHasBeenSet = true;
    }

    if (value.HasMember("VpcInfos") && !value["VpcInfos"].IsNull())
    {
        if (!value["VpcInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceGovernanceInfo.VpcInfos` is not array type"));

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

    if (value.HasMember("AuthOpen") && !value["AuthOpen"].IsNull())
    {
        if (!value["AuthOpen"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGovernanceInfo.AuthOpen` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_authOpen = value["AuthOpen"].GetBool();
        m_authOpenHasBeenSet = true;
    }

    if (value.HasMember("Features") && !value["Features"].IsNull())
    {
        if (!value["Features"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceGovernanceInfo.Features` is not array type"));

        const rapidjson::Value &tmpValue = value["Features"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_features.push_back((*itr).GetString());
        }
        m_featuresHasBeenSet = true;
    }

    if (value.HasMember("MainPassword") && !value["MainPassword"].IsNull())
    {
        if (!value["MainPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGovernanceInfo.MainPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainPassword = string(value["MainPassword"].GetString());
        m_mainPasswordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceGovernanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_engineRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_boundK8SInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundK8SInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_boundK8SInfos.begin(); itr != m_boundK8SInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_authOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthOpen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authOpen, allocator);
    }

    if (m_featuresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Features";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_features.begin(); itr != m_features.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mainPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainPassword.c_str(), allocator).Move(), allocator);
    }

}


string ServiceGovernanceInfo::GetEngineRegion() const
{
    return m_engineRegion;
}

void ServiceGovernanceInfo::SetEngineRegion(const string& _engineRegion)
{
    m_engineRegion = _engineRegion;
    m_engineRegionHasBeenSet = true;
}

bool ServiceGovernanceInfo::EngineRegionHasBeenSet() const
{
    return m_engineRegionHasBeenSet;
}

vector<BoundK8SInfo> ServiceGovernanceInfo::GetBoundK8SInfos() const
{
    return m_boundK8SInfos;
}

void ServiceGovernanceInfo::SetBoundK8SInfos(const vector<BoundK8SInfo>& _boundK8SInfos)
{
    m_boundK8SInfos = _boundK8SInfos;
    m_boundK8SInfosHasBeenSet = true;
}

bool ServiceGovernanceInfo::BoundK8SInfosHasBeenSet() const
{
    return m_boundK8SInfosHasBeenSet;
}

vector<VpcInfo> ServiceGovernanceInfo::GetVpcInfos() const
{
    return m_vpcInfos;
}

void ServiceGovernanceInfo::SetVpcInfos(const vector<VpcInfo>& _vpcInfos)
{
    m_vpcInfos = _vpcInfos;
    m_vpcInfosHasBeenSet = true;
}

bool ServiceGovernanceInfo::VpcInfosHasBeenSet() const
{
    return m_vpcInfosHasBeenSet;
}

bool ServiceGovernanceInfo::GetAuthOpen() const
{
    return m_authOpen;
}

void ServiceGovernanceInfo::SetAuthOpen(const bool& _authOpen)
{
    m_authOpen = _authOpen;
    m_authOpenHasBeenSet = true;
}

bool ServiceGovernanceInfo::AuthOpenHasBeenSet() const
{
    return m_authOpenHasBeenSet;
}

vector<string> ServiceGovernanceInfo::GetFeatures() const
{
    return m_features;
}

void ServiceGovernanceInfo::SetFeatures(const vector<string>& _features)
{
    m_features = _features;
    m_featuresHasBeenSet = true;
}

bool ServiceGovernanceInfo::FeaturesHasBeenSet() const
{
    return m_featuresHasBeenSet;
}

string ServiceGovernanceInfo::GetMainPassword() const
{
    return m_mainPassword;
}

void ServiceGovernanceInfo::SetMainPassword(const string& _mainPassword)
{
    m_mainPassword = _mainPassword;
    m_mainPasswordHasBeenSet = true;
}

bool ServiceGovernanceInfo::MainPasswordHasBeenSet() const
{
    return m_mainPasswordHasBeenSet;
}

