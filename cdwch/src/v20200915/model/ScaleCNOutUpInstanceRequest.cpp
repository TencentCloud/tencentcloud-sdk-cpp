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

#include <tencentcloud/cdwch/v20200915/model/ScaleCNOutUpInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

ScaleCNOutUpInstanceRequest::ScaleCNOutUpInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_virtualClusterHasBeenSet(false),
    m_userSubnetIDHasBeenSet(false),
    m_newCountHasBeenSet(false),
    m_newSpecNameHasBeenSet(false)
{
}

string ScaleCNOutUpInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualCluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_virtualCluster.c_str(), allocator).Move(), allocator);
    }

    if (m_userSubnetIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSubnetID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userSubnetID.c_str(), allocator).Move(), allocator);
    }

    if (m_newCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_newCount, allocator);
    }

    if (m_newSpecNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewSpecName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newSpecName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScaleCNOutUpInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ScaleCNOutUpInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ScaleCNOutUpInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ScaleCNOutUpInstanceRequest::GetVirtualCluster() const
{
    return m_virtualCluster;
}

void ScaleCNOutUpInstanceRequest::SetVirtualCluster(const string& _virtualCluster)
{
    m_virtualCluster = _virtualCluster;
    m_virtualClusterHasBeenSet = true;
}

bool ScaleCNOutUpInstanceRequest::VirtualClusterHasBeenSet() const
{
    return m_virtualClusterHasBeenSet;
}

string ScaleCNOutUpInstanceRequest::GetUserSubnetID() const
{
    return m_userSubnetID;
}

void ScaleCNOutUpInstanceRequest::SetUserSubnetID(const string& _userSubnetID)
{
    m_userSubnetID = _userSubnetID;
    m_userSubnetIDHasBeenSet = true;
}

bool ScaleCNOutUpInstanceRequest::UserSubnetIDHasBeenSet() const
{
    return m_userSubnetIDHasBeenSet;
}

int64_t ScaleCNOutUpInstanceRequest::GetNewCount() const
{
    return m_newCount;
}

void ScaleCNOutUpInstanceRequest::SetNewCount(const int64_t& _newCount)
{
    m_newCount = _newCount;
    m_newCountHasBeenSet = true;
}

bool ScaleCNOutUpInstanceRequest::NewCountHasBeenSet() const
{
    return m_newCountHasBeenSet;
}

string ScaleCNOutUpInstanceRequest::GetNewSpecName() const
{
    return m_newSpecName;
}

void ScaleCNOutUpInstanceRequest::SetNewSpecName(const string& _newSpecName)
{
    m_newSpecName = _newSpecName;
    m_newSpecNameHasBeenSet = true;
}

bool ScaleCNOutUpInstanceRequest::NewSpecNameHasBeenSet() const
{
    return m_newSpecNameHasBeenSet;
}


