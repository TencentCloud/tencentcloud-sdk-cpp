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
using namespace rapidjson;
using namespace std;

DescribeDBInstanceInfoResponse::DescribeDBInstanceInfoResponse() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_keyRegionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBInstanceInfoResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Encryption") && !rsp["Encryption"].IsNull())
    {
        if (!rsp["Encryption"].IsString())
        {
            return CoreInternalOutcome(Error("response `Encryption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryption = string(rsp["Encryption"].GetString());
        m_encryptionHasBeenSet = true;
    }

    if (rsp.HasMember("KeyId") && !rsp["KeyId"].IsNull())
    {
        if (!rsp["KeyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(rsp["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (rsp.HasMember("KeyRegion") && !rsp["KeyRegion"].IsNull())
    {
        if (!rsp["KeyRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `KeyRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyRegion = string(rsp["KeyRegion"].GetString());
        m_keyRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


