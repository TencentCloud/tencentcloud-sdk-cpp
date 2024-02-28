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

#include <tencentcloud/organization/v20210331/model/NotAllowReason.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

NotAllowReason::NotAllowReason() :
    m_isCreateMemberHasBeenSet(false),
    m_deletionPermissionHasBeenSet(false),
    m_isAssignManagerHasBeenSet(false),
    m_isAuthManagerHasBeenSet(false),
    m_isShareManagerHasBeenSet(false),
    m_operateProcessHasBeenSet(false),
    m_billingPermissionHasBeenSet(false),
    m_existResourcesHasBeenSet(false),
    m_detectFailedResourcesHasBeenSet(false)
{
}

CoreInternalOutcome NotAllowReason::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsCreateMember") && !value["IsCreateMember"].IsNull())
    {
        if (!value["IsCreateMember"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NotAllowReason.IsCreateMember` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCreateMember = value["IsCreateMember"].GetBool();
        m_isCreateMemberHasBeenSet = true;
    }

    if (value.HasMember("DeletionPermission") && !value["DeletionPermission"].IsNull())
    {
        if (!value["DeletionPermission"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NotAllowReason.DeletionPermission` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deletionPermission = value["DeletionPermission"].GetBool();
        m_deletionPermissionHasBeenSet = true;
    }

    if (value.HasMember("IsAssignManager") && !value["IsAssignManager"].IsNull())
    {
        if (!value["IsAssignManager"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NotAllowReason.IsAssignManager` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAssignManager = value["IsAssignManager"].GetBool();
        m_isAssignManagerHasBeenSet = true;
    }

    if (value.HasMember("IsAuthManager") && !value["IsAuthManager"].IsNull())
    {
        if (!value["IsAuthManager"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NotAllowReason.IsAuthManager` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthManager = value["IsAuthManager"].GetBool();
        m_isAuthManagerHasBeenSet = true;
    }

    if (value.HasMember("IsShareManager") && !value["IsShareManager"].IsNull())
    {
        if (!value["IsShareManager"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NotAllowReason.IsShareManager` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isShareManager = value["IsShareManager"].GetBool();
        m_isShareManagerHasBeenSet = true;
    }

    if (value.HasMember("OperateProcess") && !value["OperateProcess"].IsNull())
    {
        if (!value["OperateProcess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NotAllowReason.OperateProcess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_operateProcess = value["OperateProcess"].GetBool();
        m_operateProcessHasBeenSet = true;
    }

    if (value.HasMember("BillingPermission") && !value["BillingPermission"].IsNull())
    {
        if (!value["BillingPermission"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NotAllowReason.BillingPermission` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_billingPermission = value["BillingPermission"].GetBool();
        m_billingPermissionHasBeenSet = true;
    }

    if (value.HasMember("ExistResources") && !value["ExistResources"].IsNull())
    {
        if (!value["ExistResources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotAllowReason.ExistResources` is not array type"));

        const rapidjson::Value &tmpValue = value["ExistResources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_existResources.push_back((*itr).GetString());
        }
        m_existResourcesHasBeenSet = true;
    }

    if (value.HasMember("DetectFailedResources") && !value["DetectFailedResources"].IsNull())
    {
        if (!value["DetectFailedResources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotAllowReason.DetectFailedResources` is not array type"));

        const rapidjson::Value &tmpValue = value["DetectFailedResources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_detectFailedResources.push_back((*itr).GetString());
        }
        m_detectFailedResourcesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotAllowReason::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isCreateMemberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCreateMember";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCreateMember, allocator);
    }

    if (m_deletionPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deletionPermission, allocator);
    }

    if (m_isAssignManagerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAssignManager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAssignManager, allocator);
    }

    if (m_isAuthManagerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuthManager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuthManager, allocator);
    }

    if (m_isShareManagerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShareManager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isShareManager, allocator);
    }

    if (m_operateProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operateProcess, allocator);
    }

    if (m_billingPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingPermission, allocator);
    }

    if (m_existResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExistResources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_existResources.begin(); itr != m_existResources.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_detectFailedResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectFailedResources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_detectFailedResources.begin(); itr != m_detectFailedResources.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool NotAllowReason::GetIsCreateMember() const
{
    return m_isCreateMember;
}

void NotAllowReason::SetIsCreateMember(const bool& _isCreateMember)
{
    m_isCreateMember = _isCreateMember;
    m_isCreateMemberHasBeenSet = true;
}

bool NotAllowReason::IsCreateMemberHasBeenSet() const
{
    return m_isCreateMemberHasBeenSet;
}

bool NotAllowReason::GetDeletionPermission() const
{
    return m_deletionPermission;
}

void NotAllowReason::SetDeletionPermission(const bool& _deletionPermission)
{
    m_deletionPermission = _deletionPermission;
    m_deletionPermissionHasBeenSet = true;
}

bool NotAllowReason::DeletionPermissionHasBeenSet() const
{
    return m_deletionPermissionHasBeenSet;
}

bool NotAllowReason::GetIsAssignManager() const
{
    return m_isAssignManager;
}

void NotAllowReason::SetIsAssignManager(const bool& _isAssignManager)
{
    m_isAssignManager = _isAssignManager;
    m_isAssignManagerHasBeenSet = true;
}

bool NotAllowReason::IsAssignManagerHasBeenSet() const
{
    return m_isAssignManagerHasBeenSet;
}

bool NotAllowReason::GetIsAuthManager() const
{
    return m_isAuthManager;
}

void NotAllowReason::SetIsAuthManager(const bool& _isAuthManager)
{
    m_isAuthManager = _isAuthManager;
    m_isAuthManagerHasBeenSet = true;
}

bool NotAllowReason::IsAuthManagerHasBeenSet() const
{
    return m_isAuthManagerHasBeenSet;
}

bool NotAllowReason::GetIsShareManager() const
{
    return m_isShareManager;
}

void NotAllowReason::SetIsShareManager(const bool& _isShareManager)
{
    m_isShareManager = _isShareManager;
    m_isShareManagerHasBeenSet = true;
}

bool NotAllowReason::IsShareManagerHasBeenSet() const
{
    return m_isShareManagerHasBeenSet;
}

bool NotAllowReason::GetOperateProcess() const
{
    return m_operateProcess;
}

void NotAllowReason::SetOperateProcess(const bool& _operateProcess)
{
    m_operateProcess = _operateProcess;
    m_operateProcessHasBeenSet = true;
}

bool NotAllowReason::OperateProcessHasBeenSet() const
{
    return m_operateProcessHasBeenSet;
}

bool NotAllowReason::GetBillingPermission() const
{
    return m_billingPermission;
}

void NotAllowReason::SetBillingPermission(const bool& _billingPermission)
{
    m_billingPermission = _billingPermission;
    m_billingPermissionHasBeenSet = true;
}

bool NotAllowReason::BillingPermissionHasBeenSet() const
{
    return m_billingPermissionHasBeenSet;
}

vector<string> NotAllowReason::GetExistResources() const
{
    return m_existResources;
}

void NotAllowReason::SetExistResources(const vector<string>& _existResources)
{
    m_existResources = _existResources;
    m_existResourcesHasBeenSet = true;
}

bool NotAllowReason::ExistResourcesHasBeenSet() const
{
    return m_existResourcesHasBeenSet;
}

vector<string> NotAllowReason::GetDetectFailedResources() const
{
    return m_detectFailedResources;
}

void NotAllowReason::SetDetectFailedResources(const vector<string>& _detectFailedResources)
{
    m_detectFailedResources = _detectFailedResources;
    m_detectFailedResourcesHasBeenSet = true;
}

bool NotAllowReason::DetectFailedResourcesHasBeenSet() const
{
    return m_detectFailedResourcesHasBeenSet;
}

