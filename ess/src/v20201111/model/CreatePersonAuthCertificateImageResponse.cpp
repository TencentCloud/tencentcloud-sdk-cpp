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

#include <tencentcloud/ess/v20201111/model/CreatePersonAuthCertificateImageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreatePersonAuthCertificateImageResponse::CreatePersonAuthCertificateImageResponse() :
    m_authCertUrlHasBeenSet(false),
    m_imageCertIdHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_validFromHasBeenSet(false),
    m_validToHasBeenSet(false)
{
}

CoreInternalOutcome CreatePersonAuthCertificateImageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AuthCertUrl") && !rsp["AuthCertUrl"].IsNull())
    {
        if (!rsp["AuthCertUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthCertUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authCertUrl = string(rsp["AuthCertUrl"].GetString());
        m_authCertUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ImageCertId") && !rsp["ImageCertId"].IsNull())
    {
        if (!rsp["ImageCertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageCertId = string(rsp["ImageCertId"].GetString());
        m_imageCertIdHasBeenSet = true;
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

    if (rsp.HasMember("ValidFrom") && !rsp["ValidFrom"].IsNull())
    {
        if (!rsp["ValidFrom"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ValidFrom` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_validFrom = rsp["ValidFrom"].GetUint64();
        m_validFromHasBeenSet = true;
    }

    if (rsp.HasMember("ValidTo") && !rsp["ValidTo"].IsNull())
    {
        if (!rsp["ValidTo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ValidTo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_validTo = rsp["ValidTo"].GetUint64();
        m_validToHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreatePersonAuthCertificateImageResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_authCertUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthCertUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authCertUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageCertId.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_validFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validFrom, allocator);
    }

    if (m_validToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validTo, allocator);
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


string CreatePersonAuthCertificateImageResponse::GetAuthCertUrl() const
{
    return m_authCertUrl;
}

bool CreatePersonAuthCertificateImageResponse::AuthCertUrlHasBeenSet() const
{
    return m_authCertUrlHasBeenSet;
}

string CreatePersonAuthCertificateImageResponse::GetImageCertId() const
{
    return m_imageCertId;
}

bool CreatePersonAuthCertificateImageResponse::ImageCertIdHasBeenSet() const
{
    return m_imageCertIdHasBeenSet;
}

string CreatePersonAuthCertificateImageResponse::GetSerialNumber() const
{
    return m_serialNumber;
}

bool CreatePersonAuthCertificateImageResponse::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

uint64_t CreatePersonAuthCertificateImageResponse::GetValidFrom() const
{
    return m_validFrom;
}

bool CreatePersonAuthCertificateImageResponse::ValidFromHasBeenSet() const
{
    return m_validFromHasBeenSet;
}

uint64_t CreatePersonAuthCertificateImageResponse::GetValidTo() const
{
    return m_validTo;
}

bool CreatePersonAuthCertificateImageResponse::ValidToHasBeenSet() const
{
    return m_validToHasBeenSet;
}


