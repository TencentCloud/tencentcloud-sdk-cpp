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

#include <tencentcloud/ess/v20201111/model/VerifyDigitFileResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

VerifyDigitFileResult::VerifyDigitFileResult() :
    m_certNotBeforeHasBeenSet(false),
    m_certNotAfterHasBeenSet(false),
    m_certSnHasBeenSet(false),
    m_signAlgorithmHasBeenSet(false),
    m_signTimeHasBeenSet(false),
    m_signTypeHasBeenSet(false),
    m_signerNameHasBeenSet(false)
{
}

CoreInternalOutcome VerifyDigitFileResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertNotBefore") && !value["CertNotBefore"].IsNull())
    {
        if (!value["CertNotBefore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyDigitFileResult.CertNotBefore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certNotBefore = value["CertNotBefore"].GetInt64();
        m_certNotBeforeHasBeenSet = true;
    }

    if (value.HasMember("CertNotAfter") && !value["CertNotAfter"].IsNull())
    {
        if (!value["CertNotAfter"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyDigitFileResult.CertNotAfter` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certNotAfter = value["CertNotAfter"].GetInt64();
        m_certNotAfterHasBeenSet = true;
    }

    if (value.HasMember("CertSn") && !value["CertSn"].IsNull())
    {
        if (!value["CertSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyDigitFileResult.CertSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certSn = string(value["CertSn"].GetString());
        m_certSnHasBeenSet = true;
    }

    if (value.HasMember("SignAlgorithm") && !value["SignAlgorithm"].IsNull())
    {
        if (!value["SignAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyDigitFileResult.SignAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signAlgorithm = string(value["SignAlgorithm"].GetString());
        m_signAlgorithmHasBeenSet = true;
    }

    if (value.HasMember("SignTime") && !value["SignTime"].IsNull())
    {
        if (!value["SignTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyDigitFileResult.SignTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_signTime = value["SignTime"].GetInt64();
        m_signTimeHasBeenSet = true;
    }

    if (value.HasMember("SignType") && !value["SignType"].IsNull())
    {
        if (!value["SignType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyDigitFileResult.SignType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_signType = value["SignType"].GetInt64();
        m_signTypeHasBeenSet = true;
    }

    if (value.HasMember("SignerName") && !value["SignerName"].IsNull())
    {
        if (!value["SignerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyDigitFileResult.SignerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signerName = string(value["SignerName"].GetString());
        m_signerNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VerifyDigitFileResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_certSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certSn.c_str(), allocator).Move(), allocator);
    }

    if (m_signAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_signTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signTime, allocator);
    }

    if (m_signTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signType, allocator);
    }

    if (m_signerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signerName.c_str(), allocator).Move(), allocator);
    }

}


int64_t VerifyDigitFileResult::GetCertNotBefore() const
{
    return m_certNotBefore;
}

void VerifyDigitFileResult::SetCertNotBefore(const int64_t& _certNotBefore)
{
    m_certNotBefore = _certNotBefore;
    m_certNotBeforeHasBeenSet = true;
}

bool VerifyDigitFileResult::CertNotBeforeHasBeenSet() const
{
    return m_certNotBeforeHasBeenSet;
}

int64_t VerifyDigitFileResult::GetCertNotAfter() const
{
    return m_certNotAfter;
}

void VerifyDigitFileResult::SetCertNotAfter(const int64_t& _certNotAfter)
{
    m_certNotAfter = _certNotAfter;
    m_certNotAfterHasBeenSet = true;
}

bool VerifyDigitFileResult::CertNotAfterHasBeenSet() const
{
    return m_certNotAfterHasBeenSet;
}

string VerifyDigitFileResult::GetCertSn() const
{
    return m_certSn;
}

void VerifyDigitFileResult::SetCertSn(const string& _certSn)
{
    m_certSn = _certSn;
    m_certSnHasBeenSet = true;
}

bool VerifyDigitFileResult::CertSnHasBeenSet() const
{
    return m_certSnHasBeenSet;
}

string VerifyDigitFileResult::GetSignAlgorithm() const
{
    return m_signAlgorithm;
}

void VerifyDigitFileResult::SetSignAlgorithm(const string& _signAlgorithm)
{
    m_signAlgorithm = _signAlgorithm;
    m_signAlgorithmHasBeenSet = true;
}

bool VerifyDigitFileResult::SignAlgorithmHasBeenSet() const
{
    return m_signAlgorithmHasBeenSet;
}

int64_t VerifyDigitFileResult::GetSignTime() const
{
    return m_signTime;
}

void VerifyDigitFileResult::SetSignTime(const int64_t& _signTime)
{
    m_signTime = _signTime;
    m_signTimeHasBeenSet = true;
}

bool VerifyDigitFileResult::SignTimeHasBeenSet() const
{
    return m_signTimeHasBeenSet;
}

int64_t VerifyDigitFileResult::GetSignType() const
{
    return m_signType;
}

void VerifyDigitFileResult::SetSignType(const int64_t& _signType)
{
    m_signType = _signType;
    m_signTypeHasBeenSet = true;
}

bool VerifyDigitFileResult::SignTypeHasBeenSet() const
{
    return m_signTypeHasBeenSet;
}

string VerifyDigitFileResult::GetSignerName() const
{
    return m_signerName;
}

void VerifyDigitFileResult::SetSignerName(const string& _signerName)
{
    m_signerName = _signerName;
    m_signerNameHasBeenSet = true;
}

bool VerifyDigitFileResult::SignerNameHasBeenSet() const
{
    return m_signerNameHasBeenSet;
}

