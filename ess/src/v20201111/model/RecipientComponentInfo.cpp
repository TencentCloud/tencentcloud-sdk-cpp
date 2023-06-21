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

#include <tencentcloud/ess/v20201111/model/RecipientComponentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

RecipientComponentInfo::RecipientComponentInfo() :
    m_recipientIdHasBeenSet(false),
    m_recipientFillStatusHasBeenSet(false),
    m_isPromoterHasBeenSet(false),
    m_componentsHasBeenSet(false)
{
}

CoreInternalOutcome RecipientComponentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecipientId") && !value["RecipientId"].IsNull())
    {
        if (!value["RecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecipientComponentInfo.RecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recipientId = string(value["RecipientId"].GetString());
        m_recipientIdHasBeenSet = true;
    }

    if (value.HasMember("RecipientFillStatus") && !value["RecipientFillStatus"].IsNull())
    {
        if (!value["RecipientFillStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecipientComponentInfo.RecipientFillStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recipientFillStatus = string(value["RecipientFillStatus"].GetString());
        m_recipientFillStatusHasBeenSet = true;
    }

    if (value.HasMember("IsPromoter") && !value["IsPromoter"].IsNull())
    {
        if (!value["IsPromoter"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RecipientComponentInfo.IsPromoter` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPromoter = value["IsPromoter"].GetBool();
        m_isPromoterHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecipientComponentInfo.Components` is not array type"));

        const rapidjson::Value &tmpValue = value["Components"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilledComponent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_components.push_back(item);
        }
        m_componentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecipientComponentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_recipientFillStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientFillStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recipientFillStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_isPromoterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPromoter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPromoter, allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RecipientComponentInfo::GetRecipientId() const
{
    return m_recipientId;
}

void RecipientComponentInfo::SetRecipientId(const string& _recipientId)
{
    m_recipientId = _recipientId;
    m_recipientIdHasBeenSet = true;
}

bool RecipientComponentInfo::RecipientIdHasBeenSet() const
{
    return m_recipientIdHasBeenSet;
}

string RecipientComponentInfo::GetRecipientFillStatus() const
{
    return m_recipientFillStatus;
}

void RecipientComponentInfo::SetRecipientFillStatus(const string& _recipientFillStatus)
{
    m_recipientFillStatus = _recipientFillStatus;
    m_recipientFillStatusHasBeenSet = true;
}

bool RecipientComponentInfo::RecipientFillStatusHasBeenSet() const
{
    return m_recipientFillStatusHasBeenSet;
}

bool RecipientComponentInfo::GetIsPromoter() const
{
    return m_isPromoter;
}

void RecipientComponentInfo::SetIsPromoter(const bool& _isPromoter)
{
    m_isPromoter = _isPromoter;
    m_isPromoterHasBeenSet = true;
}

bool RecipientComponentInfo::IsPromoterHasBeenSet() const
{
    return m_isPromoterHasBeenSet;
}

vector<FilledComponent> RecipientComponentInfo::GetComponents() const
{
    return m_components;
}

void RecipientComponentInfo::SetComponents(const vector<FilledComponent>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool RecipientComponentInfo::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

