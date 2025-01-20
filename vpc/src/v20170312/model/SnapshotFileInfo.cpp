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

#include <tencentcloud/vpc/v20170312/model/SnapshotFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

SnapshotFileInfo::SnapshotFileInfo() :
    m_snapshotPolicyIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_snapshotFileIdHasBeenSet(false),
    m_backupTimeHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SnapshotPolicyId") && !value["SnapshotPolicyId"].IsNull())
    {
        if (!value["SnapshotPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotFileInfo.SnapshotPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotPolicyId = string(value["SnapshotPolicyId"].GetString());
        m_snapshotPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotFileInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("SnapshotFileId") && !value["SnapshotFileId"].IsNull())
    {
        if (!value["SnapshotFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotFileInfo.SnapshotFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotFileId = string(value["SnapshotFileId"].GetString());
        m_snapshotFileIdHasBeenSet = true;
    }

    if (value.HasMember("BackupTime") && !value["BackupTime"].IsNull())
    {
        if (!value["BackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotFileInfo.BackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupTime = string(value["BackupTime"].GetString());
        m_backupTimeHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotFileInfo.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_snapshotPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

}


string SnapshotFileInfo::GetSnapshotPolicyId() const
{
    return m_snapshotPolicyId;
}

void SnapshotFileInfo::SetSnapshotPolicyId(const string& _snapshotPolicyId)
{
    m_snapshotPolicyId = _snapshotPolicyId;
    m_snapshotPolicyIdHasBeenSet = true;
}

bool SnapshotFileInfo::SnapshotPolicyIdHasBeenSet() const
{
    return m_snapshotPolicyIdHasBeenSet;
}

string SnapshotFileInfo::GetInstanceId() const
{
    return m_instanceId;
}

void SnapshotFileInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SnapshotFileInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SnapshotFileInfo::GetSnapshotFileId() const
{
    return m_snapshotFileId;
}

void SnapshotFileInfo::SetSnapshotFileId(const string& _snapshotFileId)
{
    m_snapshotFileId = _snapshotFileId;
    m_snapshotFileIdHasBeenSet = true;
}

bool SnapshotFileInfo::SnapshotFileIdHasBeenSet() const
{
    return m_snapshotFileIdHasBeenSet;
}

string SnapshotFileInfo::GetBackupTime() const
{
    return m_backupTime;
}

void SnapshotFileInfo::SetBackupTime(const string& _backupTime)
{
    m_backupTime = _backupTime;
    m_backupTimeHasBeenSet = true;
}

bool SnapshotFileInfo::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

string SnapshotFileInfo::GetOperator() const
{
    return m_operator;
}

void SnapshotFileInfo::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool SnapshotFileInfo::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

