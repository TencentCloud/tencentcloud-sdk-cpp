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

#include <tencentcloud/emr/v20190103/model/InquiryPriceScaleOutInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

InquiryPriceScaleOutInstanceResponse::InquiryPriceScaleOutInstanceResponse() :
    m_originalCostHasBeenSet(false),
    m_discountCostHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_priceSpecHasBeenSet(false)
{
}

CoreInternalOutcome InquiryPriceScaleOutInstanceResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("OriginalCost") && !rsp["OriginalCost"].IsNull())
    {
        if (!rsp["OriginalCost"].IsString())
        {
            return CoreInternalOutcome(Error("response `OriginalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = string(rsp["OriginalCost"].GetString());
        m_originalCostHasBeenSet = true;
    }

    if (rsp.HasMember("DiscountCost") && !rsp["DiscountCost"].IsNull())
    {
        if (!rsp["DiscountCost"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiscountCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountCost = string(rsp["DiscountCost"].GetString());
        m_discountCostHasBeenSet = true;
    }

    if (rsp.HasMember("Unit") && !rsp["Unit"].IsNull())
    {
        if (!rsp["Unit"].IsString())
        {
            return CoreInternalOutcome(Error("response `Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(rsp["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (rsp.HasMember("PriceSpec") && !rsp["PriceSpec"].IsNull())
    {
        if (!rsp["PriceSpec"].IsObject())
        {
            return CoreInternalOutcome(Error("response `PriceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_priceSpec.Deserialize(rsp["PriceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_priceSpecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string InquiryPriceScaleOutInstanceResponse::GetOriginalCost() const
{
    return m_originalCost;
}

bool InquiryPriceScaleOutInstanceResponse::OriginalCostHasBeenSet() const
{
    return m_originalCostHasBeenSet;
}

string InquiryPriceScaleOutInstanceResponse::GetDiscountCost() const
{
    return m_discountCost;
}

bool InquiryPriceScaleOutInstanceResponse::DiscountCostHasBeenSet() const
{
    return m_discountCostHasBeenSet;
}

string InquiryPriceScaleOutInstanceResponse::GetUnit() const
{
    return m_unit;
}

bool InquiryPriceScaleOutInstanceResponse::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

PriceResource InquiryPriceScaleOutInstanceResponse::GetPriceSpec() const
{
    return m_priceSpec;
}

bool InquiryPriceScaleOutInstanceResponse::PriceSpecHasBeenSet() const
{
    return m_priceSpecHasBeenSet;
}


