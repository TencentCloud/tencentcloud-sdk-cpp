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

#include <tencentcloud/ocr/v20181119/model/MLIDPassportOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

MLIDPassportOCRResponse::MLIDPassportOCRResponse() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_dateOfBirthHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_dateOfExpirationHasBeenSet(false),
    m_issuingCountryHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_warnHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_advancedInfoHasBeenSet(false)
{
}

CoreInternalOutcome MLIDPassportOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ID") && !rsp["ID"].IsNull())
    {
        if (!rsp["ID"].IsString())
        {
            return CoreInternalOutcome(Error("response `ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(rsp["ID"].GetString());
        m_iDHasBeenSet = true;
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

    if (rsp.HasMember("DateOfBirth") && !rsp["DateOfBirth"].IsNull())
    {
        if (!rsp["DateOfBirth"].IsString())
        {
            return CoreInternalOutcome(Error("response `DateOfBirth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfBirth = string(rsp["DateOfBirth"].GetString());
        m_dateOfBirthHasBeenSet = true;
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

    if (rsp.HasMember("DateOfExpiration") && !rsp["DateOfExpiration"].IsNull())
    {
        if (!rsp["DateOfExpiration"].IsString())
        {
            return CoreInternalOutcome(Error("response `DateOfExpiration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfExpiration = string(rsp["DateOfExpiration"].GetString());
        m_dateOfExpirationHasBeenSet = true;
    }

    if (rsp.HasMember("IssuingCountry") && !rsp["IssuingCountry"].IsNull())
    {
        if (!rsp["IssuingCountry"].IsString())
        {
            return CoreInternalOutcome(Error("response `IssuingCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuingCountry = string(rsp["IssuingCountry"].GetString());
        m_issuingCountryHasBeenSet = true;
    }

    if (rsp.HasMember("Nationality") && !rsp["Nationality"].IsNull())
    {
        if (!rsp["Nationality"].IsString())
        {
            return CoreInternalOutcome(Error("response `Nationality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationality = string(rsp["Nationality"].GetString());
        m_nationalityHasBeenSet = true;
    }

    if (rsp.HasMember("Warn") && !rsp["Warn"].IsNull())
    {
        if (!rsp["Warn"].IsArray())
            return CoreInternalOutcome(Error("response `Warn` is not array type"));

        const Value &tmpValue = rsp["Warn"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_warn.push_back((*itr).GetInt64());
        }
        m_warnHasBeenSet = true;
    }

    if (rsp.HasMember("Image") && !rsp["Image"].IsNull())
    {
        if (!rsp["Image"].IsString())
        {
            return CoreInternalOutcome(Error("response `Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(rsp["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (rsp.HasMember("AdvancedInfo") && !rsp["AdvancedInfo"].IsNull())
    {
        if (!rsp["AdvancedInfo"].IsString())
        {
            return CoreInternalOutcome(Error("response `AdvancedInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedInfo = string(rsp["AdvancedInfo"].GetString());
        m_advancedInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string MLIDPassportOCRResponse::GetID() const
{
    return m_iD;
}

bool MLIDPassportOCRResponse::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string MLIDPassportOCRResponse::GetName() const
{
    return m_name;
}

bool MLIDPassportOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MLIDPassportOCRResponse::GetDateOfBirth() const
{
    return m_dateOfBirth;
}

bool MLIDPassportOCRResponse::DateOfBirthHasBeenSet() const
{
    return m_dateOfBirthHasBeenSet;
}

string MLIDPassportOCRResponse::GetSex() const
{
    return m_sex;
}

bool MLIDPassportOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string MLIDPassportOCRResponse::GetDateOfExpiration() const
{
    return m_dateOfExpiration;
}

bool MLIDPassportOCRResponse::DateOfExpirationHasBeenSet() const
{
    return m_dateOfExpirationHasBeenSet;
}

string MLIDPassportOCRResponse::GetIssuingCountry() const
{
    return m_issuingCountry;
}

bool MLIDPassportOCRResponse::IssuingCountryHasBeenSet() const
{
    return m_issuingCountryHasBeenSet;
}

string MLIDPassportOCRResponse::GetNationality() const
{
    return m_nationality;
}

bool MLIDPassportOCRResponse::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

vector<int64_t> MLIDPassportOCRResponse::GetWarn() const
{
    return m_warn;
}

bool MLIDPassportOCRResponse::WarnHasBeenSet() const
{
    return m_warnHasBeenSet;
}

string MLIDPassportOCRResponse::GetImage() const
{
    return m_image;
}

bool MLIDPassportOCRResponse::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string MLIDPassportOCRResponse::GetAdvancedInfo() const
{
    return m_advancedInfo;
}

bool MLIDPassportOCRResponse::AdvancedInfoHasBeenSet() const
{
    return m_advancedInfoHasBeenSet;
}


