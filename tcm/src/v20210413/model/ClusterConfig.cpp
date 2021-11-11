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

#include <tencentcloud/tcm/v20210413/model/ClusterConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

ClusterConfig::ClusterConfig() :
    m_autoInjectionNamespaceListHasBeenSet(false),
    m_ingressGatewayListHasBeenSet(false),
    m_egressGatewayListHasBeenSet(false),
    m_istiodHasBeenSet(false),
    m_deployConfigHasBeenSet(false),
    m_autoInjectionNamespaceStateListHasBeenSet(false)
{
}

CoreInternalOutcome ClusterConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoInjectionNamespaceList") && !value["AutoInjectionNamespaceList"].IsNull())
    {
        if (!value["AutoInjectionNamespaceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterConfig.AutoInjectionNamespaceList` is not array type"));

        const rapidjson::Value &tmpValue = value["AutoInjectionNamespaceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_autoInjectionNamespaceList.push_back((*itr).GetString());
        }
        m_autoInjectionNamespaceListHasBeenSet = true;
    }

    if (value.HasMember("IngressGatewayList") && !value["IngressGatewayList"].IsNull())
    {
        if (!value["IngressGatewayList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterConfig.IngressGatewayList` is not array type"));

        const rapidjson::Value &tmpValue = value["IngressGatewayList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IngressGateway item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ingressGatewayList.push_back(item);
        }
        m_ingressGatewayListHasBeenSet = true;
    }

    if (value.HasMember("EgressGatewayList") && !value["EgressGatewayList"].IsNull())
    {
        if (!value["EgressGatewayList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterConfig.EgressGatewayList` is not array type"));

        const rapidjson::Value &tmpValue = value["EgressGatewayList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EgressGateway item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_egressGatewayList.push_back(item);
        }
        m_egressGatewayListHasBeenSet = true;
    }

    if (value.HasMember("Istiod") && !value["Istiod"].IsNull())
    {
        if (!value["Istiod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterConfig.Istiod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_istiod.Deserialize(value["Istiod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_istiodHasBeenSet = true;
    }

    if (value.HasMember("DeployConfig") && !value["DeployConfig"].IsNull())
    {
        if (!value["DeployConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterConfig.DeployConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deployConfig.Deserialize(value["DeployConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deployConfigHasBeenSet = true;
    }

    if (value.HasMember("AutoInjectionNamespaceStateList") && !value["AutoInjectionNamespaceStateList"].IsNull())
    {
        if (!value["AutoInjectionNamespaceStateList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterConfig.AutoInjectionNamespaceStateList` is not array type"));

        const rapidjson::Value &tmpValue = value["AutoInjectionNamespaceStateList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AutoInjectionNamespaceState item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_autoInjectionNamespaceStateList.push_back(item);
        }
        m_autoInjectionNamespaceStateListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoInjectionNamespaceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoInjectionNamespaceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_autoInjectionNamespaceList.begin(); itr != m_autoInjectionNamespaceList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ingressGatewayListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressGatewayList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ingressGatewayList.begin(); itr != m_ingressGatewayList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_egressGatewayListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EgressGatewayList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_egressGatewayList.begin(); itr != m_egressGatewayList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_istiodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Istiod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_istiod.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deployConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deployConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoInjectionNamespaceStateListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoInjectionNamespaceStateList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_autoInjectionNamespaceStateList.begin(); itr != m_autoInjectionNamespaceStateList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> ClusterConfig::GetAutoInjectionNamespaceList() const
{
    return m_autoInjectionNamespaceList;
}

void ClusterConfig::SetAutoInjectionNamespaceList(const vector<string>& _autoInjectionNamespaceList)
{
    m_autoInjectionNamespaceList = _autoInjectionNamespaceList;
    m_autoInjectionNamespaceListHasBeenSet = true;
}

bool ClusterConfig::AutoInjectionNamespaceListHasBeenSet() const
{
    return m_autoInjectionNamespaceListHasBeenSet;
}

vector<IngressGateway> ClusterConfig::GetIngressGatewayList() const
{
    return m_ingressGatewayList;
}

void ClusterConfig::SetIngressGatewayList(const vector<IngressGateway>& _ingressGatewayList)
{
    m_ingressGatewayList = _ingressGatewayList;
    m_ingressGatewayListHasBeenSet = true;
}

bool ClusterConfig::IngressGatewayListHasBeenSet() const
{
    return m_ingressGatewayListHasBeenSet;
}

vector<EgressGateway> ClusterConfig::GetEgressGatewayList() const
{
    return m_egressGatewayList;
}

void ClusterConfig::SetEgressGatewayList(const vector<EgressGateway>& _egressGatewayList)
{
    m_egressGatewayList = _egressGatewayList;
    m_egressGatewayListHasBeenSet = true;
}

bool ClusterConfig::EgressGatewayListHasBeenSet() const
{
    return m_egressGatewayListHasBeenSet;
}

IstiodConfig ClusterConfig::GetIstiod() const
{
    return m_istiod;
}

void ClusterConfig::SetIstiod(const IstiodConfig& _istiod)
{
    m_istiod = _istiod;
    m_istiodHasBeenSet = true;
}

bool ClusterConfig::IstiodHasBeenSet() const
{
    return m_istiodHasBeenSet;
}

DeployConfig ClusterConfig::GetDeployConfig() const
{
    return m_deployConfig;
}

void ClusterConfig::SetDeployConfig(const DeployConfig& _deployConfig)
{
    m_deployConfig = _deployConfig;
    m_deployConfigHasBeenSet = true;
}

bool ClusterConfig::DeployConfigHasBeenSet() const
{
    return m_deployConfigHasBeenSet;
}

vector<AutoInjectionNamespaceState> ClusterConfig::GetAutoInjectionNamespaceStateList() const
{
    return m_autoInjectionNamespaceStateList;
}

void ClusterConfig::SetAutoInjectionNamespaceStateList(const vector<AutoInjectionNamespaceState>& _autoInjectionNamespaceStateList)
{
    m_autoInjectionNamespaceStateList = _autoInjectionNamespaceStateList;
    m_autoInjectionNamespaceStateListHasBeenSet = true;
}

bool ClusterConfig::AutoInjectionNamespaceStateListHasBeenSet() const
{
    return m_autoInjectionNamespaceStateListHasBeenSet;
}

