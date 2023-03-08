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

#include <tencentcloud/essbasic/v20210526/model/CommonFlowApprover.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CommonFlowApprover::CommonFlowApprover() :
    m_notChannelOrganizationHasBeenSet(false),
    m_approverTypeHasBeenSet(false),
    m_organizationIdHasBeenSet(false),
    m_organizationOpenIdHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_approverNameHasBeenSet(false),
    m_approverMobileHasBeenSet(false),
    m_recipientIdHasBeenSet(false),
    m_preReadTimeHasBeenSet(false),
    m_isFullTextHasBeenSet(false),
    m_notifyTypeHasBeenSet(false),
    m_approverOptionHasBeenSet(false)
{
}

CoreInternalOutcome CommonFlowApprover::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NotChannelOrganization") && !value["NotChannelOrganization"].IsNull())
    {
        if (!value["NotChannelOrganization"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CommonFlowApprover.NotChannelOrganization` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_notChannelOrganization = value["NotChannelOrganization"].GetBool();
        m_notChannelOrganizationHasBeenSet = true;
    }

    if (value.HasMember("ApproverType") && !value["ApproverType"].IsNull())
    {
        if (!value["ApproverType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonFlowApprover.ApproverType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approverType = value["ApproverType"].GetInt64();
        m_approverTypeHasBeenSet = true;
    }

    if (value.HasMember("OrganizationId") && !value["OrganizationId"].IsNull())
    {
        if (!value["OrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonFlowApprover.OrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationId = string(value["OrganizationId"].GetString());
        m_organizationIdHasBeenSet = true;
    }

    if (value.HasMember("OrganizationOpenId") && !value["OrganizationOpenId"].IsNull())
    {
        if (!value["OrganizationOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonFlowApprover.OrganizationOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationOpenId = string(value["OrganizationOpenId"].GetString());
        m_organizationOpenIdHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonFlowApprover.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonFlowApprover.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonFlowApprover.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("ApproverName") && !value["ApproverName"].IsNull())
    {
        if (!value["ApproverName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonFlowApprover.ApproverName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverName = string(value["ApproverName"].GetString());
        m_approverNameHasBeenSet = true;
    }

    if (value.HasMember("ApproverMobile") && !value["ApproverMobile"].IsNull())
    {
        if (!value["ApproverMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonFlowApprover.ApproverMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverMobile = string(value["ApproverMobile"].GetString());
        m_approverMobileHasBeenSet = true;
    }

    if (value.HasMember("RecipientId") && !value["RecipientId"].IsNull())
    {
        if (!value["RecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonFlowApprover.RecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recipientId = string(value["RecipientId"].GetString());
        m_recipientIdHasBeenSet = true;
    }

    if (value.HasMember("PreReadTime") && !value["PreReadTime"].IsNull())
    {
        if (!value["PreReadTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonFlowApprover.PreReadTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_preReadTime = value["PreReadTime"].GetInt64();
        m_preReadTimeHasBeenSet = true;
    }

    if (value.HasMember("IsFullText") && !value["IsFullText"].IsNull())
    {
        if (!value["IsFullText"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CommonFlowApprover.IsFullText` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFullText = value["IsFullText"].GetBool();
        m_isFullTextHasBeenSet = true;
    }

    if (value.HasMember("NotifyType") && !value["NotifyType"].IsNull())
    {
        if (!value["NotifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonFlowApprover.NotifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyType = string(value["NotifyType"].GetString());
        m_notifyTypeHasBeenSet = true;
    }

    if (value.HasMember("ApproverOption") && !value["ApproverOption"].IsNull())
    {
        if (!value["ApproverOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CommonFlowApprover.ApproverOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_approverOption.Deserialize(value["ApproverOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_approverOptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonFlowApprover::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_notChannelOrganizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotChannelOrganization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notChannelOrganization, allocator);
    }

    if (m_approverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approverType, allocator);
    }

    if (m_organizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
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

    if (m_recipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_preReadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreReadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preReadTime, allocator);
    }

    if (m_isFullTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFullText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFullText, allocator);
    }

    if (m_notifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_approverOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_approverOption.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool CommonFlowApprover::GetNotChannelOrganization() const
{
    return m_notChannelOrganization;
}

void CommonFlowApprover::SetNotChannelOrganization(const bool& _notChannelOrganization)
{
    m_notChannelOrganization = _notChannelOrganization;
    m_notChannelOrganizationHasBeenSet = true;
}

bool CommonFlowApprover::NotChannelOrganizationHasBeenSet() const
{
    return m_notChannelOrganizationHasBeenSet;
}

int64_t CommonFlowApprover::GetApproverType() const
{
    return m_approverType;
}

void CommonFlowApprover::SetApproverType(const int64_t& _approverType)
{
    m_approverType = _approverType;
    m_approverTypeHasBeenSet = true;
}

bool CommonFlowApprover::ApproverTypeHasBeenSet() const
{
    return m_approverTypeHasBeenSet;
}

string CommonFlowApprover::GetOrganizationId() const
{
    return m_organizationId;
}

void CommonFlowApprover::SetOrganizationId(const string& _organizationId)
{
    m_organizationId = _organizationId;
    m_organizationIdHasBeenSet = true;
}

bool CommonFlowApprover::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}

string CommonFlowApprover::GetOrganizationOpenId() const
{
    return m_organizationOpenId;
}

void CommonFlowApprover::SetOrganizationOpenId(const string& _organizationOpenId)
{
    m_organizationOpenId = _organizationOpenId;
    m_organizationOpenIdHasBeenSet = true;
}

bool CommonFlowApprover::OrganizationOpenIdHasBeenSet() const
{
    return m_organizationOpenIdHasBeenSet;
}

string CommonFlowApprover::GetOrganizationName() const
{
    return m_organizationName;
}

void CommonFlowApprover::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool CommonFlowApprover::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string CommonFlowApprover::GetUserId() const
{
    return m_userId;
}

void CommonFlowApprover::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CommonFlowApprover::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CommonFlowApprover::GetOpenId() const
{
    return m_openId;
}

void CommonFlowApprover::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool CommonFlowApprover::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string CommonFlowApprover::GetApproverName() const
{
    return m_approverName;
}

void CommonFlowApprover::SetApproverName(const string& _approverName)
{
    m_approverName = _approverName;
    m_approverNameHasBeenSet = true;
}

bool CommonFlowApprover::ApproverNameHasBeenSet() const
{
    return m_approverNameHasBeenSet;
}

string CommonFlowApprover::GetApproverMobile() const
{
    return m_approverMobile;
}

void CommonFlowApprover::SetApproverMobile(const string& _approverMobile)
{
    m_approverMobile = _approverMobile;
    m_approverMobileHasBeenSet = true;
}

bool CommonFlowApprover::ApproverMobileHasBeenSet() const
{
    return m_approverMobileHasBeenSet;
}

string CommonFlowApprover::GetRecipientId() const
{
    return m_recipientId;
}

void CommonFlowApprover::SetRecipientId(const string& _recipientId)
{
    m_recipientId = _recipientId;
    m_recipientIdHasBeenSet = true;
}

bool CommonFlowApprover::RecipientIdHasBeenSet() const
{
    return m_recipientIdHasBeenSet;
}

int64_t CommonFlowApprover::GetPreReadTime() const
{
    return m_preReadTime;
}

void CommonFlowApprover::SetPreReadTime(const int64_t& _preReadTime)
{
    m_preReadTime = _preReadTime;
    m_preReadTimeHasBeenSet = true;
}

bool CommonFlowApprover::PreReadTimeHasBeenSet() const
{
    return m_preReadTimeHasBeenSet;
}

bool CommonFlowApprover::GetIsFullText() const
{
    return m_isFullText;
}

void CommonFlowApprover::SetIsFullText(const bool& _isFullText)
{
    m_isFullText = _isFullText;
    m_isFullTextHasBeenSet = true;
}

bool CommonFlowApprover::IsFullTextHasBeenSet() const
{
    return m_isFullTextHasBeenSet;
}

string CommonFlowApprover::GetNotifyType() const
{
    return m_notifyType;
}

void CommonFlowApprover::SetNotifyType(const string& _notifyType)
{
    m_notifyType = _notifyType;
    m_notifyTypeHasBeenSet = true;
}

bool CommonFlowApprover::NotifyTypeHasBeenSet() const
{
    return m_notifyTypeHasBeenSet;
}

CommonApproverOption CommonFlowApprover::GetApproverOption() const
{
    return m_approverOption;
}

void CommonFlowApprover::SetApproverOption(const CommonApproverOption& _approverOption)
{
    m_approverOption = _approverOption;
    m_approverOptionHasBeenSet = true;
}

bool CommonFlowApprover::ApproverOptionHasBeenSet() const
{
    return m_approverOptionHasBeenSet;
}

