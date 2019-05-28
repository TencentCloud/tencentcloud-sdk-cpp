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

#include <tencentcloud/postgres/v20170312/model/InquiryPriceCreateDBInstancesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace rapidjson;
using namespace std;

InquiryPriceCreateDBInstancesResponse::InquiryPriceCreateDBInstancesResponse() :
    m_originalPriceHasBeenSet(false),
    m_priceHasBeenSet(false)
{
}

CoreInternalOutcome InquiryPriceCreateDBInstancesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OriginalPrice") && !rsp["OriginalPrice"].IsNull())
    {
        if (!rsp["OriginalPrice"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OriginalPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = rsp["OriginalPrice"].GetUint64();
        m_originalPriceHasBeenSet = true;
    }

    if (rsp.HasMember("Price") && !rsp["Price"].IsNull())
    {
        if (!rsp["Price"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Price` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_price = rsp["Price"].GetUint64();
        m_priceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t InquiryPriceCreateDBInstancesResponse::GetOriginalPrice() const
{
    return m_originalPrice;
}

bool InquiryPriceCreateDBInstancesResponse::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

uint64_t InquiryPriceCreateDBInstancesResponse::GetPrice() const
{
    return m_price;
}

bool InquiryPriceCreateDBInstancesResponse::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}


