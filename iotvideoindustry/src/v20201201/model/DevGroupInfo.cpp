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

#include <tencentcloud/iotvideoindustry/v20201201/model/DevGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DevGroupInfo::DevGroupInfo() :
    m_deviceIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupPathHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome DevGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevGroupInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevGroupInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupPath") && !value["GroupPath"].IsNull())
    {
        if (!value["GroupPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevGroupInfo.GroupPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupPath = string(value["GroupPath"].GetString());
        m_groupPathHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevGroupInfo.ParentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = string(value["ParentId"].GetString());
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevGroupInfo.Error` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_error = string(value["Error"].GetString());
        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DevGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupPath.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_error.c_str(), allocator).Move(), allocator);
    }

}


string DevGroupInfo::GetDeviceId() const
{
    return m_deviceId;
}

void DevGroupInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DevGroupInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string DevGroupInfo::GetGroupId() const
{
    return m_groupId;
}

void DevGroupInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DevGroupInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DevGroupInfo::GetGroupPath() const
{
    return m_groupPath;
}

void DevGroupInfo::SetGroupPath(const string& _groupPath)
{
    m_groupPath = _groupPath;
    m_groupPathHasBeenSet = true;
}

bool DevGroupInfo::GroupPathHasBeenSet() const
{
    return m_groupPathHasBeenSet;
}

string DevGroupInfo::GetParentId() const
{
    return m_parentId;
}

void DevGroupInfo::SetParentId(const string& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool DevGroupInfo::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string DevGroupInfo::GetError() const
{
    return m_error;
}

void DevGroupInfo::SetError(const string& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool DevGroupInfo::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

