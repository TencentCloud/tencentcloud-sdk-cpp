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

#include <tencentcloud/cynosdb/v20190107/model/DescribeAccountsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeAccountsRequest::DescribeAccountsRequest() :
    m_clusterIdHasBeenSet(false),
    m_accountNamesHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_hostsHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_accountRegularHasBeenSet(false)
{
}

string DescribeAccountsRequest::ToJsonString() const
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

    if (m_accountNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accountNames.begin(); itr != m_accountNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_hostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hosts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hosts.begin(); itr != m_hosts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_accountRegularHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountRegular";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountRegular.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAccountsRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeAccountsRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeAccountsRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> DescribeAccountsRequest::GetAccountNames() const
{
    return m_accountNames;
}

void DescribeAccountsRequest::SetAccountNames(const vector<string>& _accountNames)
{
    m_accountNames = _accountNames;
    m_accountNamesHasBeenSet = true;
}

bool DescribeAccountsRequest::AccountNamesHasBeenSet() const
{
    return m_accountNamesHasBeenSet;
}

string DescribeAccountsRequest::GetDbType() const
{
    return m_dbType;
}

void DescribeAccountsRequest::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool DescribeAccountsRequest::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

vector<string> DescribeAccountsRequest::GetHosts() const
{
    return m_hosts;
}

void DescribeAccountsRequest::SetHosts(const vector<string>& _hosts)
{
    m_hosts = _hosts;
    m_hostsHasBeenSet = true;
}

bool DescribeAccountsRequest::HostsHasBeenSet() const
{
    return m_hostsHasBeenSet;
}

int64_t DescribeAccountsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAccountsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAccountsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeAccountsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAccountsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAccountsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeAccountsRequest::GetAccountRegular() const
{
    return m_accountRegular;
}

void DescribeAccountsRequest::SetAccountRegular(const string& _accountRegular)
{
    m_accountRegular = _accountRegular;
    m_accountRegularHasBeenSet = true;
}

bool DescribeAccountsRequest::AccountRegularHasBeenSet() const
{
    return m_accountRegularHasBeenSet;
}


