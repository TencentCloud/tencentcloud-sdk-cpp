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

#include <tencentcloud/wedata/v20210820/model/DlcDataGovernPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DlcDataGovernPolicy::DlcDataGovernPolicy() :
    m_rewriteDataPolicyHasBeenSet(false),
    m_expiredSnapshotsPolicyHasBeenSet(false),
    m_removeOrphanFilesPolicyHasBeenSet(false),
    m_mergeManifestsPolicyHasBeenSet(false),
    m_inheritDataBaseHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_governEngineHasBeenSet(false)
{
}

CoreInternalOutcome DlcDataGovernPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RewriteDataPolicy") && !value["RewriteDataPolicy"].IsNull())
    {
        if (!value["RewriteDataPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDataGovernPolicy.RewriteDataPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rewriteDataPolicy.Deserialize(value["RewriteDataPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rewriteDataPolicyHasBeenSet = true;
    }

    if (value.HasMember("ExpiredSnapshotsPolicy") && !value["ExpiredSnapshotsPolicy"].IsNull())
    {
        if (!value["ExpiredSnapshotsPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDataGovernPolicy.ExpiredSnapshotsPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_expiredSnapshotsPolicy.Deserialize(value["ExpiredSnapshotsPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_expiredSnapshotsPolicyHasBeenSet = true;
    }

    if (value.HasMember("RemoveOrphanFilesPolicy") && !value["RemoveOrphanFilesPolicy"].IsNull())
    {
        if (!value["RemoveOrphanFilesPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDataGovernPolicy.RemoveOrphanFilesPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_removeOrphanFilesPolicy.Deserialize(value["RemoveOrphanFilesPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_removeOrphanFilesPolicyHasBeenSet = true;
    }

    if (value.HasMember("MergeManifestsPolicy") && !value["MergeManifestsPolicy"].IsNull())
    {
        if (!value["MergeManifestsPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDataGovernPolicy.MergeManifestsPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mergeManifestsPolicy.Deserialize(value["MergeManifestsPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mergeManifestsPolicyHasBeenSet = true;
    }

    if (value.HasMember("InheritDataBase") && !value["InheritDataBase"].IsNull())
    {
        if (!value["InheritDataBase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDataGovernPolicy.InheritDataBase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inheritDataBase = string(value["InheritDataBase"].GetString());
        m_inheritDataBaseHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDataGovernPolicy.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("GovernEngine") && !value["GovernEngine"].IsNull())
    {
        if (!value["GovernEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDataGovernPolicy.GovernEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_governEngine = string(value["GovernEngine"].GetString());
        m_governEngineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DlcDataGovernPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rewriteDataPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewriteDataPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rewriteDataPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_expiredSnapshotsPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredSnapshotsPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_expiredSnapshotsPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_removeOrphanFilesPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveOrphanFilesPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_removeOrphanFilesPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mergeManifestsPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MergeManifestsPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mergeManifestsPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inheritDataBaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InheritDataBase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inheritDataBase.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_governEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GovernEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_governEngine.c_str(), allocator).Move(), allocator);
    }

}


DlcRewriteDataInfo DlcDataGovernPolicy::GetRewriteDataPolicy() const
{
    return m_rewriteDataPolicy;
}

void DlcDataGovernPolicy::SetRewriteDataPolicy(const DlcRewriteDataInfo& _rewriteDataPolicy)
{
    m_rewriteDataPolicy = _rewriteDataPolicy;
    m_rewriteDataPolicyHasBeenSet = true;
}

bool DlcDataGovernPolicy::RewriteDataPolicyHasBeenSet() const
{
    return m_rewriteDataPolicyHasBeenSet;
}

DlcExpiredSnapshotsInfo DlcDataGovernPolicy::GetExpiredSnapshotsPolicy() const
{
    return m_expiredSnapshotsPolicy;
}

void DlcDataGovernPolicy::SetExpiredSnapshotsPolicy(const DlcExpiredSnapshotsInfo& _expiredSnapshotsPolicy)
{
    m_expiredSnapshotsPolicy = _expiredSnapshotsPolicy;
    m_expiredSnapshotsPolicyHasBeenSet = true;
}

bool DlcDataGovernPolicy::ExpiredSnapshotsPolicyHasBeenSet() const
{
    return m_expiredSnapshotsPolicyHasBeenSet;
}

DlcRemoveOrphanFilesInfo DlcDataGovernPolicy::GetRemoveOrphanFilesPolicy() const
{
    return m_removeOrphanFilesPolicy;
}

void DlcDataGovernPolicy::SetRemoveOrphanFilesPolicy(const DlcRemoveOrphanFilesInfo& _removeOrphanFilesPolicy)
{
    m_removeOrphanFilesPolicy = _removeOrphanFilesPolicy;
    m_removeOrphanFilesPolicyHasBeenSet = true;
}

bool DlcDataGovernPolicy::RemoveOrphanFilesPolicyHasBeenSet() const
{
    return m_removeOrphanFilesPolicyHasBeenSet;
}

DlcMergeManifestsInfo DlcDataGovernPolicy::GetMergeManifestsPolicy() const
{
    return m_mergeManifestsPolicy;
}

void DlcDataGovernPolicy::SetMergeManifestsPolicy(const DlcMergeManifestsInfo& _mergeManifestsPolicy)
{
    m_mergeManifestsPolicy = _mergeManifestsPolicy;
    m_mergeManifestsPolicyHasBeenSet = true;
}

bool DlcDataGovernPolicy::MergeManifestsPolicyHasBeenSet() const
{
    return m_mergeManifestsPolicyHasBeenSet;
}

string DlcDataGovernPolicy::GetInheritDataBase() const
{
    return m_inheritDataBase;
}

void DlcDataGovernPolicy::SetInheritDataBase(const string& _inheritDataBase)
{
    m_inheritDataBase = _inheritDataBase;
    m_inheritDataBaseHasBeenSet = true;
}

bool DlcDataGovernPolicy::InheritDataBaseHasBeenSet() const
{
    return m_inheritDataBaseHasBeenSet;
}

string DlcDataGovernPolicy::GetRuleType() const
{
    return m_ruleType;
}

void DlcDataGovernPolicy::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool DlcDataGovernPolicy::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string DlcDataGovernPolicy::GetGovernEngine() const
{
    return m_governEngine;
}

void DlcDataGovernPolicy::SetGovernEngine(const string& _governEngine)
{
    m_governEngine = _governEngine;
    m_governEngineHasBeenSet = true;
}

bool DlcDataGovernPolicy::GovernEngineHasBeenSet() const
{
    return m_governEngineHasBeenSet;
}

