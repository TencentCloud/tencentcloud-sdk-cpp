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

#include <tencentcloud/cynosdb/v20190107/model/ModifyInstanceParamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyInstanceParamRequest::ModifyInstanceParamRequest() :
    m_clusterIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_clusterParamListHasBeenSet(false),
    m_instanceParamListHasBeenSet(false),
    m_isInMaintainPeriodHasBeenSet(false)
{
}

string ModifyInstanceParamRequest::ToJsonString() const
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

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterParamListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterParamList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterParamList.begin(); itr != m_clusterParamList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_instanceParamListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceParamList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceParamList.begin(); itr != m_instanceParamList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


string ModifyInstanceParamRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyInstanceParamRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyInstanceParamRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> ModifyInstanceParamRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void ModifyInstanceParamRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ModifyInstanceParamRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<ModifyParamItem> ModifyInstanceParamRequest::GetClusterParamList() const
{
    return m_clusterParamList;
}

void ModifyInstanceParamRequest::SetClusterParamList(const vector<ModifyParamItem>& _clusterParamList)
{
    m_clusterParamList = _clusterParamList;
    m_clusterParamListHasBeenSet = true;
}

bool ModifyInstanceParamRequest::ClusterParamListHasBeenSet() const
{
    return m_clusterParamListHasBeenSet;
}

vector<ModifyParamItem> ModifyInstanceParamRequest::GetInstanceParamList() const
{
    return m_instanceParamList;
}

void ModifyInstanceParamRequest::SetInstanceParamList(const vector<ModifyParamItem>& _instanceParamList)
{
    m_instanceParamList = _instanceParamList;
    m_instanceParamListHasBeenSet = true;
}

bool ModifyInstanceParamRequest::InstanceParamListHasBeenSet() const
{
    return m_instanceParamListHasBeenSet;
}

string ModifyInstanceParamRequest::GetIsInMaintainPeriod() const
{
    return m_isInMaintainPeriod;
}

void ModifyInstanceParamRequest::SetIsInMaintainPeriod(const string& _isInMaintainPeriod)
{
    m_isInMaintainPeriod = _isInMaintainPeriod;
    m_isInMaintainPeriodHasBeenSet = true;
}

bool ModifyInstanceParamRequest::IsInMaintainPeriodHasBeenSet() const
{
    return m_isInMaintainPeriodHasBeenSet;
}


