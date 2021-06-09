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

#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupCommandRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeBackupCommandRequest::DescribeBackupCommandRequest() :
    m_backupFileTypeHasBeenSet(false),
    m_dataBaseNameHasBeenSet(false),
    m_isRecoveryHasBeenSet(false),
    m_localPathHasBeenSet(false)
{
}

string DescribeBackupCommandRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_backupFileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupFileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupFileType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataBaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataBaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_isRecoveryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRecovery";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isRecovery.c_str(), allocator).Move(), allocator);
    }

    if (m_localPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_localPath.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBackupCommandRequest::GetBackupFileType() const
{
    return m_backupFileType;
}

void DescribeBackupCommandRequest::SetBackupFileType(const string& _backupFileType)
{
    m_backupFileType = _backupFileType;
    m_backupFileTypeHasBeenSet = true;
}

bool DescribeBackupCommandRequest::BackupFileTypeHasBeenSet() const
{
    return m_backupFileTypeHasBeenSet;
}

string DescribeBackupCommandRequest::GetDataBaseName() const
{
    return m_dataBaseName;
}

void DescribeBackupCommandRequest::SetDataBaseName(const string& _dataBaseName)
{
    m_dataBaseName = _dataBaseName;
    m_dataBaseNameHasBeenSet = true;
}

bool DescribeBackupCommandRequest::DataBaseNameHasBeenSet() const
{
    return m_dataBaseNameHasBeenSet;
}

string DescribeBackupCommandRequest::GetIsRecovery() const
{
    return m_isRecovery;
}

void DescribeBackupCommandRequest::SetIsRecovery(const string& _isRecovery)
{
    m_isRecovery = _isRecovery;
    m_isRecoveryHasBeenSet = true;
}

bool DescribeBackupCommandRequest::IsRecoveryHasBeenSet() const
{
    return m_isRecoveryHasBeenSet;
}

string DescribeBackupCommandRequest::GetLocalPath() const
{
    return m_localPath;
}

void DescribeBackupCommandRequest::SetLocalPath(const string& _localPath)
{
    m_localPath = _localPath;
    m_localPathHasBeenSet = true;
}

bool DescribeBackupCommandRequest::LocalPathHasBeenSet() const
{
    return m_localPathHasBeenSet;
}


