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

#include <tencentcloud/ssl/v20191205/model/UpdateSyncProgress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

UpdateSyncProgress::UpdateSyncProgress() :
    m_resourceTypeHasBeenSet(false),
    m_updateSyncProgressRegionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome UpdateSyncProgress::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateSyncProgress.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdateSyncProgressRegions") && !value["UpdateSyncProgressRegions"].IsNull())
    {
        if (!value["UpdateSyncProgressRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpdateSyncProgress.UpdateSyncProgressRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["UpdateSyncProgressRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UpdateSyncProgressRegion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_updateSyncProgressRegions.push_back(item);
        }
        m_updateSyncProgressRegionsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateSyncProgress.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateSyncProgress::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_updateSyncProgressRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateSyncProgressRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_updateSyncProgressRegions.begin(); itr != m_updateSyncProgressRegions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string UpdateSyncProgress::GetResourceType() const
{
    return m_resourceType;
}

void UpdateSyncProgress::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool UpdateSyncProgress::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

vector<UpdateSyncProgressRegion> UpdateSyncProgress::GetUpdateSyncProgressRegions() const
{
    return m_updateSyncProgressRegions;
}

void UpdateSyncProgress::SetUpdateSyncProgressRegions(const vector<UpdateSyncProgressRegion>& _updateSyncProgressRegions)
{
    m_updateSyncProgressRegions = _updateSyncProgressRegions;
    m_updateSyncProgressRegionsHasBeenSet = true;
}

bool UpdateSyncProgress::UpdateSyncProgressRegionsHasBeenSet() const
{
    return m_updateSyncProgressRegionsHasBeenSet;
}

int64_t UpdateSyncProgress::GetStatus() const
{
    return m_status;
}

void UpdateSyncProgress::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpdateSyncProgress::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

