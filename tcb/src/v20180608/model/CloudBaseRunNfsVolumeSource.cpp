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

#include <tencentcloud/tcb/v20180608/model/CloudBaseRunNfsVolumeSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace rapidjson;
using namespace std;

CloudBaseRunNfsVolumeSource::CloudBaseRunNfsVolumeSource() :
    m_serverHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_readOnlyHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseRunNfsVolumeSource::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseRunNfsVolumeSource.Server` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_server = string(value["Server"].GetString());
        m_serverHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseRunNfsVolumeSource.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("ReadOnly") && !value["ReadOnly"].IsNull())
    {
        if (!value["ReadOnly"].IsBool())
        {
            return CoreInternalOutcome(Error("response `CloudBaseRunNfsVolumeSource.ReadOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_readOnly = value["ReadOnly"].GetBool();
        m_readOnlyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseRunNfsVolumeSource::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_serverHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_server.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReadOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnly, allocator);
    }

}


string CloudBaseRunNfsVolumeSource::GetServer() const
{
    return m_server;
}

void CloudBaseRunNfsVolumeSource::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool CloudBaseRunNfsVolumeSource::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

string CloudBaseRunNfsVolumeSource::GetPath() const
{
    return m_path;
}

void CloudBaseRunNfsVolumeSource::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CloudBaseRunNfsVolumeSource::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

bool CloudBaseRunNfsVolumeSource::GetReadOnly() const
{
    return m_readOnly;
}

void CloudBaseRunNfsVolumeSource::SetReadOnly(const bool& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool CloudBaseRunNfsVolumeSource::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}

