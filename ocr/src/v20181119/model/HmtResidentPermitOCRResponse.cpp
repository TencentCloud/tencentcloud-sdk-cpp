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

#include <tencentcloud/ocr/v20181119/model/HmtResidentPermitOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

HmtResidentPermitOCRResponse::HmtResidentPermitOCRResponse() :
    m_nameHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_birthHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_idCardNoHasBeenSet(false),
    m_cardTypeHasBeenSet(false),
    m_validDateHasBeenSet(false),
    m_authorityHasBeenSet(false)
{
}

CoreInternalOutcome HmtResidentPermitOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Sex") && !rsp["Sex"].IsNull())
    {
        if (!rsp["Sex"].IsString())
        {
            return CoreInternalOutcome(Error("response `Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(rsp["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (rsp.HasMember("Birth") && !rsp["Birth"].IsNull())
    {
        if (!rsp["Birth"].IsString())
        {
            return CoreInternalOutcome(Error("response `Birth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birth = string(rsp["Birth"].GetString());
        m_birthHasBeenSet = true;
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

    if (rsp.HasMember("IdCardNo") && !rsp["IdCardNo"].IsNull())
    {
        if (!rsp["IdCardNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `IdCardNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardNo = string(rsp["IdCardNo"].GetString());
        m_idCardNoHasBeenSet = true;
    }

    if (rsp.HasMember("CardType") && !rsp["CardType"].IsNull())
    {
        if (!rsp["CardType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CardType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cardType = rsp["CardType"].GetInt64();
        m_cardTypeHasBeenSet = true;
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

    if (rsp.HasMember("Authority") && !rsp["Authority"].IsNull())
    {
        if (!rsp["Authority"].IsString())
        {
            return CoreInternalOutcome(Error("response `Authority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authority = string(rsp["Authority"].GetString());
        m_authorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string HmtResidentPermitOCRResponse::GetName() const
{
    return m_name;
}

bool HmtResidentPermitOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string HmtResidentPermitOCRResponse::GetSex() const
{
    return m_sex;
}

bool HmtResidentPermitOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string HmtResidentPermitOCRResponse::GetBirth() const
{
    return m_birth;
}

bool HmtResidentPermitOCRResponse::BirthHasBeenSet() const
{
    return m_birthHasBeenSet;
}

string HmtResidentPermitOCRResponse::GetAddress() const
{
    return m_address;
}

bool HmtResidentPermitOCRResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string HmtResidentPermitOCRResponse::GetIdCardNo() const
{
    return m_idCardNo;
}

bool HmtResidentPermitOCRResponse::IdCardNoHasBeenSet() const
{
    return m_idCardNoHasBeenSet;
}

int64_t HmtResidentPermitOCRResponse::GetCardType() const
{
    return m_cardType;
}

bool HmtResidentPermitOCRResponse::CardTypeHasBeenSet() const
{
    return m_cardTypeHasBeenSet;
}

string HmtResidentPermitOCRResponse::GetValidDate() const
{
    return m_validDate;
}

bool HmtResidentPermitOCRResponse::ValidDateHasBeenSet() const
{
    return m_validDateHasBeenSet;
}

string HmtResidentPermitOCRResponse::GetAuthority() const
{
    return m_authority;
}

bool HmtResidentPermitOCRResponse::AuthorityHasBeenSet() const
{
    return m_authorityHasBeenSet;
}


