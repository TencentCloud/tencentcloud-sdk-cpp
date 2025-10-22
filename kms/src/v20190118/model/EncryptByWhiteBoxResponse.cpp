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

#include <tencentcloud/kms/v20190118/model/EncryptByWhiteBoxResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

EncryptByWhiteBoxResponse::EncryptByWhiteBoxResponse() :
    m_initializationVectorHasBeenSet(false),
    m_cipherTextHasBeenSet(false)
{
}

CoreInternalOutcome EncryptByWhiteBoxResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InitializationVector") && !rsp["InitializationVector"].IsNull())
    {
        if (!rsp["InitializationVector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InitializationVector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initializationVector = string(rsp["InitializationVector"].GetString());
        m_initializationVectorHasBeenSet = true;
    }

    if (rsp.HasMember("CipherText") && !rsp["CipherText"].IsNull())
    {
        if (!rsp["CipherText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CipherText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cipherText = string(rsp["CipherText"].GetString());
        m_cipherTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string EncryptByWhiteBoxResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_initializationVectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitializationVector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_initializationVector.c_str(), allocator).Move(), allocator);
    }

    if (m_cipherTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CipherText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cipherText.c_str(), allocator).Move(), allocator);
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


string EncryptByWhiteBoxResponse::GetInitializationVector() const
{
    return m_initializationVector;
}

bool EncryptByWhiteBoxResponse::InitializationVectorHasBeenSet() const
{
    return m_initializationVectorHasBeenSet;
}

string EncryptByWhiteBoxResponse::GetCipherText() const
{
    return m_cipherText;
}

bool EncryptByWhiteBoxResponse::CipherTextHasBeenSet() const
{
    return m_cipherTextHasBeenSet;
}


