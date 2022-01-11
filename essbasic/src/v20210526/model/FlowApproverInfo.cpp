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

#include <tencentcloud/essbasic/v20210526/model/FlowApproverInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

FlowApproverInfo::FlowApproverInfo() :
    m_nameHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_approverTypeHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_preReadTimeHasBeenSet(false),
    m_componentLimitTypeHasBeenSet(false),
    m_recipientIdHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_organizationOpenIdHasBeenSet(false)
{
}

CoreInternalOutcome FlowApproverInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IdCardNumber") && !value["IdCardNumber"].IsNull())
    {
        if (!value["IdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.IdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardNumber = string(value["IdCardNumber"].GetString());
        m_idCardNumberHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("JumpUrl") && !value["JumpUrl"].IsNull())
    {
        if (!value["JumpUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.JumpUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jumpUrl = string(value["JumpUrl"].GetString());
        m_jumpUrlHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.Deadline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = value["Deadline"].GetInt64();
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("ApproverType") && !value["ApproverType"].IsNull())
    {
        if (!value["ApproverType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.ApproverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverType = string(value["ApproverType"].GetString());
        m_approverTypeHasBeenSet = true;
    }

    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("PreReadTime") && !value["PreReadTime"].IsNull())
    {
        if (!value["PreReadTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.PreReadTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_preReadTime = value["PreReadTime"].GetInt64();
        m_preReadTimeHasBeenSet = true;
    }

    if (value.HasMember("ComponentLimitType") && !value["ComponentLimitType"].IsNull())
    {
        if (!value["ComponentLimitType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.ComponentLimitType` is not array type"));

        const rapidjson::Value &tmpValue = value["ComponentLimitType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_componentLimitType.push_back((*itr).GetString());
        }
        m_componentLimitTypeHasBeenSet = true;
    }

    if (value.HasMember("RecipientId") && !value["RecipientId"].IsNull())
    {
        if (!value["RecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.RecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recipientId = string(value["RecipientId"].GetString());
        m_recipientIdHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("OrganizationOpenId") && !value["OrganizationOpenId"].IsNull())
    {
        if (!value["OrganizationOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.OrganizationOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationOpenId = string(value["OrganizationOpenId"].GetString());
        m_organizationOpenIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowApproverInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadline, allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_approverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverType.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_preReadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreReadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preReadTime, allocator);
    }

    if (m_componentLimitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentLimitType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_componentLimitType.begin(); itr != m_componentLimitType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_recipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationOpenId.c_str(), allocator).Move(), allocator);
    }

}


string FlowApproverInfo::GetName() const
{
    return m_name;
}

void FlowApproverInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FlowApproverInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FlowApproverInfo::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void FlowApproverInfo::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool FlowApproverInfo::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string FlowApproverInfo::GetMobile() const
{
    return m_mobile;
}

void FlowApproverInfo::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool FlowApproverInfo::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string FlowApproverInfo::GetJumpUrl() const
{
    return m_jumpUrl;
}

void FlowApproverInfo::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool FlowApproverInfo::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

int64_t FlowApproverInfo::GetDeadline() const
{
    return m_deadline;
}

void FlowApproverInfo::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool FlowApproverInfo::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string FlowApproverInfo::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void FlowApproverInfo::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool FlowApproverInfo::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string FlowApproverInfo::GetApproverType() const
{
    return m_approverType;
}

void FlowApproverInfo::SetApproverType(const string& _approverType)
{
    m_approverType = _approverType;
    m_approverTypeHasBeenSet = true;
}

bool FlowApproverInfo::ApproverTypeHasBeenSet() const
{
    return m_approverTypeHasBeenSet;
}

string FlowApproverInfo::GetOpenId() const
{
    return m_openId;
}

void FlowApproverInfo::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool FlowApproverInfo::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

int64_t FlowApproverInfo::GetPreReadTime() const
{
    return m_preReadTime;
}

void FlowApproverInfo::SetPreReadTime(const int64_t& _preReadTime)
{
    m_preReadTime = _preReadTime;
    m_preReadTimeHasBeenSet = true;
}

bool FlowApproverInfo::PreReadTimeHasBeenSet() const
{
    return m_preReadTimeHasBeenSet;
}

vector<string> FlowApproverInfo::GetComponentLimitType() const
{
    return m_componentLimitType;
}

void FlowApproverInfo::SetComponentLimitType(const vector<string>& _componentLimitType)
{
    m_componentLimitType = _componentLimitType;
    m_componentLimitTypeHasBeenSet = true;
}

bool FlowApproverInfo::ComponentLimitTypeHasBeenSet() const
{
    return m_componentLimitTypeHasBeenSet;
}

string FlowApproverInfo::GetRecipientId() const
{
    return m_recipientId;
}

void FlowApproverInfo::SetRecipientId(const string& _recipientId)
{
    m_recipientId = _recipientId;
    m_recipientIdHasBeenSet = true;
}

bool FlowApproverInfo::RecipientIdHasBeenSet() const
{
    return m_recipientIdHasBeenSet;
}

string FlowApproverInfo::GetOrganizationName() const
{
    return m_organizationName;
}

void FlowApproverInfo::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool FlowApproverInfo::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string FlowApproverInfo::GetOrganizationOpenId() const
{
    return m_organizationOpenId;
}

void FlowApproverInfo::SetOrganizationOpenId(const string& _organizationOpenId)
{
    m_organizationOpenId = _organizationOpenId;
    m_organizationOpenIdHasBeenSet = true;
}

bool FlowApproverInfo::OrganizationOpenIdHasBeenSet() const
{
    return m_organizationOpenIdHasBeenSet;
}

