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

#include <tencentcloud/apigateway/v20180808/model/MicroService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

MicroService::MicroService() :
    m_clusterIdHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_microServiceNameHasBeenSet(false)
{
}

CoreInternalOutcome MicroService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MicroService.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MicroService.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("MicroServiceName") && !value["MicroServiceName"].IsNull())
    {
        if (!value["MicroServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MicroService.MicroServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microServiceName = string(value["MicroServiceName"].GetString());
        m_microServiceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MicroService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_microServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_microServiceName.c_str(), allocator).Move(), allocator);
    }

}


string MicroService::GetClusterId() const
{
    return m_clusterId;
}

void MicroService::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool MicroService::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string MicroService::GetNamespaceId() const
{
    return m_namespaceId;
}

void MicroService::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool MicroService::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string MicroService::GetMicroServiceName() const
{
    return m_microServiceName;
}

void MicroService::SetMicroServiceName(const string& _microServiceName)
{
    m_microServiceName = _microServiceName;
    m_microServiceNameHasBeenSet = true;
}

bool MicroService::MicroServiceNameHasBeenSet() const
{
    return m_microServiceNameHasBeenSet;
}

