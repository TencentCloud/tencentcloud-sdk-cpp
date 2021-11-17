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

#include <tencentcloud/cpdp/v20190820/model/PayDataResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

PayDataResult::PayDataResult() :
    m_paymentTagHasBeenSet(false),
    m_paymentOptionHideHasBeenSet(false),
    m_paymentIconHasBeenSet(false),
    m_paymentOptionSixHasBeenSet(false),
    m_paymentNameHasBeenSet(false),
    m_paymentOptionSevenHasBeenSet(false),
    m_paymentOptionOtherHasBeenSet(false),
    m_paymentOptionTwoHasBeenSet(false),
    m_paymentOptionOneHasBeenSet(false),
    m_paymentDiscountFeeHasBeenSet(false),
    m_paymentTypeHasBeenSet(false),
    m_paymentOptionFiveHasBeenSet(false),
    m_paymentOptionNineHasBeenSet(false),
    m_paymentIdHasBeenSet(false),
    m_paymentOptionThreeHasBeenSet(false),
    m_paymentInternalNameHasBeenSet(false),
    m_paymentOptionFourHasBeenSet(false),
    m_paymentOptionTenHasBeenSet(false)
{
}

CoreInternalOutcome PayDataResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PaymentTag") && !value["PaymentTag"].IsNull())
    {
        if (!value["PaymentTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentTag = string(value["PaymentTag"].GetString());
        m_paymentTagHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionHide") && !value["PaymentOptionHide"].IsNull())
    {
        if (!value["PaymentOptionHide"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentOptionHide` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionHide = string(value["PaymentOptionHide"].GetString());
        m_paymentOptionHideHasBeenSet = true;
    }

    if (value.HasMember("PaymentIcon") && !value["PaymentIcon"].IsNull())
    {
        if (!value["PaymentIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentIcon = string(value["PaymentIcon"].GetString());
        m_paymentIconHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionSix") && !value["PaymentOptionSix"].IsNull())
    {
        if (!value["PaymentOptionSix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentOptionSix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionSix = string(value["PaymentOptionSix"].GetString());
        m_paymentOptionSixHasBeenSet = true;
    }

    if (value.HasMember("PaymentName") && !value["PaymentName"].IsNull())
    {
        if (!value["PaymentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentName = string(value["PaymentName"].GetString());
        m_paymentNameHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionSeven") && !value["PaymentOptionSeven"].IsNull())
    {
        if (!value["PaymentOptionSeven"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentOptionSeven` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionSeven = string(value["PaymentOptionSeven"].GetString());
        m_paymentOptionSevenHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionOther") && !value["PaymentOptionOther"].IsNull())
    {
        if (!value["PaymentOptionOther"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentOptionOther` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionOther = string(value["PaymentOptionOther"].GetString());
        m_paymentOptionOtherHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionTwo") && !value["PaymentOptionTwo"].IsNull())
    {
        if (!value["PaymentOptionTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentOptionTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionTwo = string(value["PaymentOptionTwo"].GetString());
        m_paymentOptionTwoHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionOne") && !value["PaymentOptionOne"].IsNull())
    {
        if (!value["PaymentOptionOne"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentOptionOne` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionOne = string(value["PaymentOptionOne"].GetString());
        m_paymentOptionOneHasBeenSet = true;
    }

    if (value.HasMember("PaymentDiscountFee") && !value["PaymentDiscountFee"].IsNull())
    {
        if (!value["PaymentDiscountFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentDiscountFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentDiscountFee = string(value["PaymentDiscountFee"].GetString());
        m_paymentDiscountFeeHasBeenSet = true;
    }

    if (value.HasMember("PaymentType") && !value["PaymentType"].IsNull())
    {
        if (!value["PaymentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentType = string(value["PaymentType"].GetString());
        m_paymentTypeHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionFive") && !value["PaymentOptionFive"].IsNull())
    {
        if (!value["PaymentOptionFive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentOptionFive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionFive = string(value["PaymentOptionFive"].GetString());
        m_paymentOptionFiveHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionNine") && !value["PaymentOptionNine"].IsNull())
    {
        if (!value["PaymentOptionNine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentOptionNine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionNine = string(value["PaymentOptionNine"].GetString());
        m_paymentOptionNineHasBeenSet = true;
    }

    if (value.HasMember("PaymentId") && !value["PaymentId"].IsNull())
    {
        if (!value["PaymentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentId = string(value["PaymentId"].GetString());
        m_paymentIdHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionThree") && !value["PaymentOptionThree"].IsNull())
    {
        if (!value["PaymentOptionThree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentOptionThree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionThree = string(value["PaymentOptionThree"].GetString());
        m_paymentOptionThreeHasBeenSet = true;
    }

    if (value.HasMember("PaymentInternalName") && !value["PaymentInternalName"].IsNull())
    {
        if (!value["PaymentInternalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentInternalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentInternalName = string(value["PaymentInternalName"].GetString());
        m_paymentInternalNameHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionFour") && !value["PaymentOptionFour"].IsNull())
    {
        if (!value["PaymentOptionFour"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentOptionFour` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionFour = string(value["PaymentOptionFour"].GetString());
        m_paymentOptionFourHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionTen") && !value["PaymentOptionTen"].IsNull())
    {
        if (!value["PaymentOptionTen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayDataResult.PaymentOptionTen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionTen = string(value["PaymentOptionTen"].GetString());
        m_paymentOptionTenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PayDataResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paymentTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentTag.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionHideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionHide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionHide.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentIcon.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionSixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionSix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionSix.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentName.c_str(), allocator).Move(), allocator);
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

    if (m_paymentOptionTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionOne";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionOne.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentDiscountFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentDiscountFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentDiscountFee.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentType.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionFiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionFive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionFive.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionNineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionNine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionNine.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentId.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionThreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionThree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionThree.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentInternalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentInternalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentInternalName.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionFourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionFour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionFour.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionTenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionTen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionTen.c_str(), allocator).Move(), allocator);
    }

}


string PayDataResult::GetPaymentTag() const
{
    return m_paymentTag;
}

void PayDataResult::SetPaymentTag(const string& _paymentTag)
{
    m_paymentTag = _paymentTag;
    m_paymentTagHasBeenSet = true;
}

bool PayDataResult::PaymentTagHasBeenSet() const
{
    return m_paymentTagHasBeenSet;
}

string PayDataResult::GetPaymentOptionHide() const
{
    return m_paymentOptionHide;
}

void PayDataResult::SetPaymentOptionHide(const string& _paymentOptionHide)
{
    m_paymentOptionHide = _paymentOptionHide;
    m_paymentOptionHideHasBeenSet = true;
}

bool PayDataResult::PaymentOptionHideHasBeenSet() const
{
    return m_paymentOptionHideHasBeenSet;
}

string PayDataResult::GetPaymentIcon() const
{
    return m_paymentIcon;
}

void PayDataResult::SetPaymentIcon(const string& _paymentIcon)
{
    m_paymentIcon = _paymentIcon;
    m_paymentIconHasBeenSet = true;
}

bool PayDataResult::PaymentIconHasBeenSet() const
{
    return m_paymentIconHasBeenSet;
}

string PayDataResult::GetPaymentOptionSix() const
{
    return m_paymentOptionSix;
}

void PayDataResult::SetPaymentOptionSix(const string& _paymentOptionSix)
{
    m_paymentOptionSix = _paymentOptionSix;
    m_paymentOptionSixHasBeenSet = true;
}

bool PayDataResult::PaymentOptionSixHasBeenSet() const
{
    return m_paymentOptionSixHasBeenSet;
}

string PayDataResult::GetPaymentName() const
{
    return m_paymentName;
}

void PayDataResult::SetPaymentName(const string& _paymentName)
{
    m_paymentName = _paymentName;
    m_paymentNameHasBeenSet = true;
}

bool PayDataResult::PaymentNameHasBeenSet() const
{
    return m_paymentNameHasBeenSet;
}

string PayDataResult::GetPaymentOptionSeven() const
{
    return m_paymentOptionSeven;
}

void PayDataResult::SetPaymentOptionSeven(const string& _paymentOptionSeven)
{
    m_paymentOptionSeven = _paymentOptionSeven;
    m_paymentOptionSevenHasBeenSet = true;
}

bool PayDataResult::PaymentOptionSevenHasBeenSet() const
{
    return m_paymentOptionSevenHasBeenSet;
}

string PayDataResult::GetPaymentOptionOther() const
{
    return m_paymentOptionOther;
}

void PayDataResult::SetPaymentOptionOther(const string& _paymentOptionOther)
{
    m_paymentOptionOther = _paymentOptionOther;
    m_paymentOptionOtherHasBeenSet = true;
}

bool PayDataResult::PaymentOptionOtherHasBeenSet() const
{
    return m_paymentOptionOtherHasBeenSet;
}

string PayDataResult::GetPaymentOptionTwo() const
{
    return m_paymentOptionTwo;
}

void PayDataResult::SetPaymentOptionTwo(const string& _paymentOptionTwo)
{
    m_paymentOptionTwo = _paymentOptionTwo;
    m_paymentOptionTwoHasBeenSet = true;
}

bool PayDataResult::PaymentOptionTwoHasBeenSet() const
{
    return m_paymentOptionTwoHasBeenSet;
}

string PayDataResult::GetPaymentOptionOne() const
{
    return m_paymentOptionOne;
}

void PayDataResult::SetPaymentOptionOne(const string& _paymentOptionOne)
{
    m_paymentOptionOne = _paymentOptionOne;
    m_paymentOptionOneHasBeenSet = true;
}

bool PayDataResult::PaymentOptionOneHasBeenSet() const
{
    return m_paymentOptionOneHasBeenSet;
}

string PayDataResult::GetPaymentDiscountFee() const
{
    return m_paymentDiscountFee;
}

void PayDataResult::SetPaymentDiscountFee(const string& _paymentDiscountFee)
{
    m_paymentDiscountFee = _paymentDiscountFee;
    m_paymentDiscountFeeHasBeenSet = true;
}

bool PayDataResult::PaymentDiscountFeeHasBeenSet() const
{
    return m_paymentDiscountFeeHasBeenSet;
}

string PayDataResult::GetPaymentType() const
{
    return m_paymentType;
}

void PayDataResult::SetPaymentType(const string& _paymentType)
{
    m_paymentType = _paymentType;
    m_paymentTypeHasBeenSet = true;
}

bool PayDataResult::PaymentTypeHasBeenSet() const
{
    return m_paymentTypeHasBeenSet;
}

string PayDataResult::GetPaymentOptionFive() const
{
    return m_paymentOptionFive;
}

void PayDataResult::SetPaymentOptionFive(const string& _paymentOptionFive)
{
    m_paymentOptionFive = _paymentOptionFive;
    m_paymentOptionFiveHasBeenSet = true;
}

bool PayDataResult::PaymentOptionFiveHasBeenSet() const
{
    return m_paymentOptionFiveHasBeenSet;
}

string PayDataResult::GetPaymentOptionNine() const
{
    return m_paymentOptionNine;
}

void PayDataResult::SetPaymentOptionNine(const string& _paymentOptionNine)
{
    m_paymentOptionNine = _paymentOptionNine;
    m_paymentOptionNineHasBeenSet = true;
}

bool PayDataResult::PaymentOptionNineHasBeenSet() const
{
    return m_paymentOptionNineHasBeenSet;
}

string PayDataResult::GetPaymentId() const
{
    return m_paymentId;
}

void PayDataResult::SetPaymentId(const string& _paymentId)
{
    m_paymentId = _paymentId;
    m_paymentIdHasBeenSet = true;
}

bool PayDataResult::PaymentIdHasBeenSet() const
{
    return m_paymentIdHasBeenSet;
}

string PayDataResult::GetPaymentOptionThree() const
{
    return m_paymentOptionThree;
}

void PayDataResult::SetPaymentOptionThree(const string& _paymentOptionThree)
{
    m_paymentOptionThree = _paymentOptionThree;
    m_paymentOptionThreeHasBeenSet = true;
}

bool PayDataResult::PaymentOptionThreeHasBeenSet() const
{
    return m_paymentOptionThreeHasBeenSet;
}

string PayDataResult::GetPaymentInternalName() const
{
    return m_paymentInternalName;
}

void PayDataResult::SetPaymentInternalName(const string& _paymentInternalName)
{
    m_paymentInternalName = _paymentInternalName;
    m_paymentInternalNameHasBeenSet = true;
}

bool PayDataResult::PaymentInternalNameHasBeenSet() const
{
    return m_paymentInternalNameHasBeenSet;
}

string PayDataResult::GetPaymentOptionFour() const
{
    return m_paymentOptionFour;
}

void PayDataResult::SetPaymentOptionFour(const string& _paymentOptionFour)
{
    m_paymentOptionFour = _paymentOptionFour;
    m_paymentOptionFourHasBeenSet = true;
}

bool PayDataResult::PaymentOptionFourHasBeenSet() const
{
    return m_paymentOptionFourHasBeenSet;
}

string PayDataResult::GetPaymentOptionTen() const
{
    return m_paymentOptionTen;
}

void PayDataResult::SetPaymentOptionTen(const string& _paymentOptionTen)
{
    m_paymentOptionTen = _paymentOptionTen;
    m_paymentOptionTenHasBeenSet = true;
}

bool PayDataResult::PaymentOptionTenHasBeenSet() const
{
    return m_paymentOptionTenHasBeenSet;
}

