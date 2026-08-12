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

#include <tencentcloud/rce/v20260130/model/LuckyDrawEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

LuckyDrawEvent::LuckyDrawEvent() :
    m_promotionIdHasBeenSet(false),
    m_promotionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_inviterUserIdHasBeenSet(false),
    m_luckyDrawCountHasBeenSet(false),
    m_luckyDrawTypeHasBeenSet(false),
    m_custHasBeenSet(false)
{
}

CoreInternalOutcome LuckyDrawEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PromotionId") && !value["PromotionId"].IsNull())
    {
        if (!value["PromotionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LuckyDrawEvent.PromotionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promotionId = string(value["PromotionId"].GetString());
        m_promotionIdHasBeenSet = true;
    }

    if (value.HasMember("PromotionName") && !value["PromotionName"].IsNull())
    {
        if (!value["PromotionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LuckyDrawEvent.PromotionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promotionName = string(value["PromotionName"].GetString());
        m_promotionNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LuckyDrawEvent.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("InviterUserId") && !value["InviterUserId"].IsNull())
    {
        if (!value["InviterUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LuckyDrawEvent.InviterUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inviterUserId = string(value["InviterUserId"].GetString());
        m_inviterUserIdHasBeenSet = true;
    }

    if (value.HasMember("LuckyDrawCount") && !value["LuckyDrawCount"].IsNull())
    {
        if (!value["LuckyDrawCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LuckyDrawEvent.LuckyDrawCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_luckyDrawCount = value["LuckyDrawCount"].GetInt64();
        m_luckyDrawCountHasBeenSet = true;
    }

    if (value.HasMember("LuckyDrawType") && !value["LuckyDrawType"].IsNull())
    {
        if (!value["LuckyDrawType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LuckyDrawEvent.LuckyDrawType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_luckyDrawType = string(value["LuckyDrawType"].GetString());
        m_luckyDrawTypeHasBeenSet = true;
    }

    if (value.HasMember("Cust") && !value["Cust"].IsNull())
    {
        if (!value["Cust"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LuckyDrawEvent.Cust` is not array type"));

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

void LuckyDrawEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_luckyDrawCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LuckyDrawCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_luckyDrawCount, allocator);
    }

    if (m_luckyDrawTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LuckyDrawType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_luckyDrawType.c_str(), allocator).Move(), allocator);
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


string LuckyDrawEvent::GetPromotionId() const
{
    return m_promotionId;
}

void LuckyDrawEvent::SetPromotionId(const string& _promotionId)
{
    m_promotionId = _promotionId;
    m_promotionIdHasBeenSet = true;
}

bool LuckyDrawEvent::PromotionIdHasBeenSet() const
{
    return m_promotionIdHasBeenSet;
}

string LuckyDrawEvent::GetPromotionName() const
{
    return m_promotionName;
}

void LuckyDrawEvent::SetPromotionName(const string& _promotionName)
{
    m_promotionName = _promotionName;
    m_promotionNameHasBeenSet = true;
}

bool LuckyDrawEvent::PromotionNameHasBeenSet() const
{
    return m_promotionNameHasBeenSet;
}

string LuckyDrawEvent::GetDescription() const
{
    return m_description;
}

void LuckyDrawEvent::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool LuckyDrawEvent::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string LuckyDrawEvent::GetInviterUserId() const
{
    return m_inviterUserId;
}

void LuckyDrawEvent::SetInviterUserId(const string& _inviterUserId)
{
    m_inviterUserId = _inviterUserId;
    m_inviterUserIdHasBeenSet = true;
}

bool LuckyDrawEvent::InviterUserIdHasBeenSet() const
{
    return m_inviterUserIdHasBeenSet;
}

int64_t LuckyDrawEvent::GetLuckyDrawCount() const
{
    return m_luckyDrawCount;
}

void LuckyDrawEvent::SetLuckyDrawCount(const int64_t& _luckyDrawCount)
{
    m_luckyDrawCount = _luckyDrawCount;
    m_luckyDrawCountHasBeenSet = true;
}

bool LuckyDrawEvent::LuckyDrawCountHasBeenSet() const
{
    return m_luckyDrawCountHasBeenSet;
}

string LuckyDrawEvent::GetLuckyDrawType() const
{
    return m_luckyDrawType;
}

void LuckyDrawEvent::SetLuckyDrawType(const string& _luckyDrawType)
{
    m_luckyDrawType = _luckyDrawType;
    m_luckyDrawTypeHasBeenSet = true;
}

bool LuckyDrawEvent::LuckyDrawTypeHasBeenSet() const
{
    return m_luckyDrawTypeHasBeenSet;
}

vector<Cust> LuckyDrawEvent::GetCust() const
{
    return m_cust;
}

void LuckyDrawEvent::SetCust(const vector<Cust>& _cust)
{
    m_cust = _cust;
    m_custHasBeenSet = true;
}

bool LuckyDrawEvent::CustHasBeenSet() const
{
    return m_custHasBeenSet;
}

