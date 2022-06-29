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

#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterParamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyClusterParamRequest::ModifyClusterParamRequest() :
    m_clusterIdHasBeenSet(false),
    m_paramListHasBeenSet(false),
    m_isInMaintainPeriodHasBeenSet(false)
{
}

string ModifyClusterParamRequest::ToJsonString() const
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

    if (m_paramListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramList.begin(); itr != m_paramList.end(); ++itr, ++i)
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


string ModifyClusterParamRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterParamRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterParamRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<ParamItem> ModifyClusterParamRequest::GetParamList() const
{
    return m_paramList;
}

void ModifyClusterParamRequest::SetParamList(const vector<ParamItem>& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool ModifyClusterParamRequest::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}

string ModifyClusterParamRequest::GetIsInMaintainPeriod() const
{
    return m_isInMaintainPeriod;
}

void ModifyClusterParamRequest::SetIsInMaintainPeriod(const string& _isInMaintainPeriod)
{
    m_isInMaintainPeriod = _isInMaintainPeriod;
    m_isInMaintainPeriodHasBeenSet = true;
}

bool ModifyClusterParamRequest::IsInMaintainPeriodHasBeenSet() const
{
    return m_isInMaintainPeriodHasBeenSet;
}


