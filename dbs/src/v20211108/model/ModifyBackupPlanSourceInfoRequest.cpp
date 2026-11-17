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

#include <tencentcloud/dbs/v20211108/model/ModifyBackupPlanSourceInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

ModifyBackupPlanSourceInfoRequest::ModifyBackupPlanSourceInfoRequest() :
    m_backupPlanIdHasBeenSet(false),
    m_sourceEndPointHasBeenSet(false),
    m_backupPlanNameHasBeenSet(false),
    m_backupObjectHasBeenSet(false),
    m_backupNowHasBeenSet(false)
{
}

string ModifyBackupPlanSourceInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_backupPlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupPlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceEndPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceEndPoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceEndPoint.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_backupPlanNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPlanName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupPlanName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupObject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupObject.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_backupNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupNow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupNow, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBackupPlanSourceInfoRequest::GetBackupPlanId() const
{
    return m_backupPlanId;
}

void ModifyBackupPlanSourceInfoRequest::SetBackupPlanId(const string& _backupPlanId)
{
    m_backupPlanId = _backupPlanId;
    m_backupPlanIdHasBeenSet = true;
}

bool ModifyBackupPlanSourceInfoRequest::BackupPlanIdHasBeenSet() const
{
    return m_backupPlanIdHasBeenSet;
}

BackupEndpoint ModifyBackupPlanSourceInfoRequest::GetSourceEndPoint() const
{
    return m_sourceEndPoint;
}

void ModifyBackupPlanSourceInfoRequest::SetSourceEndPoint(const BackupEndpoint& _sourceEndPoint)
{
    m_sourceEndPoint = _sourceEndPoint;
    m_sourceEndPointHasBeenSet = true;
}

bool ModifyBackupPlanSourceInfoRequest::SourceEndPointHasBeenSet() const
{
    return m_sourceEndPointHasBeenSet;
}

string ModifyBackupPlanSourceInfoRequest::GetBackupPlanName() const
{
    return m_backupPlanName;
}

void ModifyBackupPlanSourceInfoRequest::SetBackupPlanName(const string& _backupPlanName)
{
    m_backupPlanName = _backupPlanName;
    m_backupPlanNameHasBeenSet = true;
}

bool ModifyBackupPlanSourceInfoRequest::BackupPlanNameHasBeenSet() const
{
    return m_backupPlanNameHasBeenSet;
}

BackupObject ModifyBackupPlanSourceInfoRequest::GetBackupObject() const
{
    return m_backupObject;
}

void ModifyBackupPlanSourceInfoRequest::SetBackupObject(const BackupObject& _backupObject)
{
    m_backupObject = _backupObject;
    m_backupObjectHasBeenSet = true;
}

bool ModifyBackupPlanSourceInfoRequest::BackupObjectHasBeenSet() const
{
    return m_backupObjectHasBeenSet;
}

int64_t ModifyBackupPlanSourceInfoRequest::GetBackupNow() const
{
    return m_backupNow;
}

void ModifyBackupPlanSourceInfoRequest::SetBackupNow(const int64_t& _backupNow)
{
    m_backupNow = _backupNow;
    m_backupNowHasBeenSet = true;
}

bool ModifyBackupPlanSourceInfoRequest::BackupNowHasBeenSet() const
{
    return m_backupNowHasBeenSet;
}


