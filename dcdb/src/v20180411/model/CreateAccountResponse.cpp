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

#include <tencentcloud/dcdb/v20180411/model/CreateAccountResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

CreateAccountResponse::CreateAccountResponse() :
    m_instanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_readOnlyHasBeenSet(false)
{
}

CoreInternalOutcome CreateAccountResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("UserName") && !rsp["UserName"].IsNull())
    {
        if (!rsp["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(rsp["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (rsp.HasMember("Host") && !rsp["Host"].IsNull())
    {
        if (!rsp["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(rsp["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (rsp.HasMember("ReadOnly") && !rsp["ReadOnly"].IsNull())
    {
        if (!rsp["ReadOnly"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readOnly = rsp["ReadOnly"].GetInt64();
        m_readOnlyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateAccountResponse::ToJsonString() const
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

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnly, allocator);
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


string CreateAccountResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool CreateAccountResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateAccountResponse::GetUserName() const
{
    return m_userName;
}

bool CreateAccountResponse::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreateAccountResponse::GetHost() const
{
    return m_host;
}

bool CreateAccountResponse::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

int64_t CreateAccountResponse::GetReadOnly() const
{
    return m_readOnly;
}

bool CreateAccountResponse::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}


