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

#include <tencentcloud/tia/v20180226/model/CreateModelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tia::V20180226::Model;
using namespace std;

CreateModelRequest::CreateModelRequest() :
    m_nameHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_runtimeVersionHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_exposeHasBeenSet(false),
    m_servTypeHasBeenSet(false),
    m_runtimeConfHasBeenSet(false)
{
}

string CreateModelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runtimeVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicas, allocator);
    }

    if (m_exposeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expose";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expose.c_str(), allocator).Move(), allocator);
    }

    if (m_servTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_servType.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_runtimeConf.begin(); itr != m_runtimeConf.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateModelRequest::GetName() const
{
    return m_name;
}

void CreateModelRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateModelRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateModelRequest::GetModel() const
{
    return m_model;
}

void CreateModelRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool CreateModelRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string CreateModelRequest::GetDescription() const
{
    return m_description;
}

void CreateModelRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateModelRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateModelRequest::GetCluster() const
{
    return m_cluster;
}

void CreateModelRequest::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool CreateModelRequest::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string CreateModelRequest::GetRuntimeVersion() const
{
    return m_runtimeVersion;
}

void CreateModelRequest::SetRuntimeVersion(const string& _runtimeVersion)
{
    m_runtimeVersion = _runtimeVersion;
    m_runtimeVersionHasBeenSet = true;
}

bool CreateModelRequest::RuntimeVersionHasBeenSet() const
{
    return m_runtimeVersionHasBeenSet;
}

uint64_t CreateModelRequest::GetReplicas() const
{
    return m_replicas;
}

void CreateModelRequest::SetReplicas(const uint64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool CreateModelRequest::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

string CreateModelRequest::GetExpose() const
{
    return m_expose;
}

void CreateModelRequest::SetExpose(const string& _expose)
{
    m_expose = _expose;
    m_exposeHasBeenSet = true;
}

bool CreateModelRequest::ExposeHasBeenSet() const
{
    return m_exposeHasBeenSet;
}

string CreateModelRequest::GetServType() const
{
    return m_servType;
}

void CreateModelRequest::SetServType(const string& _servType)
{
    m_servType = _servType;
    m_servTypeHasBeenSet = true;
}

bool CreateModelRequest::ServTypeHasBeenSet() const
{
    return m_servTypeHasBeenSet;
}

vector<string> CreateModelRequest::GetRuntimeConf() const
{
    return m_runtimeConf;
}

void CreateModelRequest::SetRuntimeConf(const vector<string>& _runtimeConf)
{
    m_runtimeConf = _runtimeConf;
    m_runtimeConfHasBeenSet = true;
}

bool CreateModelRequest::RuntimeConfHasBeenSet() const
{
    return m_runtimeConfHasBeenSet;
}


