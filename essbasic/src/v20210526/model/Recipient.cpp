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

#include <tencentcloud/essbasic/v20210526/model/Recipient.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

Recipient::Recipient() :
    m_recipientIdHasBeenSet(false),
    m_recipientTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_requireValidationHasBeenSet(false),
    m_requireSignHasBeenSet(false),
    m_signTypeHasBeenSet(false),
    m_routingOrderHasBeenSet(false),
    m_isPromoterHasBeenSet(false),
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

    if (value.HasMember("SignType") && !value["SignType"].IsNull())
    {
        if (!value["SignType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Recipient.SignType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_signType = value["SignType"].GetInt64();
        m_signTypeHasBeenSet = true;
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

    if (value.HasMember("IsPromoter") && !value["IsPromoter"].IsNull())
    {
        if (!value["IsPromoter"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Recipient.IsPromoter` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPromoter = value["IsPromoter"].GetBool();
        m_isPromoterHasBeenSet = true;
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

    if (m_signTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signType, allocator);
    }

    if (m_routingOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routingOrder, allocator);
    }

    if (m_isPromoterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPromoter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPromoter, allocator);
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

int64_t Recipient::GetSignType() const
{
    return m_signType;
}

void Recipient::SetSignType(const int64_t& _signType)
{
    m_signType = _signType;
    m_signTypeHasBeenSet = true;
}

bool Recipient::SignTypeHasBeenSet() const
{
    return m_signTypeHasBeenSet;
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

bool Recipient::GetIsPromoter() const
{
    return m_isPromoter;
}

void Recipient::SetIsPromoter(const bool& _isPromoter)
{
    m_isPromoter = _isPromoter;
    m_isPromoterHasBeenSet = true;
}

bool Recipient::IsPromoterHasBeenSet() const
{
    return m_isPromoterHasBeenSet;
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

