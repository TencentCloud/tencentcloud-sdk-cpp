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

#include <tencentcloud/hai/v20230812/model/DeploymentConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

DeploymentConfig::DeploymentConfig() :
    m_containerHasBeenSet(false),
    m_containerCountHasBeenSet(false)
{
}

CoreInternalOutcome DeploymentConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentConfig.Container` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_container.Deserialize(value["Container"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_containerHasBeenSet = true;
    }

    if (value.HasMember("ContainerCount") && !value["ContainerCount"].IsNull())
    {
        if (!value["ContainerCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentConfig.ContainerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCount = value["ContainerCount"].GetInt64();
        m_containerCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeploymentConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_container.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_containerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCount, allocator);
    }

}


ContainerInfo DeploymentConfig::GetContainer() const
{
    return m_container;
}

void DeploymentConfig::SetContainer(const ContainerInfo& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool DeploymentConfig::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

int64_t DeploymentConfig::GetContainerCount() const
{
    return m_containerCount;
}

void DeploymentConfig::SetContainerCount(const int64_t& _containerCount)
{
    m_containerCount = _containerCount;
    m_containerCountHasBeenSet = true;
}

bool DeploymentConfig::ContainerCountHasBeenSet() const
{
    return m_containerCountHasBeenSet;
}

