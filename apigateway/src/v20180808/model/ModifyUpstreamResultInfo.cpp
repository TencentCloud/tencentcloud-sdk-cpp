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

#include <tencentcloud/apigateway/v20180808/model/ModifyUpstreamResultInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ModifyUpstreamResultInfo::ModifyUpstreamResultInfo() :
    m_upstreamIdHasBeenSet(false),
    m_upstreamNameHasBeenSet(false),
    m_upstreamDescriptionHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_algorithmHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_retriesHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_healthCheckerHasBeenSet(false),
    m_upstreamTypeHasBeenSet(false),
    m_k8sServicesHasBeenSet(false),
    m_upstreamHostHasBeenSet(false)
{
}

CoreInternalOutcome ModifyUpstreamResultInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UpstreamId") && !value["UpstreamId"].IsNull())
    {
        if (!value["UpstreamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyUpstreamResultInfo.UpstreamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamId = string(value["UpstreamId"].GetString());
        m_upstreamIdHasBeenSet = true;
    }

    if (value.HasMember("UpstreamName") && !value["UpstreamName"].IsNull())
    {
        if (!value["UpstreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyUpstreamResultInfo.UpstreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamName = string(value["UpstreamName"].GetString());
        m_upstreamNameHasBeenSet = true;
    }

    if (value.HasMember("UpstreamDescription") && !value["UpstreamDescription"].IsNull())
    {
        if (!value["UpstreamDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyUpstreamResultInfo.UpstreamDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamDescription = string(value["UpstreamDescription"].GetString());
        m_upstreamDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Scheme") && !value["Scheme"].IsNull())
    {
        if (!value["Scheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyUpstreamResultInfo.Scheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheme = string(value["Scheme"].GetString());
        m_schemeHasBeenSet = true;
    }

    if (value.HasMember("Algorithm") && !value["Algorithm"].IsNull())
    {
        if (!value["Algorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyUpstreamResultInfo.Algorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algorithm = string(value["Algorithm"].GetString());
        m_algorithmHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyUpstreamResultInfo.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("Retries") && !value["Retries"].IsNull())
    {
        if (!value["Retries"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyUpstreamResultInfo.Retries` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retries = value["Retries"].GetUint64();
        m_retriesHasBeenSet = true;
    }

    if (value.HasMember("Nodes") && !value["Nodes"].IsNull())
    {
        if (!value["Nodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyUpstreamResultInfo.Nodes` is not array type"));

        const rapidjson::Value &tmpValue = value["Nodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UpstreamNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodes.push_back(item);
        }
        m_nodesHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyUpstreamResultInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("HealthChecker") && !value["HealthChecker"].IsNull())
    {
        if (!value["HealthChecker"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyUpstreamResultInfo.HealthChecker` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthChecker.Deserialize(value["HealthChecker"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckerHasBeenSet = true;
    }

    if (value.HasMember("UpstreamType") && !value["UpstreamType"].IsNull())
    {
        if (!value["UpstreamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyUpstreamResultInfo.UpstreamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamType = string(value["UpstreamType"].GetString());
        m_upstreamTypeHasBeenSet = true;
    }

    if (value.HasMember("K8sServices") && !value["K8sServices"].IsNull())
    {
        if (!value["K8sServices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyUpstreamResultInfo.K8sServices` is not array type"));

        const rapidjson::Value &tmpValue = value["K8sServices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            K8sService item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_k8sServices.push_back(item);
        }
        m_k8sServicesHasBeenSet = true;
    }

    if (value.HasMember("UpstreamHost") && !value["UpstreamHost"].IsNull())
    {
        if (!value["UpstreamHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyUpstreamResultInfo.UpstreamHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamHost = string(value["UpstreamHost"].GetString());
        m_upstreamHostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyUpstreamResultInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_upstreamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamId.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamName.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_schemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheme.c_str(), allocator).Move(), allocator);
    }

    if (m_algorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Algorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_algorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_retriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retries, allocator);
    }

    if (m_nodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodes.begin(); itr != m_nodes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthChecker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthChecker.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_upstreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamType.c_str(), allocator).Move(), allocator);
    }

    if (m_k8sServicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8sServices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_k8sServices.begin(); itr != m_k8sServices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_upstreamHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamHost.c_str(), allocator).Move(), allocator);
    }

}


string ModifyUpstreamResultInfo::GetUpstreamId() const
{
    return m_upstreamId;
}

void ModifyUpstreamResultInfo::SetUpstreamId(const string& _upstreamId)
{
    m_upstreamId = _upstreamId;
    m_upstreamIdHasBeenSet = true;
}

bool ModifyUpstreamResultInfo::UpstreamIdHasBeenSet() const
{
    return m_upstreamIdHasBeenSet;
}

string ModifyUpstreamResultInfo::GetUpstreamName() const
{
    return m_upstreamName;
}

void ModifyUpstreamResultInfo::SetUpstreamName(const string& _upstreamName)
{
    m_upstreamName = _upstreamName;
    m_upstreamNameHasBeenSet = true;
}

bool ModifyUpstreamResultInfo::UpstreamNameHasBeenSet() const
{
    return m_upstreamNameHasBeenSet;
}

string ModifyUpstreamResultInfo::GetUpstreamDescription() const
{
    return m_upstreamDescription;
}

void ModifyUpstreamResultInfo::SetUpstreamDescription(const string& _upstreamDescription)
{
    m_upstreamDescription = _upstreamDescription;
    m_upstreamDescriptionHasBeenSet = true;
}

bool ModifyUpstreamResultInfo::UpstreamDescriptionHasBeenSet() const
{
    return m_upstreamDescriptionHasBeenSet;
}

string ModifyUpstreamResultInfo::GetScheme() const
{
    return m_scheme;
}

void ModifyUpstreamResultInfo::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool ModifyUpstreamResultInfo::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

string ModifyUpstreamResultInfo::GetAlgorithm() const
{
    return m_algorithm;
}

void ModifyUpstreamResultInfo::SetAlgorithm(const string& _algorithm)
{
    m_algorithm = _algorithm;
    m_algorithmHasBeenSet = true;
}

bool ModifyUpstreamResultInfo::AlgorithmHasBeenSet() const
{
    return m_algorithmHasBeenSet;
}

string ModifyUpstreamResultInfo::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void ModifyUpstreamResultInfo::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool ModifyUpstreamResultInfo::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

uint64_t ModifyUpstreamResultInfo::GetRetries() const
{
    return m_retries;
}

void ModifyUpstreamResultInfo::SetRetries(const uint64_t& _retries)
{
    m_retries = _retries;
    m_retriesHasBeenSet = true;
}

bool ModifyUpstreamResultInfo::RetriesHasBeenSet() const
{
    return m_retriesHasBeenSet;
}

vector<UpstreamNode> ModifyUpstreamResultInfo::GetNodes() const
{
    return m_nodes;
}

void ModifyUpstreamResultInfo::SetNodes(const vector<UpstreamNode>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool ModifyUpstreamResultInfo::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

string ModifyUpstreamResultInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void ModifyUpstreamResultInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ModifyUpstreamResultInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

UpstreamHealthChecker ModifyUpstreamResultInfo::GetHealthChecker() const
{
    return m_healthChecker;
}

void ModifyUpstreamResultInfo::SetHealthChecker(const UpstreamHealthChecker& _healthChecker)
{
    m_healthChecker = _healthChecker;
    m_healthCheckerHasBeenSet = true;
}

bool ModifyUpstreamResultInfo::HealthCheckerHasBeenSet() const
{
    return m_healthCheckerHasBeenSet;
}

string ModifyUpstreamResultInfo::GetUpstreamType() const
{
    return m_upstreamType;
}

void ModifyUpstreamResultInfo::SetUpstreamType(const string& _upstreamType)
{
    m_upstreamType = _upstreamType;
    m_upstreamTypeHasBeenSet = true;
}

bool ModifyUpstreamResultInfo::UpstreamTypeHasBeenSet() const
{
    return m_upstreamTypeHasBeenSet;
}

vector<K8sService> ModifyUpstreamResultInfo::GetK8sServices() const
{
    return m_k8sServices;
}

void ModifyUpstreamResultInfo::SetK8sServices(const vector<K8sService>& _k8sServices)
{
    m_k8sServices = _k8sServices;
    m_k8sServicesHasBeenSet = true;
}

bool ModifyUpstreamResultInfo::K8sServicesHasBeenSet() const
{
    return m_k8sServicesHasBeenSet;
}

string ModifyUpstreamResultInfo::GetUpstreamHost() const
{
    return m_upstreamHost;
}

void ModifyUpstreamResultInfo::SetUpstreamHost(const string& _upstreamHost)
{
    m_upstreamHost = _upstreamHost;
    m_upstreamHostHasBeenSet = true;
}

bool ModifyUpstreamResultInfo::UpstreamHostHasBeenSet() const
{
    return m_upstreamHostHasBeenSet;
}

