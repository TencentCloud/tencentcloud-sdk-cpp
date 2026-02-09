/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcb/v20180608/model/CreateMySQLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreateMySQLRequest::CreateMySQLRequest() :
    m_envIdHasBeenSet(false),
    m_dbInstanceTypeHasBeenSet(false),
    m_mysqlVersionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_lowerCaseTableNamesHasBeenSet(false)
{
}

string CreateMySQLRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbInstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbInstanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_mysqlVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MysqlVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mysqlVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_lowerCaseTableNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowerCaseTableNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lowerCaseTableNames.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMySQLRequest::GetEnvId() const
{
    return m_envId;
}

void CreateMySQLRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreateMySQLRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string CreateMySQLRequest::GetDbInstanceType() const
{
    return m_dbInstanceType;
}

void CreateMySQLRequest::SetDbInstanceType(const string& _dbInstanceType)
{
    m_dbInstanceType = _dbInstanceType;
    m_dbInstanceTypeHasBeenSet = true;
}

bool CreateMySQLRequest::DbInstanceTypeHasBeenSet() const
{
    return m_dbInstanceTypeHasBeenSet;
}

string CreateMySQLRequest::GetMysqlVersion() const
{
    return m_mysqlVersion;
}

void CreateMySQLRequest::SetMysqlVersion(const string& _mysqlVersion)
{
    m_mysqlVersion = _mysqlVersion;
    m_mysqlVersionHasBeenSet = true;
}

bool CreateMySQLRequest::MysqlVersionHasBeenSet() const
{
    return m_mysqlVersionHasBeenSet;
}

string CreateMySQLRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateMySQLRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateMySQLRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateMySQLRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateMySQLRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateMySQLRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateMySQLRequest::GetLowerCaseTableNames() const
{
    return m_lowerCaseTableNames;
}

void CreateMySQLRequest::SetLowerCaseTableNames(const string& _lowerCaseTableNames)
{
    m_lowerCaseTableNames = _lowerCaseTableNames;
    m_lowerCaseTableNamesHasBeenSet = true;
}

bool CreateMySQLRequest::LowerCaseTableNamesHasBeenSet() const
{
    return m_lowerCaseTableNamesHasBeenSet;
}


