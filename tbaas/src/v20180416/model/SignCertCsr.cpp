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

#include <tencentcloud/tbaas/v20180416/model/SignCertCsr.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

SignCertCsr::SignCertCsr() :
    m_certMarkHasBeenSet(false),
    m_signCsrContentHasBeenSet(false)
{
}

CoreInternalOutcome SignCertCsr::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertMark") && !value["CertMark"].IsNull())
    {
        if (!value["CertMark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignCertCsr.CertMark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certMark = string(value["CertMark"].GetString());
        m_certMarkHasBeenSet = true;
    }

    if (value.HasMember("SignCsrContent") && !value["SignCsrContent"].IsNull())
    {
        if (!value["SignCsrContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignCertCsr.SignCsrContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signCsrContent = string(value["SignCsrContent"].GetString());
        m_signCsrContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SignCertCsr::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certMark.c_str(), allocator).Move(), allocator);
    }

    if (m_signCsrContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignCsrContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signCsrContent.c_str(), allocator).Move(), allocator);
    }

}


string SignCertCsr::GetCertMark() const
{
    return m_certMark;
}

void SignCertCsr::SetCertMark(const string& _certMark)
{
    m_certMark = _certMark;
    m_certMarkHasBeenSet = true;
}

bool SignCertCsr::CertMarkHasBeenSet() const
{
    return m_certMarkHasBeenSet;
}

string SignCertCsr::GetSignCsrContent() const
{
    return m_signCsrContent;
}

void SignCertCsr::SetSignCsrContent(const string& _signCsrContent)
{
    m_signCsrContent = _signCsrContent;
    m_signCsrContentHasBeenSet = true;
}

bool SignCertCsr::SignCsrContentHasBeenSet() const
{
    return m_signCsrContentHasBeenSet;
}

