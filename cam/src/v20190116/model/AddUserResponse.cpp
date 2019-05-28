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

#include <tencentcloud/cam/v20190116/model/AddUserResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

AddUserResponse::AddUserResponse() :
    m_uinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_secretIdHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_uidHasBeenSet(false)
{
}

CoreInternalOutcome AddUserResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = rsp["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Password") && !rsp["Password"].IsNull())
    {
        if (!rsp["Password"].IsString())
        {
            return CoreInternalOutcome(Error("response `Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(rsp["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (rsp.HasMember("SecretId") && !rsp["SecretId"].IsNull())
    {
        if (!rsp["SecretId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretId = string(rsp["SecretId"].GetString());
        m_secretIdHasBeenSet = true;
    }

    if (rsp.HasMember("SecretKey") && !rsp["SecretKey"].IsNull())
    {
        if (!rsp["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(rsp["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (rsp.HasMember("Uid") && !rsp["Uid"].IsNull())
    {
        if (!rsp["Uid"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Uid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uid = rsp["Uid"].GetUint64();
        m_uidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t AddUserResponse::GetUin() const
{
    return m_uin;
}

bool AddUserResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AddUserResponse::GetName() const
{
    return m_name;
}

bool AddUserResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AddUserResponse::GetPassword() const
{
    return m_password;
}

bool AddUserResponse::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string AddUserResponse::GetSecretId() const
{
    return m_secretId;
}

bool AddUserResponse::SecretIdHasBeenSet() const
{
    return m_secretIdHasBeenSet;
}

string AddUserResponse::GetSecretKey() const
{
    return m_secretKey;
}

bool AddUserResponse::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

uint64_t AddUserResponse::GetUid() const
{
    return m_uid;
}

bool AddUserResponse::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}


