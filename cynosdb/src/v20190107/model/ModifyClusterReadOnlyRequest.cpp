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

#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterReadOnlyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyClusterReadOnlyRequest::ModifyClusterReadOnlyRequest() :
    m_clusterIdsHasBeenSet(false),
    m_readOnlyOperationHasBeenSet(false),
    m_isInMaintainPeriodHasBeenSet(false)
{
}

string ModifyClusterReadOnlyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterIds.begin(); itr != m_clusterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_readOnlyOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyOperation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_readOnlyOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_isInMaintainPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInMaintainPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isInMaintainPeriod.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyClusterReadOnlyRequest::GetClusterIds() const
{
    return m_clusterIds;
}

void ModifyClusterReadOnlyRequest::SetClusterIds(const vector<string>& _clusterIds)
{
    m_clusterIds = _clusterIds;
    m_clusterIdsHasBeenSet = true;
}

bool ModifyClusterReadOnlyRequest::ClusterIdsHasBeenSet() const
{
    return m_clusterIdsHasBeenSet;
}

string ModifyClusterReadOnlyRequest::GetReadOnlyOperation() const
{
    return m_readOnlyOperation;
}

void ModifyClusterReadOnlyRequest::SetReadOnlyOperation(const string& _readOnlyOperation)
{
    m_readOnlyOperation = _readOnlyOperation;
    m_readOnlyOperationHasBeenSet = true;
}

bool ModifyClusterReadOnlyRequest::ReadOnlyOperationHasBeenSet() const
{
    return m_readOnlyOperationHasBeenSet;
}

string ModifyClusterReadOnlyRequest::GetIsInMaintainPeriod() const
{
    return m_isInMaintainPeriod;
}

void ModifyClusterReadOnlyRequest::SetIsInMaintainPeriod(const string& _isInMaintainPeriod)
{
    m_isInMaintainPeriod = _isInMaintainPeriod;
    m_isInMaintainPeriodHasBeenSet = true;
}

bool ModifyClusterReadOnlyRequest::IsInMaintainPeriodHasBeenSet() const
{
    return m_isInMaintainPeriodHasBeenSet;
}


