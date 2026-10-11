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

#include <tencentcloud/goosefs/v20220519/model/CreatePolicyRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

CreatePolicyRuleRequest::CreatePolicyRuleRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_scanDirHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_executionHasBeenSet(false),
    m_policyRuleSetHasBeenSet(false),
    m_enableManifestHasBeenSet(false),
    m_manifestHasBeenSet(false)
{
}

string CreatePolicyRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_scanDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanDir.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_executionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Execution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_execution.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_policyRuleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyRuleSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policyRuleSet.begin(); itr != m_policyRuleSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_enableManifestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableManifest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableManifest, allocator);
    }

    if (m_manifestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manifest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_manifest.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePolicyRuleRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void CreatePolicyRuleRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool CreatePolicyRuleRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string CreatePolicyRuleRequest::GetScanDir() const
{
    return m_scanDir;
}

void CreatePolicyRuleRequest::SetScanDir(const string& _scanDir)
{
    m_scanDir = _scanDir;
    m_scanDirHasBeenSet = true;
}

bool CreatePolicyRuleRequest::ScanDirHasBeenSet() const
{
    return m_scanDirHasBeenSet;
}

string CreatePolicyRuleRequest::GetName() const
{
    return m_name;
}

void CreatePolicyRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreatePolicyRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

ExecutionPlan CreatePolicyRuleRequest::GetExecution() const
{
    return m_execution;
}

void CreatePolicyRuleRequest::SetExecution(const ExecutionPlan& _execution)
{
    m_execution = _execution;
    m_executionHasBeenSet = true;
}

bool CreatePolicyRuleRequest::ExecutionHasBeenSet() const
{
    return m_executionHasBeenSet;
}

vector<PolicyRuleOperator> CreatePolicyRuleRequest::GetPolicyRuleSet() const
{
    return m_policyRuleSet;
}

void CreatePolicyRuleRequest::SetPolicyRuleSet(const vector<PolicyRuleOperator>& _policyRuleSet)
{
    m_policyRuleSet = _policyRuleSet;
    m_policyRuleSetHasBeenSet = true;
}

bool CreatePolicyRuleRequest::PolicyRuleSetHasBeenSet() const
{
    return m_policyRuleSetHasBeenSet;
}

bool CreatePolicyRuleRequest::GetEnableManifest() const
{
    return m_enableManifest;
}

void CreatePolicyRuleRequest::SetEnableManifest(const bool& _enableManifest)
{
    m_enableManifest = _enableManifest;
    m_enableManifestHasBeenSet = true;
}

bool CreatePolicyRuleRequest::EnableManifestHasBeenSet() const
{
    return m_enableManifestHasBeenSet;
}

ManifestAttr CreatePolicyRuleRequest::GetManifest() const
{
    return m_manifest;
}

void CreatePolicyRuleRequest::SetManifest(const ManifestAttr& _manifest)
{
    m_manifest = _manifest;
    m_manifestHasBeenSet = true;
}

bool CreatePolicyRuleRequest::ManifestHasBeenSet() const
{
    return m_manifestHasBeenSet;
}


