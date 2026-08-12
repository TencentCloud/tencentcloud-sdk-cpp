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

#include <tencentcloud/rce/v20260130/model/ScanCodeEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

ScanCodeEvent::ScanCodeEvent() :
    m_promotionCodeHasBeenSet(false),
    m_promotionIdHasBeenSet(false),
    m_promotionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_inviterUserIdHasBeenSet(false),
    m_custHasBeenSet(false)
{
}

CoreInternalOutcome ScanCodeEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PromotionCode") && !value["PromotionCode"].IsNull())
    {
        if (!value["PromotionCode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScanCodeEvent.PromotionCode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_promotionCode.Deserialize(value["PromotionCode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_promotionCodeHasBeenSet = true;
    }

    if (value.HasMember("PromotionId") && !value["PromotionId"].IsNull())
    {
        if (!value["PromotionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanCodeEvent.PromotionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promotionId = string(value["PromotionId"].GetString());
        m_promotionIdHasBeenSet = true;
    }

    if (value.HasMember("PromotionName") && !value["PromotionName"].IsNull())
    {
        if (!value["PromotionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanCodeEvent.PromotionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promotionName = string(value["PromotionName"].GetString());
        m_promotionNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanCodeEvent.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("InviterUserId") && !value["InviterUserId"].IsNull())
    {
        if (!value["InviterUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanCodeEvent.InviterUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inviterUserId = string(value["InviterUserId"].GetString());
        m_inviterUserIdHasBeenSet = true;
    }

    if (value.HasMember("Cust") && !value["Cust"].IsNull())
    {
        if (!value["Cust"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScanCodeEvent.Cust` is not array type"));

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

void ScanCodeEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_promotionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromotionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_promotionCode.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_inviterUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InviterUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inviterUserId.c_str(), allocator).Move(), allocator);
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


PromotionCode ScanCodeEvent::GetPromotionCode() const
{
    return m_promotionCode;
}

void ScanCodeEvent::SetPromotionCode(const PromotionCode& _promotionCode)
{
    m_promotionCode = _promotionCode;
    m_promotionCodeHasBeenSet = true;
}

bool ScanCodeEvent::PromotionCodeHasBeenSet() const
{
    return m_promotionCodeHasBeenSet;
}

string ScanCodeEvent::GetPromotionId() const
{
    return m_promotionId;
}

void ScanCodeEvent::SetPromotionId(const string& _promotionId)
{
    m_promotionId = _promotionId;
    m_promotionIdHasBeenSet = true;
}

bool ScanCodeEvent::PromotionIdHasBeenSet() const
{
    return m_promotionIdHasBeenSet;
}

string ScanCodeEvent::GetPromotionName() const
{
    return m_promotionName;
}

void ScanCodeEvent::SetPromotionName(const string& _promotionName)
{
    m_promotionName = _promotionName;
    m_promotionNameHasBeenSet = true;
}

bool ScanCodeEvent::PromotionNameHasBeenSet() const
{
    return m_promotionNameHasBeenSet;
}

string ScanCodeEvent::GetDescription() const
{
    return m_description;
}

void ScanCodeEvent::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ScanCodeEvent::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ScanCodeEvent::GetInviterUserId() const
{
    return m_inviterUserId;
}

void ScanCodeEvent::SetInviterUserId(const string& _inviterUserId)
{
    m_inviterUserId = _inviterUserId;
    m_inviterUserIdHasBeenSet = true;
}

bool ScanCodeEvent::InviterUserIdHasBeenSet() const
{
    return m_inviterUserIdHasBeenSet;
}

vector<Cust> ScanCodeEvent::GetCust() const
{
    return m_cust;
}

void ScanCodeEvent::SetCust(const vector<Cust>& _cust)
{
    m_cust = _cust;
    m_custHasBeenSet = true;
}

bool ScanCodeEvent::CustHasBeenSet() const
{
    return m_custHasBeenSet;
}

