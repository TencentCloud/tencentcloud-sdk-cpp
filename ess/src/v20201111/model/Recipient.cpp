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

#include <tencentcloud/ess/v20201111/model/Recipient.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

Recipient::Recipient() :
    m_recipientIdHasBeenSet(false),
    m_recipientTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_requireValidationHasBeenSet(false),
    m_requireSignHasBeenSet(false),
    m_routingOrderHasBeenSet(false),
    m_requireDeliveryHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_deliveryMethodHasBeenSet(false),
    m_recipientExtraHasBeenSet(false),
    m_approverVerifyTypesHasBeenSet(false),
    m_approverSignTypesHasBeenSet(false),
    m_noTransferHasBeenSet(false)
{
}

CoreInternalOutcome Recipient::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecipientId") && !value["RecipientId"].IsNull())
    {
        if (!value["RecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Recipient.RecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recipientId = string(value["RecipientId"].GetString());
        m_recipientIdHasBeenSet = true;
    }

    if (value.HasMember("RecipientType") && !value["RecipientType"].IsNull())
    {
        if (!value["RecipientType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Recipient.RecipientType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recipientType = string(value["RecipientType"].GetString());
        m_recipientTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Recipient.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Recipient.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("RequireValidation") && !value["RequireValidation"].IsNull())
    {
        if (!value["RequireValidation"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Recipient.RequireValidation` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_requireValidation = value["RequireValidation"].GetBool();
        m_requireValidationHasBeenSet = true;
    }

    if (value.HasMember("RequireSign") && !value["RequireSign"].IsNull())
    {
        if (!value["RequireSign"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Recipient.RequireSign` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_requireSign = value["RequireSign"].GetBool();
        m_requireSignHasBeenSet = true;
    }

    if (value.HasMember("RoutingOrder") && !value["RoutingOrder"].IsNull())
    {
        if (!value["RoutingOrder"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Recipient.RoutingOrder` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_routingOrder = value["RoutingOrder"].GetInt64();
        m_routingOrderHasBeenSet = true;
    }

    if (value.HasMember("RequireDelivery") && !value["RequireDelivery"].IsNull())
    {
        if (!value["RequireDelivery"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Recipient.RequireDelivery` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_requireDelivery = value["RequireDelivery"].GetBool();
        m_requireDeliveryHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Recipient.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Recipient.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Recipient.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("DeliveryMethod") && !value["DeliveryMethod"].IsNull())
    {
        if (!value["DeliveryMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Recipient.DeliveryMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryMethod = string(value["DeliveryMethod"].GetString());
        m_deliveryMethodHasBeenSet = true;
    }

    if (value.HasMember("RecipientExtra") && !value["RecipientExtra"].IsNull())
    {
        if (!value["RecipientExtra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Recipient.RecipientExtra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recipientExtra = string(value["RecipientExtra"].GetString());
        m_recipientExtraHasBeenSet = true;
    }

    if (value.HasMember("ApproverVerifyTypes") && !value["ApproverVerifyTypes"].IsNull())
    {
        if (!value["ApproverVerifyTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Recipient.ApproverVerifyTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["ApproverVerifyTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_approverVerifyTypes.push_back((*itr).GetInt64());
        }
        m_approverVerifyTypesHasBeenSet = true;
    }

    if (value.HasMember("ApproverSignTypes") && !value["ApproverSignTypes"].IsNull())
    {
        if (!value["ApproverSignTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Recipient.ApproverSignTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["ApproverSignTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_approverSignTypes.push_back((*itr).GetInt64());
        }
        m_approverSignTypesHasBeenSet = true;
    }

    if (value.HasMember("NoTransfer") && !value["NoTransfer"].IsNull())
    {
        if (!value["NoTransfer"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Recipient.NoTransfer` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noTransfer = value["NoTransfer"].GetBool();
        m_noTransferHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Recipient::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_recipientTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recipientType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_requireValidationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequireValidation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requireValidation, allocator);
    }

    if (m_requireSignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequireSign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requireSign, allocator);
    }

    if (m_routingOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routingOrder, allocator);
    }

    if (m_requireDeliveryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequireDelivery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requireDelivery, allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_deliveryMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliveryMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_recipientExtraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientExtra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recipientExtra.c_str(), allocator).Move(), allocator);
    }

    if (m_approverVerifyTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverVerifyTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_approverVerifyTypes.begin(); itr != m_approverVerifyTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_approverSignTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverSignTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_approverSignTypes.begin(); itr != m_approverSignTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_noTransferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoTransfer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noTransfer, allocator);
    }

}


string Recipient::GetRecipientId() const
{
    return m_recipientId;
}

void Recipient::SetRecipientId(const string& _recipientId)
{
    m_recipientId = _recipientId;
    m_recipientIdHasBeenSet = true;
}

bool Recipient::RecipientIdHasBeenSet() const
{
    return m_recipientIdHasBeenSet;
}

string Recipient::GetRecipientType() const
{
    return m_recipientType;
}

void Recipient::SetRecipientType(const string& _recipientType)
{
    m_recipientType = _recipientType;
    m_recipientTypeHasBeenSet = true;
}

bool Recipient::RecipientTypeHasBeenSet() const
{
    return m_recipientTypeHasBeenSet;
}

string Recipient::GetDescription() const
{
    return m_description;
}

void Recipient::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Recipient::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Recipient::GetRoleName() const
{
    return m_roleName;
}

void Recipient::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool Recipient::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

bool Recipient::GetRequireValidation() const
{
    return m_requireValidation;
}

void Recipient::SetRequireValidation(const bool& _requireValidation)
{
    m_requireValidation = _requireValidation;
    m_requireValidationHasBeenSet = true;
}

bool Recipient::RequireValidationHasBeenSet() const
{
    return m_requireValidationHasBeenSet;
}

bool Recipient::GetRequireSign() const
{
    return m_requireSign;
}

void Recipient::SetRequireSign(const bool& _requireSign)
{
    m_requireSign = _requireSign;
    m_requireSignHasBeenSet = true;
}

bool Recipient::RequireSignHasBeenSet() const
{
    return m_requireSignHasBeenSet;
}

int64_t Recipient::GetRoutingOrder() const
{
    return m_routingOrder;
}

void Recipient::SetRoutingOrder(const int64_t& _routingOrder)
{
    m_routingOrder = _routingOrder;
    m_routingOrderHasBeenSet = true;
}

bool Recipient::RoutingOrderHasBeenSet() const
{
    return m_routingOrderHasBeenSet;
}

bool Recipient::GetRequireDelivery() const
{
    return m_requireDelivery;
}

void Recipient::SetRequireDelivery(const bool& _requireDelivery)
{
    m_requireDelivery = _requireDelivery;
    m_requireDeliveryHasBeenSet = true;
}

bool Recipient::RequireDeliveryHasBeenSet() const
{
    return m_requireDeliveryHasBeenSet;
}

string Recipient::GetEmail() const
{
    return m_email;
}

void Recipient::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool Recipient::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string Recipient::GetMobile() const
{
    return m_mobile;
}

void Recipient::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool Recipient::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string Recipient::GetUserId() const
{
    return m_userId;
}

void Recipient::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool Recipient::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string Recipient::GetDeliveryMethod() const
{
    return m_deliveryMethod;
}

void Recipient::SetDeliveryMethod(const string& _deliveryMethod)
{
    m_deliveryMethod = _deliveryMethod;
    m_deliveryMethodHasBeenSet = true;
}

bool Recipient::DeliveryMethodHasBeenSet() const
{
    return m_deliveryMethodHasBeenSet;
}

string Recipient::GetRecipientExtra() const
{
    return m_recipientExtra;
}

void Recipient::SetRecipientExtra(const string& _recipientExtra)
{
    m_recipientExtra = _recipientExtra;
    m_recipientExtraHasBeenSet = true;
}

bool Recipient::RecipientExtraHasBeenSet() const
{
    return m_recipientExtraHasBeenSet;
}

vector<int64_t> Recipient::GetApproverVerifyTypes() const
{
    return m_approverVerifyTypes;
}

void Recipient::SetApproverVerifyTypes(const vector<int64_t>& _approverVerifyTypes)
{
    m_approverVerifyTypes = _approverVerifyTypes;
    m_approverVerifyTypesHasBeenSet = true;
}

bool Recipient::ApproverVerifyTypesHasBeenSet() const
{
    return m_approverVerifyTypesHasBeenSet;
}

vector<int64_t> Recipient::GetApproverSignTypes() const
{
    return m_approverSignTypes;
}

void Recipient::SetApproverSignTypes(const vector<int64_t>& _approverSignTypes)
{
    m_approverSignTypes = _approverSignTypes;
    m_approverSignTypesHasBeenSet = true;
}

bool Recipient::ApproverSignTypesHasBeenSet() const
{
    return m_approverSignTypesHasBeenSet;
}

bool Recipient::GetNoTransfer() const
{
    return m_noTransfer;
}

void Recipient::SetNoTransfer(const bool& _noTransfer)
{
    m_noTransfer = _noTransfer;
    m_noTransferHasBeenSet = true;
}

bool Recipient::NoTransferHasBeenSet() const
{
    return m_noTransferHasBeenSet;
}

