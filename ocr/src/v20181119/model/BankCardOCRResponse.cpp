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
using namespace rapidjson;
using namespace std;

BankCardOCRResponse::BankCardOCRResponse() :
    m_cardNoHasBeenSet(false),
    m_bankInfoHasBeenSet(false),
    m_validDateHasBeenSet(false)
{
}

CoreInternalOutcome BankCardOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CardNo") && !rsp["CardNo"].IsNull())
    {
        if (!rsp["CardNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `CardNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardNo = string(rsp["CardNo"].GetString());
        m_cardNoHasBeenSet = true;
    }

    if (rsp.HasMember("BankInfo") && !rsp["BankInfo"].IsNull())
    {
        if (!rsp["BankInfo"].IsString())
        {
            return CoreInternalOutcome(Error("response `BankInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankInfo = string(rsp["BankInfo"].GetString());
        m_bankInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ValidDate") && !rsp["ValidDate"].IsNull())
    {
        if (!rsp["ValidDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `ValidDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validDate = string(rsp["ValidDate"].GetString());
        m_validDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


