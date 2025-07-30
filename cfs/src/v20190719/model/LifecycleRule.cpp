/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cfs/v20190719/model/LifecycleRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

LifecycleRule::LifecycleRule() :
    m_storageTypeHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_fileMaxSizeHasBeenSet(false),
    m_fileMinSizeHasBeenSet(false)
{
}

CoreInternalOutcome LifecycleRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleRule.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleRule.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleRule.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleRule.Interval` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interval = string(value["Interval"].GetString());
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("FileMaxSize") && !value["FileMaxSize"].IsNull())
    {
        if (!value["FileMaxSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleRule.FileMaxSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMaxSize = string(value["FileMaxSize"].GetString());
        m_fileMaxSizeHasBeenSet = true;
    }

    if (value.HasMember("FileMinSize") && !value["FileMinSize"].IsNull())
    {
        if (!value["FileMinSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleRule.FileMinSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMinSize = string(value["FileMinSize"].GetString());
        m_fileMinSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LifecycleRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interval.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMaxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMaxSize.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMinSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMinSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMinSize.c_str(), allocator).Move(), allocator);
    }

}


string LifecycleRule::GetStorageType() const
{
    return m_storageType;
}

void LifecycleRule::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool LifecycleRule::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string LifecycleRule::GetFileType() const
{
    return m_fileType;
}

void LifecycleRule::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool LifecycleRule::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string LifecycleRule::GetAction() const
{
    return m_action;
}

void LifecycleRule::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool LifecycleRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string LifecycleRule::GetInterval() const
{
    return m_interval;
}

void LifecycleRule::SetInterval(const string& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool LifecycleRule::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

string LifecycleRule::GetFileMaxSize() const
{
    return m_fileMaxSize;
}

void LifecycleRule::SetFileMaxSize(const string& _fileMaxSize)
{
    m_fileMaxSize = _fileMaxSize;
    m_fileMaxSizeHasBeenSet = true;
}

bool LifecycleRule::FileMaxSizeHasBeenSet() const
{
    return m_fileMaxSizeHasBeenSet;
}

string LifecycleRule::GetFileMinSize() const
{
    return m_fileMinSize;
}

void LifecycleRule::SetFileMinSize(const string& _fileMinSize)
{
    m_fileMinSize = _fileMinSize;
    m_fileMinSizeHasBeenSet = true;
}

bool LifecycleRule::FileMinSizeHasBeenSet() const
{
    return m_fileMinSizeHasBeenSet;
}

