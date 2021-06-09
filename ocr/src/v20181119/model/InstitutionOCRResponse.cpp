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

#include <tencentcloud/ocr/v20181119/model/InstitutionOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

InstitutionOCRResponse::InstitutionOCRResponse() :
    m_regIdHasBeenSet(false),
    m_validDateHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_legalPersonHasBeenSet(false)
{
}

CoreInternalOutcome InstitutionOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RegId") && !rsp["RegId"].IsNull())
    {
        if (!rsp["RegId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regId = string(rsp["RegId"].GetString());
        m_regIdHasBeenSet = true;
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

    if (rsp.HasMember("Location") && !rsp["Location"].IsNull())
    {
        if (!rsp["Location"].IsString())
        {
            return CoreInternalOutcome(Error("response `Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(rsp["Location"].GetString());
        m_locationHasBeenSet = true;
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

    if (rsp.HasMember("LegalPerson") && !rsp["LegalPerson"].IsNull())
    {
        if (!rsp["LegalPerson"].IsString())
        {
            return CoreInternalOutcome(Error("response `LegalPerson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalPerson = string(rsp["LegalPerson"].GetString());
        m_legalPersonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string InstitutionOCRResponse::GetRegId() const
{
    return m_regId;
}

bool InstitutionOCRResponse::RegIdHasBeenSet() const
{
    return m_regIdHasBeenSet;
}

string InstitutionOCRResponse::GetValidDate() const
{
    return m_validDate;
}

bool InstitutionOCRResponse::ValidDateHasBeenSet() const
{
    return m_validDateHasBeenSet;
}

string InstitutionOCRResponse::GetLocation() const
{
    return m_location;
}

bool InstitutionOCRResponse::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string InstitutionOCRResponse::GetName() const
{
    return m_name;
}

bool InstitutionOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string InstitutionOCRResponse::GetLegalPerson() const
{
    return m_legalPerson;
}

bool InstitutionOCRResponse::LegalPersonHasBeenSet() const
{
    return m_legalPersonHasBeenSet;
}


