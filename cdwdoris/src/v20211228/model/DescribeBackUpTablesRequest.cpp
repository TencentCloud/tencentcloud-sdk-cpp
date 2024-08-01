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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpTablesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeBackUpTablesRequest::DescribeBackUpTablesRequest() :
    m_instanceIdHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_dorisSourceInfoHasBeenSet(false),
    m_cosSourceInfoHasBeenSet(false)
{
}

string DescribeBackUpTablesRequest::ToJsonString() const
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

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupType, allocator);
    }

    if (m_dorisSourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DorisSourceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dorisSourceInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cosSourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSourceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosSourceInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBackUpTablesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeBackUpTablesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeBackUpTablesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeBackUpTablesRequest::GetBackupType() const
{
    return m_backupType;
}

void DescribeBackUpTablesRequest::SetBackupType(const int64_t& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool DescribeBackUpTablesRequest::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

DorisSourceInfo DescribeBackUpTablesRequest::GetDorisSourceInfo() const
{
    return m_dorisSourceInfo;
}

void DescribeBackUpTablesRequest::SetDorisSourceInfo(const DorisSourceInfo& _dorisSourceInfo)
{
    m_dorisSourceInfo = _dorisSourceInfo;
    m_dorisSourceInfoHasBeenSet = true;
}

bool DescribeBackUpTablesRequest::DorisSourceInfoHasBeenSet() const
{
    return m_dorisSourceInfoHasBeenSet;
}

CosSourceInfo DescribeBackUpTablesRequest::GetCosSourceInfo() const
{
    return m_cosSourceInfo;
}

void DescribeBackUpTablesRequest::SetCosSourceInfo(const CosSourceInfo& _cosSourceInfo)
{
    m_cosSourceInfo = _cosSourceInfo;
    m_cosSourceInfoHasBeenSet = true;
}

bool DescribeBackUpTablesRequest::CosSourceInfoHasBeenSet() const
{
    return m_cosSourceInfoHasBeenSet;
}


