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

#include <tencentcloud/rce/v20260130/model/Delivery.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Delivery::Delivery() :
    m_deliveryMethodHasBeenSet(false),
    m_deliveryAmountHasBeenSet(false),
    m_deliveryAddressHasBeenSet(false),
    m_consigneePhoneHasBeenSet(false),
    m_consigneeEmailHasBeenSet(false),
    m_consigneeNameHasBeenSet(false),
    m_expeditedHasBeenSet(false),
    m_deliveryCarrierHasBeenSet(false),
    m_deliveryTrackingHasBeenSet(false)
{
}

CoreInternalOutcome Delivery::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeliveryMethod") && !value["DeliveryMethod"].IsNull())
    {
        if (!value["DeliveryMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Delivery.DeliveryMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryMethod = string(value["DeliveryMethod"].GetString());
        m_deliveryMethodHasBeenSet = true;
    }

    if (value.HasMember("DeliveryAmount") && !value["DeliveryAmount"].IsNull())
    {
        if (!value["DeliveryAmount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Delivery.DeliveryAmount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deliveryAmount.Deserialize(value["DeliveryAmount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deliveryAmountHasBeenSet = true;
    }

    if (value.HasMember("DeliveryAddress") && !value["DeliveryAddress"].IsNull())
    {
        if (!value["DeliveryAddress"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Delivery.DeliveryAddress` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deliveryAddress.Deserialize(value["DeliveryAddress"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deliveryAddressHasBeenSet = true;
    }

    if (value.HasMember("ConsigneePhone") && !value["ConsigneePhone"].IsNull())
    {
        if (!value["ConsigneePhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Delivery.ConsigneePhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consigneePhone = string(value["ConsigneePhone"].GetString());
        m_consigneePhoneHasBeenSet = true;
    }

    if (value.HasMember("ConsigneeEmail") && !value["ConsigneeEmail"].IsNull())
    {
        if (!value["ConsigneeEmail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Delivery.ConsigneeEmail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consigneeEmail = string(value["ConsigneeEmail"].GetString());
        m_consigneeEmailHasBeenSet = true;
    }

    if (value.HasMember("ConsigneeName") && !value["ConsigneeName"].IsNull())
    {
        if (!value["ConsigneeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Delivery.ConsigneeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consigneeName = string(value["ConsigneeName"].GetString());
        m_consigneeNameHasBeenSet = true;
    }

    if (value.HasMember("Expedited") && !value["Expedited"].IsNull())
    {
        if (!value["Expedited"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Delivery.Expedited` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_expedited = value["Expedited"].GetBool();
        m_expeditedHasBeenSet = true;
    }

    if (value.HasMember("DeliveryCarrier") && !value["DeliveryCarrier"].IsNull())
    {
        if (!value["DeliveryCarrier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Delivery.DeliveryCarrier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryCarrier = string(value["DeliveryCarrier"].GetString());
        m_deliveryCarrierHasBeenSet = true;
    }

    if (value.HasMember("DeliveryTracking") && !value["DeliveryTracking"].IsNull())
    {
        if (!value["DeliveryTracking"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Delivery.DeliveryTracking` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryTracking = string(value["DeliveryTracking"].GetString());
        m_deliveryTrackingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Delivery::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deliveryMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliveryMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_deliveryAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deliveryAmount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deliveryAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deliveryAddress.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_consigneePhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsigneePhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consigneePhone.c_str(), allocator).Move(), allocator);
    }

    if (m_consigneeEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsigneeEmail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consigneeEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_consigneeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsigneeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consigneeName.c_str(), allocator).Move(), allocator);
    }

    if (m_expeditedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expedited";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expedited, allocator);
    }

    if (m_deliveryCarrierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryCarrier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliveryCarrier.c_str(), allocator).Move(), allocator);
    }

    if (m_deliveryTrackingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryTracking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliveryTracking.c_str(), allocator).Move(), allocator);
    }

}


string Delivery::GetDeliveryMethod() const
{
    return m_deliveryMethod;
}

void Delivery::SetDeliveryMethod(const string& _deliveryMethod)
{
    m_deliveryMethod = _deliveryMethod;
    m_deliveryMethodHasBeenSet = true;
}

bool Delivery::DeliveryMethodHasBeenSet() const
{
    return m_deliveryMethodHasBeenSet;
}

Amount Delivery::GetDeliveryAmount() const
{
    return m_deliveryAmount;
}

void Delivery::SetDeliveryAmount(const Amount& _deliveryAmount)
{
    m_deliveryAmount = _deliveryAmount;
    m_deliveryAmountHasBeenSet = true;
}

bool Delivery::DeliveryAmountHasBeenSet() const
{
    return m_deliveryAmountHasBeenSet;
}

Address Delivery::GetDeliveryAddress() const
{
    return m_deliveryAddress;
}

void Delivery::SetDeliveryAddress(const Address& _deliveryAddress)
{
    m_deliveryAddress = _deliveryAddress;
    m_deliveryAddressHasBeenSet = true;
}

bool Delivery::DeliveryAddressHasBeenSet() const
{
    return m_deliveryAddressHasBeenSet;
}

string Delivery::GetConsigneePhone() const
{
    return m_consigneePhone;
}

void Delivery::SetConsigneePhone(const string& _consigneePhone)
{
    m_consigneePhone = _consigneePhone;
    m_consigneePhoneHasBeenSet = true;
}

bool Delivery::ConsigneePhoneHasBeenSet() const
{
    return m_consigneePhoneHasBeenSet;
}

string Delivery::GetConsigneeEmail() const
{
    return m_consigneeEmail;
}

void Delivery::SetConsigneeEmail(const string& _consigneeEmail)
{
    m_consigneeEmail = _consigneeEmail;
    m_consigneeEmailHasBeenSet = true;
}

bool Delivery::ConsigneeEmailHasBeenSet() const
{
    return m_consigneeEmailHasBeenSet;
}

string Delivery::GetConsigneeName() const
{
    return m_consigneeName;
}

void Delivery::SetConsigneeName(const string& _consigneeName)
{
    m_consigneeName = _consigneeName;
    m_consigneeNameHasBeenSet = true;
}

bool Delivery::ConsigneeNameHasBeenSet() const
{
    return m_consigneeNameHasBeenSet;
}

bool Delivery::GetExpedited() const
{
    return m_expedited;
}

void Delivery::SetExpedited(const bool& _expedited)
{
    m_expedited = _expedited;
    m_expeditedHasBeenSet = true;
}

bool Delivery::ExpeditedHasBeenSet() const
{
    return m_expeditedHasBeenSet;
}

string Delivery::GetDeliveryCarrier() const
{
    return m_deliveryCarrier;
}

void Delivery::SetDeliveryCarrier(const string& _deliveryCarrier)
{
    m_deliveryCarrier = _deliveryCarrier;
    m_deliveryCarrierHasBeenSet = true;
}

bool Delivery::DeliveryCarrierHasBeenSet() const
{
    return m_deliveryCarrierHasBeenSet;
}

string Delivery::GetDeliveryTracking() const
{
    return m_deliveryTracking;
}

void Delivery::SetDeliveryTracking(const string& _deliveryTracking)
{
    m_deliveryTracking = _deliveryTracking;
    m_deliveryTrackingHasBeenSet = true;
}

bool Delivery::DeliveryTrackingHasBeenSet() const
{
    return m_deliveryTrackingHasBeenSet;
}

