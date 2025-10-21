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

#include <tencentcloud/wedata/v20250806/model/ResourceType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ResourceType::ResourceType() :
    m_resourceGroupTypeHasBeenSet(false),
    m_integrationHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_dataServiceHasBeenSet(false)
{
}

CoreInternalOutcome ResourceType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceGroupType") && !value["ResourceGroupType"].IsNull())
    {
        if (!value["ResourceGroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceType.ResourceGroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupType = string(value["ResourceGroupType"].GetString());
        m_resourceGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("Integration") && !value["Integration"].IsNull())
    {
        if (!value["Integration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceType.Integration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_integration.Deserialize(value["Integration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_integrationHasBeenSet = true;
    }

    if (value.HasMember("Schedule") && !value["Schedule"].IsNull())
    {
        if (!value["Schedule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceType.Schedule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_schedule.Deserialize(value["Schedule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scheduleHasBeenSet = true;
    }

    if (value.HasMember("DataService") && !value["DataService"].IsNull())
    {
        if (!value["DataService"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceType.DataService` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataService.Deserialize(value["DataService"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataServiceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupType.c_str(), allocator).Move(), allocator);
    }

    if (m_integrationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Integration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_integration.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schedule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_schedule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataService.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ResourceType::GetResourceGroupType() const
{
    return m_resourceGroupType;
}

void ResourceType::SetResourceGroupType(const string& _resourceGroupType)
{
    m_resourceGroupType = _resourceGroupType;
    m_resourceGroupTypeHasBeenSet = true;
}

bool ResourceType::ResourceGroupTypeHasBeenSet() const
{
    return m_resourceGroupTypeHasBeenSet;
}

IntegrationResource ResourceType::GetIntegration() const
{
    return m_integration;
}

void ResourceType::SetIntegration(const IntegrationResource& _integration)
{
    m_integration = _integration;
    m_integrationHasBeenSet = true;
}

bool ResourceType::IntegrationHasBeenSet() const
{
    return m_integrationHasBeenSet;
}

ResourceGroupSpecification ResourceType::GetSchedule() const
{
    return m_schedule;
}

void ResourceType::SetSchedule(const ResourceGroupSpecification& _schedule)
{
    m_schedule = _schedule;
    m_scheduleHasBeenSet = true;
}

bool ResourceType::ScheduleHasBeenSet() const
{
    return m_scheduleHasBeenSet;
}

ResourceGroupSpecification ResourceType::GetDataService() const
{
    return m_dataService;
}

void ResourceType::SetDataService(const ResourceGroupSpecification& _dataService)
{
    m_dataService = _dataService;
    m_dataServiceHasBeenSet = true;
}

bool ResourceType::DataServiceHasBeenSet() const
{
    return m_dataServiceHasBeenSet;
}

