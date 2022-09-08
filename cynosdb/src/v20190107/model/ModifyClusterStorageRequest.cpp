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

#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterStorageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyClusterStorageRequest::ModifyClusterStorageRequest() :
    m_clusterIdHasBeenSet(false),
    m_newStorageLimitHasBeenSet(false),
    m_oldStorageLimitHasBeenSet(false),
    m_dealModeHasBeenSet(false)
{
}

string ModifyClusterStorageRequest::ToJsonString() const
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

    if (m_newStorageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewStorageLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_newStorageLimit, allocator);
    }

    if (m_oldStorageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldStorageLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_oldStorageLimit, allocator);
    }

    if (m_dealModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dealMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterStorageRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterStorageRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterStorageRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t ModifyClusterStorageRequest::GetNewStorageLimit() const
{
    return m_newStorageLimit;
}

void ModifyClusterStorageRequest::SetNewStorageLimit(const int64_t& _newStorageLimit)
{
    m_newStorageLimit = _newStorageLimit;
    m_newStorageLimitHasBeenSet = true;
}

bool ModifyClusterStorageRequest::NewStorageLimitHasBeenSet() const
{
    return m_newStorageLimitHasBeenSet;
}

int64_t ModifyClusterStorageRequest::GetOldStorageLimit() const
{
    return m_oldStorageLimit;
}

void ModifyClusterStorageRequest::SetOldStorageLimit(const int64_t& _oldStorageLimit)
{
    m_oldStorageLimit = _oldStorageLimit;
    m_oldStorageLimitHasBeenSet = true;
}

bool ModifyClusterStorageRequest::OldStorageLimitHasBeenSet() const
{
    return m_oldStorageLimitHasBeenSet;
}

int64_t ModifyClusterStorageRequest::GetDealMode() const
{
    return m_dealMode;
}

void ModifyClusterStorageRequest::SetDealMode(const int64_t& _dealMode)
{
    m_dealMode = _dealMode;
    m_dealModeHasBeenSet = true;
}

bool ModifyClusterStorageRequest::DealModeHasBeenSet() const
{
    return m_dealModeHasBeenSet;
}


