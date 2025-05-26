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

#include <tencentcloud/chc/v20230418/model/CustomerReceipt.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

CustomerReceipt::CustomerReceipt() :
    m_pickUpStuffHasBeenSet(false),
    m_pickUpStuffContactHasBeenSet(false),
    m_pickUpStuffIDCardHasBeenSet(false),
    m_pickUpTimeHasBeenSet(false),
    m_iDCardTypeHasBeenSet(false)
{
}

CoreInternalOutcome CustomerReceipt::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PickUpStuff") && !value["PickUpStuff"].IsNull())
    {
        if (!value["PickUpStuff"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerReceipt.PickUpStuff` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pickUpStuff = string(value["PickUpStuff"].GetString());
        m_pickUpStuffHasBeenSet = true;
    }

    if (value.HasMember("PickUpStuffContact") && !value["PickUpStuffContact"].IsNull())
    {
        if (!value["PickUpStuffContact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerReceipt.PickUpStuffContact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pickUpStuffContact = string(value["PickUpStuffContact"].GetString());
        m_pickUpStuffContactHasBeenSet = true;
    }

    if (value.HasMember("PickUpStuffIDCard") && !value["PickUpStuffIDCard"].IsNull())
    {
        if (!value["PickUpStuffIDCard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerReceipt.PickUpStuffIDCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pickUpStuffIDCard = string(value["PickUpStuffIDCard"].GetString());
        m_pickUpStuffIDCardHasBeenSet = true;
    }

    if (value.HasMember("PickUpTime") && !value["PickUpTime"].IsNull())
    {
        if (!value["PickUpTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerReceipt.PickUpTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pickUpTime = string(value["PickUpTime"].GetString());
        m_pickUpTimeHasBeenSet = true;
    }

    if (value.HasMember("IDCardType") && !value["IDCardType"].IsNull())
    {
        if (!value["IDCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerReceipt.IDCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDCardType = string(value["IDCardType"].GetString());
        m_iDCardTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomerReceipt::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pickUpStuffHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PickUpStuff";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pickUpStuff.c_str(), allocator).Move(), allocator);
    }

    if (m_pickUpStuffContactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PickUpStuffContact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pickUpStuffContact.c_str(), allocator).Move(), allocator);
    }

    if (m_pickUpStuffIDCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PickUpStuffIDCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pickUpStuffIDCard.c_str(), allocator).Move(), allocator);
    }

    if (m_pickUpTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PickUpTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pickUpTime.c_str(), allocator).Move(), allocator);
    }

    if (m_iDCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDCardType.c_str(), allocator).Move(), allocator);
    }

}


string CustomerReceipt::GetPickUpStuff() const
{
    return m_pickUpStuff;
}

void CustomerReceipt::SetPickUpStuff(const string& _pickUpStuff)
{
    m_pickUpStuff = _pickUpStuff;
    m_pickUpStuffHasBeenSet = true;
}

bool CustomerReceipt::PickUpStuffHasBeenSet() const
{
    return m_pickUpStuffHasBeenSet;
}

string CustomerReceipt::GetPickUpStuffContact() const
{
    return m_pickUpStuffContact;
}

void CustomerReceipt::SetPickUpStuffContact(const string& _pickUpStuffContact)
{
    m_pickUpStuffContact = _pickUpStuffContact;
    m_pickUpStuffContactHasBeenSet = true;
}

bool CustomerReceipt::PickUpStuffContactHasBeenSet() const
{
    return m_pickUpStuffContactHasBeenSet;
}

string CustomerReceipt::GetPickUpStuffIDCard() const
{
    return m_pickUpStuffIDCard;
}

void CustomerReceipt::SetPickUpStuffIDCard(const string& _pickUpStuffIDCard)
{
    m_pickUpStuffIDCard = _pickUpStuffIDCard;
    m_pickUpStuffIDCardHasBeenSet = true;
}

bool CustomerReceipt::PickUpStuffIDCardHasBeenSet() const
{
    return m_pickUpStuffIDCardHasBeenSet;
}

string CustomerReceipt::GetPickUpTime() const
{
    return m_pickUpTime;
}

void CustomerReceipt::SetPickUpTime(const string& _pickUpTime)
{
    m_pickUpTime = _pickUpTime;
    m_pickUpTimeHasBeenSet = true;
}

bool CustomerReceipt::PickUpTimeHasBeenSet() const
{
    return m_pickUpTimeHasBeenSet;
}

string CustomerReceipt::GetIDCardType() const
{
    return m_iDCardType;
}

void CustomerReceipt::SetIDCardType(const string& _iDCardType)
{
    m_iDCardType = _iDCardType;
    m_iDCardTypeHasBeenSet = true;
}

bool CustomerReceipt::IDCardTypeHasBeenSet() const
{
    return m_iDCardTypeHasBeenSet;
}

