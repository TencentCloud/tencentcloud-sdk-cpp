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
using namespace std;

InquiryPriceScaleOutInstanceResponse::InquiryPriceScaleOutInstanceResponse() :
    m_originalCostHasBeenSet(false),
    m_discountCostHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_priceSpecHasBeenSet(false),
    m_multipleEmrPriceHasBeenSet(false)
{
}

CoreInternalOutcome InquiryPriceScaleOutInstanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OriginalCost") && !rsp["OriginalCost"].IsNull())
    {
        if (!rsp["OriginalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = string(rsp["OriginalCost"].GetString());
        m_originalCostHasBeenSet = true;
    }

    if (rsp.HasMember("DiscountCost") && !rsp["DiscountCost"].IsNull())
    {
        if (!rsp["DiscountCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiscountCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountCost = string(rsp["DiscountCost"].GetString());
        m_discountCostHasBeenSet = true;
    }

    if (rsp.HasMember("Unit") && !rsp["Unit"].IsNull())
    {
        if (!rsp["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(rsp["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (rsp.HasMember("PriceSpec") && !rsp["PriceSpec"].IsNull())
    {
        if (!rsp["PriceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PriceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_priceSpec.Deserialize(rsp["PriceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_priceSpecHasBeenSet = true;
    }

    if (rsp.HasMember("MultipleEmrPrice") && !rsp["MultipleEmrPrice"].IsNull())
    {
        if (!rsp["MultipleEmrPrice"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultipleEmrPrice` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MultipleEmrPrice"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EmrPrice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_multipleEmrPrice.push_back(item);
        }
        m_multipleEmrPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string InquiryPriceScaleOutInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_originalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_discountCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discountCost.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_priceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_priceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_multipleEmrPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultipleEmrPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multipleEmrPrice.begin(); itr != m_multipleEmrPrice.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

vector<EmrPrice> InquiryPriceScaleOutInstanceResponse::GetMultipleEmrPrice() const
{
    return m_multipleEmrPrice;
}

bool InquiryPriceScaleOutInstanceResponse::MultipleEmrPriceHasBeenSet() const
{
    return m_multipleEmrPriceHasBeenSet;
}


