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

#include <tencentcloud/dnspod/v20210323/model/WhoisContact.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

WhoisContact::WhoisContact() :
    m_adminHasBeenSet(false),
    m_billingHasBeenSet(false),
    m_registrantHasBeenSet(false),
    m_techHasBeenSet(false)
{
}

CoreInternalOutcome WhoisContact::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Admin") && !value["Admin"].IsNull())
    {
        if (!value["Admin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisContact.Admin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_admin.Deserialize(value["Admin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adminHasBeenSet = true;
    }

    if (value.HasMember("Billing") && !value["Billing"].IsNull())
    {
        if (!value["Billing"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisContact.Billing` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_billing.Deserialize(value["Billing"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_billingHasBeenSet = true;
    }

    if (value.HasMember("Registrant") && !value["Registrant"].IsNull())
    {
        if (!value["Registrant"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisContact.Registrant` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_registrant.Deserialize(value["Registrant"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_registrantHasBeenSet = true;
    }

    if (value.HasMember("Tech") && !value["Tech"].IsNull())
    {
        if (!value["Tech"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisContact.Tech` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tech.Deserialize(value["Tech"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_techHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WhoisContact::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_adminHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Admin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_admin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_billingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Billing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_billing.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_registrantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Registrant";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_registrant.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_techHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tech";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tech.ToJsonObject(value[key.c_str()], allocator);
    }

}


WhoisContactAddress WhoisContact::GetAdmin() const
{
    return m_admin;
}

void WhoisContact::SetAdmin(const WhoisContactAddress& _admin)
{
    m_admin = _admin;
    m_adminHasBeenSet = true;
}

bool WhoisContact::AdminHasBeenSet() const
{
    return m_adminHasBeenSet;
}

WhoisContactAddress WhoisContact::GetBilling() const
{
    return m_billing;
}

void WhoisContact::SetBilling(const WhoisContactAddress& _billing)
{
    m_billing = _billing;
    m_billingHasBeenSet = true;
}

bool WhoisContact::BillingHasBeenSet() const
{
    return m_billingHasBeenSet;
}

WhoisContactAddress WhoisContact::GetRegistrant() const
{
    return m_registrant;
}

void WhoisContact::SetRegistrant(const WhoisContactAddress& _registrant)
{
    m_registrant = _registrant;
    m_registrantHasBeenSet = true;
}

bool WhoisContact::RegistrantHasBeenSet() const
{
    return m_registrantHasBeenSet;
}

WhoisContactAddress WhoisContact::GetTech() const
{
    return m_tech;
}

void WhoisContact::SetTech(const WhoisContactAddress& _tech)
{
    m_tech = _tech;
    m_techHasBeenSet = true;
}

bool WhoisContact::TechHasBeenSet() const
{
    return m_techHasBeenSet;
}

