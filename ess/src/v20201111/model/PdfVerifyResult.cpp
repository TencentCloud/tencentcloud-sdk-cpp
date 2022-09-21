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

#include <tencentcloud/ess/v20201111/model/PdfVerifyResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

PdfVerifyResult::PdfVerifyResult() :
    m_verifyResultHasBeenSet(false),
    m_signPlatformHasBeenSet(false),
    m_signerNameHasBeenSet(false),
    m_signTimeHasBeenSet(false),
    m_signAlgorithmHasBeenSet(false),
    m_certSnHasBeenSet(false),
    m_certNotBeforeHasBeenSet(false),
    m_certNotAfterHasBeenSet(false),
    m_componentPosXHasBeenSet(false),
    m_componentPosYHasBeenSet(false),
    m_componentWidthHasBeenSet(false),
    m_componentHeightHasBeenSet(false),
    m_componentPageHasBeenSet(false)
{
}

CoreInternalOutcome PdfVerifyResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VerifyResult") && !value["VerifyResult"].IsNull())
    {
        if (!value["VerifyResult"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PdfVerifyResult.VerifyResult` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyResult = value["VerifyResult"].GetInt64();
        m_verifyResultHasBeenSet = true;
    }

    if (value.HasMember("SignPlatform") && !value["SignPlatform"].IsNull())
    {
        if (!value["SignPlatform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PdfVerifyResult.SignPlatform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signPlatform = string(value["SignPlatform"].GetString());
        m_signPlatformHasBeenSet = true;
    }

    if (value.HasMember("SignerName") && !value["SignerName"].IsNull())
    {
        if (!value["SignerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PdfVerifyResult.SignerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signerName = string(value["SignerName"].GetString());
        m_signerNameHasBeenSet = true;
    }

    if (value.HasMember("SignTime") && !value["SignTime"].IsNull())
    {
        if (!value["SignTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PdfVerifyResult.SignTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_signTime = value["SignTime"].GetInt64();
        m_signTimeHasBeenSet = true;
    }

    if (value.HasMember("SignAlgorithm") && !value["SignAlgorithm"].IsNull())
    {
        if (!value["SignAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PdfVerifyResult.SignAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signAlgorithm = string(value["SignAlgorithm"].GetString());
        m_signAlgorithmHasBeenSet = true;
    }

    if (value.HasMember("CertSn") && !value["CertSn"].IsNull())
    {
        if (!value["CertSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PdfVerifyResult.CertSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certSn = string(value["CertSn"].GetString());
        m_certSnHasBeenSet = true;
    }

    if (value.HasMember("CertNotBefore") && !value["CertNotBefore"].IsNull())
    {
        if (!value["CertNotBefore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PdfVerifyResult.CertNotBefore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certNotBefore = value["CertNotBefore"].GetInt64();
        m_certNotBeforeHasBeenSet = true;
    }

    if (value.HasMember("CertNotAfter") && !value["CertNotAfter"].IsNull())
    {
        if (!value["CertNotAfter"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PdfVerifyResult.CertNotAfter` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certNotAfter = value["CertNotAfter"].GetInt64();
        m_certNotAfterHasBeenSet = true;
    }

    if (value.HasMember("ComponentPosX") && !value["ComponentPosX"].IsNull())
    {
        if (!value["ComponentPosX"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PdfVerifyResult.ComponentPosX` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_componentPosX = value["ComponentPosX"].GetDouble();
        m_componentPosXHasBeenSet = true;
    }

    if (value.HasMember("ComponentPosY") && !value["ComponentPosY"].IsNull())
    {
        if (!value["ComponentPosY"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PdfVerifyResult.ComponentPosY` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_componentPosY = value["ComponentPosY"].GetDouble();
        m_componentPosYHasBeenSet = true;
    }

    if (value.HasMember("ComponentWidth") && !value["ComponentWidth"].IsNull())
    {
        if (!value["ComponentWidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PdfVerifyResult.ComponentWidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_componentWidth = value["ComponentWidth"].GetDouble();
        m_componentWidthHasBeenSet = true;
    }

    if (value.HasMember("ComponentHeight") && !value["ComponentHeight"].IsNull())
    {
        if (!value["ComponentHeight"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PdfVerifyResult.ComponentHeight` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_componentHeight = value["ComponentHeight"].GetDouble();
        m_componentHeightHasBeenSet = true;
    }

    if (value.HasMember("ComponentPage") && !value["ComponentPage"].IsNull())
    {
        if (!value["ComponentPage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PdfVerifyResult.ComponentPage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_componentPage = value["ComponentPage"].GetInt64();
        m_componentPageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PdfVerifyResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_verifyResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyResult, allocator);
    }

    if (m_signPlatformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignPlatform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signPlatform.c_str(), allocator).Move(), allocator);
    }

    if (m_signerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signerName.c_str(), allocator).Move(), allocator);
    }

    if (m_signTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signTime, allocator);
    }

    if (m_signAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_certSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certSn.c_str(), allocator).Move(), allocator);
    }

    if (m_certNotBeforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertNotBefore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certNotBefore, allocator);
    }

    if (m_certNotAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertNotAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certNotAfter, allocator);
    }

    if (m_componentPosXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentPosX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentPosX, allocator);
    }

    if (m_componentPosYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentPosY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentPosY, allocator);
    }

    if (m_componentWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentWidth, allocator);
    }

    if (m_componentHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentHeight, allocator);
    }

    if (m_componentPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentPage, allocator);
    }

}


int64_t PdfVerifyResult::GetVerifyResult() const
{
    return m_verifyResult;
}

void PdfVerifyResult::SetVerifyResult(const int64_t& _verifyResult)
{
    m_verifyResult = _verifyResult;
    m_verifyResultHasBeenSet = true;
}

bool PdfVerifyResult::VerifyResultHasBeenSet() const
{
    return m_verifyResultHasBeenSet;
}

string PdfVerifyResult::GetSignPlatform() const
{
    return m_signPlatform;
}

void PdfVerifyResult::SetSignPlatform(const string& _signPlatform)
{
    m_signPlatform = _signPlatform;
    m_signPlatformHasBeenSet = true;
}

bool PdfVerifyResult::SignPlatformHasBeenSet() const
{
    return m_signPlatformHasBeenSet;
}

string PdfVerifyResult::GetSignerName() const
{
    return m_signerName;
}

void PdfVerifyResult::SetSignerName(const string& _signerName)
{
    m_signerName = _signerName;
    m_signerNameHasBeenSet = true;
}

bool PdfVerifyResult::SignerNameHasBeenSet() const
{
    return m_signerNameHasBeenSet;
}

int64_t PdfVerifyResult::GetSignTime() const
{
    return m_signTime;
}

void PdfVerifyResult::SetSignTime(const int64_t& _signTime)
{
    m_signTime = _signTime;
    m_signTimeHasBeenSet = true;
}

bool PdfVerifyResult::SignTimeHasBeenSet() const
{
    return m_signTimeHasBeenSet;
}

string PdfVerifyResult::GetSignAlgorithm() const
{
    return m_signAlgorithm;
}

void PdfVerifyResult::SetSignAlgorithm(const string& _signAlgorithm)
{
    m_signAlgorithm = _signAlgorithm;
    m_signAlgorithmHasBeenSet = true;
}

bool PdfVerifyResult::SignAlgorithmHasBeenSet() const
{
    return m_signAlgorithmHasBeenSet;
}

string PdfVerifyResult::GetCertSn() const
{
    return m_certSn;
}

void PdfVerifyResult::SetCertSn(const string& _certSn)
{
    m_certSn = _certSn;
    m_certSnHasBeenSet = true;
}

bool PdfVerifyResult::CertSnHasBeenSet() const
{
    return m_certSnHasBeenSet;
}

int64_t PdfVerifyResult::GetCertNotBefore() const
{
    return m_certNotBefore;
}

void PdfVerifyResult::SetCertNotBefore(const int64_t& _certNotBefore)
{
    m_certNotBefore = _certNotBefore;
    m_certNotBeforeHasBeenSet = true;
}

bool PdfVerifyResult::CertNotBeforeHasBeenSet() const
{
    return m_certNotBeforeHasBeenSet;
}

int64_t PdfVerifyResult::GetCertNotAfter() const
{
    return m_certNotAfter;
}

void PdfVerifyResult::SetCertNotAfter(const int64_t& _certNotAfter)
{
    m_certNotAfter = _certNotAfter;
    m_certNotAfterHasBeenSet = true;
}

bool PdfVerifyResult::CertNotAfterHasBeenSet() const
{
    return m_certNotAfterHasBeenSet;
}

double PdfVerifyResult::GetComponentPosX() const
{
    return m_componentPosX;
}

void PdfVerifyResult::SetComponentPosX(const double& _componentPosX)
{
    m_componentPosX = _componentPosX;
    m_componentPosXHasBeenSet = true;
}

bool PdfVerifyResult::ComponentPosXHasBeenSet() const
{
    return m_componentPosXHasBeenSet;
}

double PdfVerifyResult::GetComponentPosY() const
{
    return m_componentPosY;
}

void PdfVerifyResult::SetComponentPosY(const double& _componentPosY)
{
    m_componentPosY = _componentPosY;
    m_componentPosYHasBeenSet = true;
}

bool PdfVerifyResult::ComponentPosYHasBeenSet() const
{
    return m_componentPosYHasBeenSet;
}

double PdfVerifyResult::GetComponentWidth() const
{
    return m_componentWidth;
}

void PdfVerifyResult::SetComponentWidth(const double& _componentWidth)
{
    m_componentWidth = _componentWidth;
    m_componentWidthHasBeenSet = true;
}

bool PdfVerifyResult::ComponentWidthHasBeenSet() const
{
    return m_componentWidthHasBeenSet;
}

double PdfVerifyResult::GetComponentHeight() const
{
    return m_componentHeight;
}

void PdfVerifyResult::SetComponentHeight(const double& _componentHeight)
{
    m_componentHeight = _componentHeight;
    m_componentHeightHasBeenSet = true;
}

bool PdfVerifyResult::ComponentHeightHasBeenSet() const
{
    return m_componentHeightHasBeenSet;
}

int64_t PdfVerifyResult::GetComponentPage() const
{
    return m_componentPage;
}

void PdfVerifyResult::SetComponentPage(const int64_t& _componentPage)
{
    m_componentPage = _componentPage;
    m_componentPageHasBeenSet = true;
}

bool PdfVerifyResult::ComponentPageHasBeenSet() const
{
    return m_componentPageHasBeenSet;
}

