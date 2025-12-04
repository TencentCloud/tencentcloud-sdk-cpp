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

#include <tencentcloud/kms/v20190118/model/GenerateDataKeyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

GenerateDataKeyResponse::GenerateDataKeyResponse() :
    m_keyIdHasBeenSet(false),
    m_plaintextHasBeenSet(false),
    m_ciphertextBlobHasBeenSet(false),
    m_dataKeyIdHasBeenSet(false),
    m_tagCodeHasBeenSet(false),
    m_tagMsgHasBeenSet(false)
{
}

CoreInternalOutcome GenerateDataKeyResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("Plaintext") && !rsp["Plaintext"].IsNull())
    {
        if (!rsp["Plaintext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plaintext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plaintext = string(rsp["Plaintext"].GetString());
        m_plaintextHasBeenSet = true;
    }

    if (rsp.HasMember("CiphertextBlob") && !rsp["CiphertextBlob"].IsNull())
    {
        if (!rsp["CiphertextBlob"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CiphertextBlob` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ciphertextBlob = string(rsp["CiphertextBlob"].GetString());
        m_ciphertextBlobHasBeenSet = true;
    }

    if (rsp.HasMember("DataKeyId") && !rsp["DataKeyId"].IsNull())
    {
        if (!rsp["DataKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataKeyId = string(rsp["DataKeyId"].GetString());
        m_dataKeyIdHasBeenSet = true;
    }

    if (rsp.HasMember("TagCode") && !rsp["TagCode"].IsNull())
    {
        if (!rsp["TagCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TagCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tagCode = rsp["TagCode"].GetUint64();
        m_tagCodeHasBeenSet = true;
    }

    if (rsp.HasMember("TagMsg") && !rsp["TagMsg"].IsNull())
    {
        if (!rsp["TagMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagMsg = string(rsp["TagMsg"].GetString());
        m_tagMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GenerateDataKeyResponse::ToJsonString() const
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

    if (m_plaintextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Plaintext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plaintext.c_str(), allocator).Move(), allocator);
    }

    if (m_ciphertextBlobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CiphertextBlob";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ciphertextBlob.c_str(), allocator).Move(), allocator);
    }

    if (m_dataKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagCode, allocator);
    }

    if (m_tagMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagMsg.c_str(), allocator).Move(), allocator);
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


string GenerateDataKeyResponse::GetKeyId() const
{
    return m_keyId;
}

bool GenerateDataKeyResponse::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string GenerateDataKeyResponse::GetPlaintext() const
{
    return m_plaintext;
}

bool GenerateDataKeyResponse::PlaintextHasBeenSet() const
{
    return m_plaintextHasBeenSet;
}

string GenerateDataKeyResponse::GetCiphertextBlob() const
{
    return m_ciphertextBlob;
}

bool GenerateDataKeyResponse::CiphertextBlobHasBeenSet() const
{
    return m_ciphertextBlobHasBeenSet;
}

string GenerateDataKeyResponse::GetDataKeyId() const
{
    return m_dataKeyId;
}

bool GenerateDataKeyResponse::DataKeyIdHasBeenSet() const
{
    return m_dataKeyIdHasBeenSet;
}

uint64_t GenerateDataKeyResponse::GetTagCode() const
{
    return m_tagCode;
}

bool GenerateDataKeyResponse::TagCodeHasBeenSet() const
{
    return m_tagCodeHasBeenSet;
}

string GenerateDataKeyResponse::GetTagMsg() const
{
    return m_tagMsg;
}

bool GenerateDataKeyResponse::TagMsgHasBeenSet() const
{
    return m_tagMsgHasBeenSet;
}


