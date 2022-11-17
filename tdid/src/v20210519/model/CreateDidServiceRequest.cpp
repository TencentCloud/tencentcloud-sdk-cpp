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

#include <tencentcloud/tdid/v20210519/model/CreateDidServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

CreateDidServiceRequest::CreateDidServiceRequest() :
    m_consortiumNameHasBeenSet(false),
    m_consortiumIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_agencyNameHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
}

string CreateDidServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_consortiumNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsortiumName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consortiumName.c_str(), allocator).Move(), allocator);
    }

    if (m_consortiumIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsortiumId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_consortiumId, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_agencyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgencyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agencyName.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDidServiceRequest::GetConsortiumName() const
{
    return m_consortiumName;
}

void CreateDidServiceRequest::SetConsortiumName(const string& _consortiumName)
{
    m_consortiumName = _consortiumName;
    m_consortiumNameHasBeenSet = true;
}

bool CreateDidServiceRequest::ConsortiumNameHasBeenSet() const
{
    return m_consortiumNameHasBeenSet;
}

int64_t CreateDidServiceRequest::GetConsortiumId() const
{
    return m_consortiumId;
}

void CreateDidServiceRequest::SetConsortiumId(const int64_t& _consortiumId)
{
    m_consortiumId = _consortiumId;
    m_consortiumIdHasBeenSet = true;
}

bool CreateDidServiceRequest::ConsortiumIdHasBeenSet() const
{
    return m_consortiumIdHasBeenSet;
}

int64_t CreateDidServiceRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateDidServiceRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateDidServiceRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string CreateDidServiceRequest::GetAgencyName() const
{
    return m_agencyName;
}

void CreateDidServiceRequest::SetAgencyName(const string& _agencyName)
{
    m_agencyName = _agencyName;
    m_agencyNameHasBeenSet = true;
}

bool CreateDidServiceRequest::AgencyNameHasBeenSet() const
{
    return m_agencyNameHasBeenSet;
}

string CreateDidServiceRequest::GetAppName() const
{
    return m_appName;
}

void CreateDidServiceRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CreateDidServiceRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string CreateDidServiceRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateDidServiceRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateDidServiceRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateDidServiceRequest::GetGroupName() const
{
    return m_groupName;
}

void CreateDidServiceRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CreateDidServiceRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}


