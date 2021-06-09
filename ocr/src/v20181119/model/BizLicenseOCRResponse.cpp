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
    m_recognizeWarnMsgHasBeenSet(false)
{
}

CoreInternalOutcome BizLicenseOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RegNum") && !rsp["RegNum"].IsNull())
    {
        if (!rsp["RegNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regNum = string(rsp["RegNum"].GetString());
        m_regNumHasBeenSet = true;
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

    if (rsp.HasMember("Capital") && !rsp["Capital"].IsNull())
    {
        if (!rsp["Capital"].IsString())
        {
            return CoreInternalOutcome(Error("response `Capital` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_capital = string(rsp["Capital"].GetString());
        m_capitalHasBeenSet = true;
    }

    if (rsp.HasMember("Person") && !rsp["Person"].IsNull())
    {
        if (!rsp["Person"].IsString())
        {
            return CoreInternalOutcome(Error("response `Person` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_person = string(rsp["Person"].GetString());
        m_personHasBeenSet = true;
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

    if (rsp.HasMember("Business") && !rsp["Business"].IsNull())
    {
        if (!rsp["Business"].IsString())
        {
            return CoreInternalOutcome(Error("response `Business` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_business = string(rsp["Business"].GetString());
        m_businessHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Period") && !rsp["Period"].IsNull())
    {
        if (!rsp["Period"].IsString())
        {
            return CoreInternalOutcome(Error("response `Period` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_period = string(rsp["Period"].GetString());
        m_periodHasBeenSet = true;
    }

    if (rsp.HasMember("ComposingForm") && !rsp["ComposingForm"].IsNull())
    {
        if (!rsp["ComposingForm"].IsString())
        {
            return CoreInternalOutcome(Error("response `ComposingForm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_composingForm = string(rsp["ComposingForm"].GetString());
        m_composingFormHasBeenSet = true;
    }

    if (rsp.HasMember("SetDate") && !rsp["SetDate"].IsNull())
    {
        if (!rsp["SetDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `SetDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setDate = string(rsp["SetDate"].GetString());
        m_setDateHasBeenSet = true;
    }

    if (rsp.HasMember("RecognizeWarnCode") && !rsp["RecognizeWarnCode"].IsNull())
    {
        if (!rsp["RecognizeWarnCode"].IsArray())
            return CoreInternalOutcome(Error("response `RecognizeWarnCode` is not array type"));

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
            return CoreInternalOutcome(Error("response `RecognizeWarnMsg` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RecognizeWarnMsg"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_recognizeWarnMsg.push_back((*itr).GetString());
        }
        m_recognizeWarnMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


