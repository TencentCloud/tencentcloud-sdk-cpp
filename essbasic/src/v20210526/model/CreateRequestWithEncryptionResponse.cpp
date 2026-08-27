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

#include <tencentcloud/essbasic/v20210526/model/CreateRequestWithEncryptionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateRequestWithEncryptionResponse::CreateRequestWithEncryptionResponse() :
    m_iVHasBeenSet(false),
    m_encryptedDataHasBeenSet(false),
    m_encryptionSignatureHasBeenSet(false)
{
}

CoreInternalOutcome CreateRequestWithEncryptionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IV") && !rsp["IV"].IsNull())
    {
        if (!rsp["IV"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IV` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iV = string(rsp["IV"].GetString());
        m_iVHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptedData") && !rsp["EncryptedData"].IsNull())
    {
        if (!rsp["EncryptedData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptedData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptedData = string(rsp["EncryptedData"].GetString());
        m_encryptedDataHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptionSignature") && !rsp["EncryptionSignature"].IsNull())
    {
        if (!rsp["EncryptionSignature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptionSignature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionSignature = string(rsp["EncryptionSignature"].GetString());
        m_encryptionSignatureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateRequestWithEncryptionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_iVHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IV";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iV.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptedDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptedData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptedData.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionSignature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptionSignature.c_str(), allocator).Move(), allocator);
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


string CreateRequestWithEncryptionResponse::GetIV() const
{
    return m_iV;
}

bool CreateRequestWithEncryptionResponse::IVHasBeenSet() const
{
    return m_iVHasBeenSet;
}

string CreateRequestWithEncryptionResponse::GetEncryptedData() const
{
    return m_encryptedData;
}

bool CreateRequestWithEncryptionResponse::EncryptedDataHasBeenSet() const
{
    return m_encryptedDataHasBeenSet;
}

string CreateRequestWithEncryptionResponse::GetEncryptionSignature() const
{
    return m_encryptionSignature;
}

bool CreateRequestWithEncryptionResponse::EncryptionSignatureHasBeenSet() const
{
    return m_encryptionSignatureHasBeenSet;
}


