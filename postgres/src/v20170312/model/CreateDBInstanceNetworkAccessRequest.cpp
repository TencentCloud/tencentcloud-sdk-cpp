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

#include <tencentcloud/postgres/v20170312/model/CreateDBInstanceNetworkAccessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

CreateDBInstanceNetworkAccessRequest::CreateDBInstanceNetworkAccessRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_isAssignVipHasBeenSet(false),
    m_vipHasBeenSet(false)
{
}

string CreateDBInstanceNetworkAccessRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
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

    if (m_isAssignVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAssignVip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAssignVip, allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDBInstanceNetworkAccessRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void CreateDBInstanceNetworkAccessRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool CreateDBInstanceNetworkAccessRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string CreateDBInstanceNetworkAccessRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateDBInstanceNetworkAccessRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateDBInstanceNetworkAccessRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateDBInstanceNetworkAccessRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateDBInstanceNetworkAccessRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateDBInstanceNetworkAccessRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

bool CreateDBInstanceNetworkAccessRequest::GetIsAssignVip() const
{
    return m_isAssignVip;
}

void CreateDBInstanceNetworkAccessRequest::SetIsAssignVip(const bool& _isAssignVip)
{
    m_isAssignVip = _isAssignVip;
    m_isAssignVipHasBeenSet = true;
}

bool CreateDBInstanceNetworkAccessRequest::IsAssignVipHasBeenSet() const
{
    return m_isAssignVipHasBeenSet;
}

string CreateDBInstanceNetworkAccessRequest::GetVip() const
{
    return m_vip;
}

void CreateDBInstanceNetworkAccessRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool CreateDBInstanceNetworkAccessRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}


