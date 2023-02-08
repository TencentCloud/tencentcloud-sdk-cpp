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

#include <tencentcloud/cdwch/v20200915/model/ScaleOutInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

ScaleOutInstanceRequest::ScaleOutInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_scaleOutClusterHasBeenSet(false),
    m_userSubnetIPNumHasBeenSet(false),
    m_scaleOutNodeIpHasBeenSet(false),
    m_reduceShardInfoHasBeenSet(false)
{
}

string ScaleOutInstanceRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_scaleOutClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleOutCluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scaleOutCluster.c_str(), allocator).Move(), allocator);
    }

    if (m_userSubnetIPNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSubnetIPNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_userSubnetIPNum, allocator);
    }

    if (m_scaleOutNodeIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleOutNodeIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scaleOutNodeIp.c_str(), allocator).Move(), allocator);
    }

    if (m_reduceShardInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReduceShardInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reduceShardInfo.begin(); itr != m_reduceShardInfo.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScaleOutInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ScaleOutInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ScaleOutInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ScaleOutInstanceRequest::GetType() const
{
    return m_type;
}

void ScaleOutInstanceRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ScaleOutInstanceRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ScaleOutInstanceRequest::GetNodeCount() const
{
    return m_nodeCount;
}

void ScaleOutInstanceRequest::SetNodeCount(const int64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool ScaleOutInstanceRequest::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

string ScaleOutInstanceRequest::GetScaleOutCluster() const
{
    return m_scaleOutCluster;
}

void ScaleOutInstanceRequest::SetScaleOutCluster(const string& _scaleOutCluster)
{
    m_scaleOutCluster = _scaleOutCluster;
    m_scaleOutClusterHasBeenSet = true;
}

bool ScaleOutInstanceRequest::ScaleOutClusterHasBeenSet() const
{
    return m_scaleOutClusterHasBeenSet;
}

int64_t ScaleOutInstanceRequest::GetUserSubnetIPNum() const
{
    return m_userSubnetIPNum;
}

void ScaleOutInstanceRequest::SetUserSubnetIPNum(const int64_t& _userSubnetIPNum)
{
    m_userSubnetIPNum = _userSubnetIPNum;
    m_userSubnetIPNumHasBeenSet = true;
}

bool ScaleOutInstanceRequest::UserSubnetIPNumHasBeenSet() const
{
    return m_userSubnetIPNumHasBeenSet;
}

string ScaleOutInstanceRequest::GetScaleOutNodeIp() const
{
    return m_scaleOutNodeIp;
}

void ScaleOutInstanceRequest::SetScaleOutNodeIp(const string& _scaleOutNodeIp)
{
    m_scaleOutNodeIp = _scaleOutNodeIp;
    m_scaleOutNodeIpHasBeenSet = true;
}

bool ScaleOutInstanceRequest::ScaleOutNodeIpHasBeenSet() const
{
    return m_scaleOutNodeIpHasBeenSet;
}

vector<string> ScaleOutInstanceRequest::GetReduceShardInfo() const
{
    return m_reduceShardInfo;
}

void ScaleOutInstanceRequest::SetReduceShardInfo(const vector<string>& _reduceShardInfo)
{
    m_reduceShardInfo = _reduceShardInfo;
    m_reduceShardInfoHasBeenSet = true;
}

bool ScaleOutInstanceRequest::ReduceShardInfoHasBeenSet() const
{
    return m_reduceShardInfoHasBeenSet;
}


