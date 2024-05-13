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

#include <tencentcloud/ocr/v20181119/model/HKIDCardOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

HKIDCardOCRResponse::HKIDCardOCRResponse() :
    m_cnNameHasBeenSet(false),
    m_enNameHasBeenSet(false),
    m_telexCodeHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_permanentHasBeenSet(false),
    m_idNumHasBeenSet(false),
    m_symbolHasBeenSet(false),
    m_firstIssueDateHasBeenSet(false),
    m_currentIssueDateHasBeenSet(false),
    m_fakeDetectResultHasBeenSet(false),
    m_headImageHasBeenSet(false),
    m_warningCodeHasBeenSet(false),
    m_warnCardInfosHasBeenSet(false)
{
}

CoreInternalOutcome HKIDCardOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CnName") && !rsp["CnName"].IsNull())
    {
        if (!rsp["CnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnName = string(rsp["CnName"].GetString());
        m_cnNameHasBeenSet = true;
    }

    if (rsp.HasMember("EnName") && !rsp["EnName"].IsNull())
    {
        if (!rsp["EnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enName = string(rsp["EnName"].GetString());
        m_enNameHasBeenSet = true;
    }

    if (rsp.HasMember("TelexCode") && !rsp["TelexCode"].IsNull())
    {
        if (!rsp["TelexCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelexCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_telexCode = string(rsp["TelexCode"].GetString());
        m_telexCodeHasBeenSet = true;
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

    if (rsp.HasMember("Birthday") && !rsp["Birthday"].IsNull())
    {
        if (!rsp["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(rsp["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (rsp.HasMember("Permanent") && !rsp["Permanent"].IsNull())
    {
        if (!rsp["Permanent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Permanent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_permanent = rsp["Permanent"].GetInt64();
        m_permanentHasBeenSet = true;
    }

    if (rsp.HasMember("IdNum") && !rsp["IdNum"].IsNull())
    {
        if (!rsp["IdNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idNum = string(rsp["IdNum"].GetString());
        m_idNumHasBeenSet = true;
    }

    if (rsp.HasMember("Symbol") && !rsp["Symbol"].IsNull())
    {
        if (!rsp["Symbol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Symbol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symbol = string(rsp["Symbol"].GetString());
        m_symbolHasBeenSet = true;
    }

    if (rsp.HasMember("FirstIssueDate") && !rsp["FirstIssueDate"].IsNull())
    {
        if (!rsp["FirstIssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirstIssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstIssueDate = string(rsp["FirstIssueDate"].GetString());
        m_firstIssueDateHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentIssueDate") && !rsp["CurrentIssueDate"].IsNull())
    {
        if (!rsp["CurrentIssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentIssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentIssueDate = string(rsp["CurrentIssueDate"].GetString());
        m_currentIssueDateHasBeenSet = true;
    }

    if (rsp.HasMember("FakeDetectResult") && !rsp["FakeDetectResult"].IsNull())
    {
        if (!rsp["FakeDetectResult"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FakeDetectResult` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fakeDetectResult = rsp["FakeDetectResult"].GetInt64();
        m_fakeDetectResultHasBeenSet = true;
    }

    if (rsp.HasMember("HeadImage") && !rsp["HeadImage"].IsNull())
    {
        if (!rsp["HeadImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HeadImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headImage = string(rsp["HeadImage"].GetString());
        m_headImageHasBeenSet = true;
    }

    if (rsp.HasMember("WarningCode") && !rsp["WarningCode"].IsNull())
    {
        if (!rsp["WarningCode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WarningCode` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WarningCode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_warningCode.push_back((*itr).GetInt64());
        }
        m_warningCodeHasBeenSet = true;
    }

    if (rsp.HasMember("WarnCardInfos") && !rsp["WarnCardInfos"].IsNull())
    {
        if (!rsp["WarnCardInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WarnCardInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WarnCardInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_warnCardInfos.push_back((*itr).GetInt64());
        }
        m_warnCardInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string HKIDCardOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnName.c_str(), allocator).Move(), allocator);
    }

    if (m_enNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enName.c_str(), allocator).Move(), allocator);
    }

    if (m_telexCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TelexCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_telexCode.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

    if (m_permanentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permanent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_permanent, allocator);
    }

    if (m_idNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idNum.c_str(), allocator).Move(), allocator);
    }

    if (m_symbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Symbol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_symbol.c_str(), allocator).Move(), allocator);
    }

    if (m_firstIssueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstIssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstIssueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_currentIssueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentIssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentIssueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeDetectResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeDetectResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fakeDetectResult, allocator);
    }

    if (m_headImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headImage.c_str(), allocator).Move(), allocator);
    }

    if (m_warningCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarningCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_warningCode.begin(); itr != m_warningCode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_warnCardInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnCardInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_warnCardInfos.begin(); itr != m_warnCardInfos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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


string HKIDCardOCRResponse::GetCnName() const
{
    return m_cnName;
}

bool HKIDCardOCRResponse::CnNameHasBeenSet() const
{
    return m_cnNameHasBeenSet;
}

string HKIDCardOCRResponse::GetEnName() const
{
    return m_enName;
}

bool HKIDCardOCRResponse::EnNameHasBeenSet() const
{
    return m_enNameHasBeenSet;
}

string HKIDCardOCRResponse::GetTelexCode() const
{
    return m_telexCode;
}

bool HKIDCardOCRResponse::TelexCodeHasBeenSet() const
{
    return m_telexCodeHasBeenSet;
}

string HKIDCardOCRResponse::GetSex() const
{
    return m_sex;
}

bool HKIDCardOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string HKIDCardOCRResponse::GetBirthday() const
{
    return m_birthday;
}

bool HKIDCardOCRResponse::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

int64_t HKIDCardOCRResponse::GetPermanent() const
{
    return m_permanent;
}

bool HKIDCardOCRResponse::PermanentHasBeenSet() const
{
    return m_permanentHasBeenSet;
}

string HKIDCardOCRResponse::GetIdNum() const
{
    return m_idNum;
}

bool HKIDCardOCRResponse::IdNumHasBeenSet() const
{
    return m_idNumHasBeenSet;
}

string HKIDCardOCRResponse::GetSymbol() const
{
    return m_symbol;
}

bool HKIDCardOCRResponse::SymbolHasBeenSet() const
{
    return m_symbolHasBeenSet;
}

string HKIDCardOCRResponse::GetFirstIssueDate() const
{
    return m_firstIssueDate;
}

bool HKIDCardOCRResponse::FirstIssueDateHasBeenSet() const
{
    return m_firstIssueDateHasBeenSet;
}

string HKIDCardOCRResponse::GetCurrentIssueDate() const
{
    return m_currentIssueDate;
}

bool HKIDCardOCRResponse::CurrentIssueDateHasBeenSet() const
{
    return m_currentIssueDateHasBeenSet;
}

int64_t HKIDCardOCRResponse::GetFakeDetectResult() const
{
    return m_fakeDetectResult;
}

bool HKIDCardOCRResponse::FakeDetectResultHasBeenSet() const
{
    return m_fakeDetectResultHasBeenSet;
}

string HKIDCardOCRResponse::GetHeadImage() const
{
    return m_headImage;
}

bool HKIDCardOCRResponse::HeadImageHasBeenSet() const
{
    return m_headImageHasBeenSet;
}

vector<int64_t> HKIDCardOCRResponse::GetWarningCode() const
{
    return m_warningCode;
}

bool HKIDCardOCRResponse::WarningCodeHasBeenSet() const
{
    return m_warningCodeHasBeenSet;
}

vector<int64_t> HKIDCardOCRResponse::GetWarnCardInfos() const
{
    return m_warnCardInfos;
}

bool HKIDCardOCRResponse::WarnCardInfosHasBeenSet() const
{
    return m_warnCardInfosHasBeenSet;
}


