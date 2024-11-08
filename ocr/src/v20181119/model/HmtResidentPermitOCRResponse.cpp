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
using namespace std;

HmtResidentPermitOCRResponse::HmtResidentPermitOCRResponse() :
    m_nameHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_birthHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_idCardNoHasBeenSet(false),
    m_cardTypeHasBeenSet(false),
    m_validDateHasBeenSet(false),
    m_authorityHasBeenSet(false),
    m_visaNumHasBeenSet(false),
    m_passNoHasBeenSet(false),
    m_portraitImageInfoHasBeenSet(false)
{
}

CoreInternalOutcome HmtResidentPermitOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Sex") && !rsp["Sex"].IsNull())
    {
        if (!rsp["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(rsp["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (rsp.HasMember("Birth") && !rsp["Birth"].IsNull())
    {
        if (!rsp["Birth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Birth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birth = string(rsp["Birth"].GetString());
        m_birthHasBeenSet = true;
    }

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (rsp.HasMember("IdCardNo") && !rsp["IdCardNo"].IsNull())
    {
        if (!rsp["IdCardNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdCardNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardNo = string(rsp["IdCardNo"].GetString());
        m_idCardNoHasBeenSet = true;
    }

    if (rsp.HasMember("CardType") && !rsp["CardType"].IsNull())
    {
        if (!rsp["CardType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cardType = rsp["CardType"].GetInt64();
        m_cardTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ValidDate") && !rsp["ValidDate"].IsNull())
    {
        if (!rsp["ValidDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValidDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validDate = string(rsp["ValidDate"].GetString());
        m_validDateHasBeenSet = true;
    }

    if (rsp.HasMember("Authority") && !rsp["Authority"].IsNull())
    {
        if (!rsp["Authority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Authority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authority = string(rsp["Authority"].GetString());
        m_authorityHasBeenSet = true;
    }

    if (rsp.HasMember("VisaNum") && !rsp["VisaNum"].IsNull())
    {
        if (!rsp["VisaNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisaNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_visaNum = string(rsp["VisaNum"].GetString());
        m_visaNumHasBeenSet = true;
    }

    if (rsp.HasMember("PassNo") && !rsp["PassNo"].IsNull())
    {
        if (!rsp["PassNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passNo = string(rsp["PassNo"].GetString());
        m_passNoHasBeenSet = true;
    }

    if (rsp.HasMember("PortraitImageInfo") && !rsp["PortraitImageInfo"].IsNull())
    {
        if (!rsp["PortraitImageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitImageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_portraitImageInfo.Deserialize(rsp["PortraitImageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_portraitImageInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string HmtResidentPermitOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_birthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birth.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardNo.c_str(), allocator).Move(), allocator);
    }

    if (m_cardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cardType, allocator);
    }

    if (m_validDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validDate.c_str(), allocator).Move(), allocator);
    }

    if (m_authorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authority.c_str(), allocator).Move(), allocator);
    }

    if (m_visaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisaNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_visaNum.c_str(), allocator).Move(), allocator);
    }

    if (m_passNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passNo.c_str(), allocator).Move(), allocator);
    }

    if (m_portraitImageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitImageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_portraitImageInfo.ToJsonObject(value[key.c_str()], allocator);
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

string HmtResidentPermitOCRResponse::GetVisaNum() const
{
    return m_visaNum;
}

bool HmtResidentPermitOCRResponse::VisaNumHasBeenSet() const
{
    return m_visaNumHasBeenSet;
}

string HmtResidentPermitOCRResponse::GetPassNo() const
{
    return m_passNo;
}

bool HmtResidentPermitOCRResponse::PassNoHasBeenSet() const
{
    return m_passNoHasBeenSet;
}

PortraitImageInfo HmtResidentPermitOCRResponse::GetPortraitImageInfo() const
{
    return m_portraitImageInfo;
}

bool HmtResidentPermitOCRResponse::PortraitImageInfoHasBeenSet() const
{
    return m_portraitImageInfoHasBeenSet;
}


