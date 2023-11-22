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

#include <tencentcloud/tbaas/v20180416/model/DownloadUserCertResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

DownloadUserCertResponse::DownloadUserCertResponse() :
    m_certNameHasBeenSet(false),
    m_certCtxHasBeenSet(false),
    m_certHasBeenSet(false)
{
}

CoreInternalOutcome DownloadUserCertResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CertName") && !rsp["CertName"].IsNull())
    {
        if (!rsp["CertName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certName = string(rsp["CertName"].GetString());
        m_certNameHasBeenSet = true;
    }

    if (rsp.HasMember("CertCtx") && !rsp["CertCtx"].IsNull())
    {
        if (!rsp["CertCtx"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertCtx` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certCtx = string(rsp["CertCtx"].GetString());
        m_certCtxHasBeenSet = true;
    }

    if (rsp.HasMember("Cert") && !rsp["Cert"].IsNull())
    {
        if (!rsp["Cert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cert = string(rsp["Cert"].GetString());
        m_certHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DownloadUserCertResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_certNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certName.c_str(), allocator).Move(), allocator);
    }

    if (m_certCtxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertCtx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certCtx.c_str(), allocator).Move(), allocator);
    }

    if (m_certHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cert.c_str(), allocator).Move(), allocator);
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


string DownloadUserCertResponse::GetCertName() const
{
    return m_certName;
}

bool DownloadUserCertResponse::CertNameHasBeenSet() const
{
    return m_certNameHasBeenSet;
}

string DownloadUserCertResponse::GetCertCtx() const
{
    return m_certCtx;
}

bool DownloadUserCertResponse::CertCtxHasBeenSet() const
{
    return m_certCtxHasBeenSet;
}

string DownloadUserCertResponse::GetCert() const
{
    return m_cert;
}

bool DownloadUserCertResponse::CertHasBeenSet() const
{
    return m_certHasBeenSet;
}


