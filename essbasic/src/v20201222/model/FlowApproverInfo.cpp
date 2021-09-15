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

#include <tencentcloud/essbasic/v20201222/model/FlowApproverInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

FlowApproverInfo::FlowApproverInfo() :
    m_userIdHasBeenSet(false),
    m_verifyChannelHasBeenSet(false),
    m_approveStatusHasBeenSet(false),
    m_approveMessageHasBeenSet(false),
    m_approveTimeHasBeenSet(false),
    m_subOrganizationIdHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_componentSealsHasBeenSet(false),
    m_isFullTextHasBeenSet(false),
    m_preReadTimeHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_isLastApproverHasBeenSet(false),
    m_smsTemplateHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_canOffLineHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_signIdHasBeenSet(false)
{
}

CoreInternalOutcome FlowApproverInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("VerifyChannel") && !value["VerifyChannel"].IsNull())
    {
        if (!value["VerifyChannel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.VerifyChannel` is not array type"));

        const rapidjson::Value &tmpValue = value["VerifyChannel"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_verifyChannel.push_back((*itr).GetString());
        }
        m_verifyChannelHasBeenSet = true;
    }

    if (value.HasMember("ApproveStatus") && !value["ApproveStatus"].IsNull())
    {
        if (!value["ApproveStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.ApproveStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approveStatus = value["ApproveStatus"].GetInt64();
        m_approveStatusHasBeenSet = true;
    }

    if (value.HasMember("ApproveMessage") && !value["ApproveMessage"].IsNull())
    {
        if (!value["ApproveMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.ApproveMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveMessage = string(value["ApproveMessage"].GetString());
        m_approveMessageHasBeenSet = true;
    }

    if (value.HasMember("ApproveTime") && !value["ApproveTime"].IsNull())
    {
        if (!value["ApproveTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.ApproveTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approveTime = value["ApproveTime"].GetInt64();
        m_approveTimeHasBeenSet = true;
    }

    if (value.HasMember("SubOrganizationId") && !value["SubOrganizationId"].IsNull())
    {
        if (!value["SubOrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.SubOrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subOrganizationId = string(value["SubOrganizationId"].GetString());
        m_subOrganizationIdHasBeenSet = true;
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

    if (value.HasMember("ComponentSeals") && !value["ComponentSeals"].IsNull())
    {
        if (!value["ComponentSeals"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.ComponentSeals` is not array type"));

        const rapidjson::Value &tmpValue = value["ComponentSeals"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComponentSeal item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_componentSeals.push_back(item);
        }
        m_componentSealsHasBeenSet = true;
    }

    if (value.HasMember("IsFullText") && !value["IsFullText"].IsNull())
    {
        if (!value["IsFullText"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.IsFullText` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFullText = value["IsFullText"].GetBool();
        m_isFullTextHasBeenSet = true;
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

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
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

    if (value.HasMember("IsLastApprover") && !value["IsLastApprover"].IsNull())
    {
        if (!value["IsLastApprover"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.IsLastApprover` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLastApprover = value["IsLastApprover"].GetBool();
        m_isLastApproverHasBeenSet = true;
    }

    if (value.HasMember("SmsTemplate") && !value["SmsTemplate"].IsNull())
    {
        if (!value["SmsTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.SmsTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_smsTemplate.Deserialize(value["SmsTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_smsTemplateHasBeenSet = true;
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

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CanOffLine") && !value["CanOffLine"].IsNull())
    {
        if (!value["CanOffLine"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.CanOffLine` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canOffLine = value["CanOffLine"].GetBool();
        m_canOffLineHasBeenSet = true;
    }

    if (value.HasMember("IdCardType") && !value["IdCardType"].IsNull())
    {
        if (!value["IdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.IdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardType = string(value["IdCardType"].GetString());
        m_idCardTypeHasBeenSet = true;
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

    if (value.HasMember("SignId") && !value["SignId"].IsNull())
    {
        if (!value["SignId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.SignId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signId = string(value["SignId"].GetString());
        m_signIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowApproverInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_verifyChannel.begin(); itr != m_verifyChannel.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_approveStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approveStatus, allocator);
    }

    if (m_approveMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_approveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approveTime, allocator);
    }

    if (m_subOrganizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subOrganizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_componentSealsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentSeals";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_componentSeals.begin(); itr != m_componentSeals.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadline, allocator);
    }

    if (m_isLastApproverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLastApprover";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLastApprover, allocator);
    }

    if (m_smsTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmsTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smsTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_canOffLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanOffLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canOffLine, allocator);
    }

    if (m_idCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_signIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signId.c_str(), allocator).Move(), allocator);
    }

}


string FlowApproverInfo::GetUserId() const
{
    return m_userId;
}

void FlowApproverInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool FlowApproverInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

vector<string> FlowApproverInfo::GetVerifyChannel() const
{
    return m_verifyChannel;
}

void FlowApproverInfo::SetVerifyChannel(const vector<string>& _verifyChannel)
{
    m_verifyChannel = _verifyChannel;
    m_verifyChannelHasBeenSet = true;
}

bool FlowApproverInfo::VerifyChannelHasBeenSet() const
{
    return m_verifyChannelHasBeenSet;
}

int64_t FlowApproverInfo::GetApproveStatus() const
{
    return m_approveStatus;
}

void FlowApproverInfo::SetApproveStatus(const int64_t& _approveStatus)
{
    m_approveStatus = _approveStatus;
    m_approveStatusHasBeenSet = true;
}

bool FlowApproverInfo::ApproveStatusHasBeenSet() const
{
    return m_approveStatusHasBeenSet;
}

string FlowApproverInfo::GetApproveMessage() const
{
    return m_approveMessage;
}

void FlowApproverInfo::SetApproveMessage(const string& _approveMessage)
{
    m_approveMessage = _approveMessage;
    m_approveMessageHasBeenSet = true;
}

bool FlowApproverInfo::ApproveMessageHasBeenSet() const
{
    return m_approveMessageHasBeenSet;
}

int64_t FlowApproverInfo::GetApproveTime() const
{
    return m_approveTime;
}

void FlowApproverInfo::SetApproveTime(const int64_t& _approveTime)
{
    m_approveTime = _approveTime;
    m_approveTimeHasBeenSet = true;
}

bool FlowApproverInfo::ApproveTimeHasBeenSet() const
{
    return m_approveTimeHasBeenSet;
}

string FlowApproverInfo::GetSubOrganizationId() const
{
    return m_subOrganizationId;
}

void FlowApproverInfo::SetSubOrganizationId(const string& _subOrganizationId)
{
    m_subOrganizationId = _subOrganizationId;
    m_subOrganizationIdHasBeenSet = true;
}

bool FlowApproverInfo::SubOrganizationIdHasBeenSet() const
{
    return m_subOrganizationIdHasBeenSet;
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

vector<ComponentSeal> FlowApproverInfo::GetComponentSeals() const
{
    return m_componentSeals;
}

void FlowApproverInfo::SetComponentSeals(const vector<ComponentSeal>& _componentSeals)
{
    m_componentSeals = _componentSeals;
    m_componentSealsHasBeenSet = true;
}

bool FlowApproverInfo::ComponentSealsHasBeenSet() const
{
    return m_componentSealsHasBeenSet;
}

bool FlowApproverInfo::GetIsFullText() const
{
    return m_isFullText;
}

void FlowApproverInfo::SetIsFullText(const bool& _isFullText)
{
    m_isFullText = _isFullText;
    m_isFullTextHasBeenSet = true;
}

bool FlowApproverInfo::IsFullTextHasBeenSet() const
{
    return m_isFullTextHasBeenSet;
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

bool FlowApproverInfo::GetIsLastApprover() const
{
    return m_isLastApprover;
}

void FlowApproverInfo::SetIsLastApprover(const bool& _isLastApprover)
{
    m_isLastApprover = _isLastApprover;
    m_isLastApproverHasBeenSet = true;
}

bool FlowApproverInfo::IsLastApproverHasBeenSet() const
{
    return m_isLastApproverHasBeenSet;
}

SmsTemplate FlowApproverInfo::GetSmsTemplate() const
{
    return m_smsTemplate;
}

void FlowApproverInfo::SetSmsTemplate(const SmsTemplate& _smsTemplate)
{
    m_smsTemplate = _smsTemplate;
    m_smsTemplateHasBeenSet = true;
}

bool FlowApproverInfo::SmsTemplateHasBeenSet() const
{
    return m_smsTemplateHasBeenSet;
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

bool FlowApproverInfo::GetCanOffLine() const
{
    return m_canOffLine;
}

void FlowApproverInfo::SetCanOffLine(const bool& _canOffLine)
{
    m_canOffLine = _canOffLine;
    m_canOffLineHasBeenSet = true;
}

bool FlowApproverInfo::CanOffLineHasBeenSet() const
{
    return m_canOffLineHasBeenSet;
}

string FlowApproverInfo::GetIdCardType() const
{
    return m_idCardType;
}

void FlowApproverInfo::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool FlowApproverInfo::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
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

string FlowApproverInfo::GetSignId() const
{
    return m_signId;
}

void FlowApproverInfo::SetSignId(const string& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool FlowApproverInfo::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}

