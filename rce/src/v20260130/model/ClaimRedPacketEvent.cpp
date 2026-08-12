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

#include <tencentcloud/rce/v20260130/model/ClaimRedPacketEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

ClaimRedPacketEvent::ClaimRedPacketEvent() :
    m_promotionIdHasBeenSet(false),
    m_promotionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_inviterUserIdHasBeenSet(false),
    m_redPacketIdHasBeenSet(false),
    m_redPacketTypeHasBeenSet(false),
    m_redPacketAmountHasBeenSet(false),
    m_custHasBeenSet(false)
{
}

CoreInternalOutcome ClaimRedPacketEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PromotionId") && !value["PromotionId"].IsNull())
    {
        if (!value["PromotionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClaimRedPacketEvent.PromotionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promotionId = string(value["PromotionId"].GetString());
        m_promotionIdHasBeenSet = true;
    }

    if (value.HasMember("PromotionName") && !value["PromotionName"].IsNull())
    {
        if (!value["PromotionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClaimRedPacketEvent.PromotionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promotionName = string(value["PromotionName"].GetString());
        m_promotionNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClaimRedPacketEvent.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("InviterUserId") && !value["InviterUserId"].IsNull())
    {
        if (!value["InviterUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClaimRedPacketEvent.InviterUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inviterUserId = string(value["InviterUserId"].GetString());
        m_inviterUserIdHasBeenSet = true;
    }

    if (value.HasMember("RedPacketId") && !value["RedPacketId"].IsNull())
    {
        if (!value["RedPacketId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClaimRedPacketEvent.RedPacketId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redPacketId = string(value["RedPacketId"].GetString());
        m_redPacketIdHasBeenSet = true;
    }

    if (value.HasMember("RedPacketType") && !value["RedPacketType"].IsNull())
    {
        if (!value["RedPacketType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClaimRedPacketEvent.RedPacketType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redPacketType = string(value["RedPacketType"].GetString());
        m_redPacketTypeHasBeenSet = true;
    }

    if (value.HasMember("RedPacketAmount") && !value["RedPacketAmount"].IsNull())
    {
        if (!value["RedPacketAmount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClaimRedPacketEvent.RedPacketAmount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_redPacketAmount.Deserialize(value["RedPacketAmount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_redPacketAmountHasBeenSet = true;
    }

    if (value.HasMember("Cust") && !value["Cust"].IsNull())
    {
        if (!value["Cust"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClaimRedPacketEvent.Cust` is not array type"));

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

void ClaimRedPacketEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_inviterUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InviterUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inviterUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_redPacketIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedPacketId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redPacketId.c_str(), allocator).Move(), allocator);
    }

    if (m_redPacketTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedPacketType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redPacketType.c_str(), allocator).Move(), allocator);
    }

    if (m_redPacketAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedPacketAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_redPacketAmount.ToJsonObject(value[key.c_str()], allocator);
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


string ClaimRedPacketEvent::GetPromotionId() const
{
    return m_promotionId;
}

void ClaimRedPacketEvent::SetPromotionId(const string& _promotionId)
{
    m_promotionId = _promotionId;
    m_promotionIdHasBeenSet = true;
}

bool ClaimRedPacketEvent::PromotionIdHasBeenSet() const
{
    return m_promotionIdHasBeenSet;
}

string ClaimRedPacketEvent::GetPromotionName() const
{
    return m_promotionName;
}

void ClaimRedPacketEvent::SetPromotionName(const string& _promotionName)
{
    m_promotionName = _promotionName;
    m_promotionNameHasBeenSet = true;
}

bool ClaimRedPacketEvent::PromotionNameHasBeenSet() const
{
    return m_promotionNameHasBeenSet;
}

string ClaimRedPacketEvent::GetDescription() const
{
    return m_description;
}

void ClaimRedPacketEvent::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ClaimRedPacketEvent::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ClaimRedPacketEvent::GetInviterUserId() const
{
    return m_inviterUserId;
}

void ClaimRedPacketEvent::SetInviterUserId(const string& _inviterUserId)
{
    m_inviterUserId = _inviterUserId;
    m_inviterUserIdHasBeenSet = true;
}

bool ClaimRedPacketEvent::InviterUserIdHasBeenSet() const
{
    return m_inviterUserIdHasBeenSet;
}

string ClaimRedPacketEvent::GetRedPacketId() const
{
    return m_redPacketId;
}

void ClaimRedPacketEvent::SetRedPacketId(const string& _redPacketId)
{
    m_redPacketId = _redPacketId;
    m_redPacketIdHasBeenSet = true;
}

bool ClaimRedPacketEvent::RedPacketIdHasBeenSet() const
{
    return m_redPacketIdHasBeenSet;
}

string ClaimRedPacketEvent::GetRedPacketType() const
{
    return m_redPacketType;
}

void ClaimRedPacketEvent::SetRedPacketType(const string& _redPacketType)
{
    m_redPacketType = _redPacketType;
    m_redPacketTypeHasBeenSet = true;
}

bool ClaimRedPacketEvent::RedPacketTypeHasBeenSet() const
{
    return m_redPacketTypeHasBeenSet;
}

Amount ClaimRedPacketEvent::GetRedPacketAmount() const
{
    return m_redPacketAmount;
}

void ClaimRedPacketEvent::SetRedPacketAmount(const Amount& _redPacketAmount)
{
    m_redPacketAmount = _redPacketAmount;
    m_redPacketAmountHasBeenSet = true;
}

bool ClaimRedPacketEvent::RedPacketAmountHasBeenSet() const
{
    return m_redPacketAmountHasBeenSet;
}

vector<Cust> ClaimRedPacketEvent::GetCust() const
{
    return m_cust;
}

void ClaimRedPacketEvent::SetCust(const vector<Cust>& _cust)
{
    m_cust = _cust;
    m_custHasBeenSet = true;
}

bool ClaimRedPacketEvent::CustHasBeenSet() const
{
    return m_custHasBeenSet;
}

