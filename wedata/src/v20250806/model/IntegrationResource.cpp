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

#include <tencentcloud/wedata/v20250806/model/IntegrationResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

IntegrationResource::IntegrationResource() :
    m_realTimeDataSyncHasBeenSet(false),
    m_offlineDataSyncHasBeenSet(false)
{
}

CoreInternalOutcome IntegrationResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RealTimeDataSync") && !value["RealTimeDataSync"].IsNull())
    {
        if (!value["RealTimeDataSync"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationResource.RealTimeDataSync` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_realTimeDataSync.Deserialize(value["RealTimeDataSync"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_realTimeDataSyncHasBeenSet = true;
    }

    if (value.HasMember("OfflineDataSync") && !value["OfflineDataSync"].IsNull())
    {
        if (!value["OfflineDataSync"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationResource.OfflineDataSync` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_offlineDataSync.Deserialize(value["OfflineDataSync"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_offlineDataSyncHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntegrationResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_realTimeDataSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTimeDataSync";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_realTimeDataSync.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_offlineDataSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineDataSync";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_offlineDataSync.ToJsonObject(value[key.c_str()], allocator);
    }

}


ResourceGroupSpecification IntegrationResource::GetRealTimeDataSync() const
{
    return m_realTimeDataSync;
}

void IntegrationResource::SetRealTimeDataSync(const ResourceGroupSpecification& _realTimeDataSync)
{
    m_realTimeDataSync = _realTimeDataSync;
    m_realTimeDataSyncHasBeenSet = true;
}

bool IntegrationResource::RealTimeDataSyncHasBeenSet() const
{
    return m_realTimeDataSyncHasBeenSet;
}

ResourceGroupSpecification IntegrationResource::GetOfflineDataSync() const
{
    return m_offlineDataSync;
}

void IntegrationResource::SetOfflineDataSync(const ResourceGroupSpecification& _offlineDataSync)
{
    m_offlineDataSync = _offlineDataSync;
    m_offlineDataSyncHasBeenSet = true;
}

bool IntegrationResource::OfflineDataSyncHasBeenSet() const
{
    return m_offlineDataSyncHasBeenSet;
}

