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

#include <tencentcloud/kms/v20190118/model/GetParametersForImportResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

GetParametersForImportResponse::GetParametersForImportResponse() :
    m_keyIdHasBeenSet(false),
    m_importTokenHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_parametersValidToHasBeenSet(false)
{
}

CoreInternalOutcome GetParametersForImportResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("KeyId") && !rsp["KeyId"].IsNull())
    {
        if (!rsp["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(rsp["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (rsp.HasMember("ImportToken") && !rsp["ImportToken"].IsNull())
    {
        if (!rsp["ImportToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_importToken = string(rsp["ImportToken"].GetString());
        m_importTokenHasBeenSet = true;
    }

    if (rsp.HasMember("PublicKey") && !rsp["PublicKey"].IsNull())
    {
        if (!rsp["PublicKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicKey = string(rsp["PublicKey"].GetString());
        m_publicKeyHasBeenSet = true;
    }

    if (rsp.HasMember("ParametersValidTo") && !rsp["ParametersValidTo"].IsNull())
    {
        if (!rsp["ParametersValidTo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ParametersValidTo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_parametersValidTo = rsp["ParametersValidTo"].GetUint64();
        m_parametersValidToHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetParametersForImportResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_importTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_importToken.c_str(), allocator).Move(), allocator);
    }

    if (m_publicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicKey.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersValidToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParametersValidTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parametersValidTo, allocator);
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


string GetParametersForImportResponse::GetKeyId() const
{
    return m_keyId;
}

bool GetParametersForImportResponse::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string GetParametersForImportResponse::GetImportToken() const
{
    return m_importToken;
}

bool GetParametersForImportResponse::ImportTokenHasBeenSet() const
{
    return m_importTokenHasBeenSet;
}

string GetParametersForImportResponse::GetPublicKey() const
{
    return m_publicKey;
}

bool GetParametersForImportResponse::PublicKeyHasBeenSet() const
{
    return m_publicKeyHasBeenSet;
}

uint64_t GetParametersForImportResponse::GetParametersValidTo() const
{
    return m_parametersValidTo;
}

bool GetParametersForImportResponse::ParametersValidToHasBeenSet() const
{
    return m_parametersValidToHasBeenSet;
}


