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

#include <tencentcloud/cpdp/v20190820/model/AddContractRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

AddContractRequest::AddContractRequest() :
    m_openIdHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_outContractIdHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_paymentIdHasBeenSet(false),
    m_paymentClassificationIdHasBeenSet(false),
    m_paymentClassificationLimitHasBeenSet(false),
    m_merchantNoHasBeenSet(false),
    m_feeHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_signManHasBeenSet(false),
    m_signNameHasBeenSet(false),
    m_signDateHasBeenSet(false),
    m_autoSignHasBeenSet(false),
    m_contactHasBeenSet(false),
    m_contactTelephoneHasBeenSet(false),
    m_pictureOneHasBeenSet(false),
    m_pictureTwoHasBeenSet(false),
    m_channelExtJsonHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_paymentOptionOneHasBeenSet(false),
    m_paymentOptionTwoHasBeenSet(false),
    m_paymentOptionThreeHasBeenSet(false),
    m_paymentOptionFourHasBeenSet(false),
    m_paymentOptionFiveHasBeenSet(false),
    m_paymentOptionSixHasBeenSet(false),
    m_paymentOptionSevenHasBeenSet(false),
    m_paymentOptionOtherHasBeenSet(false),
    m_paymentOptionTenHasBeenSet(false),
    m_paymentOptionNineHasBeenSet(false)
{
}

string AddContractRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_openKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openKey.c_str(), allocator).Move(), allocator);
    }

    if (m_outContractIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutContractId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outContractId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentId.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentClassificationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentClassificationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentClassificationId.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentClassificationLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentClassificationLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentClassificationLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantNo.c_str(), allocator).Move(), allocator);
    }

    if (m_feeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fee.c_str(), allocator).Move(), allocator);
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_signManHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignMan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signMan.c_str(), allocator).Move(), allocator);
    }

    if (m_signNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signName.c_str(), allocator).Move(), allocator);
    }

    if (m_signDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signDate.c_str(), allocator).Move(), allocator);
    }

    if (m_autoSignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSign";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoSign.c_str(), allocator).Move(), allocator);
    }

    if (m_contactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contact";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contact.c_str(), allocator).Move(), allocator);
    }

    if (m_contactTelephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactTelephone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactTelephone.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureOne";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pictureOne.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureTwo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pictureTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_channelExtJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelExtJson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelExtJson.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionOne";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentOptionOne.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionTwo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentOptionTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionThreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionThree";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentOptionThree.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionFourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionFour";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentOptionFour.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionFiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionFive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentOptionFive.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionSixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionSix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentOptionSix.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionSevenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionSeven";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentOptionSeven.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionOtherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionOther";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentOptionOther.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionTenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionTen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentOptionTen.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionNineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionNine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentOptionNine.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddContractRequest::GetOpenId() const
{
    return m_openId;
}

void AddContractRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool AddContractRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string AddContractRequest::GetOpenKey() const
{
    return m_openKey;
}

void AddContractRequest::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool AddContractRequest::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string AddContractRequest::GetOutContractId() const
{
    return m_outContractId;
}

void AddContractRequest::SetOutContractId(const string& _outContractId)
{
    m_outContractId = _outContractId;
    m_outContractIdHasBeenSet = true;
}

bool AddContractRequest::OutContractIdHasBeenSet() const
{
    return m_outContractIdHasBeenSet;
}

string AddContractRequest::GetCode() const
{
    return m_code;
}

void AddContractRequest::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool AddContractRequest::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string AddContractRequest::GetPaymentId() const
{
    return m_paymentId;
}

void AddContractRequest::SetPaymentId(const string& _paymentId)
{
    m_paymentId = _paymentId;
    m_paymentIdHasBeenSet = true;
}

bool AddContractRequest::PaymentIdHasBeenSet() const
{
    return m_paymentIdHasBeenSet;
}

string AddContractRequest::GetPaymentClassificationId() const
{
    return m_paymentClassificationId;
}

void AddContractRequest::SetPaymentClassificationId(const string& _paymentClassificationId)
{
    m_paymentClassificationId = _paymentClassificationId;
    m_paymentClassificationIdHasBeenSet = true;
}

bool AddContractRequest::PaymentClassificationIdHasBeenSet() const
{
    return m_paymentClassificationIdHasBeenSet;
}

string AddContractRequest::GetPaymentClassificationLimit() const
{
    return m_paymentClassificationLimit;
}

void AddContractRequest::SetPaymentClassificationLimit(const string& _paymentClassificationLimit)
{
    m_paymentClassificationLimit = _paymentClassificationLimit;
    m_paymentClassificationLimitHasBeenSet = true;
}

bool AddContractRequest::PaymentClassificationLimitHasBeenSet() const
{
    return m_paymentClassificationLimitHasBeenSet;
}

string AddContractRequest::GetMerchantNo() const
{
    return m_merchantNo;
}

void AddContractRequest::SetMerchantNo(const string& _merchantNo)
{
    m_merchantNo = _merchantNo;
    m_merchantNoHasBeenSet = true;
}

bool AddContractRequest::MerchantNoHasBeenSet() const
{
    return m_merchantNoHasBeenSet;
}

string AddContractRequest::GetFee() const
{
    return m_fee;
}

void AddContractRequest::SetFee(const string& _fee)
{
    m_fee = _fee;
    m_feeHasBeenSet = true;
}

bool AddContractRequest::FeeHasBeenSet() const
{
    return m_feeHasBeenSet;
}

string AddContractRequest::GetStartDate() const
{
    return m_startDate;
}

void AddContractRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool AddContractRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string AddContractRequest::GetEndDate() const
{
    return m_endDate;
}

void AddContractRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool AddContractRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string AddContractRequest::GetSignMan() const
{
    return m_signMan;
}

void AddContractRequest::SetSignMan(const string& _signMan)
{
    m_signMan = _signMan;
    m_signManHasBeenSet = true;
}

bool AddContractRequest::SignManHasBeenSet() const
{
    return m_signManHasBeenSet;
}

string AddContractRequest::GetSignName() const
{
    return m_signName;
}

void AddContractRequest::SetSignName(const string& _signName)
{
    m_signName = _signName;
    m_signNameHasBeenSet = true;
}

bool AddContractRequest::SignNameHasBeenSet() const
{
    return m_signNameHasBeenSet;
}

string AddContractRequest::GetSignDate() const
{
    return m_signDate;
}

void AddContractRequest::SetSignDate(const string& _signDate)
{
    m_signDate = _signDate;
    m_signDateHasBeenSet = true;
}

bool AddContractRequest::SignDateHasBeenSet() const
{
    return m_signDateHasBeenSet;
}

string AddContractRequest::GetAutoSign() const
{
    return m_autoSign;
}

void AddContractRequest::SetAutoSign(const string& _autoSign)
{
    m_autoSign = _autoSign;
    m_autoSignHasBeenSet = true;
}

bool AddContractRequest::AutoSignHasBeenSet() const
{
    return m_autoSignHasBeenSet;
}

string AddContractRequest::GetContact() const
{
    return m_contact;
}

void AddContractRequest::SetContact(const string& _contact)
{
    m_contact = _contact;
    m_contactHasBeenSet = true;
}

bool AddContractRequest::ContactHasBeenSet() const
{
    return m_contactHasBeenSet;
}

string AddContractRequest::GetContactTelephone() const
{
    return m_contactTelephone;
}

void AddContractRequest::SetContactTelephone(const string& _contactTelephone)
{
    m_contactTelephone = _contactTelephone;
    m_contactTelephoneHasBeenSet = true;
}

bool AddContractRequest::ContactTelephoneHasBeenSet() const
{
    return m_contactTelephoneHasBeenSet;
}

string AddContractRequest::GetPictureOne() const
{
    return m_pictureOne;
}

void AddContractRequest::SetPictureOne(const string& _pictureOne)
{
    m_pictureOne = _pictureOne;
    m_pictureOneHasBeenSet = true;
}

bool AddContractRequest::PictureOneHasBeenSet() const
{
    return m_pictureOneHasBeenSet;
}

string AddContractRequest::GetPictureTwo() const
{
    return m_pictureTwo;
}

void AddContractRequest::SetPictureTwo(const string& _pictureTwo)
{
    m_pictureTwo = _pictureTwo;
    m_pictureTwoHasBeenSet = true;
}

bool AddContractRequest::PictureTwoHasBeenSet() const
{
    return m_pictureTwoHasBeenSet;
}

string AddContractRequest::GetChannelExtJson() const
{
    return m_channelExtJson;
}

void AddContractRequest::SetChannelExtJson(const string& _channelExtJson)
{
    m_channelExtJson = _channelExtJson;
    m_channelExtJsonHasBeenSet = true;
}

bool AddContractRequest::ChannelExtJsonHasBeenSet() const
{
    return m_channelExtJsonHasBeenSet;
}

string AddContractRequest::GetProfile() const
{
    return m_profile;
}

void AddContractRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool AddContractRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

string AddContractRequest::GetPaymentOptionOne() const
{
    return m_paymentOptionOne;
}

void AddContractRequest::SetPaymentOptionOne(const string& _paymentOptionOne)
{
    m_paymentOptionOne = _paymentOptionOne;
    m_paymentOptionOneHasBeenSet = true;
}

bool AddContractRequest::PaymentOptionOneHasBeenSet() const
{
    return m_paymentOptionOneHasBeenSet;
}

string AddContractRequest::GetPaymentOptionTwo() const
{
    return m_paymentOptionTwo;
}

void AddContractRequest::SetPaymentOptionTwo(const string& _paymentOptionTwo)
{
    m_paymentOptionTwo = _paymentOptionTwo;
    m_paymentOptionTwoHasBeenSet = true;
}

bool AddContractRequest::PaymentOptionTwoHasBeenSet() const
{
    return m_paymentOptionTwoHasBeenSet;
}

string AddContractRequest::GetPaymentOptionThree() const
{
    return m_paymentOptionThree;
}

void AddContractRequest::SetPaymentOptionThree(const string& _paymentOptionThree)
{
    m_paymentOptionThree = _paymentOptionThree;
    m_paymentOptionThreeHasBeenSet = true;
}

bool AddContractRequest::PaymentOptionThreeHasBeenSet() const
{
    return m_paymentOptionThreeHasBeenSet;
}

string AddContractRequest::GetPaymentOptionFour() const
{
    return m_paymentOptionFour;
}

void AddContractRequest::SetPaymentOptionFour(const string& _paymentOptionFour)
{
    m_paymentOptionFour = _paymentOptionFour;
    m_paymentOptionFourHasBeenSet = true;
}

bool AddContractRequest::PaymentOptionFourHasBeenSet() const
{
    return m_paymentOptionFourHasBeenSet;
}

string AddContractRequest::GetPaymentOptionFive() const
{
    return m_paymentOptionFive;
}

void AddContractRequest::SetPaymentOptionFive(const string& _paymentOptionFive)
{
    m_paymentOptionFive = _paymentOptionFive;
    m_paymentOptionFiveHasBeenSet = true;
}

bool AddContractRequest::PaymentOptionFiveHasBeenSet() const
{
    return m_paymentOptionFiveHasBeenSet;
}

string AddContractRequest::GetPaymentOptionSix() const
{
    return m_paymentOptionSix;
}

void AddContractRequest::SetPaymentOptionSix(const string& _paymentOptionSix)
{
    m_paymentOptionSix = _paymentOptionSix;
    m_paymentOptionSixHasBeenSet = true;
}

bool AddContractRequest::PaymentOptionSixHasBeenSet() const
{
    return m_paymentOptionSixHasBeenSet;
}

string AddContractRequest::GetPaymentOptionSeven() const
{
    return m_paymentOptionSeven;
}

void AddContractRequest::SetPaymentOptionSeven(const string& _paymentOptionSeven)
{
    m_paymentOptionSeven = _paymentOptionSeven;
    m_paymentOptionSevenHasBeenSet = true;
}

bool AddContractRequest::PaymentOptionSevenHasBeenSet() const
{
    return m_paymentOptionSevenHasBeenSet;
}

string AddContractRequest::GetPaymentOptionOther() const
{
    return m_paymentOptionOther;
}

void AddContractRequest::SetPaymentOptionOther(const string& _paymentOptionOther)
{
    m_paymentOptionOther = _paymentOptionOther;
    m_paymentOptionOtherHasBeenSet = true;
}

bool AddContractRequest::PaymentOptionOtherHasBeenSet() const
{
    return m_paymentOptionOtherHasBeenSet;
}

string AddContractRequest::GetPaymentOptionTen() const
{
    return m_paymentOptionTen;
}

void AddContractRequest::SetPaymentOptionTen(const string& _paymentOptionTen)
{
    m_paymentOptionTen = _paymentOptionTen;
    m_paymentOptionTenHasBeenSet = true;
}

bool AddContractRequest::PaymentOptionTenHasBeenSet() const
{
    return m_paymentOptionTenHasBeenSet;
}

string AddContractRequest::GetPaymentOptionNine() const
{
    return m_paymentOptionNine;
}

void AddContractRequest::SetPaymentOptionNine(const string& _paymentOptionNine)
{
    m_paymentOptionNine = _paymentOptionNine;
    m_paymentOptionNineHasBeenSet = true;
}

bool AddContractRequest::PaymentOptionNineHasBeenSet() const
{
    return m_paymentOptionNineHasBeenSet;
}


