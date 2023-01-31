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

#include <tencentcloud/mariadb/v20170312/model/DescribeDBEncryptAttributesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DescribeDBEncryptAttributesResponse::DescribeDBEncryptAttributesResponse() :
    m_encryptStatusHasBeenSet(false),
    m_cipherTextHasBeenSet(false),
    m_expireDateHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBEncryptAttributesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EncryptStatus") && !rsp["EncryptStatus"].IsNull())
    {
        if (!rsp["EncryptStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptStatus = rsp["EncryptStatus"].GetInt64();
        m_encryptStatusHasBeenSet = true;
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

    if (rsp.HasMember("ExpireDate") && !rsp["ExpireDate"].IsNull())
    {
        if (!rsp["ExpireDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireDate = string(rsp["ExpireDate"].GetString());
        m_expireDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBEncryptAttributesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_encryptStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptStatus, allocator);
    }

    if (m_cipherTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CipherText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cipherText.c_str(), allocator).Move(), allocator);
    }

    if (m_expireDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireDate.c_str(), allocator).Move(), allocator);
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


int64_t DescribeDBEncryptAttributesResponse::GetEncryptStatus() const
{
    return m_encryptStatus;
}

bool DescribeDBEncryptAttributesResponse::EncryptStatusHasBeenSet() const
{
    return m_encryptStatusHasBeenSet;
}

string DescribeDBEncryptAttributesResponse::GetCipherText() const
{
    return m_cipherText;
}

bool DescribeDBEncryptAttributesResponse::CipherTextHasBeenSet() const
{
    return m_cipherTextHasBeenSet;
}

string DescribeDBEncryptAttributesResponse::GetExpireDate() const
{
    return m_expireDate;
}

bool DescribeDBEncryptAttributesResponse::ExpireDateHasBeenSet() const
{
    return m_expireDateHasBeenSet;
}


