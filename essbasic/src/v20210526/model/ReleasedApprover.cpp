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

#include <tencentcloud/essbasic/v20210526/model/ReleasedApprover.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ReleasedApprover::ReleasedApprover() :
    m_approverNumberHasBeenSet(false),
    m_approverTypeHasBeenSet(false),
    m_releasedApproverRecipientIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_organizationOpenIdHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_approverSignComponentTypeHasBeenSet(false),
    m_approverSignRoleHasBeenSet(false),
    m_approverSignSealIdHasBeenSet(false)
{
}

CoreInternalOutcome ReleasedApprover::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApproverNumber") && !value["ApproverNumber"].IsNull())
    {
        if (!value["ApproverNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.ApproverNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_approverNumber = value["ApproverNumber"].GetUint64();
        m_approverNumberHasBeenSet = true;
    }

    if (value.HasMember("ApproverType") && !value["ApproverType"].IsNull())
    {
        if (!value["ApproverType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.ApproverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverType = string(value["ApproverType"].GetString());
        m_approverTypeHasBeenSet = true;
    }

    if (value.HasMember("ReleasedApproverRecipientId") && !value["ReleasedApproverRecipientId"].IsNull())
    {
        if (!value["ReleasedApproverRecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.ReleasedApproverRecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releasedApproverRecipientId = string(value["ReleasedApproverRecipientId"].GetString());
        m_releasedApproverRecipientIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IdCardType") && !value["IdCardType"].IsNull())
    {
        if (!value["IdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.IdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardType = string(value["IdCardType"].GetString());
        m_idCardTypeHasBeenSet = true;
    }

    if (value.HasMember("IdCardNumber") && !value["IdCardNumber"].IsNull())
    {
        if (!value["IdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.IdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardNumber = string(value["IdCardNumber"].GetString());
        m_idCardNumberHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("OrganizationOpenId") && !value["OrganizationOpenId"].IsNull())
    {
        if (!value["OrganizationOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.OrganizationOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationOpenId = string(value["OrganizationOpenId"].GetString());
        m_organizationOpenIdHasBeenSet = true;
    }

    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("ApproverSignComponentType") && !value["ApproverSignComponentType"].IsNull())
    {
        if (!value["ApproverSignComponentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.ApproverSignComponentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverSignComponentType = string(value["ApproverSignComponentType"].GetString());
        m_approverSignComponentTypeHasBeenSet = true;
    }

    if (value.HasMember("ApproverSignRole") && !value["ApproverSignRole"].IsNull())
    {
        if (!value["ApproverSignRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.ApproverSignRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverSignRole = string(value["ApproverSignRole"].GetString());
        m_approverSignRoleHasBeenSet = true;
    }

    if (value.HasMember("ApproverSignSealId") && !value["ApproverSignSealId"].IsNull())
    {
        if (!value["ApproverSignSealId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.ApproverSignSealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverSignSealId = string(value["ApproverSignSealId"].GetString());
        m_approverSignSealIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReleasedApprover::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approverNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approverNumber, allocator);
    }

    if (m_approverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverType.c_str(), allocator).Move(), allocator);
    }

    if (m_releasedApproverRecipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleasedApproverRecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releasedApproverRecipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardType.c_str(), allocator).Move(), allocator);
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

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_approverSignComponentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverSignComponentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverSignComponentType.c_str(), allocator).Move(), allocator);
    }

    if (m_approverSignRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverSignRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverSignRole.c_str(), allocator).Move(), allocator);
    }

    if (m_approverSignSealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverSignSealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverSignSealId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ReleasedApprover::GetApproverNumber() const
{
    return m_approverNumber;
}

void ReleasedApprover::SetApproverNumber(const uint64_t& _approverNumber)
{
    m_approverNumber = _approverNumber;
    m_approverNumberHasBeenSet = true;
}

bool ReleasedApprover::ApproverNumberHasBeenSet() const
{
    return m_approverNumberHasBeenSet;
}

string ReleasedApprover::GetApproverType() const
{
    return m_approverType;
}

void ReleasedApprover::SetApproverType(const string& _approverType)
{
    m_approverType = _approverType;
    m_approverTypeHasBeenSet = true;
}

bool ReleasedApprover::ApproverTypeHasBeenSet() const
{
    return m_approverTypeHasBeenSet;
}

string ReleasedApprover::GetReleasedApproverRecipientId() const
{
    return m_releasedApproverRecipientId;
}

void ReleasedApprover::SetReleasedApproverRecipientId(const string& _releasedApproverRecipientId)
{
    m_releasedApproverRecipientId = _releasedApproverRecipientId;
    m_releasedApproverRecipientIdHasBeenSet = true;
}

bool ReleasedApprover::ReleasedApproverRecipientIdHasBeenSet() const
{
    return m_releasedApproverRecipientIdHasBeenSet;
}

string ReleasedApprover::GetName() const
{
    return m_name;
}

void ReleasedApprover::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ReleasedApprover::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ReleasedApprover::GetIdCardType() const
{
    return m_idCardType;
}

void ReleasedApprover::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool ReleasedApprover::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}

string ReleasedApprover::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void ReleasedApprover::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool ReleasedApprover::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string ReleasedApprover::GetMobile() const
{
    return m_mobile;
}

void ReleasedApprover::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool ReleasedApprover::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string ReleasedApprover::GetOrganizationName() const
{
    return m_organizationName;
}

void ReleasedApprover::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool ReleasedApprover::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string ReleasedApprover::GetOrganizationOpenId() const
{
    return m_organizationOpenId;
}

void ReleasedApprover::SetOrganizationOpenId(const string& _organizationOpenId)
{
    m_organizationOpenId = _organizationOpenId;
    m_organizationOpenIdHasBeenSet = true;
}

bool ReleasedApprover::OrganizationOpenIdHasBeenSet() const
{
    return m_organizationOpenIdHasBeenSet;
}

string ReleasedApprover::GetOpenId() const
{
    return m_openId;
}

void ReleasedApprover::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool ReleasedApprover::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string ReleasedApprover::GetApproverSignComponentType() const
{
    return m_approverSignComponentType;
}

void ReleasedApprover::SetApproverSignComponentType(const string& _approverSignComponentType)
{
    m_approverSignComponentType = _approverSignComponentType;
    m_approverSignComponentTypeHasBeenSet = true;
}

bool ReleasedApprover::ApproverSignComponentTypeHasBeenSet() const
{
    return m_approverSignComponentTypeHasBeenSet;
}

string ReleasedApprover::GetApproverSignRole() const
{
    return m_approverSignRole;
}

void ReleasedApprover::SetApproverSignRole(const string& _approverSignRole)
{
    m_approverSignRole = _approverSignRole;
    m_approverSignRoleHasBeenSet = true;
}

bool ReleasedApprover::ApproverSignRoleHasBeenSet() const
{
    return m_approverSignRoleHasBeenSet;
}

string ReleasedApprover::GetApproverSignSealId() const
{
    return m_approverSignSealId;
}

void ReleasedApprover::SetApproverSignSealId(const string& _approverSignSealId)
{
    m_approverSignSealId = _approverSignSealId;
    m_approverSignSealIdHasBeenSet = true;
}

bool ReleasedApprover::ApproverSignSealIdHasBeenSet() const
{
    return m_approverSignSealIdHasBeenSet;
}

