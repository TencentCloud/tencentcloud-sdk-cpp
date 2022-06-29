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

#include <tencentcloud/apigateway/v20180808/model/CreateUpstreamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

CreateUpstreamRequest::CreateUpstreamRequest() :
    m_schemeHasBeenSet(false),
    m_algorithmHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_upstreamNameHasBeenSet(false),
    m_upstreamDescriptionHasBeenSet(false),
    m_upstreamTypeHasBeenSet(false),
    m_retriesHasBeenSet(false),
    m_upstreamHostHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_healthCheckerHasBeenSet(false),
    m_k8sServiceHasBeenSet(false)
{
}

string CreateUpstreamRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_schemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheme.c_str(), allocator).Move(), allocator);
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

    if (m_upstreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upstreamType.c_str(), allocator).Move(), allocator);
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

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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


string CreateUpstreamRequest::GetScheme() const
{
    return m_scheme;
}

void CreateUpstreamRequest::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool CreateUpstreamRequest::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

string CreateUpstreamRequest::GetAlgorithm() const
{
    return m_algorithm;
}

void CreateUpstreamRequest::SetAlgorithm(const string& _algorithm)
{
    m_algorithm = _algorithm;
    m_algorithmHasBeenSet = true;
}

bool CreateUpstreamRequest::AlgorithmHasBeenSet() const
{
    return m_algorithmHasBeenSet;
}

string CreateUpstreamRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void CreateUpstreamRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool CreateUpstreamRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string CreateUpstreamRequest::GetUpstreamName() const
{
    return m_upstreamName;
}

void CreateUpstreamRequest::SetUpstreamName(const string& _upstreamName)
{
    m_upstreamName = _upstreamName;
    m_upstreamNameHasBeenSet = true;
}

bool CreateUpstreamRequest::UpstreamNameHasBeenSet() const
{
    return m_upstreamNameHasBeenSet;
}

string CreateUpstreamRequest::GetUpstreamDescription() const
{
    return m_upstreamDescription;
}

void CreateUpstreamRequest::SetUpstreamDescription(const string& _upstreamDescription)
{
    m_upstreamDescription = _upstreamDescription;
    m_upstreamDescriptionHasBeenSet = true;
}

bool CreateUpstreamRequest::UpstreamDescriptionHasBeenSet() const
{
    return m_upstreamDescriptionHasBeenSet;
}

string CreateUpstreamRequest::GetUpstreamType() const
{
    return m_upstreamType;
}

void CreateUpstreamRequest::SetUpstreamType(const string& _upstreamType)
{
    m_upstreamType = _upstreamType;
    m_upstreamTypeHasBeenSet = true;
}

bool CreateUpstreamRequest::UpstreamTypeHasBeenSet() const
{
    return m_upstreamTypeHasBeenSet;
}

uint64_t CreateUpstreamRequest::GetRetries() const
{
    return m_retries;
}

void CreateUpstreamRequest::SetRetries(const uint64_t& _retries)
{
    m_retries = _retries;
    m_retriesHasBeenSet = true;
}

bool CreateUpstreamRequest::RetriesHasBeenSet() const
{
    return m_retriesHasBeenSet;
}

string CreateUpstreamRequest::GetUpstreamHost() const
{
    return m_upstreamHost;
}

void CreateUpstreamRequest::SetUpstreamHost(const string& _upstreamHost)
{
    m_upstreamHost = _upstreamHost;
    m_upstreamHostHasBeenSet = true;
}

bool CreateUpstreamRequest::UpstreamHostHasBeenSet() const
{
    return m_upstreamHostHasBeenSet;
}

vector<UpstreamNode> CreateUpstreamRequest::GetNodes() const
{
    return m_nodes;
}

void CreateUpstreamRequest::SetNodes(const vector<UpstreamNode>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool CreateUpstreamRequest::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

vector<Tag> CreateUpstreamRequest::GetTags() const
{
    return m_tags;
}

void CreateUpstreamRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateUpstreamRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

UpstreamHealthChecker CreateUpstreamRequest::GetHealthChecker() const
{
    return m_healthChecker;
}

void CreateUpstreamRequest::SetHealthChecker(const UpstreamHealthChecker& _healthChecker)
{
    m_healthChecker = _healthChecker;
    m_healthCheckerHasBeenSet = true;
}

bool CreateUpstreamRequest::HealthCheckerHasBeenSet() const
{
    return m_healthCheckerHasBeenSet;
}

vector<K8sService> CreateUpstreamRequest::GetK8sService() const
{
    return m_k8sService;
}

void CreateUpstreamRequest::SetK8sService(const vector<K8sService>& _k8sService)
{
    m_k8sService = _k8sService;
    m_k8sServiceHasBeenSet = true;
}

bool CreateUpstreamRequest::K8sServiceHasBeenSet() const
{
    return m_k8sServiceHasBeenSet;
}


