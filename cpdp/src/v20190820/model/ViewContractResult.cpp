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

#include <tencentcloud/cpdp/v20190820/model/ViewContractResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ViewContractResult::ViewContractResult() :
    m_paymentTagHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_agentNoHasBeenSet(false),
    m_contractOptionFourHasBeenSet(false),
    m_contractOptionTwoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_paymentIdHasBeenSet(false),
    m_feeHasBeenSet(false),
    m_paymentOptionFiveHasBeenSet(false),
    m_outContractIdHasBeenSet(false),
    m_channelExtJsonHasBeenSet(false),
    m_contractOptionFiveHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_contractOptionSixHasBeenSet(false),
    m_paymentOptionSevenHasBeenSet(false),
    m_pictureTwoHasBeenSet(false),
    m_merchantNoHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_contractOptionOtherHasBeenSet(false),
    m_contractOptionThreeHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_shopCountHasBeenSet(false),
    m_paymentOptionThreeHasBeenSet(false),
    m_paymentClassificationNameHasBeenSet(false),
    m_contractOptionSevenHasBeenSet(false),
    m_paymentOptionFourHasBeenSet(false),
    m_paymentClassificationLimitHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_paymentOptionSixHasBeenSet(false),
    m_merchantNameHasBeenSet(false),
    m_contractOptionOneHasBeenSet(false),
    m_paymentOptionOtherHasBeenSet(false),
    m_paymentOptionTwoHasBeenSet(false),
    m_paymentOptionOneHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_contactTelephoneHasBeenSet(false),
    m_contactHasBeenSet(false),
    m_signDateHasBeenSet(false),
    m_paymentOptionNineHasBeenSet(false),
    m_paymentNameHasBeenSet(false),
    m_paymentInternalNameHasBeenSet(false),
    m_contractOptionTenHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_pictureOneHasBeenSet(false),
    m_signManHasBeenSet(false),
    m_channelNoHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_autoSignHasBeenSet(false),
    m_contractOptionNineHasBeenSet(false),
    m_cityIdHasBeenSet(false),
    m_paymentTypeHasBeenSet(false),
    m_paymentClassificationIdHasBeenSet(false),
    m_brandNameHasBeenSet(false),
    m_paymentOptionTenHasBeenSet(false),
    m_contractIdHasBeenSet(false)
{
}

