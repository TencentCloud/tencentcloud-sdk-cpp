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

#include <tencentcloud/ocr/v20181119/model/BankCardOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

BankCardOCRResponse::BankCardOCRResponse() :
    m_cardNoHasBeenSet(false),
    m_bankInfoHasBeenSet(false),
    m_validDateHasBeenSet(false),
    m_cardTypeHasBeenSet(false),
    m_cardNameHasBeenSet(false),
    m_borderCutImageHasBeenSet(false),
    m_cardNoImageHasBeenSet(false),
    m_warningCodeHasBeenSet(false),
    m_qualityValueHasBeenSet(false),
    m_cardCategoryHasBeenSet(false)
{
}

CoreInternalOutcome BankCardOCRResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("CardNo") && !rsp["CardNo"].IsNull())
    {
        if (!rsp["CardNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardNo = string(rsp["CardNo"].GetString());
        m_cardNoHasBeenSet = true;
    }

    if (rsp.HasMember("BankInfo") && !rsp["BankInfo"].IsNull())
    {
        if (!rsp["BankInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BankInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankInfo = string(rsp["BankInfo"].GetString());
        m_bankInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ValidDate") && !rsp["ValidDate"].IsNull())
    {
        if (!rsp["ValidDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValidDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validDate = string(rsp["ValidDate"].GetString());
        m_validDateHasBeenSet = true;
    }

    if (rsp.HasMember("CardType") && !rsp["CardType"].IsNull())
    {
        if (!rsp["CardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardType = string(rsp["CardType"].GetString());
        m_cardTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CardName") && !rsp["CardName"].IsNull())
    {
        if (!rsp["CardName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardName = string(rsp["CardName"].GetString());
        m_cardNameHasBeenSet = true;
    }

    if (rsp.HasMember("BorderCutImage") && !rsp["BorderCutImage"].IsNull())
    {
        if (!rsp["BorderCutImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BorderCutImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_borderCutImage = string(rsp["BorderCutImage"].GetString());
        m_borderCutImageHasBeenSet = true;
    }

    if (rsp.HasMember("CardNoImage") && !rsp["CardNoImage"].IsNull())
    {
        if (!rsp["CardNoImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardNoImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardNoImage = string(rsp["CardNoImage"].GetString());
        m_cardNoImageHasBeenSet = true;
    }

    if (rsp.HasMember("WarningCode") && !rsp["WarningCode"].IsNull())
    {
        if (!rsp["WarningCode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WarningCode` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WarningCode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_warningCode.push_back((*itr).GetInt64());
        }
        m_warningCodeHasBeenSet = true;
    }

    if (rsp.HasMember("QualityValue") && !rsp["QualityValue"].IsNull())
    {
        if (!rsp["QualityValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qualityValue = rsp["QualityValue"].GetInt64();
        m_qualityValueHasBeenSet = true;
    }

    if (rsp.HasMember("CardCategory") && !rsp["CardCategory"].IsNull())
    {
        if (!rsp["CardCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardCategory = string(rsp["CardCategory"].GetString());
        m_cardCategoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string BankCardOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cardNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardNo.c_str(), allocator).Move(), allocator);
    }

    if (m_bankInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_validDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validDate.c_str(), allocator).Move(), allocator);
    }

    if (m_cardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardType.c_str(), allocator).Move(), allocator);
    }

    if (m_cardNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardName.c_str(), allocator).Move(), allocator);
    }

    if (m_borderCutImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BorderCutImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_borderCutImage.c_str(), allocator).Move(), allocator);
    }

    if (m_cardNoImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardNoImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardNoImage.c_str(), allocator).Move(), allocator);
    }

    if (m_warningCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarningCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_warningCode.begin(); itr != m_warningCode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_qualityValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qualityValue, allocator);
    }

    if (m_cardCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardCategory.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string BankCardOCRResponse::GetCardNo() const
{
    return m_cardNo;
}

bool BankCardOCRResponse::CardNoHasBeenSet() const
{
    return m_cardNoHasBeenSet;
}

string BankCardOCRResponse::GetBankInfo() const
{
    return m_bankInfo;
}

bool BankCardOCRResponse::BankInfoHasBeenSet() const
{
    return m_bankInfoHasBeenSet;
}

string BankCardOCRResponse::GetValidDate() const
{
    return m_validDate;
}

bool BankCardOCRResponse::ValidDateHasBeenSet() const
{
    return m_validDateHasBeenSet;
}

string BankCardOCRResponse::GetCardType() const
{
    return m_cardType;
}

bool BankCardOCRResponse::CardTypeHasBeenSet() const
{
    return m_cardTypeHasBeenSet;
}

string BankCardOCRResponse::GetCardName() const
{
    return m_cardName;
}

bool BankCardOCRResponse::CardNameHasBeenSet() const
{
    return m_cardNameHasBeenSet;
}

string BankCardOCRResponse::GetBorderCutImage() const
{
    return m_borderCutImage;
}

bool BankCardOCRResponse::BorderCutImageHasBeenSet() const
{
    return m_borderCutImageHasBeenSet;
}

string BankCardOCRResponse::GetCardNoImage() const
{
    return m_cardNoImage;
}

bool BankCardOCRResponse::CardNoImageHasBeenSet() const
{
    return m_cardNoImageHasBeenSet;
}

vector<int64_t> BankCardOCRResponse::GetWarningCode() const
{
    return m_warningCode;
}

bool BankCardOCRResponse::WarningCodeHasBeenSet() const
{
    return m_warningCodeHasBeenSet;
}

int64_t BankCardOCRResponse::GetQualityValue() const
{
    return m_qualityValue;
}

bool BankCardOCRResponse::QualityValueHasBeenSet() const
{
    return m_qualityValueHasBeenSet;
}

string BankCardOCRResponse::GetCardCategory() const
{
    return m_cardCategory;
}

bool BankCardOCRResponse::CardCategoryHasBeenSet() const
{
    return m_cardCategoryHasBeenSet;
}


