/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/teo/v20220901/model/CheckFreeCertificateVerificationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CheckFreeCertificateVerificationResponse::CheckFreeCertificateVerificationResponse() :
    m_commonNameHasBeenSet(false),
    m_signatureAlgorithmHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome CheckFreeCertificateVerificationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CommonName") && !rsp["CommonName"].IsNull())
    {
        if (!rsp["CommonName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commonName = string(rsp["CommonName"].GetString());
        m_commonNameHasBeenSet = true;
    }

    if (rsp.HasMember("SignatureAlgorithm") && !rsp["SignatureAlgorithm"].IsNull())
    {
        if (!rsp["SignatureAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignatureAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signatureAlgorithm = string(rsp["SignatureAlgorithm"].GetString());
        m_signatureAlgorithmHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(rsp["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CheckFreeCertificateVerificationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_commonNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commonName.c_str(), allocator).Move(), allocator);
    }

    if (m_signatureAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignatureAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signatureAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
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


string CheckFreeCertificateVerificationResponse::GetCommonName() const
{
    return m_commonName;
}

bool CheckFreeCertificateVerificationResponse::CommonNameHasBeenSet() const
{
    return m_commonNameHasBeenSet;
}

string CheckFreeCertificateVerificationResponse::GetSignatureAlgorithm() const
{
    return m_signatureAlgorithm;
}

bool CheckFreeCertificateVerificationResponse::SignatureAlgorithmHasBeenSet() const
{
    return m_signatureAlgorithmHasBeenSet;
}

string CheckFreeCertificateVerificationResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool CheckFreeCertificateVerificationResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}


