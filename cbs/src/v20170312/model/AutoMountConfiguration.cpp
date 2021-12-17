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

#include <tencentcloud/cbs/v20170312/model/AutoMountConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

AutoMountConfiguration::AutoMountConfiguration() :
    m_instanceIdHasBeenSet(false),
    m_mountPointHasBeenSet(false),
    m_fileSystemTypeHasBeenSet(false)
{
}

CoreInternalOutcome AutoMountConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoMountConfiguration.InstanceId` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceId.push_back((*itr).GetString());
        }
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("MountPoint") && !value["MountPoint"].IsNull())
    {
        if (!value["MountPoint"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoMountConfiguration.MountPoint` is not array type"));

        const rapidjson::Value &tmpValue = value["MountPoint"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mountPoint.push_back((*itr).GetString());
        }
        m_mountPointHasBeenSet = true;
    }

    if (value.HasMember("FileSystemType") && !value["FileSystemType"].IsNull())
    {
        if (!value["FileSystemType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoMountConfiguration.FileSystemType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemType = string(value["FileSystemType"].GetString());
        m_fileSystemTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoMountConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceId.begin(); itr != m_instanceId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mountPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mountPoint.begin(); itr != m_mountPoint.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileSystemTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemType.c_str(), allocator).Move(), allocator);
    }

}


vector<string> AutoMountConfiguration::GetInstanceId() const
{
    return m_instanceId;
}

void AutoMountConfiguration::SetInstanceId(const vector<string>& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AutoMountConfiguration::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> AutoMountConfiguration::GetMountPoint() const
{
    return m_mountPoint;
}

void AutoMountConfiguration::SetMountPoint(const vector<string>& _mountPoint)
{
    m_mountPoint = _mountPoint;
    m_mountPointHasBeenSet = true;
}

bool AutoMountConfiguration::MountPointHasBeenSet() const
{
    return m_mountPointHasBeenSet;
}

string AutoMountConfiguration::GetFileSystemType() const
{
    return m_fileSystemType;
}

void AutoMountConfiguration::SetFileSystemType(const string& _fileSystemType)
{
    m_fileSystemType = _fileSystemType;
    m_fileSystemTypeHasBeenSet = true;
}

bool AutoMountConfiguration::FileSystemTypeHasBeenSet() const
{
    return m_fileSystemTypeHasBeenSet;
}

