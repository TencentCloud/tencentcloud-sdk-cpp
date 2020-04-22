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

#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstanceDealResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace rapidjson;
using namespace std;

DescribeDBInstanceDealResponse::DescribeDBInstanceDealResponse() :
    m_statusHasBeenSet(false),
    m_originalPriceHasBeenSet(false),
    m_discountPriceHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBInstanceDealResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("OriginalPrice") && !rsp["OriginalPrice"].IsNull())
    {
        if (!rsp["OriginalPrice"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `OriginalPrice` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = rsp["OriginalPrice"].GetDouble();
        m_originalPriceHasBeenSet = true;
    }

    if (rsp.HasMember("DiscountPrice") && !rsp["DiscountPrice"].IsNull())
    {
        if (!rsp["DiscountPrice"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `DiscountPrice` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = rsp["DiscountPrice"].GetDouble();
        m_discountPriceHasBeenSet = true;
    }

    if (rsp.HasMember("Action") && !rsp["Action"].IsNull())
    {
        if (!rsp["Action"].IsString())
        {
            return CoreInternalOutcome(Error("response `Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(rsp["Action"].GetString());
        m_actionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t DescribeDBInstanceDealResponse::GetStatus() const
{
    return m_status;
}

bool DescribeDBInstanceDealResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

double DescribeDBInstanceDealResponse::GetOriginalPrice() const
{
    return m_originalPrice;
}

bool DescribeDBInstanceDealResponse::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

double DescribeDBInstanceDealResponse::GetDiscountPrice() const
{
    return m_discountPrice;
}

bool DescribeDBInstanceDealResponse::DiscountPriceHasBeenSet() const
{
    return m_discountPriceHasBeenSet;
}

string DescribeDBInstanceDealResponse::GetAction() const
{
    return m_action;
}

bool DescribeDBInstanceDealResponse::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}


