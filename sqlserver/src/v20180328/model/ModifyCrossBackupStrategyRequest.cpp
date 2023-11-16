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

#include <tencentcloud/sqlserver/v20180328/model/ModifyCrossBackupStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyCrossBackupStrategyRequest::ModifyCrossBackupStrategyRequest() :
    m_crossBackupEnabledHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceIdSetHasBeenSet(false),
    m_crossBackupSaveDaysHasBeenSet(false),
    m_crossBackupRegionHasBeenSet(false),
    m_cleanUpCrossBackupHasBeenSet(false)
{
}

string ModifyCrossBackupStrategyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_crossBackupEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBackupEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_crossBackupEnabled.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdSet.begin(); itr != m_instanceIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_crossBackupSaveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBackupSaveDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_crossBackupSaveDays, allocator);
    }

    if (m_crossBackupRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBackupRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_crossBackupRegion.begin(); itr != m_crossBackupRegion.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cleanUpCrossBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CleanUpCrossBackup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cleanUpCrossBackup, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCrossBackupStrategyRequest::GetCrossBackupEnabled() const
{
    return m_crossBackupEnabled;
}

void ModifyCrossBackupStrategyRequest::SetCrossBackupEnabled(const string& _crossBackupEnabled)
{
    m_crossBackupEnabled = _crossBackupEnabled;
    m_crossBackupEnabledHasBeenSet = true;
}

bool ModifyCrossBackupStrategyRequest::CrossBackupEnabledHasBeenSet() const
{
    return m_crossBackupEnabledHasBeenSet;
}

string ModifyCrossBackupStrategyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyCrossBackupStrategyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyCrossBackupStrategyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> ModifyCrossBackupStrategyRequest::GetInstanceIdSet() const
{
    return m_instanceIdSet;
}

void ModifyCrossBackupStrategyRequest::SetInstanceIdSet(const vector<string>& _instanceIdSet)
{
    m_instanceIdSet = _instanceIdSet;
    m_instanceIdSetHasBeenSet = true;
}

bool ModifyCrossBackupStrategyRequest::InstanceIdSetHasBeenSet() const
{
    return m_instanceIdSetHasBeenSet;
}

uint64_t ModifyCrossBackupStrategyRequest::GetCrossBackupSaveDays() const
{
    return m_crossBackupSaveDays;
}

void ModifyCrossBackupStrategyRequest::SetCrossBackupSaveDays(const uint64_t& _crossBackupSaveDays)
{
    m_crossBackupSaveDays = _crossBackupSaveDays;
    m_crossBackupSaveDaysHasBeenSet = true;
}

bool ModifyCrossBackupStrategyRequest::CrossBackupSaveDaysHasBeenSet() const
{
    return m_crossBackupSaveDaysHasBeenSet;
}

vector<string> ModifyCrossBackupStrategyRequest::GetCrossBackupRegion() const
{
    return m_crossBackupRegion;
}

void ModifyCrossBackupStrategyRequest::SetCrossBackupRegion(const vector<string>& _crossBackupRegion)
{
    m_crossBackupRegion = _crossBackupRegion;
    m_crossBackupRegionHasBeenSet = true;
}

bool ModifyCrossBackupStrategyRequest::CrossBackupRegionHasBeenSet() const
{
    return m_crossBackupRegionHasBeenSet;
}

uint64_t ModifyCrossBackupStrategyRequest::GetCleanUpCrossBackup() const
{
    return m_cleanUpCrossBackup;
}

void ModifyCrossBackupStrategyRequest::SetCleanUpCrossBackup(const uint64_t& _cleanUpCrossBackup)
{
    m_cleanUpCrossBackup = _cleanUpCrossBackup;
    m_cleanUpCrossBackupHasBeenSet = true;
}

bool ModifyCrossBackupStrategyRequest::CleanUpCrossBackupHasBeenSet() const
{
    return m_cleanUpCrossBackupHasBeenSet;
}


