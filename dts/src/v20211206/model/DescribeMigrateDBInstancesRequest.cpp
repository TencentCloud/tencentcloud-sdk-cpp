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

#include <tencentcloud/dts/v20211206/model/DescribeMigrateDBInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DescribeMigrateDBInstancesRequest::DescribeMigrateDBInstancesRequest() :
    m_databaseTypeHasBeenSet(false),
    m_migrateRoleHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_accountModeHasBeenSet(false),
    m_tmpSecretIdHasBeenSet(false),
    m_tmpSecretKeyHasBeenSet(false),
    m_tmpTokenHasBeenSet(false)
{
}

string DescribeMigrateDBInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_databaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_migrateRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateRole";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_migrateRole.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
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

    if (m_accountModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountMode.c_str(), allocator).Move(), allocator);
    }

    if (m_tmpSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmpSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tmpSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_tmpSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmpSecretKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tmpSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tmpTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmpToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tmpToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMigrateDBInstancesRequest::GetDatabaseType() const
{
    return m_databaseType;
}

void DescribeMigrateDBInstancesRequest::SetDatabaseType(const string& _databaseType)
{
    m_databaseType = _databaseType;
    m_databaseTypeHasBeenSet = true;
}

bool DescribeMigrateDBInstancesRequest::DatabaseTypeHasBeenSet() const
{
    return m_databaseTypeHasBeenSet;
}

string DescribeMigrateDBInstancesRequest::GetMigrateRole() const
{
    return m_migrateRole;
}

void DescribeMigrateDBInstancesRequest::SetMigrateRole(const string& _migrateRole)
{
    m_migrateRole = _migrateRole;
    m_migrateRoleHasBeenSet = true;
}

bool DescribeMigrateDBInstancesRequest::MigrateRoleHasBeenSet() const
{
    return m_migrateRoleHasBeenSet;
}

string DescribeMigrateDBInstancesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeMigrateDBInstancesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeMigrateDBInstancesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeMigrateDBInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void DescribeMigrateDBInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DescribeMigrateDBInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t DescribeMigrateDBInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeMigrateDBInstancesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeMigrateDBInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeMigrateDBInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeMigrateDBInstancesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeMigrateDBInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeMigrateDBInstancesRequest::GetAccountMode() const
{
    return m_accountMode;
}

void DescribeMigrateDBInstancesRequest::SetAccountMode(const string& _accountMode)
{
    m_accountMode = _accountMode;
    m_accountModeHasBeenSet = true;
}

bool DescribeMigrateDBInstancesRequest::AccountModeHasBeenSet() const
{
    return m_accountModeHasBeenSet;
}

string DescribeMigrateDBInstancesRequest::GetTmpSecretId() const
{
    return m_tmpSecretId;
}

void DescribeMigrateDBInstancesRequest::SetTmpSecretId(const string& _tmpSecretId)
{
    m_tmpSecretId = _tmpSecretId;
    m_tmpSecretIdHasBeenSet = true;
}

bool DescribeMigrateDBInstancesRequest::TmpSecretIdHasBeenSet() const
{
    return m_tmpSecretIdHasBeenSet;
}

string DescribeMigrateDBInstancesRequest::GetTmpSecretKey() const
{
    return m_tmpSecretKey;
}

void DescribeMigrateDBInstancesRequest::SetTmpSecretKey(const string& _tmpSecretKey)
{
    m_tmpSecretKey = _tmpSecretKey;
    m_tmpSecretKeyHasBeenSet = true;
}

bool DescribeMigrateDBInstancesRequest::TmpSecretKeyHasBeenSet() const
{
    return m_tmpSecretKeyHasBeenSet;
}

string DescribeMigrateDBInstancesRequest::GetTmpToken() const
{
    return m_tmpToken;
}

void DescribeMigrateDBInstancesRequest::SetTmpToken(const string& _tmpToken)
{
    m_tmpToken = _tmpToken;
    m_tmpTokenHasBeenSet = true;
}

bool DescribeMigrateDBInstancesRequest::TmpTokenHasBeenSet() const
{
    return m_tmpTokenHasBeenSet;
}


