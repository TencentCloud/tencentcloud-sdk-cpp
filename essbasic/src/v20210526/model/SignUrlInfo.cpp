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

#include <tencentcloud/essbasic/v20210526/model/SignUrlInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

SignUrlInfo::SignUrlInfo() :
    m_signUrlHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_signOrderHasBeenSet(false),
    m_signIdHasBeenSet(false),
    m_customUserIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_approverTypeHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_flowGroupIdHasBeenSet(false),
    m_signQrcodeUrlHasBeenSet(false)
{
}

CoreInternalOutcome SignUrlInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SignUrl") && !value["SignUrl"].IsNull())
    {
        if (!value["SignUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrlInfo.SignUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signUrl = string(value["SignUrl"].GetString());
        m_signUrlHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrlInfo.Deadline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = value["Deadline"].GetInt64();
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("SignOrder") && !value["SignOrder"].IsNull())
    {
        if (!value["SignOrder"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrlInfo.SignOrder` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_signOrder = value["SignOrder"].GetInt64();
        m_signOrderHasBeenSet = true;
    }

    if (value.HasMember("SignId") && !value["SignId"].IsNull())
    {
        if (!value["SignId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrlInfo.SignId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signId = string(value["SignId"].GetString());
        m_signIdHasBeenSet = true;
    }

    if (value.HasMember("CustomUserId") && !value["CustomUserId"].IsNull())
    {
        if (!value["CustomUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrlInfo.CustomUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customUserId = string(value["CustomUserId"].GetString());
        m_customUserIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrlInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrlInfo.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrlInfo.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("ApproverType") && !value["ApproverType"].IsNull())
    {
        if (!value["ApproverType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrlInfo.ApproverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverType = string(value["ApproverType"].GetString());
        m_approverTypeHasBeenSet = true;
    }

    if (value.HasMember("IdCardNumber") && !value["IdCardNumber"].IsNull())
    {
        if (!value["IdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrlInfo.IdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardNumber = string(value["IdCardNumber"].GetString());
        m_idCardNumberHasBeenSet = true;
    }

    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrlInfo.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrlInfo.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("FlowGroupId") && !value["FlowGroupId"].IsNull())
    {
        if (!value["FlowGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrlInfo.FlowGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowGroupId = string(value["FlowGroupId"].GetString());
        m_flowGroupIdHasBeenSet = true;
    }

    if (value.HasMember("SignQrcodeUrl") && !value["SignQrcodeUrl"].IsNull())
    {
        if (!value["SignQrcodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrlInfo.SignQrcodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signQrcodeUrl = string(value["SignQrcodeUrl"].GetString());
        m_signQrcodeUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SignUrlInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_signUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadline, allocator);
    }

    if (m_signOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signOrder, allocator);
    }

    if (m_signIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signId.c_str(), allocator).Move(), allocator);
    }

    if (m_customUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_approverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverType.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_signQrcodeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignQrcodeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signQrcodeUrl.c_str(), allocator).Move(), allocator);
    }

}


string SignUrlInfo::GetSignUrl() const
{
    return m_signUrl;
}

void SignUrlInfo::SetSignUrl(const string& _signUrl)
{
    m_signUrl = _signUrl;
    m_signUrlHasBeenSet = true;
}

bool SignUrlInfo::SignUrlHasBeenSet() const
{
    return m_signUrlHasBeenSet;
}

int64_t SignUrlInfo::GetDeadline() const
{
    return m_deadline;
}

void SignUrlInfo::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool SignUrlInfo::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

int64_t SignUrlInfo::GetSignOrder() const
{
    return m_signOrder;
}

void SignUrlInfo::SetSignOrder(const int64_t& _signOrder)
{
    m_signOrder = _signOrder;
    m_signOrderHasBeenSet = true;
}

bool SignUrlInfo::SignOrderHasBeenSet() const
{
    return m_signOrderHasBeenSet;
}

string SignUrlInfo::GetSignId() const
{
    return m_signId;
}

void SignUrlInfo::SetSignId(const string& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool SignUrlInfo::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}

string SignUrlInfo::GetCustomUserId() const
{
    return m_customUserId;
}

void SignUrlInfo::SetCustomUserId(const string& _customUserId)
{
    m_customUserId = _customUserId;
    m_customUserIdHasBeenSet = true;
}

bool SignUrlInfo::CustomUserIdHasBeenSet() const
{
    return m_customUserIdHasBeenSet;
}

string SignUrlInfo::GetName() const
{
    return m_name;
}

void SignUrlInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SignUrlInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SignUrlInfo::GetMobile() const
{
    return m_mobile;
}

void SignUrlInfo::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool SignUrlInfo::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string SignUrlInfo::GetOrganizationName() const
{
    return m_organizationName;
}

void SignUrlInfo::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool SignUrlInfo::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string SignUrlInfo::GetApproverType() const
{
    return m_approverType;
}

void SignUrlInfo::SetApproverType(const string& _approverType)
{
    m_approverType = _approverType;
    m_approverTypeHasBeenSet = true;
}

bool SignUrlInfo::ApproverTypeHasBeenSet() const
{
    return m_approverTypeHasBeenSet;
}

string SignUrlInfo::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void SignUrlInfo::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool SignUrlInfo::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string SignUrlInfo::GetFlowId() const
{
    return m_flowId;
}

void SignUrlInfo::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool SignUrlInfo::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string SignUrlInfo::GetOpenId() const
{
    return m_openId;
}

void SignUrlInfo::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool SignUrlInfo::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string SignUrlInfo::GetFlowGroupId() const
{
    return m_flowGroupId;
}

void SignUrlInfo::SetFlowGroupId(const string& _flowGroupId)
{
    m_flowGroupId = _flowGroupId;
    m_flowGroupIdHasBeenSet = true;
}

bool SignUrlInfo::FlowGroupIdHasBeenSet() const
{
    return m_flowGroupIdHasBeenSet;
}

string SignUrlInfo::GetSignQrcodeUrl() const
{
    return m_signQrcodeUrl;
}

void SignUrlInfo::SetSignQrcodeUrl(const string& _signQrcodeUrl)
{
    m_signQrcodeUrl = _signQrcodeUrl;
    m_signQrcodeUrlHasBeenSet = true;
}

bool SignUrlInfo::SignQrcodeUrlHasBeenSet() const
{
    return m_signQrcodeUrlHasBeenSet;
}

