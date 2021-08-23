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

#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeDBInstanceInfoResponse::DescribeDBInstanceInfoResponse() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_keyRegionHasBeenSet(false),
    m_defaultKmsRegionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBInstanceInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Encryption") && !rsp["Encryption"].IsNull())
    {
        if (!rsp["Encryption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Encryption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryption = string(rsp["Encryption"].GetString());
        m_encryptionHasBeenSet = true;
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

    if (rsp.HasMember("DefaultKmsRegion") && !rsp["DefaultKmsRegion"].IsNull())
    {
        if (!rsp["DefaultKmsRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultKmsRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultKmsRegion = string(rsp["DefaultKmsRegion"].GetString());
        m_defaultKmsRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBInstanceInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryption.c_str(), allocator).Move(), allocator);
    }

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

    if (m_defaultKmsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultKmsRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultKmsRegion.c_str(), allocator).Move(), allocator);
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


string DescribeDBInstanceInfoResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeDBInstanceInfoResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeDBInstanceInfoResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribeDBInstanceInfoResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DescribeDBInstanceInfoResponse::GetEncryption() const
{
    return m_encryption;
}

bool DescribeDBInstanceInfoResponse::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}

string DescribeDBInstanceInfoResponse::GetKeyId() const
{
    return m_keyId;
}

bool DescribeDBInstanceInfoResponse::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string DescribeDBInstanceInfoResponse::GetKeyRegion() const
{
    return m_keyRegion;
}

bool DescribeDBInstanceInfoResponse::KeyRegionHasBeenSet() const
{
    return m_keyRegionHasBeenSet;
}

string DescribeDBInstanceInfoResponse::GetDefaultKmsRegion() const
{
    return m_defaultKmsRegion;
}

bool DescribeDBInstanceInfoResponse::DefaultKmsRegionHasBeenSet() const
{
    return m_defaultKmsRegionHasBeenSet;
}


