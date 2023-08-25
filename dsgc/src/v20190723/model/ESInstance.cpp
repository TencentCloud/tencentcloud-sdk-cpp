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

#include <tencentcloud/dsgc/v20190723/model/ESInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ESInstance::ESInstance() :
    m_dataSourceIdHasBeenSet(false),
    m_dataSourceTypeHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_discoveryTaskIdHasBeenSet(false),
    m_discoveryTaskInstanceIDHasBeenSet(false)
{
}

CoreInternalOutcome ESInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESInstance.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("DataSourceType") && !value["DataSourceType"].IsNull())
    {
        if (!value["DataSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESInstance.DataSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceType = string(value["DataSourceType"].GetString());
        m_dataSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceRegion") && !value["ResourceRegion"].IsNull())
    {
        if (!value["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESInstance.ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(value["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }

    if (value.HasMember("DiscoveryTaskId") && !value["DiscoveryTaskId"].IsNull())
    {
        if (!value["DiscoveryTaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESInstance.DiscoveryTaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_discoveryTaskId = value["DiscoveryTaskId"].GetInt64();
        m_discoveryTaskIdHasBeenSet = true;
    }

    if (value.HasMember("DiscoveryTaskInstanceID") && !value["DiscoveryTaskInstanceID"].IsNull())
    {
        if (!value["DiscoveryTaskInstanceID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESInstance.DiscoveryTaskInstanceID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_discoveryTaskInstanceID = value["DiscoveryTaskInstanceID"].GetInt64();
        m_discoveryTaskInstanceIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ESInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_discoveryTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscoveryTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discoveryTaskId, allocator);
    }

    if (m_discoveryTaskInstanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscoveryTaskInstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discoveryTaskInstanceID, allocator);
    }

}


string ESInstance::GetDataSourceId() const
{
    return m_dataSourceId;
}

void ESInstance::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool ESInstance::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string ESInstance::GetDataSourceType() const
{
    return m_dataSourceType;
}

void ESInstance::SetDataSourceType(const string& _dataSourceType)
{
    m_dataSourceType = _dataSourceType;
    m_dataSourceTypeHasBeenSet = true;
}

bool ESInstance::DataSourceTypeHasBeenSet() const
{
    return m_dataSourceTypeHasBeenSet;
}

string ESInstance::GetResourceRegion() const
{
    return m_resourceRegion;
}

void ESInstance::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool ESInstance::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

int64_t ESInstance::GetDiscoveryTaskId() const
{
    return m_discoveryTaskId;
}

void ESInstance::SetDiscoveryTaskId(const int64_t& _discoveryTaskId)
{
    m_discoveryTaskId = _discoveryTaskId;
    m_discoveryTaskIdHasBeenSet = true;
}

bool ESInstance::DiscoveryTaskIdHasBeenSet() const
{
    return m_discoveryTaskIdHasBeenSet;
}

int64_t ESInstance::GetDiscoveryTaskInstanceID() const
{
    return m_discoveryTaskInstanceID;
}

void ESInstance::SetDiscoveryTaskInstanceID(const int64_t& _discoveryTaskInstanceID)
{
    m_discoveryTaskInstanceID = _discoveryTaskInstanceID;
    m_discoveryTaskInstanceIDHasBeenSet = true;
}

bool ESInstance::DiscoveryTaskInstanceIDHasBeenSet() const
{
    return m_discoveryTaskInstanceIDHasBeenSet;
}

