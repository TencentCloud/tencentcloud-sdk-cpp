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

#include <tencentcloud/cynosdb/v20190107/model/SwitchClusterZoneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

SwitchClusterZoneRequest::SwitchClusterZoneRequest() :
    m_clusterIdHasBeenSet(false),
    m_oldZoneHasBeenSet(false),
    m_newZoneHasBeenSet(false),
    m_isInMaintainPeriodHasBeenSet(false)
{
}

string SwitchClusterZoneRequest::ToJsonString() const
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

    if (m_oldZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldZone.c_str(), allocator).Move(), allocator);
    }

    if (m_newZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newZone.c_str(), allocator).Move(), allocator);
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


string SwitchClusterZoneRequest::GetClusterId() const
{
    return m_clusterId;
}

void SwitchClusterZoneRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool SwitchClusterZoneRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string SwitchClusterZoneRequest::GetOldZone() const
{
    return m_oldZone;
}

void SwitchClusterZoneRequest::SetOldZone(const string& _oldZone)
{
    m_oldZone = _oldZone;
    m_oldZoneHasBeenSet = true;
}

bool SwitchClusterZoneRequest::OldZoneHasBeenSet() const
{
    return m_oldZoneHasBeenSet;
}

string SwitchClusterZoneRequest::GetNewZone() const
{
    return m_newZone;
}

void SwitchClusterZoneRequest::SetNewZone(const string& _newZone)
{
    m_newZone = _newZone;
    m_newZoneHasBeenSet = true;
}

bool SwitchClusterZoneRequest::NewZoneHasBeenSet() const
{
    return m_newZoneHasBeenSet;
}

string SwitchClusterZoneRequest::GetIsInMaintainPeriod() const
{
    return m_isInMaintainPeriod;
}

void SwitchClusterZoneRequest::SetIsInMaintainPeriod(const string& _isInMaintainPeriod)
{
    m_isInMaintainPeriod = _isInMaintainPeriod;
    m_isInMaintainPeriodHasBeenSet = true;
}

bool SwitchClusterZoneRequest::IsInMaintainPeriodHasBeenSet() const
{
    return m_isInMaintainPeriodHasBeenSet;
}


