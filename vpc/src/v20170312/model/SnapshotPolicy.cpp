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

#include <tencentcloud/vpc/v20170312/model/SnapshotPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

SnapshotPolicy::SnapshotPolicy() :
    m_snapshotPolicyNameHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_keepTimeHasBeenSet(false),
    m_createNewCosHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_cosBucketHasBeenSet(false),
    m_snapshotPolicyIdHasBeenSet(false),
    m_backupPoliciesHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SnapshotPolicyName") && !value["SnapshotPolicyName"].IsNull())
    {
        if (!value["SnapshotPolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotPolicy.SnapshotPolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotPolicyName = string(value["SnapshotPolicyName"].GetString());
        m_snapshotPolicyNameHasBeenSet = true;
    }

    if (value.HasMember("BackupType") && !value["BackupType"].IsNull())
    {
        if (!value["BackupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotPolicy.BackupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = string(value["BackupType"].GetString());
        m_backupTypeHasBeenSet = true;
    }

    if (value.HasMember("KeepTime") && !value["KeepTime"].IsNull())
    {
        if (!value["KeepTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotPolicy.KeepTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_keepTime = value["KeepTime"].GetUint64();
        m_keepTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateNewCos") && !value["CreateNewCos"].IsNull())
    {
        if (!value["CreateNewCos"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotPolicy.CreateNewCos` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_createNewCos = value["CreateNewCos"].GetBool();
        m_createNewCosHasBeenSet = true;
    }

    if (value.HasMember("CosRegion") && !value["CosRegion"].IsNull())
    {
        if (!value["CosRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotPolicy.CosRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosRegion = string(value["CosRegion"].GetString());
        m_cosRegionHasBeenSet = true;
    }

    if (value.HasMember("CosBucket") && !value["CosBucket"].IsNull())
    {
        if (!value["CosBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotPolicy.CosBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucket = string(value["CosBucket"].GetString());
        m_cosBucketHasBeenSet = true;
    }

    if (value.HasMember("SnapshotPolicyId") && !value["SnapshotPolicyId"].IsNull())
    {
        if (!value["SnapshotPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotPolicy.SnapshotPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotPolicyId = string(value["SnapshotPolicyId"].GetString());
        m_snapshotPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("BackupPolicies") && !value["BackupPolicies"].IsNull())
    {
        if (!value["BackupPolicies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SnapshotPolicy.BackupPolicies` is not array type"));

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

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotPolicy.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotPolicy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SnapshotPolicy.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_snapshotPolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotPolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupType.c_str(), allocator).Move(), allocator);
    }

    if (m_keepTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepTime, allocator);
    }

    if (m_createNewCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateNewCos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createNewCos, allocator);
    }

    if (m_cosRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotPolicyId.c_str(), allocator).Move(), allocator);
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

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SnapshotPolicy::GetSnapshotPolicyName() const
{
    return m_snapshotPolicyName;
}

void SnapshotPolicy::SetSnapshotPolicyName(const string& _snapshotPolicyName)
{
    m_snapshotPolicyName = _snapshotPolicyName;
    m_snapshotPolicyNameHasBeenSet = true;
}

bool SnapshotPolicy::SnapshotPolicyNameHasBeenSet() const
{
    return m_snapshotPolicyNameHasBeenSet;
}

string SnapshotPolicy::GetBackupType() const
{
    return m_backupType;
}

void SnapshotPolicy::SetBackupType(const string& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool SnapshotPolicy::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

uint64_t SnapshotPolicy::GetKeepTime() const
{
    return m_keepTime;
}

void SnapshotPolicy::SetKeepTime(const uint64_t& _keepTime)
{
    m_keepTime = _keepTime;
    m_keepTimeHasBeenSet = true;
}

bool SnapshotPolicy::KeepTimeHasBeenSet() const
{
    return m_keepTimeHasBeenSet;
}

bool SnapshotPolicy::GetCreateNewCos() const
{
    return m_createNewCos;
}

void SnapshotPolicy::SetCreateNewCos(const bool& _createNewCos)
{
    m_createNewCos = _createNewCos;
    m_createNewCosHasBeenSet = true;
}

bool SnapshotPolicy::CreateNewCosHasBeenSet() const
{
    return m_createNewCosHasBeenSet;
}

string SnapshotPolicy::GetCosRegion() const
{
    return m_cosRegion;
}

void SnapshotPolicy::SetCosRegion(const string& _cosRegion)
{
    m_cosRegion = _cosRegion;
    m_cosRegionHasBeenSet = true;
}

bool SnapshotPolicy::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

string SnapshotPolicy::GetCosBucket() const
{
    return m_cosBucket;
}

void SnapshotPolicy::SetCosBucket(const string& _cosBucket)
{
    m_cosBucket = _cosBucket;
    m_cosBucketHasBeenSet = true;
}

bool SnapshotPolicy::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}

string SnapshotPolicy::GetSnapshotPolicyId() const
{
    return m_snapshotPolicyId;
}

void SnapshotPolicy::SetSnapshotPolicyId(const string& _snapshotPolicyId)
{
    m_snapshotPolicyId = _snapshotPolicyId;
    m_snapshotPolicyIdHasBeenSet = true;
}

bool SnapshotPolicy::SnapshotPolicyIdHasBeenSet() const
{
    return m_snapshotPolicyIdHasBeenSet;
}

vector<BackupPolicy> SnapshotPolicy::GetBackupPolicies() const
{
    return m_backupPolicies;
}

void SnapshotPolicy::SetBackupPolicies(const vector<BackupPolicy>& _backupPolicies)
{
    m_backupPolicies = _backupPolicies;
    m_backupPoliciesHasBeenSet = true;
}

bool SnapshotPolicy::BackupPoliciesHasBeenSet() const
{
    return m_backupPoliciesHasBeenSet;
}

bool SnapshotPolicy::GetEnable() const
{
    return m_enable;
}

void SnapshotPolicy::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool SnapshotPolicy::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string SnapshotPolicy::GetCreateTime() const
{
    return m_createTime;
}

void SnapshotPolicy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SnapshotPolicy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<Tag> SnapshotPolicy::GetTagSet() const
{
    return m_tagSet;
}

void SnapshotPolicy::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool SnapshotPolicy::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

