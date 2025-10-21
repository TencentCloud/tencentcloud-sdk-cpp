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

#include <tencentcloud/cfs/v20190719/model/CheckResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

CheckResult::CheckResult() :
    m_lifecyclePolicyIDHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_lifecycleRulesHasBeenSet(false),
    m_targetPathHasBeenSet(false)
{
}

CoreInternalOutcome CheckResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LifecyclePolicyID") && !value["LifecyclePolicyID"].IsNull())
    {
        if (!value["LifecyclePolicyID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckResult.LifecyclePolicyID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifecyclePolicyID = string(value["LifecyclePolicyID"].GetString());
        m_lifecyclePolicyIDHasBeenSet = true;
    }

    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckResult.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckResult.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("LifecycleRules") && !value["LifecycleRules"].IsNull())
    {
        if (!value["LifecycleRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CheckResult.LifecycleRules` is not array type"));

        const rapidjson::Value &tmpValue = value["LifecycleRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LifecycleRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lifecycleRules.push_back(item);
        }
        m_lifecycleRulesHasBeenSet = true;
    }

    if (value.HasMember("TargetPath") && !value["TargetPath"].IsNull())
    {
        if (!value["TargetPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckResult.TargetPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetPath = string(value["TargetPath"].GetString());
        m_targetPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lifecyclePolicyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecyclePolicyID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifecyclePolicyID.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lifecycleRules.begin(); itr != m_lifecycleRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_targetPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetPath.c_str(), allocator).Move(), allocator);
    }

}


string CheckResult::GetLifecyclePolicyID() const
{
    return m_lifecyclePolicyID;
}

void CheckResult::SetLifecyclePolicyID(const string& _lifecyclePolicyID)
{
    m_lifecyclePolicyID = _lifecyclePolicyID;
    m_lifecyclePolicyIDHasBeenSet = true;
}

bool CheckResult::LifecyclePolicyIDHasBeenSet() const
{
    return m_lifecyclePolicyIDHasBeenSet;
}

string CheckResult::GetFileSystemId() const
{
    return m_fileSystemId;
}

void CheckResult::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool CheckResult::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string CheckResult::GetPath() const
{
    return m_path;
}

void CheckResult::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CheckResult::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

vector<LifecycleRule> CheckResult::GetLifecycleRules() const
{
    return m_lifecycleRules;
}

void CheckResult::SetLifecycleRules(const vector<LifecycleRule>& _lifecycleRules)
{
    m_lifecycleRules = _lifecycleRules;
    m_lifecycleRulesHasBeenSet = true;
}

bool CheckResult::LifecycleRulesHasBeenSet() const
{
    return m_lifecycleRulesHasBeenSet;
}

string CheckResult::GetTargetPath() const
{
    return m_targetPath;
}

void CheckResult::SetTargetPath(const string& _targetPath)
{
    m_targetPath = _targetPath;
    m_targetPathHasBeenSet = true;
}

bool CheckResult::TargetPathHasBeenSet() const
{
    return m_targetPathHasBeenSet;
}