CoreInternalOutcome ViewContractResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PaymentTag") && !value["PaymentTag"].IsNull())
    {
        if (!value["PaymentTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentTag = string(value["PaymentTag"].GetString());
        m_paymentTagHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("AgentNo") && !value["AgentNo"].IsNull())
    {
        if (!value["AgentNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.AgentNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentNo = string(value["AgentNo"].GetString());
        m_agentNoHasBeenSet = true;
    }

    if (value.HasMember("ContractOptionFour") && !value["ContractOptionFour"].IsNull())
    {
        if (!value["ContractOptionFour"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.ContractOptionFour` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractOptionFour = string(value["ContractOptionFour"].GetString());
        m_contractOptionFourHasBeenSet = true;
    }

    if (value.HasMember("ContractOptionTwo") && !value["ContractOptionTwo"].IsNull())
    {
        if (!value["ContractOptionTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.ContractOptionTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractOptionTwo = string(value["ContractOptionTwo"].GetString());
        m_contractOptionTwoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PaymentId") && !value["PaymentId"].IsNull())
    {
        if (!value["PaymentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentId = string(value["PaymentId"].GetString());
        m_paymentIdHasBeenSet = true;
    }

    if (value.HasMember("Fee") && !value["Fee"].IsNull())
    {
        if (!value["Fee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.Fee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fee = string(value["Fee"].GetString());
        m_feeHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionFive") && !value["PaymentOptionFive"].IsNull())
    {
        if (!value["PaymentOptionFive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentOptionFive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionFive = string(value["PaymentOptionFive"].GetString());
        m_paymentOptionFiveHasBeenSet = true;
    }

    if (value.HasMember("OutContractId") && !value["OutContractId"].IsNull())
    {
        if (!value["OutContractId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.OutContractId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outContractId = string(value["OutContractId"].GetString());
        m_outContractIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelExtJson") && !value["ChannelExtJson"].IsNull())
    {
        if (!value["ChannelExtJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.ChannelExtJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelExtJson = string(value["ChannelExtJson"].GetString());
        m_channelExtJsonHasBeenSet = true;
    }

    if (value.HasMember("ContractOptionFive") && !value["ContractOptionFive"].IsNull())
    {
        if (!value["ContractOptionFive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.ContractOptionFive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractOptionFive = string(value["ContractOptionFive"].GetString());
        m_contractOptionFiveHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("StartDate") && !value["StartDate"].IsNull())
    {
        if (!value["StartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.StartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDate = string(value["StartDate"].GetString());
        m_startDateHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("EndDate") && !value["EndDate"].IsNull())
    {
        if (!value["EndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(value["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }

    if (value.HasMember("ContractOptionSix") && !value["ContractOptionSix"].IsNull())
    {
        if (!value["ContractOptionSix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.ContractOptionSix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractOptionSix = string(value["ContractOptionSix"].GetString());
        m_contractOptionSixHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionSeven") && !value["PaymentOptionSeven"].IsNull())
    {
        if (!value["PaymentOptionSeven"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentOptionSeven` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionSeven = string(value["PaymentOptionSeven"].GetString());
        m_paymentOptionSevenHasBeenSet = true;
    }

    if (value.HasMember("PictureTwo") && !value["PictureTwo"].IsNull())
    {
        if (!value["PictureTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PictureTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pictureTwo = string(value["PictureTwo"].GetString());
        m_pictureTwoHasBeenSet = true;
    }

    if (value.HasMember("MerchantNo") && !value["MerchantNo"].IsNull())
    {
        if (!value["MerchantNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.MerchantNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantNo = string(value["MerchantNo"].GetString());
        m_merchantNoHasBeenSet = true;
    }

    if (value.HasMember("AgentName") && !value["AgentName"].IsNull())
    {
        if (!value["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(value["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
    }

    if (value.HasMember("ContractOptionOther") && !value["ContractOptionOther"].IsNull())
    {
        if (!value["ContractOptionOther"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.ContractOptionOther` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractOptionOther = string(value["ContractOptionOther"].GetString());
        m_contractOptionOtherHasBeenSet = true;
    }

    if (value.HasMember("ContractOptionThree") && !value["ContractOptionThree"].IsNull())
    {
        if (!value["ContractOptionThree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.ContractOptionThree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractOptionThree = string(value["ContractOptionThree"].GetString());
        m_contractOptionThreeHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("ShopCount") && !value["ShopCount"].IsNull())
    {
        if (!value["ShopCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.ShopCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopCount = string(value["ShopCount"].GetString());
        m_shopCountHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionThree") && !value["PaymentOptionThree"].IsNull())
    {
        if (!value["PaymentOptionThree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentOptionThree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionThree = string(value["PaymentOptionThree"].GetString());
        m_paymentOptionThreeHasBeenSet = true;
    }

    if (value.HasMember("PaymentClassificationName") && !value["PaymentClassificationName"].IsNull())
    {
        if (!value["PaymentClassificationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentClassificationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentClassificationName = string(value["PaymentClassificationName"].GetString());
        m_paymentClassificationNameHasBeenSet = true;
    }

    if (value.HasMember("ContractOptionSeven") && !value["ContractOptionSeven"].IsNull())
    {
        if (!value["ContractOptionSeven"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.ContractOptionSeven` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractOptionSeven = string(value["ContractOptionSeven"].GetString());
        m_contractOptionSevenHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionFour") && !value["PaymentOptionFour"].IsNull())
    {
        if (!value["PaymentOptionFour"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentOptionFour` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionFour = string(value["PaymentOptionFour"].GetString());
        m_paymentOptionFourHasBeenSet = true;
    }

    if (value.HasMember("PaymentClassificationLimit") && !value["PaymentClassificationLimit"].IsNull())
    {
        if (!value["PaymentClassificationLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentClassificationLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentClassificationLimit = string(value["PaymentClassificationLimit"].GetString());
        m_paymentClassificationLimitHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionSix") && !value["PaymentOptionSix"].IsNull())
    {
        if (!value["PaymentOptionSix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentOptionSix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionSix = string(value["PaymentOptionSix"].GetString());
        m_paymentOptionSixHasBeenSet = true;
    }

    if (value.HasMember("MerchantName") && !value["MerchantName"].IsNull())
    {
        if (!value["MerchantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.MerchantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantName = string(value["MerchantName"].GetString());
        m_merchantNameHasBeenSet = true;
    }

    if (value.HasMember("ContractOptionOne") && !value["ContractOptionOne"].IsNull())
    {
        if (!value["ContractOptionOne"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.ContractOptionOne` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractOptionOne = string(value["ContractOptionOne"].GetString());
        m_contractOptionOneHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionOther") && !value["PaymentOptionOther"].IsNull())
    {
        if (!value["PaymentOptionOther"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentOptionOther` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionOther = string(value["PaymentOptionOther"].GetString());
        m_paymentOptionOtherHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionTwo") && !value["PaymentOptionTwo"].IsNull())
    {
        if (!value["PaymentOptionTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentOptionTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionTwo = string(value["PaymentOptionTwo"].GetString());
        m_paymentOptionTwoHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionOne") && !value["PaymentOptionOne"].IsNull())
    {
        if (!value["PaymentOptionOne"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentOptionOne` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionOne = string(value["PaymentOptionOne"].GetString());
        m_paymentOptionOneHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ContactTelephone") && !value["ContactTelephone"].IsNull())
    {
        if (!value["ContactTelephone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.ContactTelephone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactTelephone = string(value["ContactTelephone"].GetString());
        m_contactTelephoneHasBeenSet = true;
    }

    if (value.HasMember("Contact") && !value["Contact"].IsNull())
    {
        if (!value["Contact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.Contact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contact = string(value["Contact"].GetString());
        m_contactHasBeenSet = true;
    }

    if (value.HasMember("SignDate") && !value["SignDate"].IsNull())
    {
        if (!value["SignDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.SignDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signDate = string(value["SignDate"].GetString());
        m_signDateHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionNine") && !value["PaymentOptionNine"].IsNull())
    {
        if (!value["PaymentOptionNine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentOptionNine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionNine = string(value["PaymentOptionNine"].GetString());
        m_paymentOptionNineHasBeenSet = true;
    }

    if (value.HasMember("PaymentName") && !value["PaymentName"].IsNull())
    {
        if (!value["PaymentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentName = string(value["PaymentName"].GetString());
        m_paymentNameHasBeenSet = true;
    }

    if (value.HasMember("PaymentInternalName") && !value["PaymentInternalName"].IsNull())
    {
        if (!value["PaymentInternalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentInternalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentInternalName = string(value["PaymentInternalName"].GetString());
        m_paymentInternalNameHasBeenSet = true;
    }

    if (value.HasMember("ContractOptionTen") && !value["ContractOptionTen"].IsNull())
    {
        if (!value["ContractOptionTen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.ContractOptionTen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractOptionTen = string(value["ContractOptionTen"].GetString());
        m_contractOptionTenHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("PictureOne") && !value["PictureOne"].IsNull())
    {
        if (!value["PictureOne"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PictureOne` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pictureOne = string(value["PictureOne"].GetString());
        m_pictureOneHasBeenSet = true;
    }

    if (value.HasMember("SignMan") && !value["SignMan"].IsNull())
    {
        if (!value["SignMan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.SignMan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signMan = string(value["SignMan"].GetString());
        m_signManHasBeenSet = true;
    }

    if (value.HasMember("ChannelNo") && !value["ChannelNo"].IsNull())
    {
        if (!value["ChannelNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.ChannelNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelNo = string(value["ChannelNo"].GetString());
        m_channelNoHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoSign") && !value["AutoSign"].IsNull())
    {
        if (!value["AutoSign"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.AutoSign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoSign = string(value["AutoSign"].GetString());
        m_autoSignHasBeenSet = true;
    }

    if (value.HasMember("ContractOptionNine") && !value["ContractOptionNine"].IsNull())
    {
        if (!value["ContractOptionNine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.ContractOptionNine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractOptionNine = string(value["ContractOptionNine"].GetString());
        m_contractOptionNineHasBeenSet = true;
    }

    if (value.HasMember("CityId") && !value["CityId"].IsNull())
    {
        if (!value["CityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.CityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityId = string(value["CityId"].GetString());
        m_cityIdHasBeenSet = true;
    }

    if (value.HasMember("PaymentType") && !value["PaymentType"].IsNull())
    {
        if (!value["PaymentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentType = string(value["PaymentType"].GetString());
        m_paymentTypeHasBeenSet = true;
    }

    if (value.HasMember("PaymentClassificationId") && !value["PaymentClassificationId"].IsNull())
    {
        if (!value["PaymentClassificationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentClassificationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentClassificationId = string(value["PaymentClassificationId"].GetString());
        m_paymentClassificationIdHasBeenSet = true;
    }

    if (value.HasMember("BrandName") && !value["BrandName"].IsNull())
    {
        if (!value["BrandName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.BrandName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandName = string(value["BrandName"].GetString());
        m_brandNameHasBeenSet = true;
    }

    if (value.HasMember("PaymentOptionTen") && !value["PaymentOptionTen"].IsNull())
    {
        if (!value["PaymentOptionTen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.PaymentOptionTen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentOptionTen = string(value["PaymentOptionTen"].GetString());
        m_paymentOptionTenHasBeenSet = true;
    }

    if (value.HasMember("ContractId") && !value["ContractId"].IsNull())
    {
        if (!value["ContractId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewContractResult.ContractId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractId = string(value["ContractId"].GetString());
        m_contractIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ViewContractResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paymentTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentTag.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_agentNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentNo.c_str(), allocator).Move(), allocator);
    }

    if (m_contractOptionFourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractOptionFour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractOptionFour.c_str(), allocator).Move(), allocator);
    }

    if (m_contractOptionTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractOptionTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractOptionTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentId.c_str(), allocator).Move(), allocator);
    }

    if (m_feeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fee.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionFiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionFive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionFive.c_str(), allocator).Move(), allocator);
    }

    if (m_outContractIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutContractId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outContractId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelExtJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelExtJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelExtJson.c_str(), allocator).Move(), allocator);
    }

    if (m_contractOptionFiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractOptionFive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractOptionFive.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_contractOptionSixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractOptionSix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractOptionSix.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionSevenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionSeven";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionSeven.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pictureTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantNo.c_str(), allocator).Move(), allocator);
    }

    if (m_agentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentName.c_str(), allocator).Move(), allocator);
    }

    if (m_contractOptionOtherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractOptionOther";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractOptionOther.c_str(), allocator).Move(), allocator);
    }

    if (m_contractOptionThreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractOptionThree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractOptionThree.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_shopCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopCount.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionThreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionThree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionThree.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentClassificationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentClassificationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentClassificationName.c_str(), allocator).Move(), allocator);
    }

    if (m_contractOptionSevenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractOptionSeven";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractOptionSeven.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionFourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionFour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionFour.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentClassificationLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentClassificationLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentClassificationLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionSixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionSix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionSix.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_contractOptionOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractOptionOne";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractOptionOne.c_str(), allocator).Move(), allocator);
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

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_contactTelephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactTelephone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contactTelephone.c_str(), allocator).Move(), allocator);
    }

    if (m_contactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contact.c_str(), allocator).Move(), allocator);
    }

    if (m_signDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signDate.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionNineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionNine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionNine.c_str(), allocator).Move(), allocator);
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

    if (m_contractOptionTenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractOptionTen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractOptionTen.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureOne";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pictureOne.c_str(), allocator).Move(), allocator);
    }

    if (m_signManHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignMan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signMan.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelNo.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoSignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoSign.c_str(), allocator).Move(), allocator);
    }

    if (m_contractOptionNineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractOptionNine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractOptionNine.c_str(), allocator).Move(), allocator);
    }

    if (m_cityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityId.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentType.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentClassificationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentClassificationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentClassificationId.c_str(), allocator).Move(), allocator);
    }

    if (m_brandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brandName.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentOptionTenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentOptionTen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentOptionTen.c_str(), allocator).Move(), allocator);
    }

    if (m_contractIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractId.c_str(), allocator).Move(), allocator);
    }

}


string ViewContractResult::GetPaymentTag() const
{
    return m_paymentTag;
}

void ViewContractResult::SetPaymentTag(const string& _paymentTag)
{
    m_paymentTag = _paymentTag;
    m_paymentTagHasBeenSet = true;
}

bool ViewContractResult::PaymentTagHasBeenSet() const
{
    return m_paymentTagHasBeenSet;
}

string ViewContractResult::GetCity() const
{
    return m_city;
}

void ViewContractResult::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool ViewContractResult::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string ViewContractResult::GetAgentNo() const
{
    return m_agentNo;
}

void ViewContractResult::SetAgentNo(const string& _agentNo)
{
    m_agentNo = _agentNo;
    m_agentNoHasBeenSet = true;
}

bool ViewContractResult::AgentNoHasBeenSet() const
{
    return m_agentNoHasBeenSet;
}

string ViewContractResult::GetContractOptionFour() const
{
    return m_contractOptionFour;
}

void ViewContractResult::SetContractOptionFour(const string& _contractOptionFour)
{
    m_contractOptionFour = _contractOptionFour;
    m_contractOptionFourHasBeenSet = true;
}

bool ViewContractResult::ContractOptionFourHasBeenSet() const
{
    return m_contractOptionFourHasBeenSet;
}

string ViewContractResult::GetContractOptionTwo() const
{
    return m_contractOptionTwo;
}

void ViewContractResult::SetContractOptionTwo(const string& _contractOptionTwo)
{
    m_contractOptionTwo = _contractOptionTwo;
    m_contractOptionTwoHasBeenSet = true;
}

bool ViewContractResult::ContractOptionTwoHasBeenSet() const
{
    return m_contractOptionTwoHasBeenSet;
}

string ViewContractResult::GetStatus() const
{
    return m_status;
}

void ViewContractResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ViewContractResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ViewContractResult::GetPaymentId() const
{
    return m_paymentId;
}

void ViewContractResult::SetPaymentId(const string& _paymentId)
{
    m_paymentId = _paymentId;
    m_paymentIdHasBeenSet = true;
}

bool ViewContractResult::PaymentIdHasBeenSet() const
{
    return m_paymentIdHasBeenSet;
}

string ViewContractResult::GetFee() const
{
    return m_fee;
}

void ViewContractResult::SetFee(const string& _fee)
{
    m_fee = _fee;
    m_feeHasBeenSet = true;
}

bool ViewContractResult::FeeHasBeenSet() const
{
    return m_feeHasBeenSet;
}

string ViewContractResult::GetPaymentOptionFive() const
{
    return m_paymentOptionFive;
}

void ViewContractResult::SetPaymentOptionFive(const string& _paymentOptionFive)
{
    m_paymentOptionFive = _paymentOptionFive;
    m_paymentOptionFiveHasBeenSet = true;
}

bool ViewContractResult::PaymentOptionFiveHasBeenSet() const
{
    return m_paymentOptionFiveHasBeenSet;
}

string ViewContractResult::GetOutContractId() const
{
    return m_outContractId;
}

void ViewContractResult::SetOutContractId(const string& _outContractId)
{
    m_outContractId = _outContractId;
    m_outContractIdHasBeenSet = true;
}

bool ViewContractResult::OutContractIdHasBeenSet() const
{
    return m_outContractIdHasBeenSet;
}

string ViewContractResult::GetChannelExtJson() const
{
    return m_channelExtJson;
}

void ViewContractResult::SetChannelExtJson(const string& _channelExtJson)
{
    m_channelExtJson = _channelExtJson;
    m_channelExtJsonHasBeenSet = true;
}

bool ViewContractResult::ChannelExtJsonHasBeenSet() const
{
    return m_channelExtJsonHasBeenSet;
}

string ViewContractResult::GetContractOptionFive() const
{
    return m_contractOptionFive;
}

void ViewContractResult::SetContractOptionFive(const string& _contractOptionFive)
{
    m_contractOptionFive = _contractOptionFive;
    m_contractOptionFiveHasBeenSet = true;
}

bool ViewContractResult::ContractOptionFiveHasBeenSet() const
{
    return m_contractOptionFiveHasBeenSet;
}

string ViewContractResult::GetProvince() const
{
    return m_province;
}

void ViewContractResult::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool ViewContractResult::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string ViewContractResult::GetStartDate() const
{
    return m_startDate;
}

void ViewContractResult::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool ViewContractResult::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string ViewContractResult::GetAddress() const
{
    return m_address;
}

void ViewContractResult::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool ViewContractResult::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string ViewContractResult::GetEndDate() const
{
    return m_endDate;
}

void ViewContractResult::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool ViewContractResult::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string ViewContractResult::GetContractOptionSix() const
{
    return m_contractOptionSix;
}

void ViewContractResult::SetContractOptionSix(const string& _contractOptionSix)
{
    m_contractOptionSix = _contractOptionSix;
    m_contractOptionSixHasBeenSet = true;
}

bool ViewContractResult::ContractOptionSixHasBeenSet() const
{
    return m_contractOptionSixHasBeenSet;
}

string ViewContractResult::GetPaymentOptionSeven() const
{
    return m_paymentOptionSeven;
}

void ViewContractResult::SetPaymentOptionSeven(const string& _paymentOptionSeven)
{
    m_paymentOptionSeven = _paymentOptionSeven;
    m_paymentOptionSevenHasBeenSet = true;
}

bool ViewContractResult::PaymentOptionSevenHasBeenSet() const
{
    return m_paymentOptionSevenHasBeenSet;
}

string ViewContractResult::GetPictureTwo() const
{
    return m_pictureTwo;
}

void ViewContractResult::SetPictureTwo(const string& _pictureTwo)
{
    m_pictureTwo = _pictureTwo;
    m_pictureTwoHasBeenSet = true;
}

bool ViewContractResult::PictureTwoHasBeenSet() const
{
    return m_pictureTwoHasBeenSet;
}

string ViewContractResult::GetMerchantNo() const
{
    return m_merchantNo;
}

void ViewContractResult::SetMerchantNo(const string& _merchantNo)
{
    m_merchantNo = _merchantNo;
    m_merchantNoHasBeenSet = true;
}

bool ViewContractResult::MerchantNoHasBeenSet() const
{
    return m_merchantNoHasBeenSet;
}

string ViewContractResult::GetAgentName() const
{
    return m_agentName;
}

void ViewContractResult::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool ViewContractResult::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string ViewContractResult::GetContractOptionOther() const
{
    return m_contractOptionOther;
}

void ViewContractResult::SetContractOptionOther(const string& _contractOptionOther)
{
    m_contractOptionOther = _contractOptionOther;
    m_contractOptionOtherHasBeenSet = true;
}

bool ViewContractResult::ContractOptionOtherHasBeenSet() const
{
    return m_contractOptionOtherHasBeenSet;
}

string ViewContractResult::GetContractOptionThree() const
{
    return m_contractOptionThree;
}

void ViewContractResult::SetContractOptionThree(const string& _contractOptionThree)
{
    m_contractOptionThree = _contractOptionThree;
    m_contractOptionThreeHasBeenSet = true;
}

bool ViewContractResult::ContractOptionThreeHasBeenSet() const
{
    return m_contractOptionThreeHasBeenSet;
}

string ViewContractResult::GetCountry() const
{
    return m_country;
}

void ViewContractResult::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool ViewContractResult::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string ViewContractResult::GetShopCount() const
{
    return m_shopCount;
}

void ViewContractResult::SetShopCount(const string& _shopCount)
{
    m_shopCount = _shopCount;
    m_shopCountHasBeenSet = true;
}

bool ViewContractResult::ShopCountHasBeenSet() const
{
    return m_shopCountHasBeenSet;
}

string ViewContractResult::GetPaymentOptionThree() const
{
    return m_paymentOptionThree;
}

void ViewContractResult::SetPaymentOptionThree(const string& _paymentOptionThree)
{
    m_paymentOptionThree = _paymentOptionThree;
    m_paymentOptionThreeHasBeenSet = true;
}

bool ViewContractResult::PaymentOptionThreeHasBeenSet() const
{
    return m_paymentOptionThreeHasBeenSet;
}

string ViewContractResult::GetPaymentClassificationName() const
{
    return m_paymentClassificationName;
}

void ViewContractResult::SetPaymentClassificationName(const string& _paymentClassificationName)
{
    m_paymentClassificationName = _paymentClassificationName;
    m_paymentClassificationNameHasBeenSet = true;
}

bool ViewContractResult::PaymentClassificationNameHasBeenSet() const
{
    return m_paymentClassificationNameHasBeenSet;
}

string ViewContractResult::GetContractOptionSeven() const
{
    return m_contractOptionSeven;
}

void ViewContractResult::SetContractOptionSeven(const string& _contractOptionSeven)
{
    m_contractOptionSeven = _contractOptionSeven;
    m_contractOptionSevenHasBeenSet = true;
}

bool ViewContractResult::ContractOptionSevenHasBeenSet() const
{
    return m_contractOptionSevenHasBeenSet;
}

string ViewContractResult::GetPaymentOptionFour() const
{
    return m_paymentOptionFour;
}

void ViewContractResult::SetPaymentOptionFour(const string& _paymentOptionFour)
{
    m_paymentOptionFour = _paymentOptionFour;
    m_paymentOptionFourHasBeenSet = true;
}

bool ViewContractResult::PaymentOptionFourHasBeenSet() const
{
    return m_paymentOptionFourHasBeenSet;
}

string ViewContractResult::GetPaymentClassificationLimit() const
{
    return m_paymentClassificationLimit;
}

void ViewContractResult::SetPaymentClassificationLimit(const string& _paymentClassificationLimit)
{
    m_paymentClassificationLimit = _paymentClassificationLimit;
    m_paymentClassificationLimitHasBeenSet = true;
}

bool ViewContractResult::PaymentClassificationLimitHasBeenSet() const
{
    return m_paymentClassificationLimitHasBeenSet;
}

string ViewContractResult::GetRemark() const
{
    return m_remark;
}

void ViewContractResult::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ViewContractResult::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ViewContractResult::GetPaymentOptionSix() const
{
    return m_paymentOptionSix;
}

void ViewContractResult::SetPaymentOptionSix(const string& _paymentOptionSix)
{
    m_paymentOptionSix = _paymentOptionSix;
    m_paymentOptionSixHasBeenSet = true;
}

bool ViewContractResult::PaymentOptionSixHasBeenSet() const
{
    return m_paymentOptionSixHasBeenSet;
}

string ViewContractResult::GetMerchantName() const
{
    return m_merchantName;
}

void ViewContractResult::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool ViewContractResult::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}

string ViewContractResult::GetContractOptionOne() const
{
    return m_contractOptionOne;
}

void ViewContractResult::SetContractOptionOne(const string& _contractOptionOne)
{
    m_contractOptionOne = _contractOptionOne;
    m_contractOptionOneHasBeenSet = true;
}

bool ViewContractResult::ContractOptionOneHasBeenSet() const
{
    return m_contractOptionOneHasBeenSet;
}

string ViewContractResult::GetPaymentOptionOther() const
{
    return m_paymentOptionOther;
}

void ViewContractResult::SetPaymentOptionOther(const string& _paymentOptionOther)
{
    m_paymentOptionOther = _paymentOptionOther;
    m_paymentOptionOtherHasBeenSet = true;
}

bool ViewContractResult::PaymentOptionOtherHasBeenSet() const
{
    return m_paymentOptionOtherHasBeenSet;
}

string ViewContractResult::GetPaymentOptionTwo() const
{
    return m_paymentOptionTwo;
}

void ViewContractResult::SetPaymentOptionTwo(const string& _paymentOptionTwo)
{
    m_paymentOptionTwo = _paymentOptionTwo;
    m_paymentOptionTwoHasBeenSet = true;
}

bool ViewContractResult::PaymentOptionTwoHasBeenSet() const
{
    return m_paymentOptionTwoHasBeenSet;
}

string ViewContractResult::GetPaymentOptionOne() const
{
    return m_paymentOptionOne;
}

void ViewContractResult::SetPaymentOptionOne(const string& _paymentOptionOne)
{
    m_paymentOptionOne = _paymentOptionOne;
    m_paymentOptionOneHasBeenSet = true;
}

bool ViewContractResult::PaymentOptionOneHasBeenSet() const
{
    return m_paymentOptionOneHasBeenSet;
}

string ViewContractResult::GetUpdateTime() const
{
    return m_updateTime;
}

void ViewContractResult::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ViewContractResult::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ViewContractResult::GetContactTelephone() const
{
    return m_contactTelephone;
}

void ViewContractResult::SetContactTelephone(const string& _contactTelephone)
{
    m_contactTelephone = _contactTelephone;
    m_contactTelephoneHasBeenSet = true;
}

bool ViewContractResult::ContactTelephoneHasBeenSet() const
{
    return m_contactTelephoneHasBeenSet;
}

string ViewContractResult::GetContact() const
{
    return m_contact;
}

void ViewContractResult::SetContact(const string& _contact)
{
    m_contact = _contact;
    m_contactHasBeenSet = true;
}

bool ViewContractResult::ContactHasBeenSet() const
{
    return m_contactHasBeenSet;
}

string ViewContractResult::GetSignDate() const
{
    return m_signDate;
}

void ViewContractResult::SetSignDate(const string& _signDate)
{
    m_signDate = _signDate;
    m_signDateHasBeenSet = true;
}

bool ViewContractResult::SignDateHasBeenSet() const
{
    return m_signDateHasBeenSet;
}

string ViewContractResult::GetPaymentOptionNine() const
{
    return m_paymentOptionNine;
}

void ViewContractResult::SetPaymentOptionNine(const string& _paymentOptionNine)
{
    m_paymentOptionNine = _paymentOptionNine;
    m_paymentOptionNineHasBeenSet = true;
}

bool ViewContractResult::PaymentOptionNineHasBeenSet() const
{
    return m_paymentOptionNineHasBeenSet;
}

string ViewContractResult::GetPaymentName() const
{
    return m_paymentName;
}

void ViewContractResult::SetPaymentName(const string& _paymentName)
{
    m_paymentName = _paymentName;
    m_paymentNameHasBeenSet = true;
}

bool ViewContractResult::PaymentNameHasBeenSet() const
{
    return m_paymentNameHasBeenSet;
}

string ViewContractResult::GetPaymentInternalName() const
{
    return m_paymentInternalName;
}

void ViewContractResult::SetPaymentInternalName(const string& _paymentInternalName)
{
    m_paymentInternalName = _paymentInternalName;
    m_paymentInternalNameHasBeenSet = true;
}

bool ViewContractResult::PaymentInternalNameHasBeenSet() const
{
    return m_paymentInternalNameHasBeenSet;
}

string ViewContractResult::GetContractOptionTen() const
{
    return m_contractOptionTen;
}

void ViewContractResult::SetContractOptionTen(const string& _contractOptionTen)
{
    m_contractOptionTen = _contractOptionTen;
    m_contractOptionTenHasBeenSet = true;
}

bool ViewContractResult::ContractOptionTenHasBeenSet() const
{
    return m_contractOptionTenHasBeenSet;
}

string ViewContractResult::GetCode() const
{
    return m_code;
}

void ViewContractResult::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ViewContractResult::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string ViewContractResult::GetPictureOne() const
{
    return m_pictureOne;
}

void ViewContractResult::SetPictureOne(const string& _pictureOne)
{
    m_pictureOne = _pictureOne;
    m_pictureOneHasBeenSet = true;
}

bool ViewContractResult::PictureOneHasBeenSet() const
{
    return m_pictureOneHasBeenSet;
}

string ViewContractResult::GetSignMan() const
{
    return m_signMan;
}

void ViewContractResult::SetSignMan(const string& _signMan)
{
    m_signMan = _signMan;
    m_signManHasBeenSet = true;
}

bool ViewContractResult::SignManHasBeenSet() const
{
    return m_signManHasBeenSet;
}

string ViewContractResult::GetChannelNo() const
{
    return m_channelNo;
}

void ViewContractResult::SetChannelNo(const string& _channelNo)
{
    m_channelNo = _channelNo;
    m_channelNoHasBeenSet = true;
}

bool ViewContractResult::ChannelNoHasBeenSet() const
{
    return m_channelNoHasBeenSet;
}

string ViewContractResult::GetAddTime() const
{
    return m_addTime;
}

void ViewContractResult::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool ViewContractResult::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string ViewContractResult::GetAutoSign() const
{
    return m_autoSign;
}

void ViewContractResult::SetAutoSign(const string& _autoSign)
{
    m_autoSign = _autoSign;
    m_autoSignHasBeenSet = true;
}

bool ViewContractResult::AutoSignHasBeenSet() const
{
    return m_autoSignHasBeenSet;
}

string ViewContractResult::GetContractOptionNine() const
{
    return m_contractOptionNine;
}

void ViewContractResult::SetContractOptionNine(const string& _contractOptionNine)
{
    m_contractOptionNine = _contractOptionNine;
    m_contractOptionNineHasBeenSet = true;
}

bool ViewContractResult::ContractOptionNineHasBeenSet() const
{
    return m_contractOptionNineHasBeenSet;
}

string ViewContractResult::GetCityId() const
{
    return m_cityId;
}

void ViewContractResult::SetCityId(const string& _cityId)
{
    m_cityId = _cityId;
    m_cityIdHasBeenSet = true;
}

bool ViewContractResult::CityIdHasBeenSet() const
{
    return m_cityIdHasBeenSet;
}

string ViewContractResult::GetPaymentType() const
{
    return m_paymentType;
}

void ViewContractResult::SetPaymentType(const string& _paymentType)
{
    m_paymentType = _paymentType;
    m_paymentTypeHasBeenSet = true;
}

bool ViewContractResult::PaymentTypeHasBeenSet() const
{
    return m_paymentTypeHasBeenSet;
}

string ViewContractResult::GetPaymentClassificationId() const
{
    return m_paymentClassificationId;
}

void ViewContractResult::SetPaymentClassificationId(const string& _paymentClassificationId)
{
    m_paymentClassificationId = _paymentClassificationId;
    m_paymentClassificationIdHasBeenSet = true;
}

bool ViewContractResult::PaymentClassificationIdHasBeenSet() const
{
    return m_paymentClassificationIdHasBeenSet;
}

string ViewContractResult::GetBrandName() const
{
    return m_brandName;
}

void ViewContractResult::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool ViewContractResult::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

string ViewContractResult::GetPaymentOptionTen() const
{
    return m_paymentOptionTen;
}

void ViewContractResult::SetPaymentOptionTen(const string& _paymentOptionTen)
{
    m_paymentOptionTen = _paymentOptionTen;
    m_paymentOptionTenHasBeenSet = true;
}

bool ViewContractResult::PaymentOptionTenHasBeenSet() const
{
    return m_paymentOptionTenHasBeenSet;
}

string ViewContractResult::GetContractId() const
{
    return m_contractId;
}

void ViewContractResult::SetContractId(const string& _contractId)
{
    m_contractId = _contractId;
    m_contractIdHasBeenSet = true;
}

bool ViewContractResult::ContractIdHasBeenSet() const
{
    return m_contractIdHasBeenSet;
}

