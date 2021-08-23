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

#include <tencentcloud/kms/v20190118/model/CreateWhiteBoxKeyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

CreateWhiteBoxKeyResponse::CreateWhiteBoxKeyResponse() :
    m_encryptKeyHasBeenSet(false),
    m_decryptKeyHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_tagCodeHasBeenSet(false),
    m_tagMsgHasBeenSet(false)
{
}

CoreInternalOutcome CreateWhiteBoxKeyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EncryptKey") && !rsp["EncryptKey"].IsNull())
    {
        if (!rsp["EncryptKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptKey = string(rsp["EncryptKey"].GetString());
        m_encryptKeyHasBeenSet = true;
    }

    if (rsp.HasMember("DecryptKey") && !rsp["DecryptKey"].IsNull())
    {
        if (!rsp["DecryptKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DecryptKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_decryptKey = string(rsp["DecryptKey"].GetString());
        m_decryptKeyHasBeenSet = true;
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

string CreateWhiteBoxKeyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_encryptKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptKey.c_str(), allocator).Move(), allocator);
    }

    if (m_decryptKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DecryptKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_decryptKey.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
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


string CreateWhiteBoxKeyResponse::GetEncryptKey() const
{
    return m_encryptKey;
}

bool CreateWhiteBoxKeyResponse::EncryptKeyHasBeenSet() const
{
    return m_encryptKeyHasBeenSet;
}

string CreateWhiteBoxKeyResponse::GetDecryptKey() const
{
    return m_decryptKey;
}

bool CreateWhiteBoxKeyResponse::DecryptKeyHasBeenSet() const
{
    return m_decryptKeyHasBeenSet;
}

string CreateWhiteBoxKeyResponse::GetKeyId() const
{
    return m_keyId;
}

bool CreateWhiteBoxKeyResponse::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

uint64_t CreateWhiteBoxKeyResponse::GetTagCode() const
{
    return m_tagCode;
}

bool CreateWhiteBoxKeyResponse::TagCodeHasBeenSet() const
{
    return m_tagCodeHasBeenSet;
}

string CreateWhiteBoxKeyResponse::GetTagMsg() const
{
    return m_tagMsg;
}

bool CreateWhiteBoxKeyResponse::TagMsgHasBeenSet() const
{
    return m_tagMsgHasBeenSet;
}


