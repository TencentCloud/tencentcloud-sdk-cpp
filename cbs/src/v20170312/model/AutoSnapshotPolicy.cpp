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

#include <tencentcloud/cbs/v20170312/model/AutoSnapshotPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

AutoSnapshotPolicy::AutoSnapshotPolicy() :
    m_diskIdSetHasBeenSet(false),
    m_isActivatedHasBeenSet(false),
    m_autoSnapshotPolicyStateHasBeenSet(false),
    m_isCopyToRemoteHasBeenSet(false),
    m_isPermanentHasBeenSet(false),
    m_nextTriggerTimeHasBeenSet(false),
    m_autoSnapshotPolicyNameHasBeenSet(false),
    m_autoSnapshotPolicyIdHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_retentionDaysHasBeenSet(false),
    m_copyToAccountUinHasBeenSet(false),
    m_instanceIdSetHasBeenSet(false),
    m_retentionMonthsHasBeenSet(false),
    m_retentionAmountHasBeenSet(false),
    m_advancedRetentionPolicyHasBeenSet(false),
    m_copyFromAccountUinHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome AutoSnapshotPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskIdSet") && !value["DiskIdSet"].IsNull())
    {
        if (!value["DiskIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.DiskIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DiskIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_diskIdSet.push_back((*itr).GetString());
        }
        m_diskIdSetHasBeenSet = true;
    }

    if (value.HasMember("IsActivated") && !value["IsActivated"].IsNull())
    {
        if (!value["IsActivated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.IsActivated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isActivated = value["IsActivated"].GetBool();
        m_isActivatedHasBeenSet = true;
    }

    if (value.HasMember("AutoSnapshotPolicyState") && !value["AutoSnapshotPolicyState"].IsNull())
    {
        if (!value["AutoSnapshotPolicyState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.AutoSnapshotPolicyState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoSnapshotPolicyState = string(value["AutoSnapshotPolicyState"].GetString());
        m_autoSnapshotPolicyStateHasBeenSet = true;
    }

    if (value.HasMember("IsCopyToRemote") && !value["IsCopyToRemote"].IsNull())
    {
        if (!value["IsCopyToRemote"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.IsCopyToRemote` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCopyToRemote = value["IsCopyToRemote"].GetUint64();
        m_isCopyToRemoteHasBeenSet = true;
    }

    if (value.HasMember("IsPermanent") && !value["IsPermanent"].IsNull())
    {
        if (!value["IsPermanent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.IsPermanent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPermanent = value["IsPermanent"].GetBool();
        m_isPermanentHasBeenSet = true;
    }

    if (value.HasMember("NextTriggerTime") && !value["NextTriggerTime"].IsNull())
    {
        if (!value["NextTriggerTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.NextTriggerTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextTriggerTime = string(value["NextTriggerTime"].GetString());
        m_nextTriggerTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoSnapshotPolicyName") && !value["AutoSnapshotPolicyName"].IsNull())
    {
        if (!value["AutoSnapshotPolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.AutoSnapshotPolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoSnapshotPolicyName = string(value["AutoSnapshotPolicyName"].GetString());
        m_autoSnapshotPolicyNameHasBeenSet = true;
    }

    if (value.HasMember("AutoSnapshotPolicyId") && !value["AutoSnapshotPolicyId"].IsNull())
    {
        if (!value["AutoSnapshotPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.AutoSnapshotPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoSnapshotPolicyId = string(value["AutoSnapshotPolicyId"].GetString());
        m_autoSnapshotPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.Policy` is not array type"));

        const rapidjson::Value &tmpValue = value["Policy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Policy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_policy.push_back(item);
        }
        m_policyHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RetentionDays") && !value["RetentionDays"].IsNull())
    {
        if (!value["RetentionDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.RetentionDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionDays = value["RetentionDays"].GetUint64();
        m_retentionDaysHasBeenSet = true;
    }

    if (value.HasMember("CopyToAccountUin") && !value["CopyToAccountUin"].IsNull())
    {
        if (!value["CopyToAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.CopyToAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyToAccountUin = string(value["CopyToAccountUin"].GetString());
        m_copyToAccountUinHasBeenSet = true;
    }

    if (value.HasMember("InstanceIdSet") && !value["InstanceIdSet"].IsNull())
    {
        if (!value["InstanceIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.InstanceIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIdSet.push_back((*itr).GetString());
        }
        m_instanceIdSetHasBeenSet = true;
    }

    if (value.HasMember("RetentionMonths") && !value["RetentionMonths"].IsNull())
    {
        if (!value["RetentionMonths"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.RetentionMonths` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionMonths = value["RetentionMonths"].GetUint64();
        m_retentionMonthsHasBeenSet = true;
    }

    if (value.HasMember("RetentionAmount") && !value["RetentionAmount"].IsNull())
    {
        if (!value["RetentionAmount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.RetentionAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionAmount = value["RetentionAmount"].GetUint64();
        m_retentionAmountHasBeenSet = true;
    }

    if (value.HasMember("AdvancedRetentionPolicy") && !value["AdvancedRetentionPolicy"].IsNull())
    {
        if (!value["AdvancedRetentionPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.AdvancedRetentionPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advancedRetentionPolicy.Deserialize(value["AdvancedRetentionPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advancedRetentionPolicyHasBeenSet = true;
    }

    if (value.HasMember("CopyFromAccountUin") && !value["CopyFromAccountUin"].IsNull())
    {
        if (!value["CopyFromAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.CopyFromAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyFromAccountUin = string(value["CopyFromAccountUin"].GetString());
        m_copyFromAccountUinHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicy.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoSnapshotPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_diskIdSet.begin(); itr != m_diskIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isActivatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActivated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isActivated, allocator);
    }

    if (m_autoSnapshotPolicyStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSnapshotPolicyState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoSnapshotPolicyState.c_str(), allocator).Move(), allocator);
    }

    if (m_isCopyToRemoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCopyToRemote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCopyToRemote, allocator);
    }

    if (m_isPermanentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPermanent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPermanent, allocator);
    }

    if (m_nextTriggerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextTriggerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextTriggerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoSnapshotPolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSnapshotPolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoSnapshotPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_autoSnapshotPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSnapshotPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoSnapshotPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policy.begin(); itr != m_policy.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionDays, allocator);
    }

    if (m_copyToAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyToAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyToAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdSet.begin(); itr != m_instanceIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_retentionMonthsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionMonths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionMonths, allocator);
    }

    if (m_retentionAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionAmount, allocator);
    }

    if (m_advancedRetentionPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedRetentionPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advancedRetentionPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_copyFromAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyFromAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyFromAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> AutoSnapshotPolicy::GetDiskIdSet() const
{
    return m_diskIdSet;
}

void AutoSnapshotPolicy::SetDiskIdSet(const vector<string>& _diskIdSet)
{
    m_diskIdSet = _diskIdSet;
    m_diskIdSetHasBeenSet = true;
}

bool AutoSnapshotPolicy::DiskIdSetHasBeenSet() const
{
    return m_diskIdSetHasBeenSet;
}

bool AutoSnapshotPolicy::GetIsActivated() const
{
    return m_isActivated;
}

void AutoSnapshotPolicy::SetIsActivated(const bool& _isActivated)
{
    m_isActivated = _isActivated;
    m_isActivatedHasBeenSet = true;
}

bool AutoSnapshotPolicy::IsActivatedHasBeenSet() const
{
    return m_isActivatedHasBeenSet;
}

string AutoSnapshotPolicy::GetAutoSnapshotPolicyState() const
{
    return m_autoSnapshotPolicyState;
}

void AutoSnapshotPolicy::SetAutoSnapshotPolicyState(const string& _autoSnapshotPolicyState)
{
    m_autoSnapshotPolicyState = _autoSnapshotPolicyState;
    m_autoSnapshotPolicyStateHasBeenSet = true;
}

bool AutoSnapshotPolicy::AutoSnapshotPolicyStateHasBeenSet() const
{
    return m_autoSnapshotPolicyStateHasBeenSet;
}

uint64_t AutoSnapshotPolicy::GetIsCopyToRemote() const
{
    return m_isCopyToRemote;
}

void AutoSnapshotPolicy::SetIsCopyToRemote(const uint64_t& _isCopyToRemote)
{
    m_isCopyToRemote = _isCopyToRemote;
    m_isCopyToRemoteHasBeenSet = true;
}

bool AutoSnapshotPolicy::IsCopyToRemoteHasBeenSet() const
{
    return m_isCopyToRemoteHasBeenSet;
}

bool AutoSnapshotPolicy::GetIsPermanent() const
{
    return m_isPermanent;
}

void AutoSnapshotPolicy::SetIsPermanent(const bool& _isPermanent)
{
    m_isPermanent = _isPermanent;
    m_isPermanentHasBeenSet = true;
}

bool AutoSnapshotPolicy::IsPermanentHasBeenSet() const
{
    return m_isPermanentHasBeenSet;
}

string AutoSnapshotPolicy::GetNextTriggerTime() const
{
    return m_nextTriggerTime;
}

void AutoSnapshotPolicy::SetNextTriggerTime(const string& _nextTriggerTime)
{
    m_nextTriggerTime = _nextTriggerTime;
    m_nextTriggerTimeHasBeenSet = true;
}

bool AutoSnapshotPolicy::NextTriggerTimeHasBeenSet() const
{
    return m_nextTriggerTimeHasBeenSet;
}

string AutoSnapshotPolicy::GetAutoSnapshotPolicyName() const
{
    return m_autoSnapshotPolicyName;
}

void AutoSnapshotPolicy::SetAutoSnapshotPolicyName(const string& _autoSnapshotPolicyName)
{
    m_autoSnapshotPolicyName = _autoSnapshotPolicyName;
    m_autoSnapshotPolicyNameHasBeenSet = true;
}

bool AutoSnapshotPolicy::AutoSnapshotPolicyNameHasBeenSet() const
{
    return m_autoSnapshotPolicyNameHasBeenSet;
}

string AutoSnapshotPolicy::GetAutoSnapshotPolicyId() const
{
    return m_autoSnapshotPolicyId;
}

void AutoSnapshotPolicy::SetAutoSnapshotPolicyId(const string& _autoSnapshotPolicyId)
{
    m_autoSnapshotPolicyId = _autoSnapshotPolicyId;
    m_autoSnapshotPolicyIdHasBeenSet = true;
}

bool AutoSnapshotPolicy::AutoSnapshotPolicyIdHasBeenSet() const
{
    return m_autoSnapshotPolicyIdHasBeenSet;
}

vector<Policy> AutoSnapshotPolicy::GetPolicy() const
{
    return m_policy;
}

void AutoSnapshotPolicy::SetPolicy(const vector<Policy>& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool AutoSnapshotPolicy::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

string AutoSnapshotPolicy::GetCreateTime() const
{
    return m_createTime;
}

void AutoSnapshotPolicy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AutoSnapshotPolicy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t AutoSnapshotPolicy::GetRetentionDays() const
{
    return m_retentionDays;
}

void AutoSnapshotPolicy::SetRetentionDays(const uint64_t& _retentionDays)
{
    m_retentionDays = _retentionDays;
    m_retentionDaysHasBeenSet = true;
}

bool AutoSnapshotPolicy::RetentionDaysHasBeenSet() const
{
    return m_retentionDaysHasBeenSet;
}

string AutoSnapshotPolicy::GetCopyToAccountUin() const
{
    return m_copyToAccountUin;
}

void AutoSnapshotPolicy::SetCopyToAccountUin(const string& _copyToAccountUin)
{
    m_copyToAccountUin = _copyToAccountUin;
    m_copyToAccountUinHasBeenSet = true;
}

bool AutoSnapshotPolicy::CopyToAccountUinHasBeenSet() const
{
    return m_copyToAccountUinHasBeenSet;
}

vector<string> AutoSnapshotPolicy::GetInstanceIdSet() const
{
    return m_instanceIdSet;
}

void AutoSnapshotPolicy::SetInstanceIdSet(const vector<string>& _instanceIdSet)
{
    m_instanceIdSet = _instanceIdSet;
    m_instanceIdSetHasBeenSet = true;
}

bool AutoSnapshotPolicy::InstanceIdSetHasBeenSet() const
{
    return m_instanceIdSetHasBeenSet;
}

uint64_t AutoSnapshotPolicy::GetRetentionMonths() const
{
    return m_retentionMonths;
}

void AutoSnapshotPolicy::SetRetentionMonths(const uint64_t& _retentionMonths)
{
    m_retentionMonths = _retentionMonths;
    m_retentionMonthsHasBeenSet = true;
}

bool AutoSnapshotPolicy::RetentionMonthsHasBeenSet() const
{
    return m_retentionMonthsHasBeenSet;
}

uint64_t AutoSnapshotPolicy::GetRetentionAmount() const
{
    return m_retentionAmount;
}

void AutoSnapshotPolicy::SetRetentionAmount(const uint64_t& _retentionAmount)
{
    m_retentionAmount = _retentionAmount;
    m_retentionAmountHasBeenSet = true;
}

bool AutoSnapshotPolicy::RetentionAmountHasBeenSet() const
{
    return m_retentionAmountHasBeenSet;
}

AdvancedRetentionPolicy AutoSnapshotPolicy::GetAdvancedRetentionPolicy() const
{
    return m_advancedRetentionPolicy;
}

void AutoSnapshotPolicy::SetAdvancedRetentionPolicy(const AdvancedRetentionPolicy& _advancedRetentionPolicy)
{
    m_advancedRetentionPolicy = _advancedRetentionPolicy;
    m_advancedRetentionPolicyHasBeenSet = true;
}

bool AutoSnapshotPolicy::AdvancedRetentionPolicyHasBeenSet() const
{
    return m_advancedRetentionPolicyHasBeenSet;
}

string AutoSnapshotPolicy::GetCopyFromAccountUin() const
{
    return m_copyFromAccountUin;
}

void AutoSnapshotPolicy::SetCopyFromAccountUin(const string& _copyFromAccountUin)
{
    m_copyFromAccountUin = _copyFromAccountUin;
    m_copyFromAccountUinHasBeenSet = true;
}

bool AutoSnapshotPolicy::CopyFromAccountUinHasBeenSet() const
{
    return m_copyFromAccountUinHasBeenSet;
}

vector<Tag> AutoSnapshotPolicy::GetTags() const
{
    return m_tags;
}

void AutoSnapshotPolicy::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AutoSnapshotPolicy::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

