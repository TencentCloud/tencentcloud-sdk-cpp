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
using namespace rapidjson;
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
    m_isServiceLinkedPolicyHasBeenSet(false)
{
}

CoreInternalOutcome StrategyInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `StrategyInfo.PolicyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetUint64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Error("response `StrategyInfo.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `StrategyInfo.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `StrategyInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `StrategyInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateMode") && !value["CreateMode"].IsNull())
    {
        if (!value["CreateMode"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `StrategyInfo.CreateMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createMode = value["CreateMode"].GetUint64();
        m_createModeHasBeenSet = true;
    }

    if (value.HasMember("Attachments") && !value["Attachments"].IsNull())
    {
        if (!value["Attachments"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `StrategyInfo.Attachments` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attachments = value["Attachments"].GetUint64();
        m_attachmentsHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `StrategyInfo.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("IsAttached") && !value["IsAttached"].IsNull())
    {
        if (!value["IsAttached"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `StrategyInfo.IsAttached` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAttached = value["IsAttached"].GetUint64();
        m_isAttachedHasBeenSet = true;
    }

    if (value.HasMember("Deactived") && !value["Deactived"].IsNull())
    {
        if (!value["Deactived"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `StrategyInfo.Deactived` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deactived = value["Deactived"].GetUint64();
        m_deactivedHasBeenSet = true;
    }

    if (value.HasMember("DeactivedDetail") && !value["DeactivedDetail"].IsNull())
    {
        if (!value["DeactivedDetail"].IsArray())
            return CoreInternalOutcome(Error("response `StrategyInfo.DeactivedDetail` is not array type"));

        const Value &tmpValue = value["DeactivedDetail"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_deactivedDetail.push_back((*itr).GetString());
        }
        m_deactivedDetailHasBeenSet = true;
    }

    if (value.HasMember("IsServiceLinkedPolicy") && !value["IsServiceLinkedPolicy"].IsNull())
    {
        if (!value["IsServiceLinkedPolicy"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `StrategyInfo.IsServiceLinkedPolicy` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isServiceLinkedPolicy = value["IsServiceLinkedPolicy"].GetUint64();
        m_isServiceLinkedPolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StrategyInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_policyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createMode, allocator);
    }

    if (m_attachmentsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Attachments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attachments, allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_isAttachedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsAttached";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAttached, allocator);
    }

    if (m_deactivedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Deactived";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deactived, allocator);
    }

    if (m_deactivedDetailHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeactivedDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_deactivedDetail.begin(); itr != m_deactivedDetail.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isServiceLinkedPolicyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsServiceLinkedPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isServiceLinkedPolicy, allocator);
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

