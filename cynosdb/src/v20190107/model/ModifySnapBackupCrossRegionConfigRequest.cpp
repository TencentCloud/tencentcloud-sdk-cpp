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

#include <tencentcloud/cynosdb/v20190107/model/ModifySnapBackupCrossRegionConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifySnapBackupCrossRegionConfigRequest::ModifySnapBackupCrossRegionConfigRequest() :
    m_clusterIdHasBeenSet(false),
    m_crossRegionsEnableHasBeenSet(false),
    m_crossRegionsHasBeenSet(false)
{
}

string ModifySnapBackupCrossRegionConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_crossRegionsEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegionsEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_crossRegionsEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_crossRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_crossRegions.begin(); itr != m_crossRegions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySnapBackupCrossRegionConfigRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifySnapBackupCrossRegionConfigRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifySnapBackupCrossRegionConfigRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifySnapBackupCrossRegionConfigRequest::GetCrossRegionsEnable() const
{
    return m_crossRegionsEnable;
}

void ModifySnapBackupCrossRegionConfigRequest::SetCrossRegionsEnable(const string& _crossRegionsEnable)
{
    m_crossRegionsEnable = _crossRegionsEnable;
    m_crossRegionsEnableHasBeenSet = true;
}

bool ModifySnapBackupCrossRegionConfigRequest::CrossRegionsEnableHasBeenSet() const
{
    return m_crossRegionsEnableHasBeenSet;
}

vector<string> ModifySnapBackupCrossRegionConfigRequest::GetCrossRegions() const
{
    return m_crossRegions;
}

void ModifySnapBackupCrossRegionConfigRequest::SetCrossRegions(const vector<string>& _crossRegions)
{
    m_crossRegions = _crossRegions;
    m_crossRegionsHasBeenSet = true;
}

bool ModifySnapBackupCrossRegionConfigRequest::CrossRegionsHasBeenSet() const
{
    return m_crossRegionsHasBeenSet;
}


