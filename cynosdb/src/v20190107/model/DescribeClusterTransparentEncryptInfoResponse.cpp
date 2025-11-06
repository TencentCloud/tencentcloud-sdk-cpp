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

#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterTransparentEncryptInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeClusterTransparentEncryptInfoResponse::DescribeClusterTransparentEncryptInfoResponse() :
    m_keyIdHasBeenSet(false),
    m_keyRegionHasBeenSet(false),
    m_keyTypeHasBeenSet(false),
    m_isOpenGlobalEncryptionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterTransparentEncryptInfoResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("KeyRegion") && !rsp["KeyRegion"].IsNull())
    {
        if (!rsp["KeyRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyRegion = string(rsp["KeyRegion"].GetString());
        m_keyRegionHasBeenSet = true;
    }

    if (rsp.HasMember("KeyType") && !rsp["KeyType"].IsNull())
    {
        if (!rsp["KeyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyType = string(rsp["KeyType"].GetString());
        m_keyTypeHasBeenSet = true;
    }

    if (rsp.HasMember("IsOpenGlobalEncryption") && !rsp["IsOpenGlobalEncryption"].IsNull())
    {
        if (!rsp["IsOpenGlobalEncryption"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsOpenGlobalEncryption` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOpenGlobalEncryption = rsp["IsOpenGlobalEncryption"].GetBool();
        m_isOpenGlobalEncryptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterTransparentEncryptInfoResponse::ToJsonString() const
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

    if (m_keyRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_keyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyType.c_str(), allocator).Move(), allocator);
    }

    if (m_isOpenGlobalEncryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOpenGlobalEncryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOpenGlobalEncryption, allocator);
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


string DescribeClusterTransparentEncryptInfoResponse::GetKeyId() const
{
    return m_keyId;
}

bool DescribeClusterTransparentEncryptInfoResponse::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string DescribeClusterTransparentEncryptInfoResponse::GetKeyRegion() const
{
    return m_keyRegion;
}

bool DescribeClusterTransparentEncryptInfoResponse::KeyRegionHasBeenSet() const
{
    return m_keyRegionHasBeenSet;
}

string DescribeClusterTransparentEncryptInfoResponse::GetKeyType() const
{
    return m_keyType;
}

bool DescribeClusterTransparentEncryptInfoResponse::KeyTypeHasBeenSet() const
{
    return m_keyTypeHasBeenSet;
}

bool DescribeClusterTransparentEncryptInfoResponse::GetIsOpenGlobalEncryption() const
{
    return m_isOpenGlobalEncryption;
}

bool DescribeClusterTransparentEncryptInfoResponse::IsOpenGlobalEncryptionHasBeenSet() const
{
    return m_isOpenGlobalEncryptionHasBeenSet;
}


