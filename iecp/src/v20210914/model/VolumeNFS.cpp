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

#include <tencentcloud/iecp/v20210914/model/VolumeNFS.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

VolumeNFS::VolumeNFS() :
    m_serverHasBeenSet(false),
    m_serverPathHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

CoreInternalOutcome VolumeNFS::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeNFS.Server` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_server = string(value["Server"].GetString());
        m_serverHasBeenSet = true;
    }

    if (value.HasMember("ServerPath") && !value["ServerPath"].IsNull())
    {
        if (!value["ServerPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeNFS.ServerPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverPath = string(value["ServerPath"].GetString());
        m_serverPathHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeNFS.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolumeNFS::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_server.c_str(), allocator).Move(), allocator);
    }

    if (m_serverPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverPath.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

}


string VolumeNFS::GetServer() const
{
    return m_server;
}

void VolumeNFS::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool VolumeNFS::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

string VolumeNFS::GetServerPath() const
{
    return m_serverPath;
}

void VolumeNFS::SetServerPath(const string& _serverPath)
{
    m_serverPath = _serverPath;
    m_serverPathHasBeenSet = true;
}

bool VolumeNFS::ServerPathHasBeenSet() const
{
    return m_serverPathHasBeenSet;
}

string VolumeNFS::GetPath() const
{
    return m_path;
}

void VolumeNFS::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool VolumeNFS::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

