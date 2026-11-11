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

#include <tencentcloud/csip/v20221121/model/ClusterBaselinePolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ClusterBaselinePolicy::ClusterBaselinePolicy() :
    m_policyIDHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_checkAssetTypeHasBeenSet(false),
    m_parentCategoryIDHasBeenSet(false),
    m_isSystemHasBeenSet(false)
{
}

CoreInternalOutcome ClusterBaselinePolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyID") && !value["PolicyID"].IsNull())
    {
        if (!value["PolicyID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBaselinePolicy.PolicyID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyID = value["PolicyID"].GetUint64();
        m_policyIDHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBaselinePolicy.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("CheckAssetType") && !value["CheckAssetType"].IsNull())
    {
        if (!value["CheckAssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBaselinePolicy.CheckAssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkAssetType = string(value["CheckAssetType"].GetString());
        m_checkAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("ParentCategoryID") && !value["ParentCategoryID"].IsNull())
    {
        if (!value["ParentCategoryID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBaselinePolicy.ParentCategoryID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_parentCategoryID = value["ParentCategoryID"].GetUint64();
        m_parentCategoryIDHasBeenSet = true;
    }

    if (value.HasMember("IsSystem") && !value["IsSystem"].IsNull())
    {
        if (!value["IsSystem"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBaselinePolicy.IsSystem` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSystem = value["IsSystem"].GetBool();
        m_isSystemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterBaselinePolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyID, allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_checkAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkAssetType.c_str(), allocator).Move(), allocator);
    }

    if (m_parentCategoryIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentCategoryID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentCategoryID, allocator);
    }

    if (m_isSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSystem, allocator);
    }

}


uint64_t ClusterBaselinePolicy::GetPolicyID() const
{
    return m_policyID;
}

void ClusterBaselinePolicy::SetPolicyID(const uint64_t& _policyID)
{
    m_policyID = _policyID;
    m_policyIDHasBeenSet = true;
}

bool ClusterBaselinePolicy::PolicyIDHasBeenSet() const
{
    return m_policyIDHasBeenSet;
}

string ClusterBaselinePolicy::GetPolicyName() const
{
    return m_policyName;
}

void ClusterBaselinePolicy::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool ClusterBaselinePolicy::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string ClusterBaselinePolicy::GetCheckAssetType() const
{
    return m_checkAssetType;
}

void ClusterBaselinePolicy::SetCheckAssetType(const string& _checkAssetType)
{
    m_checkAssetType = _checkAssetType;
    m_checkAssetTypeHasBeenSet = true;
}

bool ClusterBaselinePolicy::CheckAssetTypeHasBeenSet() const
{
    return m_checkAssetTypeHasBeenSet;
}

uint64_t ClusterBaselinePolicy::GetParentCategoryID() const
{
    return m_parentCategoryID;
}

void ClusterBaselinePolicy::SetParentCategoryID(const uint64_t& _parentCategoryID)
{
    m_parentCategoryID = _parentCategoryID;
    m_parentCategoryIDHasBeenSet = true;
}

bool ClusterBaselinePolicy::ParentCategoryIDHasBeenSet() const
{
    return m_parentCategoryIDHasBeenSet;
}

bool ClusterBaselinePolicy::GetIsSystem() const
{
    return m_isSystem;
}

void ClusterBaselinePolicy::SetIsSystem(const bool& _isSystem)
{
    m_isSystem = _isSystem;
    m_isSystemHasBeenSet = true;
}

bool ClusterBaselinePolicy::IsSystemHasBeenSet() const
{
    return m_isSystemHasBeenSet;
}

