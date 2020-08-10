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

#include <tencentcloud/ocr/v20181119/model/VerifyBasicBizLicenseResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

VerifyBasicBizLicenseResponse::VerifyBasicBizLicenseResponse() :
    m_errorCodeHasBeenSet(false),
    m_creditCodeHasBeenSet(false),
    m_opfromHasBeenSet(false),
    m_optoHasBeenSet(false),
    m_frnameHasBeenSet(false),
    m_entstatusHasBeenSet(false),
    m_zsopscopeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_oriregnoHasBeenSet(false),
    m_verifyRegnoHasBeenSet(false),
    m_regnoHasBeenSet(false),
    m_verifyEntnameHasBeenSet(false),
    m_entnameHasBeenSet(false),
    m_verifyDomHasBeenSet(false),
    m_domHasBeenSet(false),
    m_regNumResultHasBeenSet(false),
    m_regCapitalHasBeenSet(false)
{
}

CoreInternalOutcome VerifyBasicBizLicenseResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ErrorCode") && !rsp["ErrorCode"].IsNull())
    {
        if (!rsp["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = rsp["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("CreditCode") && !rsp["CreditCode"].IsNull())
    {
        if (!rsp["CreditCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreditCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creditCode = string(rsp["CreditCode"].GetString());
        m_creditCodeHasBeenSet = true;
    }

    if (rsp.HasMember("Opfrom") && !rsp["Opfrom"].IsNull())
    {
        if (!rsp["Opfrom"].IsString())
        {
            return CoreInternalOutcome(Error("response `Opfrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_opfrom = string(rsp["Opfrom"].GetString());
        m_opfromHasBeenSet = true;
    }

    if (rsp.HasMember("Opto") && !rsp["Opto"].IsNull())
    {
        if (!rsp["Opto"].IsString())
        {
            return CoreInternalOutcome(Error("response `Opto` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_opto = string(rsp["Opto"].GetString());
        m_optoHasBeenSet = true;
    }

    if (rsp.HasMember("Frname") && !rsp["Frname"].IsNull())
    {
        if (!rsp["Frname"].IsString())
        {
            return CoreInternalOutcome(Error("response `Frname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frname = string(rsp["Frname"].GetString());
        m_frnameHasBeenSet = true;
    }

    if (rsp.HasMember("Entstatus") && !rsp["Entstatus"].IsNull())
    {
        if (!rsp["Entstatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `Entstatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entstatus = string(rsp["Entstatus"].GetString());
        m_entstatusHasBeenSet = true;
    }

    if (rsp.HasMember("Zsopscope") && !rsp["Zsopscope"].IsNull())
    {
        if (!rsp["Zsopscope"].IsString())
        {
            return CoreInternalOutcome(Error("response `Zsopscope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zsopscope = string(rsp["Zsopscope"].GetString());
        m_zsopscopeHasBeenSet = true;
    }

    if (rsp.HasMember("Reason") && !rsp["Reason"].IsNull())
    {
        if (!rsp["Reason"].IsString())
        {
            return CoreInternalOutcome(Error("response `Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(rsp["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (rsp.HasMember("Oriregno") && !rsp["Oriregno"].IsNull())
    {
        if (!rsp["Oriregno"].IsString())
        {
            return CoreInternalOutcome(Error("response `Oriregno` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oriregno = string(rsp["Oriregno"].GetString());
        m_oriregnoHasBeenSet = true;
    }

    if (rsp.HasMember("VerifyRegno") && !rsp["VerifyRegno"].IsNull())
    {
        if (!rsp["VerifyRegno"].IsString())
        {
            return CoreInternalOutcome(Error("response `VerifyRegno` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyRegno = string(rsp["VerifyRegno"].GetString());
        m_verifyRegnoHasBeenSet = true;
    }

    if (rsp.HasMember("Regno") && !rsp["Regno"].IsNull())
    {
        if (!rsp["Regno"].IsString())
        {
            return CoreInternalOutcome(Error("response `Regno` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regno = string(rsp["Regno"].GetString());
        m_regnoHasBeenSet = true;
    }

    if (rsp.HasMember("VerifyEntname") && !rsp["VerifyEntname"].IsNull())
    {
        if (!rsp["VerifyEntname"].IsString())
        {
            return CoreInternalOutcome(Error("response `VerifyEntname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyEntname = string(rsp["VerifyEntname"].GetString());
        m_verifyEntnameHasBeenSet = true;
    }

    if (rsp.HasMember("Entname") && !rsp["Entname"].IsNull())
    {
        if (!rsp["Entname"].IsString())
        {
            return CoreInternalOutcome(Error("response `Entname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entname = string(rsp["Entname"].GetString());
        m_entnameHasBeenSet = true;
    }

    if (rsp.HasMember("VerifyDom") && !rsp["VerifyDom"].IsNull())
    {
        if (!rsp["VerifyDom"].IsString())
        {
            return CoreInternalOutcome(Error("response `VerifyDom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyDom = string(rsp["VerifyDom"].GetString());
        m_verifyDomHasBeenSet = true;
    }

    if (rsp.HasMember("Dom") && !rsp["Dom"].IsNull())
    {
        if (!rsp["Dom"].IsString())
        {
            return CoreInternalOutcome(Error("response `Dom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dom = string(rsp["Dom"].GetString());
        m_domHasBeenSet = true;
    }

    if (rsp.HasMember("RegNumResult") && !rsp["RegNumResult"].IsNull())
    {
        if (!rsp["RegNumResult"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RegNumResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regNumResult.Deserialize(rsp["RegNumResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regNumResultHasBeenSet = true;
    }

    if (rsp.HasMember("RegCapital") && !rsp["RegCapital"].IsNull())
    {
        if (!rsp["RegCapital"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegCapital` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regCapital = string(rsp["RegCapital"].GetString());
        m_regCapitalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t VerifyBasicBizLicenseResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool VerifyBasicBizLicenseResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string VerifyBasicBizLicenseResponse::GetCreditCode() const
{
    return m_creditCode;
}

bool VerifyBasicBizLicenseResponse::CreditCodeHasBeenSet() const
{
    return m_creditCodeHasBeenSet;
}

string VerifyBasicBizLicenseResponse::GetOpfrom() const
{
    return m_opfrom;
}

bool VerifyBasicBizLicenseResponse::OpfromHasBeenSet() const
{
    return m_opfromHasBeenSet;
}

string VerifyBasicBizLicenseResponse::GetOpto() const
{
    return m_opto;
}

bool VerifyBasicBizLicenseResponse::OptoHasBeenSet() const
{
    return m_optoHasBeenSet;
}

string VerifyBasicBizLicenseResponse::GetFrname() const
{
    return m_frname;
}

bool VerifyBasicBizLicenseResponse::FrnameHasBeenSet() const
{
    return m_frnameHasBeenSet;
}

string VerifyBasicBizLicenseResponse::GetEntstatus() const
{
    return m_entstatus;
}

bool VerifyBasicBizLicenseResponse::EntstatusHasBeenSet() const
{
    return m_entstatusHasBeenSet;
}

string VerifyBasicBizLicenseResponse::GetZsopscope() const
{
    return m_zsopscope;
}

bool VerifyBasicBizLicenseResponse::ZsopscopeHasBeenSet() const
{
    return m_zsopscopeHasBeenSet;
}

string VerifyBasicBizLicenseResponse::GetReason() const
{
    return m_reason;
}

bool VerifyBasicBizLicenseResponse::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string VerifyBasicBizLicenseResponse::GetOriregno() const
{
    return m_oriregno;
}

bool VerifyBasicBizLicenseResponse::OriregnoHasBeenSet() const
{
    return m_oriregnoHasBeenSet;
}

string VerifyBasicBizLicenseResponse::GetVerifyRegno() const
{
    return m_verifyRegno;
}

bool VerifyBasicBizLicenseResponse::VerifyRegnoHasBeenSet() const
{
    return m_verifyRegnoHasBeenSet;
}

string VerifyBasicBizLicenseResponse::GetRegno() const
{
    return m_regno;
}

bool VerifyBasicBizLicenseResponse::RegnoHasBeenSet() const
{
    return m_regnoHasBeenSet;
}

string VerifyBasicBizLicenseResponse::GetVerifyEntname() const
{
    return m_verifyEntname;
}

bool VerifyBasicBizLicenseResponse::VerifyEntnameHasBeenSet() const
{
    return m_verifyEntnameHasBeenSet;
}

string VerifyBasicBizLicenseResponse::GetEntname() const
{
    return m_entname;
}

bool VerifyBasicBizLicenseResponse::EntnameHasBeenSet() const
{
    return m_entnameHasBeenSet;
}

string VerifyBasicBizLicenseResponse::GetVerifyDom() const
{
    return m_verifyDom;
}

bool VerifyBasicBizLicenseResponse::VerifyDomHasBeenSet() const
{
    return m_verifyDomHasBeenSet;
}

string VerifyBasicBizLicenseResponse::GetDom() const
{
    return m_dom;
}

bool VerifyBasicBizLicenseResponse::DomHasBeenSet() const
{
    return m_domHasBeenSet;
}

BizLicenseVerifyResult VerifyBasicBizLicenseResponse::GetRegNumResult() const
{
    return m_regNumResult;
}

bool VerifyBasicBizLicenseResponse::RegNumResultHasBeenSet() const
{
    return m_regNumResultHasBeenSet;
}

string VerifyBasicBizLicenseResponse::GetRegCapital() const
{
    return m_regCapital;
}

bool VerifyBasicBizLicenseResponse::RegCapitalHasBeenSet() const
{
    return m_regCapitalHasBeenSet;
}


