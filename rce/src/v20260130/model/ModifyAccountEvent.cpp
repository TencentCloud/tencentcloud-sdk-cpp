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

#include <tencentcloud/rce/v20260130/model/ModifyAccountEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

ModifyAccountEvent::ModifyAccountEvent() :
    m_userInfoHasBeenSet(false),
    m_personHasBeenSet(false),
    m_billingAddressHasBeenSet(false),
    m_deliveryAddressHasBeenSet(false),
    m_custHasBeenSet(false)
{
}

CoreInternalOutcome ModifyAccountEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserInfo") && !value["UserInfo"].IsNull())
    {
        if (!value["UserInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAccountEvent.UserInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userInfo.Deserialize(value["UserInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userInfoHasBeenSet = true;
    }

    if (value.HasMember("Person") && !value["Person"].IsNull())
    {
        if (!value["Person"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAccountEvent.Person` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_person.Deserialize(value["Person"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_personHasBeenSet = true;
    }

    if (value.HasMember("BillingAddress") && !value["BillingAddress"].IsNull())
    {
        if (!value["BillingAddress"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAccountEvent.BillingAddress` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_billingAddress.Deserialize(value["BillingAddress"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_billingAddressHasBeenSet = true;
    }

    if (value.HasMember("DeliveryAddress") && !value["DeliveryAddress"].IsNull())
    {
        if (!value["DeliveryAddress"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAccountEvent.DeliveryAddress` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deliveryAddress.Deserialize(value["DeliveryAddress"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deliveryAddressHasBeenSet = true;
    }

    if (value.HasMember("Cust") && !value["Cust"].IsNull())
    {
        if (!value["Cust"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyAccountEvent.Cust` is not array type"));

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

void ModifyAccountEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_personHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Person";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_person.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_billingAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_billingAddress.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deliveryAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deliveryAddress.ToJsonObject(value[key.c_str()], allocator);
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


User ModifyAccountEvent::GetUserInfo() const
{
    return m_userInfo;
}

void ModifyAccountEvent::SetUserInfo(const User& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool ModifyAccountEvent::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

Person ModifyAccountEvent::GetPerson() const
{
    return m_person;
}

void ModifyAccountEvent::SetPerson(const Person& _person)
{
    m_person = _person;
    m_personHasBeenSet = true;
}

bool ModifyAccountEvent::PersonHasBeenSet() const
{
    return m_personHasBeenSet;
}

Address ModifyAccountEvent::GetBillingAddress() const
{
    return m_billingAddress;
}

void ModifyAccountEvent::SetBillingAddress(const Address& _billingAddress)
{
    m_billingAddress = _billingAddress;
    m_billingAddressHasBeenSet = true;
}

bool ModifyAccountEvent::BillingAddressHasBeenSet() const
{
    return m_billingAddressHasBeenSet;
}

Address ModifyAccountEvent::GetDeliveryAddress() const
{
    return m_deliveryAddress;
}

void ModifyAccountEvent::SetDeliveryAddress(const Address& _deliveryAddress)
{
    m_deliveryAddress = _deliveryAddress;
    m_deliveryAddressHasBeenSet = true;
}

bool ModifyAccountEvent::DeliveryAddressHasBeenSet() const
{
    return m_deliveryAddressHasBeenSet;
}

vector<Cust> ModifyAccountEvent::GetCust() const
{
    return m_cust;
}

void ModifyAccountEvent::SetCust(const vector<Cust>& _cust)
{
    m_cust = _cust;
    m_custHasBeenSet = true;
}

bool ModifyAccountEvent::CustHasBeenSet() const
{
    return m_custHasBeenSet;
}

