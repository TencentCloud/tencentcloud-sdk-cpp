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

#include <tencentcloud/vpc/v20170312/model/BatchModifySnapshotPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

BatchModifySnapshotPolicy::BatchModifySnapshotPolicy() :
    m_snapshotPolicyIdHasBeenSet(false),
    m_snapshotPolicyNameHasBeenSet(false),
    m_backupPoliciesHasBeenSet(false),
    m_keepTimeHasBeenSet(false)
{
}

CoreInternalOutcome BatchModifySnapshotPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SnapshotPolicyId") && !value["SnapshotPolicyId"].IsNull())
    {
        if (!value["SnapshotPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifySnapshotPolicy.SnapshotPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotPolicyId = string(value["SnapshotPolicyId"].GetString());
        m_snapshotPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("SnapshotPolicyName") && !value["SnapshotPolicyName"].IsNull())
    {
        if (!value["SnapshotPolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifySnapshotPolicy.SnapshotPolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotPolicyName = string(value["SnapshotPolicyName"].GetString());
        m_snapshotPolicyNameHasBeenSet = true;
    }

    if (value.HasMember("BackupPolicies") && !value["BackupPolicies"].IsNull())
    {
        if (!value["BackupPolicies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchModifySnapshotPolicy.BackupPolicies` is not array type"));

        const rapidjson::Value &tmpValue = value["BackupPolicies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackupPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_backupPolicies.push_back(item);
        }
        m_backupPoliciesHasBeenSet = true;
    }

    if (value.HasMember("KeepTime") && !value["KeepTime"].IsNull())
    {
        if (!value["KeepTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifySnapshotPolicy.KeepTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_keepTime = value["KeepTime"].GetUint64();
        m_keepTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchModifySnapshotPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_snapshotPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotPolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotPolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPoliciesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPolicies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backupPolicies.begin(); itr != m_backupPolicies.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_keepTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepTime, allocator);
    }

}


string BatchModifySnapshotPolicy::GetSnapshotPolicyId() const
{
    return m_snapshotPolicyId;
}

void BatchModifySnapshotPolicy::SetSnapshotPolicyId(const string& _snapshotPolicyId)
{
    m_snapshotPolicyId = _snapshotPolicyId;
    m_snapshotPolicyIdHasBeenSet = true;
}

bool BatchModifySnapshotPolicy::SnapshotPolicyIdHasBeenSet() const
{
    return m_snapshotPolicyIdHasBeenSet;
}

string BatchModifySnapshotPolicy::GetSnapshotPolicyName() const
{
    return m_snapshotPolicyName;
}

void BatchModifySnapshotPolicy::SetSnapshotPolicyName(const string& _snapshotPolicyName)
{
    m_snapshotPolicyName = _snapshotPolicyName;
    m_snapshotPolicyNameHasBeenSet = true;
}

bool BatchModifySnapshotPolicy::SnapshotPolicyNameHasBeenSet() const
{
    return m_snapshotPolicyNameHasBeenSet;
}

vector<BackupPolicy> BatchModifySnapshotPolicy::GetBackupPolicies() const
{
    return m_backupPolicies;
}

void BatchModifySnapshotPolicy::SetBackupPolicies(const vector<BackupPolicy>& _backupPolicies)
{
    m_backupPolicies = _backupPolicies;
    m_backupPoliciesHasBeenSet = true;
}

bool BatchModifySnapshotPolicy::BackupPoliciesHasBeenSet() const
{
    return m_backupPoliciesHasBeenSet;
}

uint64_t BatchModifySnapshotPolicy::GetKeepTime() const
{
    return m_keepTime;
}

void BatchModifySnapshotPolicy::SetKeepTime(const uint64_t& _keepTime)
{
    m_keepTime = _keepTime;
    m_keepTimeHasBeenSet = true;
}

bool BatchModifySnapshotPolicy::KeepTimeHasBeenSet() const
{
    return m_keepTimeHasBeenSet;
}

