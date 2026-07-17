/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/teo/v20220901/model/InferenceServiceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceServiceConfig::InferenceServiceConfig() :
    m_listenPortHasBeenSet(false),
    m_requestPathsHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_resourceConfigHasBeenSet(false)
{
}

CoreInternalOutcome InferenceServiceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenPort") && !value["ListenPort"].IsNull())
    {
        if (!value["ListenPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceConfig.ListenPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_listenPort = value["ListenPort"].GetInt64();
        m_listenPortHasBeenSet = true;
    }

    if (value.HasMember("RequestPaths") && !value["RequestPaths"].IsNull())
    {
        if (!value["RequestPaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferenceServiceConfig.RequestPaths` is not array type"));

        const rapidjson::Value &tmpValue = value["RequestPaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_requestPaths.push_back((*itr).GetString());
        }
        m_requestPathsHasBeenSet = true;
    }

    if (value.HasMember("Containers") && !value["Containers"].IsNull())
    {
        if (!value["Containers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferenceServiceConfig.Containers` is not array type"));

        const rapidjson::Value &tmpValue = value["Containers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InferenceContainerConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_containers.push_back(item);
        }
        m_containersHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfig") && !value["ResourceConfig"].IsNull())
    {
        if (!value["ResourceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceConfig.ResourceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceConfig.Deserialize(value["ResourceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceServiceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listenPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listenPort, allocator);
    }

    if (m_requestPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestPaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_requestPaths.begin(); itr != m_requestPaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_containersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Containers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_containers.begin(); itr != m_containers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t InferenceServiceConfig::GetListenPort() const
{
    return m_listenPort;
}

void InferenceServiceConfig::SetListenPort(const int64_t& _listenPort)
{
    m_listenPort = _listenPort;
    m_listenPortHasBeenSet = true;
}

bool InferenceServiceConfig::ListenPortHasBeenSet() const
{
    return m_listenPortHasBeenSet;
}

vector<string> InferenceServiceConfig::GetRequestPaths() const
{
    return m_requestPaths;
}

void InferenceServiceConfig::SetRequestPaths(const vector<string>& _requestPaths)
{
    m_requestPaths = _requestPaths;
    m_requestPathsHasBeenSet = true;
}

bool InferenceServiceConfig::RequestPathsHasBeenSet() const
{
    return m_requestPathsHasBeenSet;
}

vector<InferenceContainerConfig> InferenceServiceConfig::GetContainers() const
{
    return m_containers;
}

void InferenceServiceConfig::SetContainers(const vector<InferenceContainerConfig>& _containers)
{
    m_containers = _containers;
    m_containersHasBeenSet = true;
}

bool InferenceServiceConfig::ContainersHasBeenSet() const
{
    return m_containersHasBeenSet;
}

InferenceResourceConfig InferenceServiceConfig::GetResourceConfig() const
{
    return m_resourceConfig;
}

void InferenceServiceConfig::SetResourceConfig(const InferenceResourceConfig& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool InferenceServiceConfig::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

