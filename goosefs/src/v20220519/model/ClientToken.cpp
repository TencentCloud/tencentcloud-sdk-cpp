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

#include <tencentcloud/goosefs/v20220519/model/ClientToken.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

ClientToken::ClientToken() :
    m_nodeIpHasBeenSet(false),
    m_localDirectoryHasBeenSet(false),
    m_gooseFSDirectoryHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
}

CoreInternalOutcome ClientToken::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeIp") && !value["NodeIp"].IsNull())
    {
        if (!value["NodeIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientToken.NodeIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIp = string(value["NodeIp"].GetString());
        m_nodeIpHasBeenSet = true;
    }

    if (value.HasMember("LocalDirectory") && !value["LocalDirectory"].IsNull())
    {
        if (!value["LocalDirectory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientToken.LocalDirectory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localDirectory = string(value["LocalDirectory"].GetString());
        m_localDirectoryHasBeenSet = true;
    }

    if (value.HasMember("GooseFSDirectory") && !value["GooseFSDirectory"].IsNull())
    {
        if (!value["GooseFSDirectory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientToken.GooseFSDirectory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gooseFSDirectory = string(value["GooseFSDirectory"].GetString());
        m_gooseFSDirectoryHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientToken.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientToken::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeIp.c_str(), allocator).Move(), allocator);
    }

    if (m_localDirectoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalDirectory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localDirectory.c_str(), allocator).Move(), allocator);
    }

    if (m_gooseFSDirectoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GooseFSDirectory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gooseFSDirectory.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

}


string ClientToken::GetNodeIp() const
{
    return m_nodeIp;
}

void ClientToken::SetNodeIp(const string& _nodeIp)
{
    m_nodeIp = _nodeIp;
    m_nodeIpHasBeenSet = true;
}

bool ClientToken::NodeIpHasBeenSet() const
{
    return m_nodeIpHasBeenSet;
}

string ClientToken::GetLocalDirectory() const
{
    return m_localDirectory;
}

void ClientToken::SetLocalDirectory(const string& _localDirectory)
{
    m_localDirectory = _localDirectory;
    m_localDirectoryHasBeenSet = true;
}

bool ClientToken::LocalDirectoryHasBeenSet() const
{
    return m_localDirectoryHasBeenSet;
}

string ClientToken::GetGooseFSDirectory() const
{
    return m_gooseFSDirectory;
}

void ClientToken::SetGooseFSDirectory(const string& _gooseFSDirectory)
{
    m_gooseFSDirectory = _gooseFSDirectory;
    m_gooseFSDirectoryHasBeenSet = true;
}

bool ClientToken::GooseFSDirectoryHasBeenSet() const
{
    return m_gooseFSDirectoryHasBeenSet;
}

string ClientToken::GetToken() const
{
    return m_token;
}

void ClientToken::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool ClientToken::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

