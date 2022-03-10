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

#include <tencentcloud/ess/v20201111/model/FlowCreateApprover.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FlowCreateApprover::FlowCreateApprover() :
    m_approverTypeHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_requiredHasBeenSet(false),
    m_approverNameHasBeenSet(false),
    m_approverMobileHasBeenSet(false),
    m_approverIdCardNumberHasBeenSet(false),
    m_approverIdCardTypeHasBeenSet(false),
    m_recipientIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_isFullTextHasBeenSet(false),
    m_preReadTimeHasBeenSet(false),
    m_notifyTypeHasBeenSet(false)
{
}

CoreInternalOutcome FlowCreateApprover::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApproverType") && !value["ApproverType"].IsNull())
    {
        if (!value["ApproverType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.ApproverType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approverType = value["ApproverType"].GetInt64();
        m_approverTypeHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("Required") && !value["Required"].IsNull())
    {
        if (!value["Required"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.Required` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_required = value["Required"].GetBool();
        m_requiredHasBeenSet = true;
    }

    if (value.HasMember("ApproverName") && !value["ApproverName"].IsNull())
    {
        if (!value["ApproverName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.ApproverName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverName = string(value["ApproverName"].GetString());
        m_approverNameHasBeenSet = true;
    }

    if (value.HasMember("ApproverMobile") && !value["ApproverMobile"].IsNull())
    {
        if (!value["ApproverMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.ApproverMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverMobile = string(value["ApproverMobile"].GetString());
        m_approverMobileHasBeenSet = true;
    }

    if (value.HasMember("ApproverIdCardNumber") && !value["ApproverIdCardNumber"].IsNull())
    {
        if (!value["ApproverIdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.ApproverIdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverIdCardNumber = string(value["ApproverIdCardNumber"].GetString());
        m_approverIdCardNumberHasBeenSet = true;
    }

    if (value.HasMember("ApproverIdCardType") && !value["ApproverIdCardType"].IsNull())
    {
        if (!value["ApproverIdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.ApproverIdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverIdCardType = string(value["ApproverIdCardType"].GetString());
        m_approverIdCardTypeHasBeenSet = true;
    }

    if (value.HasMember("RecipientId") && !value["RecipientId"].IsNull())
    {
        if (!value["RecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.RecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recipientId = string(value["RecipientId"].GetString());
        m_recipientIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("IsFullText") && !value["IsFullText"].IsNull())
    {
        if (!value["IsFullText"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.IsFullText` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFullText = value["IsFullText"].GetBool();
        m_isFullTextHasBeenSet = true;
    }

    if (value.HasMember("PreReadTime") && !value["PreReadTime"].IsNull())
    {
        if (!value["PreReadTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.PreReadTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_preReadTime = value["PreReadTime"].GetUint64();
        m_preReadTimeHasBeenSet = true;
    }

    if (value.HasMember("NotifyType") && !value["NotifyType"].IsNull())
    {
        if (!value["NotifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.NotifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyType = string(value["NotifyType"].GetString());
        m_notifyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowCreateApprover::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approverType, allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_requiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Required";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_required, allocator);
    }

    if (m_approverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverName.c_str(), allocator).Move(), allocator);
    }

    if (m_approverMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverMobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_approverIdCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverIdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverIdCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_approverIdCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverIdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverIdCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_recipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_isFullTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFullText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFullText, allocator);
    }

    if (m_preReadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreReadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preReadTime, allocator);
    }

    if (m_notifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notifyType.c_str(), allocator).Move(), allocator);
    }

}


int64_t FlowCreateApprover::GetApproverType() const
{
    return m_approverType;
}

void FlowCreateApprover::SetApproverType(const int64_t& _approverType)
{
    m_approverType = _approverType;
    m_approverTypeHasBeenSet = true;
}

bool FlowCreateApprover::ApproverTypeHasBeenSet() const
{
    return m_approverTypeHasBeenSet;
}

string FlowCreateApprover::GetOrganizationName() const
{
    return m_organizationName;
}

void FlowCreateApprover::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool FlowCreateApprover::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

bool FlowCreateApprover::GetRequired() const
{
    return m_required;
}

void FlowCreateApprover::SetRequired(const bool& _required)
{
    m_required = _required;
    m_requiredHasBeenSet = true;
}

bool FlowCreateApprover::RequiredHasBeenSet() const
{
    return m_requiredHasBeenSet;
}

string FlowCreateApprover::GetApproverName() const
{
    return m_approverName;
}

void FlowCreateApprover::SetApproverName(const string& _approverName)
{
    m_approverName = _approverName;
    m_approverNameHasBeenSet = true;
}

bool FlowCreateApprover::ApproverNameHasBeenSet() const
{
    return m_approverNameHasBeenSet;
}

string FlowCreateApprover::GetApproverMobile() const
{
    return m_approverMobile;
}

void FlowCreateApprover::SetApproverMobile(const string& _approverMobile)
{
    m_approverMobile = _approverMobile;
    m_approverMobileHasBeenSet = true;
}

bool FlowCreateApprover::ApproverMobileHasBeenSet() const
{
    return m_approverMobileHasBeenSet;
}

string FlowCreateApprover::GetApproverIdCardNumber() const
{
    return m_approverIdCardNumber;
}

void FlowCreateApprover::SetApproverIdCardNumber(const string& _approverIdCardNumber)
{
    m_approverIdCardNumber = _approverIdCardNumber;
    m_approverIdCardNumberHasBeenSet = true;
}

bool FlowCreateApprover::ApproverIdCardNumberHasBeenSet() const
{
    return m_approverIdCardNumberHasBeenSet;
}

string FlowCreateApprover::GetApproverIdCardType() const
{
    return m_approverIdCardType;
}

void FlowCreateApprover::SetApproverIdCardType(const string& _approverIdCardType)
{
    m_approverIdCardType = _approverIdCardType;
    m_approverIdCardTypeHasBeenSet = true;
}

bool FlowCreateApprover::ApproverIdCardTypeHasBeenSet() const
{
    return m_approverIdCardTypeHasBeenSet;
}

string FlowCreateApprover::GetRecipientId() const
{
    return m_recipientId;
}

void FlowCreateApprover::SetRecipientId(const string& _recipientId)
{
    m_recipientId = _recipientId;
    m_recipientIdHasBeenSet = true;
}

bool FlowCreateApprover::RecipientIdHasBeenSet() const
{
    return m_recipientIdHasBeenSet;
}

string FlowCreateApprover::GetUserId() const
{
    return m_userId;
}

void FlowCreateApprover::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool FlowCreateApprover::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

bool FlowCreateApprover::GetIsFullText() const
{
    return m_isFullText;
}

void FlowCreateApprover::SetIsFullText(const bool& _isFullText)
{
    m_isFullText = _isFullText;
    m_isFullTextHasBeenSet = true;
}

bool FlowCreateApprover::IsFullTextHasBeenSet() const
{
    return m_isFullTextHasBeenSet;
}

uint64_t FlowCreateApprover::GetPreReadTime() const
{
    return m_preReadTime;
}

void FlowCreateApprover::SetPreReadTime(const uint64_t& _preReadTime)
{
    m_preReadTime = _preReadTime;
    m_preReadTimeHasBeenSet = true;
}

bool FlowCreateApprover::PreReadTimeHasBeenSet() const
{
    return m_preReadTimeHasBeenSet;
}

string FlowCreateApprover::GetNotifyType() const
{
    return m_notifyType;
}

void FlowCreateApprover::SetNotifyType(const string& _notifyType)
{
    m_notifyType = _notifyType;
    m_notifyTypeHasBeenSet = true;
}

bool FlowCreateApprover::NotifyTypeHasBeenSet() const
{
    return m_notifyTypeHasBeenSet;
}

