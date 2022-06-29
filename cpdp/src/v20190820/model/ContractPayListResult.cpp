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

#include <tencentcloud/cpdp/v20190820/model/ContractPayListResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ContractPayListResult::ContractPayListResult() :
    m_paymentIdHasBeenSet(false),
    m_paymentTypeHasBeenSet(false),
    m_paymentTagHasBeenSet(false),
    m_paymentIconHasBeenSet(false),
    m_paymentNameHasBeenSet(false),
    m_paymentInternalNameHasBeenSet(false),
    m_paymentOptionOneHasBeenSet(false),
    m_paymentOptionTwoHasBeenSet(false),
    m_paymentOptionThreeHasBeenSet(false),
    m_paymentOptionFourHasBeenSet(false),
    m_paymentOptionFiveHasBeenSet(false),
    m_paymentOptionSixHasBeenSet(false),
    m_paymentOptionSevenHasBeenSet(false),
    m_paymentOptionOtherHasBeenSet(false),
    m_paymentOptionNineHasBeenSet(false),
    m_paymentOptionTenHasBeenSet(false)
{
}

CoreInternalOutcome ContractPayListResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PaymentId") && !value["PaymentId"].IsNull())
    {
        if (!value["PaymentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractPayListResult.PaymentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentId = string(value["PaymentId"].GetString());
        m_paymentIdHasBeenSet = true;
    }

    if (value.HasMember("PaymentType") && !value["PaymentType"].IsNull())
    {
        if (!value["PaymentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractPayListResult.PaymentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentType = string(value["PaymentType"].GetString());
        m_paymentTypeHasBeenSet = true;
    }

    if (value.HasMember("PaymentTag") && !value["PaymentTag"].IsNull())
    {
        if (!value["PaymentTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractPayListResult.PaymentTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentTag = string(value["PaymentTag"].GetString());
        m_paymentTagHasBeenSet = true;
    }

    if (value.HasMember("PaymentIcon") && !value["PaymentIcon"].IsNull())
    {
        if (!value["PaymentIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractPayListResult.PaymentIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentIcon = string(value["PaymentIcon"].GetString());
        m_paymentIconHasBeenSet = true;
    }

    if (value.HasMember("PaymentName") && !value["PaymentName"].IsNull())
    {
        if (!value["PaymentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractPayListResult.PaymentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentName = string(value["PaymentName"].GetString());
        m_paymentNameHasBeenSet = true;
    }

    if (value.HasMember("PaymentInternalName") && !value["PaymentInternalName"].IsNull())
    {
        if (!value["PaymentInternalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractPayListResult.PaymentInternalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentInternalName = string(value["PaymentInternalName"].GetString());
        m_paymentInternalNameHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionOne") && !value["PaymentOptionOne"].IsNull())
    {
        if (!value["PaymentOptionOne"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractPayListResult.PaymentOptionOne` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionOne = string(value["PaymentOptionOne"].GetString());
        m_paymentOptionOneHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionTwo") && !value["PaymentOptionTwo"].IsNull())
    {
        if (!value["PaymentOptionTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractPayListResult.PaymentOptionTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionTwo = string(value["PaymentOptionTwo"].GetString());
        m_paymentOptionTwoHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionThree") && !value["PaymentOptionThree"].IsNull())
    {
        if (!value["PaymentOptionThree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractPayListResult.PaymentOptionThree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionThree = string(value["PaymentOptionThree"].GetString());
        m_paymentOptionThreeHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionFour") && !value["PaymentOptionFour"].IsNull())
    {
        if (!value["PaymentOptionFour"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractPayListResult.PaymentOptionFour` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionFour = string(value["PaymentOptionFour"].GetString());
        m_paymentOptionFourHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionFive") && !value["PaymentOptionFive"].IsNull())
    {
        if (!value["PaymentOptionFive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractPayListResult.PaymentOptionFive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionFive = string(value["PaymentOptionFive"].GetString());
        m_paymentOptionFiveHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionSix") && !value["PaymentOptionSix"].IsNull())
    {
        if (!value["PaymentOptionSix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractPayListResult.PaymentOptionSix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionSix = string(value["PaymentOptionSix"].GetString());
        m_paymentOptionSixHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionSeven") && !value["PaymentOptionSeven"].IsNull())
    {
        if (!value["PaymentOptionSeven"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractPayListResult.PaymentOptionSeven` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionSeven = string(value["PaymentOptionSeven"].GetString());
        m_paymentOptionSevenHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionOther") && !value["PaymentOptionOther"].IsNull())
    {
        if (!value["PaymentOptionOther"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractPayListResult.PaymentOptionOther` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionOther = string(value["PaymentOptionOther"].GetString());
        m_paymentOptionOtherHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionNine") && !value["PaymentOptionNine"].IsNull())
    {
        if (!value["PaymentOptionNine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractPayListResult.PaymentOptionNine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionNine = string(value["PaymentOptionNine"].GetString());
        m_paymentOptionNineHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionTen") && !value["PaymentOptionTen"].IsNull())
    {
        if (!value["PaymentOptionTen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractPayListResult.PaymentOptionTen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionTen = string(value["PaymentOptionTen"].GetString());
        m_paymentOptionTenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContractPayListResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paymentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentId.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentType.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentTag.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentIcon.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentName.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentInternalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentInternalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentInternalName.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionOne";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionOne.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionThreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionThree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionThree.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionFourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionFour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionFour.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionFiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionFive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionFive.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionSixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionSix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionSix.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionSevenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionSeven";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionSeven.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionOtherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionOther";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionOther.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionNineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionNine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionNine.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionTenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionTen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionTen.c_str(), allocator).Move(), allocator);
    }

}


string ContractPayListResult::GetPaymentId() const
{
    return m_paymentId;
}

void ContractPayListResult::SetPaymentId(const string& _paymentId)
{
    m_paymentId = _paymentId;
    m_paymentIdHasBeenSet = true;
}

bool ContractPayListResult::PaymentIdHasBeenSet() const
{
    return m_paymentIdHasBeenSet;
}

string ContractPayListResult::GetPaymentType() const
{
    return m_paymentType;
}

void ContractPayListResult::SetPaymentType(const string& _paymentType)
{
    m_paymentType = _paymentType;
    m_paymentTypeHasBeenSet = true;
}

bool ContractPayListResult::PaymentTypeHasBeenSet() const
{
    return m_paymentTypeHasBeenSet;
}

string ContractPayListResult::GetPaymentTag() const
{
    return m_paymentTag;
}

void ContractPayListResult::SetPaymentTag(const string& _paymentTag)
{
    m_paymentTag = _paymentTag;
    m_paymentTagHasBeenSet = true;
}

bool ContractPayListResult::PaymentTagHasBeenSet() const
{
    return m_paymentTagHasBeenSet;
}

string ContractPayListResult::GetPaymentIcon() const
{
    return m_paymentIcon;
}

void ContractPayListResult::SetPaymentIcon(const string& _paymentIcon)
{
    m_paymentIcon = _paymentIcon;
    m_paymentIconHasBeenSet = true;
}

bool ContractPayListResult::PaymentIconHasBeenSet() const
{
    return m_paymentIconHasBeenSet;
}

string ContractPayListResult::GetPaymentName() const
{
    return m_paymentName;
}

void ContractPayListResult::SetPaymentName(const string& _paymentName)
{
    m_paymentName = _paymentName;
    m_paymentNameHasBeenSet = true;
}

bool ContractPayListResult::PaymentNameHasBeenSet() const
{
    return m_paymentNameHasBeenSet;
}

string ContractPayListResult::GetPaymentInternalName() const
{
    return m_paymentInternalName;
}

void ContractPayListResult::SetPaymentInternalName(const string& _paymentInternalName)
{
    m_paymentInternalName = _paymentInternalName;
    m_paymentInternalNameHasBeenSet = true;
}

bool ContractPayListResult::PaymentInternalNameHasBeenSet() const
{
    return m_paymentInternalNameHasBeenSet;
}

string ContractPayListResult::GetPaymentOptionOne() const
{
    return m_paymentOptionOne;
}

void ContractPayListResult::SetPaymentOptionOne(const string& _paymentOptionOne)
{
    m_paymentOptionOne = _paymentOptionOne;
    m_paymentOptionOneHasBeenSet = true;
}

bool ContractPayListResult::PaymentOptionOneHasBeenSet() const
{
    return m_paymentOptionOneHasBeenSet;
}

string ContractPayListResult::GetPaymentOptionTwo() const
{
    return m_paymentOptionTwo;
}

void ContractPayListResult::SetPaymentOptionTwo(const string& _paymentOptionTwo)
{
    m_paymentOptionTwo = _paymentOptionTwo;
    m_paymentOptionTwoHasBeenSet = true;
}

bool ContractPayListResult::PaymentOptionTwoHasBeenSet() const
{
    return m_paymentOptionTwoHasBeenSet;
}

string ContractPayListResult::GetPaymentOptionThree() const
{
    return m_paymentOptionThree;
}

void ContractPayListResult::SetPaymentOptionThree(const string& _paymentOptionThree)
{
    m_paymentOptionThree = _paymentOptionThree;
    m_paymentOptionThreeHasBeenSet = true;
}

bool ContractPayListResult::PaymentOptionThreeHasBeenSet() const
{
    return m_paymentOptionThreeHasBeenSet;
}

string ContractPayListResult::GetPaymentOptionFour() const
{
    return m_paymentOptionFour;
}

void ContractPayListResult::SetPaymentOptionFour(const string& _paymentOptionFour)
{
    m_paymentOptionFour = _paymentOptionFour;
    m_paymentOptionFourHasBeenSet = true;
}

bool ContractPayListResult::PaymentOptionFourHasBeenSet() const
{
    return m_paymentOptionFourHasBeenSet;
}

string ContractPayListResult::GetPaymentOptionFive() const
{
    return m_paymentOptionFive;
}

void ContractPayListResult::SetPaymentOptionFive(const string& _paymentOptionFive)
{
    m_paymentOptionFive = _paymentOptionFive;
    m_paymentOptionFiveHasBeenSet = true;
}

bool ContractPayListResult::PaymentOptionFiveHasBeenSet() const
{
    return m_paymentOptionFiveHasBeenSet;
}

string ContractPayListResult::GetPaymentOptionSix() const
{
    return m_paymentOptionSix;
}

void ContractPayListResult::SetPaymentOptionSix(const string& _paymentOptionSix)
{
    m_paymentOptionSix = _paymentOptionSix;
    m_paymentOptionSixHasBeenSet = true;
}

bool ContractPayListResult::PaymentOptionSixHasBeenSet() const
{
    return m_paymentOptionSixHasBeenSet;
}

string ContractPayListResult::GetPaymentOptionSeven() const
{
    return m_paymentOptionSeven;
}

void ContractPayListResult::SetPaymentOptionSeven(const string& _paymentOptionSeven)
{
    m_paymentOptionSeven = _paymentOptionSeven;
    m_paymentOptionSevenHasBeenSet = true;
}

bool ContractPayListResult::PaymentOptionSevenHasBeenSet() const
{
    return m_paymentOptionSevenHasBeenSet;
}

string ContractPayListResult::GetPaymentOptionOther() const
{
    return m_paymentOptionOther;
}

void ContractPayListResult::SetPaymentOptionOther(const string& _paymentOptionOther)
{
    m_paymentOptionOther = _paymentOptionOther;
    m_paymentOptionOtherHasBeenSet = true;
}

bool ContractPayListResult::PaymentOptionOtherHasBeenSet() const
{
    return m_paymentOptionOtherHasBeenSet;
}

string ContractPayListResult::GetPaymentOptionNine() const
{
    return m_paymentOptionNine;
}

void ContractPayListResult::SetPaymentOptionNine(const string& _paymentOptionNine)
{
    m_paymentOptionNine = _paymentOptionNine;
    m_paymentOptionNineHasBeenSet = true;
}

bool ContractPayListResult::PaymentOptionNineHasBeenSet() const
{
    return m_paymentOptionNineHasBeenSet;
}

string ContractPayListResult::GetPaymentOptionTen() const
{
    return m_paymentOptionTen;
}

void ContractPayListResult::SetPaymentOptionTen(const string& _paymentOptionTen)
{
    m_paymentOptionTen = _paymentOptionTen;
    m_paymentOptionTenHasBeenSet = true;
}

bool ContractPayListResult::PaymentOptionTenHasBeenSet() const
{
    return m_paymentOptionTenHasBeenSet;
}

