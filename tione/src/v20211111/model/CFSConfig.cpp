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

#include <tencentcloud/tione/v20211111/model/CFSConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

CFSConfig::CFSConfig() :
    m_idHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_mountTypeHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
}

CoreInternalOutcome CFSConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFSConfig.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFSConfig.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("MountType") && !value["MountType"].IsNull())
    {
        if (!value["MountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFSConfig.MountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountType = string(value["MountType"].GetString());
        m_mountTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFSConfig.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CFSConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_mountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountType.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

}


string CFSConfig::GetId() const
{
    return m_id;
}

void CFSConfig::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CFSConfig::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CFSConfig::GetPath() const
{
    return m_path;
}

void CFSConfig::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CFSConfig::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string CFSConfig::GetMountType() const
{
    return m_mountType;
}

void CFSConfig::SetMountType(const string& _mountType)
{
    m_mountType = _mountType;
    m_mountTypeHasBeenSet = true;
}

bool CFSConfig::MountTypeHasBeenSet() const
{
    return m_mountTypeHasBeenSet;
}

string CFSConfig::GetProtocol() const
{
    return m_protocol;
}

void CFSConfig::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CFSConfig::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

