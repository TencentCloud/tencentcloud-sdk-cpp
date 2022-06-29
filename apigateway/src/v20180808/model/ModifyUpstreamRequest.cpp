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

#include <tencentcloud/apigateway/v20180808/model/ModifyUpstreamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ModifyUpstreamRequest::ModifyUpstreamRequest() :
    m_upstreamIdHasBeenSet(false),
    m_upstreamNameHasBeenSet(false),
    m_upstreamDescriptionHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_upstreamTypeHasBeenSet(false),
    m_algorithmHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_retriesHasBeenSet(false),
    m_upstreamHostHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_healthCheckerHasBeenSet(false),
    m_k8sServiceHasBeenSet(false)
{
}

string ModifyUpstreamRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_upstreamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upstreamId.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upstreamName.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upstreamDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_schemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheme.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upstreamType.c_str(), allocator).Move(), allocator);
    }

    if (m_algorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Algorithm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_algorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_retriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retries";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retries, allocator);
    }

    if (m_upstreamHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upstreamHost.c_str(), allocator).Move(), allocator);
    }

    if (m_nodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodes.begin(); itr != m_nodes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_healthCheckerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthChecker";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthChecker.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_k8sServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8sService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_k8sService.begin(); itr != m_k8sService.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUpstreamRequest::GetUpstreamId() const
{
    return m_upstreamId;
}

void ModifyUpstreamRequest::SetUpstreamId(const string& _upstreamId)
{
    m_upstreamId = _upstreamId;
    m_upstreamIdHasBeenSet = true;
}

bool ModifyUpstreamRequest::UpstreamIdHasBeenSet() const
{
    return m_upstreamIdHasBeenSet;
}

string ModifyUpstreamRequest::GetUpstreamName() const
{
    return m_upstreamName;
}

void ModifyUpstreamRequest::SetUpstreamName(const string& _upstreamName)
{
    m_upstreamName = _upstreamName;
    m_upstreamNameHasBeenSet = true;
}

bool ModifyUpstreamRequest::UpstreamNameHasBeenSet() const
{
    return m_upstreamNameHasBeenSet;
}

string ModifyUpstreamRequest::GetUpstreamDescription() const
{
    return m_upstreamDescription;
}

void ModifyUpstreamRequest::SetUpstreamDescription(const string& _upstreamDescription)
{
    m_upstreamDescription = _upstreamDescription;
    m_upstreamDescriptionHasBeenSet = true;
}

bool ModifyUpstreamRequest::UpstreamDescriptionHasBeenSet() const
{
    return m_upstreamDescriptionHasBeenSet;
}

string ModifyUpstreamRequest::GetScheme() const
{
    return m_scheme;
}

void ModifyUpstreamRequest::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool ModifyUpstreamRequest::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

string ModifyUpstreamRequest::GetUpstreamType() const
{
    return m_upstreamType;
}

void ModifyUpstreamRequest::SetUpstreamType(const string& _upstreamType)
{
    m_upstreamType = _upstreamType;
    m_upstreamTypeHasBeenSet = true;
}

bool ModifyUpstreamRequest::UpstreamTypeHasBeenSet() const
{
    return m_upstreamTypeHasBeenSet;
}

string ModifyUpstreamRequest::GetAlgorithm() const
{
    return m_algorithm;
}

void ModifyUpstreamRequest::SetAlgorithm(const string& _algorithm)
{
    m_algorithm = _algorithm;
    m_algorithmHasBeenSet = true;
}

bool ModifyUpstreamRequest::AlgorithmHasBeenSet() const
{
    return m_algorithmHasBeenSet;
}

string ModifyUpstreamRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void ModifyUpstreamRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool ModifyUpstreamRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

uint64_t ModifyUpstreamRequest::GetRetries() const
{
    return m_retries;
}

void ModifyUpstreamRequest::SetRetries(const uint64_t& _retries)
{
    m_retries = _retries;
    m_retriesHasBeenSet = true;
}

bool ModifyUpstreamRequest::RetriesHasBeenSet() const
{
    return m_retriesHasBeenSet;
}

string ModifyUpstreamRequest::GetUpstreamHost() const
{
    return m_upstreamHost;
}

void ModifyUpstreamRequest::SetUpstreamHost(const string& _upstreamHost)
{
    m_upstreamHost = _upstreamHost;
    m_upstreamHostHasBeenSet = true;
}

bool ModifyUpstreamRequest::UpstreamHostHasBeenSet() const
{
    return m_upstreamHostHasBeenSet;
}

vector<UpstreamNode> ModifyUpstreamRequest::GetNodes() const
{
    return m_nodes;
}

void ModifyUpstreamRequest::SetNodes(const vector<UpstreamNode>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool ModifyUpstreamRequest::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

UpstreamHealthChecker ModifyUpstreamRequest::GetHealthChecker() const
{
    return m_healthChecker;
}

void ModifyUpstreamRequest::SetHealthChecker(const UpstreamHealthChecker& _healthChecker)
{
    m_healthChecker = _healthChecker;
    m_healthCheckerHasBeenSet = true;
}

bool ModifyUpstreamRequest::HealthCheckerHasBeenSet() const
{
    return m_healthCheckerHasBeenSet;
}

vector<K8sService> ModifyUpstreamRequest::GetK8sService() const
{
    return m_k8sService;
}

void ModifyUpstreamRequest::SetK8sService(const vector<K8sService>& _k8sService)
{
    m_k8sService = _k8sService;
    m_k8sServiceHasBeenSet = true;
}

bool ModifyUpstreamRequest::K8sServiceHasBeenSet() const
{
    return m_k8sServiceHasBeenSet;
}


