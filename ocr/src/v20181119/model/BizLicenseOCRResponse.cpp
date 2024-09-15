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

#include <tencentcloud/ocr/v20181119/model/BizLicenseOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

BizLicenseOCRResponse::BizLicenseOCRResponse() :
    m_regNumHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_capitalHasBeenSet(false),
    m_personHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_businessHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_composingFormHasBeenSet(false),
    m_setDateHasBeenSet(false),
    m_recognizeWarnCodeHasBeenSet(false),
    m_recognizeWarnMsgHasBeenSet(false),
    m_isDuplicationHasBeenSet(false),
    m_registrationDateHasBeenSet(false),
    m_angleHasBeenSet(false),
    m_nationalEmblemHasBeenSet(false),
    m_qRCodeHasBeenSet(false),
    m_sealHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_registrationAuthorityHasBeenSet(false),
    m_electronicHasBeenSet(false)
{
}

CoreInternalOutcome BizLicenseOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RegNum") && !rsp["RegNum"].IsNull())
    {
        if (!rsp["RegNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regNum = string(rsp["RegNum"].GetString());
        m_regNumHasBeenSet = true;
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

    if (rsp.HasMember("Capital") && !rsp["Capital"].IsNull())
    {
        if (!rsp["Capital"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Capital` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_capital = string(rsp["Capital"].GetString());
        m_capitalHasBeenSet = true;
    }

    if (rsp.HasMember("Person") && !rsp["Person"].IsNull())
    {
        if (!rsp["Person"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_person = string(rsp["Person"].GetString());
        m_personHasBeenSet = true;
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

    if (rsp.HasMember("Business") && !rsp["Business"].IsNull())
    {
        if (!rsp["Business"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Business` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_business = string(rsp["Business"].GetString());
        m_businessHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Period") && !rsp["Period"].IsNull())
    {
        if (!rsp["Period"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Period` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_period = string(rsp["Period"].GetString());
        m_periodHasBeenSet = true;
    }

    if (rsp.HasMember("ComposingForm") && !rsp["ComposingForm"].IsNull())
    {
        if (!rsp["ComposingForm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposingForm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_composingForm = string(rsp["ComposingForm"].GetString());
        m_composingFormHasBeenSet = true;
    }

    if (rsp.HasMember("SetDate") && !rsp["SetDate"].IsNull())
    {
        if (!rsp["SetDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setDate = string(rsp["SetDate"].GetString());
        m_setDateHasBeenSet = true;
    }

    if (rsp.HasMember("RecognizeWarnCode") && !rsp["RecognizeWarnCode"].IsNull())
    {
        if (!rsp["RecognizeWarnCode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecognizeWarnCode` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RecognizeWarnCode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_recognizeWarnCode.push_back((*itr).GetInt64());
        }
        m_recognizeWarnCodeHasBeenSet = true;
    }

    if (rsp.HasMember("RecognizeWarnMsg") && !rsp["RecognizeWarnMsg"].IsNull())
    {
        if (!rsp["RecognizeWarnMsg"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecognizeWarnMsg` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RecognizeWarnMsg"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_recognizeWarnMsg.push_back((*itr).GetString());
        }
        m_recognizeWarnMsgHasBeenSet = true;
    }

    if (rsp.HasMember("IsDuplication") && !rsp["IsDuplication"].IsNull())
    {
        if (!rsp["IsDuplication"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsDuplication` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDuplication = rsp["IsDuplication"].GetInt64();
        m_isDuplicationHasBeenSet = true;
    }

    if (rsp.HasMember("RegistrationDate") && !rsp["RegistrationDate"].IsNull())
    {
        if (!rsp["RegistrationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistrationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationDate = string(rsp["RegistrationDate"].GetString());
        m_registrationDateHasBeenSet = true;
    }

    if (rsp.HasMember("Angle") && !rsp["Angle"].IsNull())
    {
        if (!rsp["Angle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Angle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_angle = rsp["Angle"].GetDouble();
        m_angleHasBeenSet = true;
    }

    if (rsp.HasMember("NationalEmblem") && !rsp["NationalEmblem"].IsNull())
    {
        if (!rsp["NationalEmblem"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NationalEmblem` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_nationalEmblem = rsp["NationalEmblem"].GetBool();
        m_nationalEmblemHasBeenSet = true;
    }

    if (rsp.HasMember("QRCode") && !rsp["QRCode"].IsNull())
    {
        if (!rsp["QRCode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QRCode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_qRCode = rsp["QRCode"].GetBool();
        m_qRCodeHasBeenSet = true;
    }

    if (rsp.HasMember("Seal") && !rsp["Seal"].IsNull())
    {
        if (!rsp["Seal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Seal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_seal = rsp["Seal"].GetBool();
        m_sealHasBeenSet = true;
    }

    if (rsp.HasMember("Title") && !rsp["Title"].IsNull())
    {
        if (!rsp["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(rsp["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (rsp.HasMember("SerialNumber") && !rsp["SerialNumber"].IsNull())
    {
        if (!rsp["SerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNumber = string(rsp["SerialNumber"].GetString());
        m_serialNumberHasBeenSet = true;
    }

    if (rsp.HasMember("RegistrationAuthority") && !rsp["RegistrationAuthority"].IsNull())
    {
        if (!rsp["RegistrationAuthority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistrationAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationAuthority = string(rsp["RegistrationAuthority"].GetString());
        m_registrationAuthorityHasBeenSet = true;
    }

    if (rsp.HasMember("Electronic") && !rsp["Electronic"].IsNull())
    {
        if (!rsp["Electronic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Electronic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_electronic = rsp["Electronic"].GetBool();
        m_electronicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string BizLicenseOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_regNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regNum.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_capitalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capital";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_capital.c_str(), allocator).Move(), allocator);
    }

    if (m_personHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Person";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_person.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_period.c_str(), allocator).Move(), allocator);
    }

    if (m_composingFormHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComposingForm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_composingForm.c_str(), allocator).Move(), allocator);
    }

    if (m_setDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_setDate.c_str(), allocator).Move(), allocator);
    }

    if (m_recognizeWarnCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecognizeWarnCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recognizeWarnCode.begin(); itr != m_recognizeWarnCode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_recognizeWarnMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecognizeWarnMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recognizeWarnMsg.begin(); itr != m_recognizeWarnMsg.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isDuplicationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDuplication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDuplication, allocator);
    }

    if (m_registrationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_angleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Angle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_angle, allocator);
    }

    if (m_nationalEmblemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NationalEmblem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nationalEmblem, allocator);
    }

    if (m_qRCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qRCode, allocator);
    }

    if (m_sealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seal, allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_registrationAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrationAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrationAuthority.c_str(), allocator).Move(), allocator);
    }

    if (m_electronicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Electronic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_electronic, allocator);
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


string BizLicenseOCRResponse::GetRegNum() const
{
    return m_regNum;
}

bool BizLicenseOCRResponse::RegNumHasBeenSet() const
{
    return m_regNumHasBeenSet;
}

string BizLicenseOCRResponse::GetName() const
{
    return m_name;
}

bool BizLicenseOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BizLicenseOCRResponse::GetCapital() const
{
    return m_capital;
}

bool BizLicenseOCRResponse::CapitalHasBeenSet() const
{
    return m_capitalHasBeenSet;
}

string BizLicenseOCRResponse::GetPerson() const
{
    return m_person;
}

bool BizLicenseOCRResponse::PersonHasBeenSet() const
{
    return m_personHasBeenSet;
}

string BizLicenseOCRResponse::GetAddress() const
{
    return m_address;
}

bool BizLicenseOCRResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string BizLicenseOCRResponse::GetBusiness() const
{
    return m_business;
}

bool BizLicenseOCRResponse::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string BizLicenseOCRResponse::GetType() const
{
    return m_type;
}

bool BizLicenseOCRResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string BizLicenseOCRResponse::GetPeriod() const
{
    return m_period;
}

bool BizLicenseOCRResponse::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string BizLicenseOCRResponse::GetComposingForm() const
{
    return m_composingForm;
}

bool BizLicenseOCRResponse::ComposingFormHasBeenSet() const
{
    return m_composingFormHasBeenSet;
}

string BizLicenseOCRResponse::GetSetDate() const
{
    return m_setDate;
}

bool BizLicenseOCRResponse::SetDateHasBeenSet() const
{
    return m_setDateHasBeenSet;
}

vector<int64_t> BizLicenseOCRResponse::GetRecognizeWarnCode() const
{
    return m_recognizeWarnCode;
}

bool BizLicenseOCRResponse::RecognizeWarnCodeHasBeenSet() const
{
    return m_recognizeWarnCodeHasBeenSet;
}

vector<string> BizLicenseOCRResponse::GetRecognizeWarnMsg() const
{
    return m_recognizeWarnMsg;
}

bool BizLicenseOCRResponse::RecognizeWarnMsgHasBeenSet() const
{
    return m_recognizeWarnMsgHasBeenSet;
}

int64_t BizLicenseOCRResponse::GetIsDuplication() const
{
    return m_isDuplication;
}

bool BizLicenseOCRResponse::IsDuplicationHasBeenSet() const
{
    return m_isDuplicationHasBeenSet;
}

string BizLicenseOCRResponse::GetRegistrationDate() const
{
    return m_registrationDate;
}

bool BizLicenseOCRResponse::RegistrationDateHasBeenSet() const
{
    return m_registrationDateHasBeenSet;
}

double BizLicenseOCRResponse::GetAngle() const
{
    return m_angle;
}

bool BizLicenseOCRResponse::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}

bool BizLicenseOCRResponse::GetNationalEmblem() const
{
    return m_nationalEmblem;
}

bool BizLicenseOCRResponse::NationalEmblemHasBeenSet() const
{
    return m_nationalEmblemHasBeenSet;
}

bool BizLicenseOCRResponse::GetQRCode() const
{
    return m_qRCode;
}

bool BizLicenseOCRResponse::QRCodeHasBeenSet() const
{
    return m_qRCodeHasBeenSet;
}

bool BizLicenseOCRResponse::GetSeal() const
{
    return m_seal;
}

bool BizLicenseOCRResponse::SealHasBeenSet() const
{
    return m_sealHasBeenSet;
}

string BizLicenseOCRResponse::GetTitle() const
{
    return m_title;
}

bool BizLicenseOCRResponse::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string BizLicenseOCRResponse::GetSerialNumber() const
{
    return m_serialNumber;
}

bool BizLicenseOCRResponse::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

string BizLicenseOCRResponse::GetRegistrationAuthority() const
{
    return m_registrationAuthority;
}

bool BizLicenseOCRResponse::RegistrationAuthorityHasBeenSet() const
{
    return m_registrationAuthorityHasBeenSet;
}

bool BizLicenseOCRResponse::GetElectronic() const
{
    return m_electronic;
}

bool BizLicenseOCRResponse::ElectronicHasBeenSet() const
{
    return m_electronicHasBeenSet;
}


