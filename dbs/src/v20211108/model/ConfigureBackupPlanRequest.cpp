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

#include <tencentcloud/dbs/v20211108/model/ConfigureBackupPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

ConfigureBackupPlanRequest::ConfigureBackupPlanRequest() :
    m_backupPlanIdHasBeenSet(false),
    m_backupPlanNameHasBeenSet(false),
    m_upperParallelHasBeenSet(false),
    m_sourceEndPointHasBeenSet(false),
    m_backupObjectHasBeenSet(false),
    m_backupStrategyHasBeenSet(false),
    m_plainTextHasBeenSet(false)
{
}

string ConfigureBackupPlanRequest::ToJsonString() const
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

    if (m_backupPlanNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPlanName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupPlanName.c_str(), allocator).Move(), allocator);
    }

    if (m_upperParallelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpperParallel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upperParallel, allocator);
    }

    if (m_sourceEndPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceEndPoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceEndPoint.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_backupObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupObject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupObject.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_backupStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupStrategy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_plainTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlainText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_plainText.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ConfigureBackupPlanRequest::GetBackupPlanId() const
{
    return m_backupPlanId;
}

void ConfigureBackupPlanRequest::SetBackupPlanId(const string& _backupPlanId)
{
    m_backupPlanId = _backupPlanId;
    m_backupPlanIdHasBeenSet = true;
}

bool ConfigureBackupPlanRequest::BackupPlanIdHasBeenSet() const
{
    return m_backupPlanIdHasBeenSet;
}

string ConfigureBackupPlanRequest::GetBackupPlanName() const
{
    return m_backupPlanName;
}

void ConfigureBackupPlanRequest::SetBackupPlanName(const string& _backupPlanName)
{
    m_backupPlanName = _backupPlanName;
    m_backupPlanNameHasBeenSet = true;
}

bool ConfigureBackupPlanRequest::BackupPlanNameHasBeenSet() const
{
    return m_backupPlanNameHasBeenSet;
}

int64_t ConfigureBackupPlanRequest::GetUpperParallel() const
{
    return m_upperParallel;
}

void ConfigureBackupPlanRequest::SetUpperParallel(const int64_t& _upperParallel)
{
    m_upperParallel = _upperParallel;
    m_upperParallelHasBeenSet = true;
}

bool ConfigureBackupPlanRequest::UpperParallelHasBeenSet() const
{
    return m_upperParallelHasBeenSet;
}

BackupEndpoint ConfigureBackupPlanRequest::GetSourceEndPoint() const
{
    return m_sourceEndPoint;
}

void ConfigureBackupPlanRequest::SetSourceEndPoint(const BackupEndpoint& _sourceEndPoint)
{
    m_sourceEndPoint = _sourceEndPoint;
    m_sourceEndPointHasBeenSet = true;
}

bool ConfigureBackupPlanRequest::SourceEndPointHasBeenSet() const
{
    return m_sourceEndPointHasBeenSet;
}

BackupObject ConfigureBackupPlanRequest::GetBackupObject() const
{
    return m_backupObject;
}

void ConfigureBackupPlanRequest::SetBackupObject(const BackupObject& _backupObject)
{
    m_backupObject = _backupObject;
    m_backupObjectHasBeenSet = true;
}

bool ConfigureBackupPlanRequest::BackupObjectHasBeenSet() const
{
    return m_backupObjectHasBeenSet;
}

BackupStrategy ConfigureBackupPlanRequest::GetBackupStrategy() const
{
    return m_backupStrategy;
}

void ConfigureBackupPlanRequest::SetBackupStrategy(const BackupStrategy& _backupStrategy)
{
    m_backupStrategy = _backupStrategy;
    m_backupStrategyHasBeenSet = true;
}

bool ConfigureBackupPlanRequest::BackupStrategyHasBeenSet() const
{
    return m_backupStrategyHasBeenSet;
}

string ConfigureBackupPlanRequest::GetPlainText() const
{
    return m_plainText;
}

void ConfigureBackupPlanRequest::SetPlainText(const string& _plainText)
{
    m_plainText = _plainText;
    m_plainTextHasBeenSet = true;
}

bool ConfigureBackupPlanRequest::PlainTextHasBeenSet() const
{
    return m_plainTextHasBeenSet;
}


