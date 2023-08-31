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

#include <tencentcloud/cdwch/v20200915/model/DescribeCkSqlApisRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

DescribeCkSqlApisRequest::DescribeCkSqlApisRequest() :
    m_instanceIdHasBeenSet(false),
    m_apiTypeHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userTypeHasBeenSet(false)
{
}

string DescribeCkSqlApisRequest::ToJsonString() const
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

    if (m_apiTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCkSqlApisRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeCkSqlApisRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeCkSqlApisRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeCkSqlApisRequest::GetApiType() const
{
    return m_apiType;
}

void DescribeCkSqlApisRequest::SetApiType(const string& _apiType)
{
    m_apiType = _apiType;
    m_apiTypeHasBeenSet = true;
}

bool DescribeCkSqlApisRequest::ApiTypeHasBeenSet() const
{
    return m_apiTypeHasBeenSet;
}

string DescribeCkSqlApisRequest::GetCluster() const
{
    return m_cluster;
}

void DescribeCkSqlApisRequest::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool DescribeCkSqlApisRequest::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string DescribeCkSqlApisRequest::GetUserName() const
{
    return m_userName;
}

void DescribeCkSqlApisRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeCkSqlApisRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeCkSqlApisRequest::GetUserType() const
{
    return m_userType;
}

void DescribeCkSqlApisRequest::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool DescribeCkSqlApisRequest::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}


