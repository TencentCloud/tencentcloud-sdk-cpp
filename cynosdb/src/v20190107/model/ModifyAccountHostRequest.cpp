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

#include <tencentcloud/cynosdb/v20190107/model/ModifyAccountHostRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyAccountHostRequest::ModifyAccountHostRequest() :
    m_clusterIdHasBeenSet(false),
    m_newHostHasBeenSet(false),
    m_accountHasBeenSet(false)
{
}

string ModifyAccountHostRequest::ToJsonString() const
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

    if (m_newHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newHost.c_str(), allocator).Move(), allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_account.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAccountHostRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyAccountHostRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyAccountHostRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyAccountHostRequest::GetNewHost() const
{
    return m_newHost;
}

void ModifyAccountHostRequest::SetNewHost(const string& _newHost)
{
    m_newHost = _newHost;
    m_newHostHasBeenSet = true;
}

bool ModifyAccountHostRequest::NewHostHasBeenSet() const
{
    return m_newHostHasBeenSet;
}

InputAccount ModifyAccountHostRequest::GetAccount() const
{
    return m_account;
}

void ModifyAccountHostRequest::SetAccount(const InputAccount& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool ModifyAccountHostRequest::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}


