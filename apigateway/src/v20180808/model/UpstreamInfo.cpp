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

#include <tencentcloud/apigateway/v20180808/model/UpstreamInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

UpstreamInfo::UpstreamInfo() :
    m_upstreamIdHasBeenSet(false),
    m_upstreamNameHasBeenSet(false),
    m_upstreamDescriptionHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_algorithmHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_retriesHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_healthCheckerHasBeenSet(false),
    m_upstreamTypeHasBeenSet(false),
    m_k8sServicesHasBeenSet(false),
    m_upstreamHostHasBeenSet(false)
{
}

CoreInternalOutcome UpstreamInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UpstreamId") && !value["UpstreamId"].IsNull())
    {
        if (!value["UpstreamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamInfo.UpstreamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamId = string(value["UpstreamId"].GetString());
        m_upstreamIdHasBeenSet = true;
    }

    if (value.HasMember("UpstreamName") && !value["UpstreamName"].IsNull())
    {
        if (!value["UpstreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamInfo.UpstreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamName = string(value["UpstreamName"].GetString());
        m_upstreamNameHasBeenSet = true;
    }

    if (value.HasMember("UpstreamDescription") && !value["UpstreamDescription"].IsNull())
    {
        if (!value["UpstreamDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamInfo.UpstreamDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamDescription = string(value["UpstreamDescription"].GetString());
        m_upstreamDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Scheme") && !value["Scheme"].IsNull())
    {
        if (!value["Scheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamInfo.Scheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheme = string(value["Scheme"].GetString());
        m_schemeHasBeenSet = true;
    }

    if (value.HasMember("Algorithm") && !value["Algorithm"].IsNull())
    {
        if (!value["Algorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamInfo.Algorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algorithm = string(value["Algorithm"].GetString());
        m_algorithmHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamInfo.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("Retries") && !value["Retries"].IsNull())
    {
        if (!value["Retries"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamInfo.Retries` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retries = value["Retries"].GetUint64();
        m_retriesHasBeenSet = true;
    }

    if (value.HasMember("Nodes") && !value["Nodes"].IsNull())
    {
        if (!value["Nodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpstreamInfo.Nodes` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `UpstreamInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpstreamInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("HealthChecker") && !value["HealthChecker"].IsNull())
    {
        if (!value["HealthChecker"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamInfo.HealthChecker` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `UpstreamInfo.UpstreamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamType = string(value["UpstreamType"].GetString());
        m_upstreamTypeHasBeenSet = true;
    }

    if (value.HasMember("K8sServices") && !value["K8sServices"].IsNull())
    {
        if (!value["K8sServices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpstreamInfo.K8sServices` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `UpstreamInfo.UpstreamHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamHost = string(value["UpstreamHost"].GetString());
        m_upstreamHostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpstreamInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string UpstreamInfo::GetUpstreamId() const
{
    return m_upstreamId;
}

void UpstreamInfo::SetUpstreamId(const string& _upstreamId)
{
    m_upstreamId = _upstreamId;
    m_upstreamIdHasBeenSet = true;
}

bool UpstreamInfo::UpstreamIdHasBeenSet() const
{
    return m_upstreamIdHasBeenSet;
}

string UpstreamInfo::GetUpstreamName() const
{
    return m_upstreamName;
}

void UpstreamInfo::SetUpstreamName(const string& _upstreamName)
{
    m_upstreamName = _upstreamName;
    m_upstreamNameHasBeenSet = true;
}

bool UpstreamInfo::UpstreamNameHasBeenSet() const
{
    return m_upstreamNameHasBeenSet;
}

string UpstreamInfo::GetUpstreamDescription() const
{
    return m_upstreamDescription;
}

void UpstreamInfo::SetUpstreamDescription(const string& _upstreamDescription)
{
    m_upstreamDescription = _upstreamDescription;
    m_upstreamDescriptionHasBeenSet = true;
}

bool UpstreamInfo::UpstreamDescriptionHasBeenSet() const
{
    return m_upstreamDescriptionHasBeenSet;
}

string UpstreamInfo::GetScheme() const
{
    return m_scheme;
}

void UpstreamInfo::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool UpstreamInfo::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

string UpstreamInfo::GetAlgorithm() const
{
    return m_algorithm;
}

void UpstreamInfo::SetAlgorithm(const string& _algorithm)
{
    m_algorithm = _algorithm;
    m_algorithmHasBeenSet = true;
}

bool UpstreamInfo::AlgorithmHasBeenSet() const
{
    return m_algorithmHasBeenSet;
}

string UpstreamInfo::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void UpstreamInfo::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool UpstreamInfo::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

uint64_t UpstreamInfo::GetRetries() const
{
    return m_retries;
}

void UpstreamInfo::SetRetries(const uint64_t& _retries)
{
    m_retries = _retries;
    m_retriesHasBeenSet = true;
}

bool UpstreamInfo::RetriesHasBeenSet() const
{
    return m_retriesHasBeenSet;
}

vector<UpstreamNode> UpstreamInfo::GetNodes() const
{
    return m_nodes;
}

void UpstreamInfo::SetNodes(const vector<UpstreamNode>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool UpstreamInfo::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

string UpstreamInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void UpstreamInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool UpstreamInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<Tag> UpstreamInfo::GetTags() const
{
    return m_tags;
}

void UpstreamInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool UpstreamInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

UpstreamHealthChecker UpstreamInfo::GetHealthChecker() const
{
    return m_healthChecker;
}

void UpstreamInfo::SetHealthChecker(const UpstreamHealthChecker& _healthChecker)
{
    m_healthChecker = _healthChecker;
    m_healthCheckerHasBeenSet = true;
}

bool UpstreamInfo::HealthCheckerHasBeenSet() const
{
    return m_healthCheckerHasBeenSet;
}

string UpstreamInfo::GetUpstreamType() const
{
    return m_upstreamType;
}

void UpstreamInfo::SetUpstreamType(const string& _upstreamType)
{
    m_upstreamType = _upstreamType;
    m_upstreamTypeHasBeenSet = true;
}

bool UpstreamInfo::UpstreamTypeHasBeenSet() const
{
    return m_upstreamTypeHasBeenSet;
}

vector<K8sService> UpstreamInfo::GetK8sServices() const
{
    return m_k8sServices;
}

void UpstreamInfo::SetK8sServices(const vector<K8sService>& _k8sServices)
{
    m_k8sServices = _k8sServices;
    m_k8sServicesHasBeenSet = true;
}

bool UpstreamInfo::K8sServicesHasBeenSet() const
{
    return m_k8sServicesHasBeenSet;
}

string UpstreamInfo::GetUpstreamHost() const
{
    return m_upstreamHost;
}

void UpstreamInfo::SetUpstreamHost(const string& _upstreamHost)
{
    m_upstreamHost = _upstreamHost;
    m_upstreamHostHasBeenSet = true;
}

bool UpstreamInfo::UpstreamHostHasBeenSet() const
{
    return m_upstreamHostHasBeenSet;
}

