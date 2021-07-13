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

#include <tencentcloud/faceid/v20180301/model/CheckIdCardInformationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

CheckIdCardInformationResponse::CheckIdCardInformationResponse() :
    m_simHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_nationHasBeenSet(false),
    m_birthHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_idNumHasBeenSet(false),
    m_portraitHasBeenSet(false),
    m_warningsHasBeenSet(false),
    m_qualityHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
}

CoreInternalOutcome CheckIdCardInformationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Sim") && !rsp["Sim"].IsNull())
    {
        if (!rsp["Sim"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `Sim` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sim = rsp["Sim"].GetDouble();
        m_simHasBeenSet = true;
    }

    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsString())
        {
            return CoreInternalOutcome(Error("response `Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(rsp["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
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

    if (rsp.HasMember("Nation") && !rsp["Nation"].IsNull())
    {
        if (!rsp["Nation"].IsString())
        {
            return CoreInternalOutcome(Error("response `Nation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nation = string(rsp["Nation"].GetString());
        m_nationHasBeenSet = true;
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

    if (rsp.HasMember("IdNum") && !rsp["IdNum"].IsNull())
    {
        if (!rsp["IdNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `IdNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idNum = string(rsp["IdNum"].GetString());
        m_idNumHasBeenSet = true;
    }

    if (rsp.HasMember("Portrait") && !rsp["Portrait"].IsNull())
    {
        if (!rsp["Portrait"].IsString())
        {
            return CoreInternalOutcome(Error("response `Portrait` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portrait = string(rsp["Portrait"].GetString());
        m_portraitHasBeenSet = true;
    }

    if (rsp.HasMember("Warnings") && !rsp["Warnings"].IsNull())
    {
        if (!rsp["Warnings"].IsString())
        {
            return CoreInternalOutcome(Error("response `Warnings` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warnings = string(rsp["Warnings"].GetString());
        m_warningsHasBeenSet = true;
    }

    if (rsp.HasMember("Quality") && !rsp["Quality"].IsNull())
    {
        if (!rsp["Quality"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `Quality` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_quality = rsp["Quality"].GetDouble();
        m_qualityHasBeenSet = true;
    }

    if (rsp.HasMember("Encryption") && !rsp["Encryption"].IsNull())
    {
        if (!rsp["Encryption"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Encryption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_encryption.Deserialize(rsp["Encryption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_encryptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


double CheckIdCardInformationResponse::GetSim() const
{
    return m_sim;
}

bool CheckIdCardInformationResponse::SimHasBeenSet() const
{
    return m_simHasBeenSet;
}

string CheckIdCardInformationResponse::GetResult() const
{
    return m_result;
}

bool CheckIdCardInformationResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string CheckIdCardInformationResponse::GetDescription() const
{
    return m_description;
}

bool CheckIdCardInformationResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CheckIdCardInformationResponse::GetName() const
{
    return m_name;
}

bool CheckIdCardInformationResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CheckIdCardInformationResponse::GetSex() const
{
    return m_sex;
}

bool CheckIdCardInformationResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string CheckIdCardInformationResponse::GetNation() const
{
    return m_nation;
}

bool CheckIdCardInformationResponse::NationHasBeenSet() const
{
    return m_nationHasBeenSet;
}

string CheckIdCardInformationResponse::GetBirth() const
{
    return m_birth;
}

bool CheckIdCardInformationResponse::BirthHasBeenSet() const
{
    return m_birthHasBeenSet;
}

string CheckIdCardInformationResponse::GetAddress() const
{
    return m_address;
}

bool CheckIdCardInformationResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string CheckIdCardInformationResponse::GetIdNum() const
{
    return m_idNum;
}

bool CheckIdCardInformationResponse::IdNumHasBeenSet() const
{
    return m_idNumHasBeenSet;
}

string CheckIdCardInformationResponse::GetPortrait() const
{
    return m_portrait;
}

bool CheckIdCardInformationResponse::PortraitHasBeenSet() const
{
    return m_portraitHasBeenSet;
}

string CheckIdCardInformationResponse::GetWarnings() const
{
    return m_warnings;
}

bool CheckIdCardInformationResponse::WarningsHasBeenSet() const
{
    return m_warningsHasBeenSet;
}

double CheckIdCardInformationResponse::GetQuality() const
{
    return m_quality;
}

bool CheckIdCardInformationResponse::QualityHasBeenSet() const
{
    return m_qualityHasBeenSet;
}

Encryption CheckIdCardInformationResponse::GetEncryption() const
{
    return m_encryption;
}

bool CheckIdCardInformationResponse::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}


