/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/rce/v20260130/model/InvitationEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

InvitationEvent::InvitationEvent() :
    m_inviteeUserIdHasBeenSet(false),
    m_promotionIdHasBeenSet(false),
    m_promotionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_inviteePhoneHasBeenSet(false),
    m_invitationCodeHasBeenSet(false),
    m_invitationUrlHasBeenSet(false),
    m_invitationChannelHasBeenSet(false),
    m_custHasBeenSet(false)
{
}

CoreInternalOutcome InvitationEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InviteeUserId") && !value["InviteeUserId"].IsNull())
    {
        if (!value["InviteeUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvitationEvent.InviteeUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inviteeUserId = string(value["InviteeUserId"].GetString());
        m_inviteeUserIdHasBeenSet = true;
    }

    if (value.HasMember("PromotionId") && !value["PromotionId"].IsNull())
    {
        if (!value["PromotionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvitationEvent.PromotionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promotionId = string(value["PromotionId"].GetString());
        m_promotionIdHasBeenSet = true;
    }

    if (value.HasMember("PromotionName") && !value["PromotionName"].IsNull())
    {
        if (!value["PromotionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvitationEvent.PromotionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promotionName = string(value["PromotionName"].GetString());
        m_promotionNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvitationEvent.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("InviteePhone") && !value["InviteePhone"].IsNull())
    {
        if (!value["InviteePhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvitationEvent.InviteePhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inviteePhone = string(value["InviteePhone"].GetString());
        m_inviteePhoneHasBeenSet = true;
    }

    if (value.HasMember("InvitationCode") && !value["InvitationCode"].IsNull())
    {
        if (!value["InvitationCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvitationEvent.InvitationCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invitationCode = string(value["InvitationCode"].GetString());
        m_invitationCodeHasBeenSet = true;
    }

    if (value.HasMember("InvitationUrl") && !value["InvitationUrl"].IsNull())
    {
        if (!value["InvitationUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvitationEvent.InvitationUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invitationUrl = string(value["InvitationUrl"].GetString());
        m_invitationUrlHasBeenSet = true;
    }

    if (value.HasMember("InvitationChannel") && !value["InvitationChannel"].IsNull())
    {
        if (!value["InvitationChannel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvitationEvent.InvitationChannel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invitationChannel = string(value["InvitationChannel"].GetString());
        m_invitationChannelHasBeenSet = true;
    }

    if (value.HasMember("Cust") && !value["Cust"].IsNull())
    {
        if (!value["Cust"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvitationEvent.Cust` is not array type"));

        const rapidjson::Value &tmpValue = value["Cust"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Cust item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cust.push_back(item);
        }
        m_custHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvitationEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inviteeUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InviteeUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inviteeUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_promotionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromotionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promotionId.c_str(), allocator).Move(), allocator);
    }

    if (m_promotionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromotionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promotionName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_inviteePhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InviteePhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inviteePhone.c_str(), allocator).Move(), allocator);
    }

    if (m_invitationCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvitationCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invitationCode.c_str(), allocator).Move(), allocator);
    }

    if (m_invitationUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvitationUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invitationUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_invitationChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvitationChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invitationChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_custHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cust";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cust.begin(); itr != m_cust.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InvitationEvent::GetInviteeUserId() const
{
    return m_inviteeUserId;
}

void InvitationEvent::SetInviteeUserId(const string& _inviteeUserId)
{
    m_inviteeUserId = _inviteeUserId;
    m_inviteeUserIdHasBeenSet = true;
}

bool InvitationEvent::InviteeUserIdHasBeenSet() const
{
    return m_inviteeUserIdHasBeenSet;
}

string InvitationEvent::GetPromotionId() const
{
    return m_promotionId;
}

void InvitationEvent::SetPromotionId(const string& _promotionId)
{
    m_promotionId = _promotionId;
    m_promotionIdHasBeenSet = true;
}

bool InvitationEvent::PromotionIdHasBeenSet() const
{
    return m_promotionIdHasBeenSet;
}

string InvitationEvent::GetPromotionName() const
{
    return m_promotionName;
}

void InvitationEvent::SetPromotionName(const string& _promotionName)
{
    m_promotionName = _promotionName;
    m_promotionNameHasBeenSet = true;
}

bool InvitationEvent::PromotionNameHasBeenSet() const
{
    return m_promotionNameHasBeenSet;
}

string InvitationEvent::GetDescription() const
{
    return m_description;
}

void InvitationEvent::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool InvitationEvent::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string InvitationEvent::GetInviteePhone() const
{
    return m_inviteePhone;
}

void InvitationEvent::SetInviteePhone(const string& _inviteePhone)
{
    m_inviteePhone = _inviteePhone;
    m_inviteePhoneHasBeenSet = true;
}

bool InvitationEvent::InviteePhoneHasBeenSet() const
{
    return m_inviteePhoneHasBeenSet;
}

string InvitationEvent::GetInvitationCode() const
{
    return m_invitationCode;
}

void InvitationEvent::SetInvitationCode(const string& _invitationCode)
{
    m_invitationCode = _invitationCode;
    m_invitationCodeHasBeenSet = true;
}

bool InvitationEvent::InvitationCodeHasBeenSet() const
{
    return m_invitationCodeHasBeenSet;
}

string InvitationEvent::GetInvitationUrl() const
{
    return m_invitationUrl;
}

void InvitationEvent::SetInvitationUrl(const string& _invitationUrl)
{
    m_invitationUrl = _invitationUrl;
    m_invitationUrlHasBeenSet = true;
}

bool InvitationEvent::InvitationUrlHasBeenSet() const
{
    return m_invitationUrlHasBeenSet;
}

string InvitationEvent::GetInvitationChannel() const
{
    return m_invitationChannel;
}

void InvitationEvent::SetInvitationChannel(const string& _invitationChannel)
{
    m_invitationChannel = _invitationChannel;
    m_invitationChannelHasBeenSet = true;
}

bool InvitationEvent::InvitationChannelHasBeenSet() const
{
    return m_invitationChannelHasBeenSet;
}

vector<Cust> InvitationEvent::GetCust() const
{
    return m_cust;
}

void InvitationEvent::SetCust(const vector<Cust>& _cust)
{
    m_cust = _cust;
    m_custHasBeenSet = true;
}

bool InvitationEvent::CustHasBeenSet() const
{
    return m_custHasBeenSet;
}

