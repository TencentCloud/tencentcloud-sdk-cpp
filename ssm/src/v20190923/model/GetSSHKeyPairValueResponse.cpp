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

#include <tencentcloud/ssm/v20190923/model/GetSSHKeyPairValueResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

GetSSHKeyPairValueResponse::GetSSHKeyPairValueResponse() :
    m_sSHKeyIDHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_projectIDHasBeenSet(false),
    m_sSHKeyDescriptionHasBeenSet(false),
    m_sSHKeyNameHasBeenSet(false)
{
}

CoreInternalOutcome GetSSHKeyPairValueResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SSHKeyID") && !rsp["SSHKeyID"].IsNull())
    {
        if (!rsp["SSHKeyID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSHKeyID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSHKeyID = string(rsp["SSHKeyID"].GetString());
        m_sSHKeyIDHasBeenSet = true;
    }

    if (rsp.HasMember("PublicKey") && !rsp["PublicKey"].IsNull())
    {
        if (!rsp["PublicKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicKey = string(rsp["PublicKey"].GetString());
        m_publicKeyHasBeenSet = true;
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

    if (rsp.HasMember("ProjectID") && !rsp["ProjectID"].IsNull())
    {
        if (!rsp["ProjectID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectID = rsp["ProjectID"].GetInt64();
        m_projectIDHasBeenSet = true;
    }

    if (rsp.HasMember("SSHKeyDescription") && !rsp["SSHKeyDescription"].IsNull())
    {
        if (!rsp["SSHKeyDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSHKeyDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSHKeyDescription = string(rsp["SSHKeyDescription"].GetString());
        m_sSHKeyDescriptionHasBeenSet = true;
    }

    if (rsp.HasMember("SSHKeyName") && !rsp["SSHKeyName"].IsNull())
    {
        if (!rsp["SSHKeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSHKeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSHKeyName = string(rsp["SSHKeyName"].GetString());
        m_sSHKeyNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetSSHKeyPairValueResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sSHKeyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSHKeyID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSHKeyID.c_str(), allocator).Move(), allocator);
    }

    if (m_publicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicKey.c_str(), allocator).Move(), allocator);
    }

    if (m_privateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectID, allocator);
    }

    if (m_sSHKeyDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSHKeyDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSHKeyDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_sSHKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSHKeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSHKeyName.c_str(), allocator).Move(), allocator);
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


string GetSSHKeyPairValueResponse::GetSSHKeyID() const
{
    return m_sSHKeyID;
}

bool GetSSHKeyPairValueResponse::SSHKeyIDHasBeenSet() const
{
    return m_sSHKeyIDHasBeenSet;
}

string GetSSHKeyPairValueResponse::GetPublicKey() const
{
    return m_publicKey;
}

bool GetSSHKeyPairValueResponse::PublicKeyHasBeenSet() const
{
    return m_publicKeyHasBeenSet;
}

string GetSSHKeyPairValueResponse::GetPrivateKey() const
{
    return m_privateKey;
}

bool GetSSHKeyPairValueResponse::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

int64_t GetSSHKeyPairValueResponse::GetProjectID() const
{
    return m_projectID;
}

bool GetSSHKeyPairValueResponse::ProjectIDHasBeenSet() const
{
    return m_projectIDHasBeenSet;
}

string GetSSHKeyPairValueResponse::GetSSHKeyDescription() const
{
    return m_sSHKeyDescription;
}

bool GetSSHKeyPairValueResponse::SSHKeyDescriptionHasBeenSet() const
{
    return m_sSHKeyDescriptionHasBeenSet;
}

string GetSSHKeyPairValueResponse::GetSSHKeyName() const
{
    return m_sSHKeyName;
}

bool GetSSHKeyPairValueResponse::SSHKeyNameHasBeenSet() const
{
    return m_sSHKeyNameHasBeenSet;
}


