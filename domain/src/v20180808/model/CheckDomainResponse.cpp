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

#include <tencentcloud/domain/v20180808/model/CheckDomainResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace rapidjson;
using namespace std;

CheckDomainResponse::CheckDomainResponse() :
    m_domainNameHasBeenSet(false),
    m_availableHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_premiumHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_blackWordHasBeenSet(false)
{
}

CoreInternalOutcome CheckDomainResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DomainName") && !rsp["DomainName"].IsNull())
    {
        if (!rsp["DomainName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(rsp["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (rsp.HasMember("Available") && !rsp["Available"].IsNull())
    {
        if (!rsp["Available"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Available` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_available = rsp["Available"].GetBool();
        m_availableHasBeenSet = true;
    }

    if (rsp.HasMember("Reason") && !rsp["Reason"].IsNull())
    {
        if (!rsp["Reason"].IsString())
        {
            return CoreInternalOutcome(Error("response `Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(rsp["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (rsp.HasMember("Premium") && !rsp["Premium"].IsNull())
    {
        if (!rsp["Premium"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Premium` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_premium = rsp["Premium"].GetBool();
        m_premiumHasBeenSet = true;
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

    if (rsp.HasMember("BlackWord") && !rsp["BlackWord"].IsNull())
    {
        if (!rsp["BlackWord"].IsBool())
        {
            return CoreInternalOutcome(Error("response `BlackWord` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_blackWord = rsp["BlackWord"].GetBool();
        m_blackWordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CheckDomainResponse::GetDomainName() const
{
    return m_domainName;
}

bool CheckDomainResponse::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

bool CheckDomainResponse::GetAvailable() const
{
    return m_available;
}

bool CheckDomainResponse::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

string CheckDomainResponse::GetReason() const
{
    return m_reason;
}

bool CheckDomainResponse::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

bool CheckDomainResponse::GetPremium() const
{
    return m_premium;
}

bool CheckDomainResponse::PremiumHasBeenSet() const
{
    return m_premiumHasBeenSet;
}

uint64_t CheckDomainResponse::GetPrice() const
{
    return m_price;
}

bool CheckDomainResponse::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

bool CheckDomainResponse::GetBlackWord() const
{
    return m_blackWord;
}

bool CheckDomainResponse::BlackWordHasBeenSet() const
{
    return m_blackWordHasBeenSet;
}


