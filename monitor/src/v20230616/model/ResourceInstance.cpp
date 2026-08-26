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

#include <tencentcloud/monitor/v20230616/model/ResourceInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

ResourceInstance::ResourceInstance() :
    m_idHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_isReadyHasBeenSet(false)
{
}

CoreInternalOutcome ResourceInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInstance.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInstance.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInstance.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("IsReady") && !value["IsReady"].IsNull())
    {
        if (!value["IsReady"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInstance.IsReady` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isReady = value["IsReady"].GetBool();
        m_isReadyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_isReadyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReady";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isReady, allocator);
    }

}


string ResourceInstance::GetId() const
{
    return m_id;
}

void ResourceInstance::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ResourceInstance::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ResourceInstance::GetService() const
{
    return m_service;
}

void ResourceInstance::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool ResourceInstance::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string ResourceInstance::GetRegion() const
{
    return m_region;
}

void ResourceInstance::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ResourceInstance::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

bool ResourceInstance::GetIsReady() const
{
    return m_isReady;
}

void ResourceInstance::SetIsReady(const bool& _isReady)
{
    m_isReady = _isReady;
    m_isReadyHasBeenSet = true;
}

bool ResourceInstance::IsReadyHasBeenSet() const
{
    return m_isReadyHasBeenSet;
}

