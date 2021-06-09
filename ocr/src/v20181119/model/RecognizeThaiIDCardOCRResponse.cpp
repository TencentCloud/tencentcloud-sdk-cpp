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

#include <tencentcloud/ocr/v20181119/model/RecognizeThaiIDCardOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeThaiIDCardOCRResponse::RecognizeThaiIDCardOCRResponse() :
    m_iDHasBeenSet(false),
    m_thaiNameHasBeenSet(false),
    m_enFirstNameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_issueDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_enLastNameHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeThaiIDCardOCRResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("ID") && !rsp["ID"].IsNull())
    {
        if (!rsp["ID"].IsString())
        {
            return CoreInternalOutcome(Error("response `ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(rsp["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (rsp.HasMember("ThaiName") && !rsp["ThaiName"].IsNull())
    {
        if (!rsp["ThaiName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ThaiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thaiName = string(rsp["ThaiName"].GetString());
        m_thaiNameHasBeenSet = true;
    }

    if (rsp.HasMember("EnFirstName") && !rsp["EnFirstName"].IsNull())
    {
        if (!rsp["EnFirstName"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnFirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enFirstName = string(rsp["EnFirstName"].GetString());
        m_enFirstNameHasBeenSet = true;
    }

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (rsp.HasMember("Birthday") && !rsp["Birthday"].IsNull())
    {
        if (!rsp["Birthday"].IsString())
        {
            return CoreInternalOutcome(Error("response `Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(rsp["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (rsp.HasMember("IssueDate") && !rsp["IssueDate"].IsNull())
    {
        if (!rsp["IssueDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `IssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueDate = string(rsp["IssueDate"].GetString());
        m_issueDateHasBeenSet = true;
    }

    if (rsp.HasMember("ExpirationDate") && !rsp["ExpirationDate"].IsNull())
    {
        if (!rsp["ExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `ExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = string(rsp["ExpirationDate"].GetString());
        m_expirationDateHasBeenSet = true;
    }

    if (rsp.HasMember("EnLastName") && !rsp["EnLastName"].IsNull())
    {
        if (!rsp["EnLastName"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnLastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enLastName = string(rsp["EnLastName"].GetString());
        m_enLastNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string RecognizeThaiIDCardOCRResponse::GetID() const
{
    return m_iD;
}

bool RecognizeThaiIDCardOCRResponse::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetThaiName() const
{
    return m_thaiName;
}

bool RecognizeThaiIDCardOCRResponse::ThaiNameHasBeenSet() const
{
    return m_thaiNameHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetEnFirstName() const
{
    return m_enFirstName;
}

bool RecognizeThaiIDCardOCRResponse::EnFirstNameHasBeenSet() const
{
    return m_enFirstNameHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetAddress() const
{
    return m_address;
}

bool RecognizeThaiIDCardOCRResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetBirthday() const
{
    return m_birthday;
}

bool RecognizeThaiIDCardOCRResponse::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetIssueDate() const
{
    return m_issueDate;
}

bool RecognizeThaiIDCardOCRResponse::IssueDateHasBeenSet() const
{
    return m_issueDateHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetExpirationDate() const
{
    return m_expirationDate;
}

bool RecognizeThaiIDCardOCRResponse::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetEnLastName() const
{
    return m_enLastName;
}

bool RecognizeThaiIDCardOCRResponse::EnLastNameHasBeenSet() const
{
    return m_enLastNameHasBeenSet;
}


