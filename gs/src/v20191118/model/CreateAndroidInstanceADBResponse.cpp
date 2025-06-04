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

#include <tencentcloud/gs/v20191118/model/CreateAndroidInstanceADBResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

CreateAndroidInstanceADBResponse::CreateAndroidInstanceADBResponse() :
    m_privateKeyHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_connectCommandHasBeenSet(false)
{
}

CoreInternalOutcome CreateAndroidInstanceADBResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PrivateKey") && !rsp["PrivateKey"].IsNull())
    {
        if (!rsp["PrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateKey = string(rsp["PrivateKey"].GetString());
        m_privateKeyHasBeenSet = true;
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

    if (rsp.HasMember("HostName") && !rsp["HostName"].IsNull())
    {
        if (!rsp["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(rsp["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (rsp.HasMember("Port") && !rsp["Port"].IsNull())
    {
        if (!rsp["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = rsp["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (rsp.HasMember("ConnectCommand") && !rsp["ConnectCommand"].IsNull())
    {
        if (!rsp["ConnectCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectCommand = string(rsp["ConnectCommand"].GetString());
        m_connectCommandHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateAndroidInstanceADBResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_privateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_connectCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectCommand.c_str(), allocator).Move(), allocator);
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


string CreateAndroidInstanceADBResponse::GetPrivateKey() const
{
    return m_privateKey;
}

bool CreateAndroidInstanceADBResponse::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

string CreateAndroidInstanceADBResponse::GetUserName() const
{
    return m_userName;
}

bool CreateAndroidInstanceADBResponse::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreateAndroidInstanceADBResponse::GetHostName() const
{
    return m_hostName;
}

bool CreateAndroidInstanceADBResponse::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

int64_t CreateAndroidInstanceADBResponse::GetPort() const
{
    return m_port;
}

bool CreateAndroidInstanceADBResponse::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string CreateAndroidInstanceADBResponse::GetConnectCommand() const
{
    return m_connectCommand;
}

bool CreateAndroidInstanceADBResponse::ConnectCommandHasBeenSet() const
{
    return m_connectCommandHasBeenSet;
}


