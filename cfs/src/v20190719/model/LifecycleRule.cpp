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
    m_fileMinSizeHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_expireThresholdHasBeenSet(false),
    m_targetThresholdHasBeenSet(false),
    m_isOverwriteHasBeenSet(false)
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

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleRule.PolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = string(value["PolicyType"].GetString());
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("ExpireThreshold") && !value["ExpireThreshold"].IsNull())
    {
        if (!value["ExpireThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleRule.ExpireThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireThreshold = value["ExpireThreshold"].GetUint64();
        m_expireThresholdHasBeenSet = true;
    }

    if (value.HasMember("TargetThreshold") && !value["TargetThreshold"].IsNull())
    {
        if (!value["TargetThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleRule.TargetThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetThreshold = value["TargetThreshold"].GetUint64();
        m_targetThresholdHasBeenSet = true;
    }

    if (value.HasMember("IsOverwrite") && !value["IsOverwrite"].IsNull())
    {
        if (!value["IsOverwrite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleRule.IsOverwrite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOverwrite = value["IsOverwrite"].GetBool();
        m_isOverwriteHasBeenSet = true;
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

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_expireThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireThreshold, allocator);
    }

    if (m_targetThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetThreshold, allocator);
    }

    if (m_isOverwriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOverwrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOverwrite, allocator);
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

string LifecycleRule::GetPolicyType() const
{
    return m_policyType;
}

void LifecycleRule::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool LifecycleRule::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

uint64_t LifecycleRule::GetExpireThreshold() const
{
    return m_expireThreshold;
}

void LifecycleRule::SetExpireThreshold(const uint64_t& _expireThreshold)
{
    m_expireThreshold = _expireThreshold;
    m_expireThresholdHasBeenSet = true;
}

bool LifecycleRule::ExpireThresholdHasBeenSet() const
{
    return m_expireThresholdHasBeenSet;
}

uint64_t LifecycleRule::GetTargetThreshold() const
{
    return m_targetThreshold;
}

void LifecycleRule::SetTargetThreshold(const uint64_t& _targetThreshold)
{
    m_targetThreshold = _targetThreshold;
    m_targetThresholdHasBeenSet = true;
}

bool LifecycleRule::TargetThresholdHasBeenSet() const
{
    return m_targetThresholdHasBeenSet;
}

bool LifecycleRule::GetIsOverwrite() const
{
    return m_isOverwrite;
}

void LifecycleRule::SetIsOverwrite(const bool& _isOverwrite)
{
    m_isOverwrite = _isOverwrite;
    m_isOverwriteHasBeenSet = true;
}

bool LifecycleRule::IsOverwriteHasBeenSet() const
{
    return m_isOverwriteHasBeenSet;
}

