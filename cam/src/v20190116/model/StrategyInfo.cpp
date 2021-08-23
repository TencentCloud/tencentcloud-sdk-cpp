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

#include <tencentcloud/cam/v20190116/model/StrategyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

StrategyInfo::StrategyInfo() :
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createModeHasBeenSet(false),
    m_attachmentsHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_isAttachedHasBeenSet(false),
    m_deactivedHasBeenSet(false),
    m_deactivedDetailHasBeenSet(false),
    m_isServiceLinkedPolicyHasBeenSet(false),
    m_attachEntityCountHasBeenSet(false),
    m_attachEntityBoundaryCountHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome StrategyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyInfo.PolicyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetUint64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyInfo.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyInfo.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateMode") && !value["CreateMode"].IsNull())
    {
        if (!value["CreateMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyInfo.CreateMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createMode = value["CreateMode"].GetUint64();
        m_createModeHasBeenSet = true;
    }

    if (value.HasMember("Attachments") && !value["Attachments"].IsNull())
    {
        if (!value["Attachments"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyInfo.Attachments` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attachments = value["Attachments"].GetUint64();
        m_attachmentsHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyInfo.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("IsAttached") && !value["IsAttached"].IsNull())
    {
        if (!value["IsAttached"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyInfo.IsAttached` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAttached = value["IsAttached"].GetUint64();
        m_isAttachedHasBeenSet = true;
    }

    if (value.HasMember("Deactived") && !value["Deactived"].IsNull())
    {
        if (!value["Deactived"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyInfo.Deactived` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deactived = value["Deactived"].GetUint64();
        m_deactivedHasBeenSet = true;
    }

    if (value.HasMember("DeactivedDetail") && !value["DeactivedDetail"].IsNull())
    {
        if (!value["DeactivedDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StrategyInfo.DeactivedDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["DeactivedDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_deactivedDetail.push_back((*itr).GetString());
        }
        m_deactivedDetailHasBeenSet = true;
    }

    if (value.HasMember("IsServiceLinkedPolicy") && !value["IsServiceLinkedPolicy"].IsNull())
    {
        if (!value["IsServiceLinkedPolicy"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyInfo.IsServiceLinkedPolicy` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isServiceLinkedPolicy = value["IsServiceLinkedPolicy"].GetUint64();
        m_isServiceLinkedPolicyHasBeenSet = true;
    }

    if (value.HasMember("AttachEntityCount") && !value["AttachEntityCount"].IsNull())
    {
        if (!value["AttachEntityCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyInfo.AttachEntityCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attachEntityCount = value["AttachEntityCount"].GetInt64();
        m_attachEntityCountHasBeenSet = true;
    }

    if (value.HasMember("AttachEntityBoundaryCount") && !value["AttachEntityBoundaryCount"].IsNull())
    {
        if (!value["AttachEntityBoundaryCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyInfo.AttachEntityBoundaryCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attachEntityBoundaryCount = value["AttachEntityBoundaryCount"].GetInt64();
        m_attachEntityBoundaryCountHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StrategyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createMode, allocator);
    }

    if (m_attachmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attachments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attachments, allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_isAttachedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAttached";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAttached, allocator);
    }

    if (m_deactivedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deactived";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deactived, allocator);
    }

    if (m_deactivedDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeactivedDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deactivedDetail.begin(); itr != m_deactivedDetail.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isServiceLinkedPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsServiceLinkedPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isServiceLinkedPolicy, allocator);
    }

    if (m_attachEntityCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachEntityCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attachEntityCount, allocator);
    }

    if (m_attachEntityBoundaryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachEntityBoundaryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attachEntityBoundaryCount, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t StrategyInfo::GetPolicyId() const
{
    return m_policyId;
}

void StrategyInfo::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool StrategyInfo::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string StrategyInfo::GetPolicyName() const
{
    return m_policyName;
}

void StrategyInfo::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool StrategyInfo::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string StrategyInfo::GetAddTime() const
{
    return m_addTime;
}

void StrategyInfo::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool StrategyInfo::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

uint64_t StrategyInfo::GetType() const
{
    return m_type;
}

void StrategyInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool StrategyInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string StrategyInfo::GetDescription() const
{
    return m_description;
}

void StrategyInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool StrategyInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t StrategyInfo::GetCreateMode() const
{
    return m_createMode;
}

void StrategyInfo::SetCreateMode(const uint64_t& _createMode)
{
    m_createMode = _createMode;
    m_createModeHasBeenSet = true;
}

bool StrategyInfo::CreateModeHasBeenSet() const
{
    return m_createModeHasBeenSet;
}

uint64_t StrategyInfo::GetAttachments() const
{
    return m_attachments;
}

void StrategyInfo::SetAttachments(const uint64_t& _attachments)
{
    m_attachments = _attachments;
    m_attachmentsHasBeenSet = true;
}

bool StrategyInfo::AttachmentsHasBeenSet() const
{
    return m_attachmentsHasBeenSet;
}

string StrategyInfo::GetServiceType() const
{
    return m_serviceType;
}

void StrategyInfo::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool StrategyInfo::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

uint64_t StrategyInfo::GetIsAttached() const
{
    return m_isAttached;
}

void StrategyInfo::SetIsAttached(const uint64_t& _isAttached)
{
    m_isAttached = _isAttached;
    m_isAttachedHasBeenSet = true;
}

bool StrategyInfo::IsAttachedHasBeenSet() const
{
    return m_isAttachedHasBeenSet;
}

uint64_t StrategyInfo::GetDeactived() const
{
    return m_deactived;
}

void StrategyInfo::SetDeactived(const uint64_t& _deactived)
{
    m_deactived = _deactived;
    m_deactivedHasBeenSet = true;
}

bool StrategyInfo::DeactivedHasBeenSet() const
{
    return m_deactivedHasBeenSet;
}

vector<string> StrategyInfo::GetDeactivedDetail() const
{
    return m_deactivedDetail;
}

void StrategyInfo::SetDeactivedDetail(const vector<string>& _deactivedDetail)
{
    m_deactivedDetail = _deactivedDetail;
    m_deactivedDetailHasBeenSet = true;
}

bool StrategyInfo::DeactivedDetailHasBeenSet() const
{
    return m_deactivedDetailHasBeenSet;
}

uint64_t StrategyInfo::GetIsServiceLinkedPolicy() const
{
    return m_isServiceLinkedPolicy;
}

void StrategyInfo::SetIsServiceLinkedPolicy(const uint64_t& _isServiceLinkedPolicy)
{
    m_isServiceLinkedPolicy = _isServiceLinkedPolicy;
    m_isServiceLinkedPolicyHasBeenSet = true;
}

bool StrategyInfo::IsServiceLinkedPolicyHasBeenSet() const
{
    return m_isServiceLinkedPolicyHasBeenSet;
}

int64_t StrategyInfo::GetAttachEntityCount() const
{
    return m_attachEntityCount;
}

void StrategyInfo::SetAttachEntityCount(const int64_t& _attachEntityCount)
{
    m_attachEntityCount = _attachEntityCount;
    m_attachEntityCountHasBeenSet = true;
}

bool StrategyInfo::AttachEntityCountHasBeenSet() const
{
    return m_attachEntityCountHasBeenSet;
}

int64_t StrategyInfo::GetAttachEntityBoundaryCount() const
{
    return m_attachEntityBoundaryCount;
}

void StrategyInfo::SetAttachEntityBoundaryCount(const int64_t& _attachEntityBoundaryCount)
{
    m_attachEntityBoundaryCount = _attachEntityBoundaryCount;
    m_attachEntityBoundaryCountHasBeenSet = true;
}

bool StrategyInfo::AttachEntityBoundaryCountHasBeenSet() const
{
    return m_attachEntityBoundaryCountHasBeenSet;
}

string StrategyInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void StrategyInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool StrategyInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

