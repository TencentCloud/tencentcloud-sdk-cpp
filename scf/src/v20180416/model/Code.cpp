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

#include <tencentcloud/scf/v20180416/model/Code.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

Code::Code() :
    m_cosBucketNameHasBeenSet(false),
    m_cosObjectNameHasBeenSet(false),
    m_zipFileHasBeenSet(false),
    m_cosBucketRegionHasBeenSet(false),
    m_demoIdHasBeenSet(false),
    m_tempCosObjectNameHasBeenSet(false),
    m_gitUrlHasBeenSet(false),
    m_gitUserNameHasBeenSet(false),
    m_gitPasswordHasBeenSet(false),
    m_gitPasswordSecretHasBeenSet(false),
    m_gitBranchHasBeenSet(false),
    m_gitDirectoryHasBeenSet(false),
    m_gitCommitIdHasBeenSet(false),
    m_gitUserNameSecretHasBeenSet(false)
{
}

CoreInternalOutcome Code::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CosBucketName") && !value["CosBucketName"].IsNull())
    {
        if (!value["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(value["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }

    if (value.HasMember("CosObjectName") && !value["CosObjectName"].IsNull())
    {
        if (!value["CosObjectName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.CosObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosObjectName = string(value["CosObjectName"].GetString());
        m_cosObjectNameHasBeenSet = true;
    }

    if (value.HasMember("ZipFile") && !value["ZipFile"].IsNull())
    {
        if (!value["ZipFile"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.ZipFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zipFile = string(value["ZipFile"].GetString());
        m_zipFileHasBeenSet = true;
    }

    if (value.HasMember("CosBucketRegion") && !value["CosBucketRegion"].IsNull())
    {
        if (!value["CosBucketRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.CosBucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketRegion = string(value["CosBucketRegion"].GetString());
        m_cosBucketRegionHasBeenSet = true;
    }

    if (value.HasMember("DemoId") && !value["DemoId"].IsNull())
    {
        if (!value["DemoId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.DemoId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_demoId = string(value["DemoId"].GetString());
        m_demoIdHasBeenSet = true;
    }

    if (value.HasMember("TempCosObjectName") && !value["TempCosObjectName"].IsNull())
    {
        if (!value["TempCosObjectName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.TempCosObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tempCosObjectName = string(value["TempCosObjectName"].GetString());
        m_tempCosObjectNameHasBeenSet = true;
    }

    if (value.HasMember("GitUrl") && !value["GitUrl"].IsNull())
    {
        if (!value["GitUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.GitUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitUrl = string(value["GitUrl"].GetString());
        m_gitUrlHasBeenSet = true;
    }

    if (value.HasMember("GitUserName") && !value["GitUserName"].IsNull())
    {
        if (!value["GitUserName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.GitUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitUserName = string(value["GitUserName"].GetString());
        m_gitUserNameHasBeenSet = true;
    }

    if (value.HasMember("GitPassword") && !value["GitPassword"].IsNull())
    {
        if (!value["GitPassword"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.GitPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitPassword = string(value["GitPassword"].GetString());
        m_gitPasswordHasBeenSet = true;
    }

    if (value.HasMember("GitPasswordSecret") && !value["GitPasswordSecret"].IsNull())
    {
        if (!value["GitPasswordSecret"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.GitPasswordSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitPasswordSecret = string(value["GitPasswordSecret"].GetString());
        m_gitPasswordSecretHasBeenSet = true;
    }

    if (value.HasMember("GitBranch") && !value["GitBranch"].IsNull())
    {
        if (!value["GitBranch"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.GitBranch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitBranch = string(value["GitBranch"].GetString());
        m_gitBranchHasBeenSet = true;
    }

    if (value.HasMember("GitDirectory") && !value["GitDirectory"].IsNull())
    {
        if (!value["GitDirectory"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.GitDirectory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitDirectory = string(value["GitDirectory"].GetString());
        m_gitDirectoryHasBeenSet = true;
    }

    if (value.HasMember("GitCommitId") && !value["GitCommitId"].IsNull())
    {
        if (!value["GitCommitId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.GitCommitId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitCommitId = string(value["GitCommitId"].GetString());
        m_gitCommitIdHasBeenSet = true;
    }

    if (value.HasMember("GitUserNameSecret") && !value["GitUserNameSecret"].IsNull())
    {
        if (!value["GitUserNameSecret"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.GitUserNameSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitUserNameSecret = string(value["GitUserNameSecret"].GetString());
        m_gitUserNameSecretHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Code::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_cosBucketNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosObjectNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cosObjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_zipFileHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZipFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zipFile.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosBucketRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cosBucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_demoIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DemoId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_demoId.c_str(), allocator).Move(), allocator);
    }

    if (m_tempCosObjectNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TempCosObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tempCosObjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_gitUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GitUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_gitUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_gitUserNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GitUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_gitUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_gitPasswordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GitPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_gitPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_gitPasswordSecretHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GitPasswordSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_gitPasswordSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_gitBranchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GitBranch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_gitBranch.c_str(), allocator).Move(), allocator);
    }

    if (m_gitDirectoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GitDirectory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_gitDirectory.c_str(), allocator).Move(), allocator);
    }

    if (m_gitCommitIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GitCommitId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_gitCommitId.c_str(), allocator).Move(), allocator);
    }

    if (m_gitUserNameSecretHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GitUserNameSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_gitUserNameSecret.c_str(), allocator).Move(), allocator);
    }

}


string Code::GetCosBucketName() const
{
    return m_cosBucketName;
}

void Code::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool Code::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

string Code::GetCosObjectName() const
{
    return m_cosObjectName;
}

void Code::SetCosObjectName(const string& _cosObjectName)
{
    m_cosObjectName = _cosObjectName;
    m_cosObjectNameHasBeenSet = true;
}

bool Code::CosObjectNameHasBeenSet() const
{
    return m_cosObjectNameHasBeenSet;
}

string Code::GetZipFile() const
{
    return m_zipFile;
}

void Code::SetZipFile(const string& _zipFile)
{
    m_zipFile = _zipFile;
    m_zipFileHasBeenSet = true;
}

bool Code::ZipFileHasBeenSet() const
{
    return m_zipFileHasBeenSet;
}

string Code::GetCosBucketRegion() const
{
    return m_cosBucketRegion;
}

void Code::SetCosBucketRegion(const string& _cosBucketRegion)
{
    m_cosBucketRegion = _cosBucketRegion;
    m_cosBucketRegionHasBeenSet = true;
}

bool Code::CosBucketRegionHasBeenSet() const
{
    return m_cosBucketRegionHasBeenSet;
}

string Code::GetDemoId() const
{
    return m_demoId;
}

void Code::SetDemoId(const string& _demoId)
{
    m_demoId = _demoId;
    m_demoIdHasBeenSet = true;
}

bool Code::DemoIdHasBeenSet() const
{
    return m_demoIdHasBeenSet;
}

string Code::GetTempCosObjectName() const
{
    return m_tempCosObjectName;
}

void Code::SetTempCosObjectName(const string& _tempCosObjectName)
{
    m_tempCosObjectName = _tempCosObjectName;
    m_tempCosObjectNameHasBeenSet = true;
}

bool Code::TempCosObjectNameHasBeenSet() const
{
    return m_tempCosObjectNameHasBeenSet;
}

string Code::GetGitUrl() const
{
    return m_gitUrl;
}

void Code::SetGitUrl(const string& _gitUrl)
{
    m_gitUrl = _gitUrl;
    m_gitUrlHasBeenSet = true;
}

bool Code::GitUrlHasBeenSet() const
{
    return m_gitUrlHasBeenSet;
}

string Code::GetGitUserName() const
{
    return m_gitUserName;
}

void Code::SetGitUserName(const string& _gitUserName)
{
    m_gitUserName = _gitUserName;
    m_gitUserNameHasBeenSet = true;
}

bool Code::GitUserNameHasBeenSet() const
{
    return m_gitUserNameHasBeenSet;
}

string Code::GetGitPassword() const
{
    return m_gitPassword;
}

void Code::SetGitPassword(const string& _gitPassword)
{
    m_gitPassword = _gitPassword;
    m_gitPasswordHasBeenSet = true;
}

bool Code::GitPasswordHasBeenSet() const
{
    return m_gitPasswordHasBeenSet;
}

string Code::GetGitPasswordSecret() const
{
    return m_gitPasswordSecret;
}

void Code::SetGitPasswordSecret(const string& _gitPasswordSecret)
{
    m_gitPasswordSecret = _gitPasswordSecret;
    m_gitPasswordSecretHasBeenSet = true;
}

bool Code::GitPasswordSecretHasBeenSet() const
{
    return m_gitPasswordSecretHasBeenSet;
}

string Code::GetGitBranch() const
{
    return m_gitBranch;
}

void Code::SetGitBranch(const string& _gitBranch)
{
    m_gitBranch = _gitBranch;
    m_gitBranchHasBeenSet = true;
}

bool Code::GitBranchHasBeenSet() const
{
    return m_gitBranchHasBeenSet;
}

string Code::GetGitDirectory() const
{
    return m_gitDirectory;
}

void Code::SetGitDirectory(const string& _gitDirectory)
{
    m_gitDirectory = _gitDirectory;
    m_gitDirectoryHasBeenSet = true;
}

bool Code::GitDirectoryHasBeenSet() const
{
    return m_gitDirectoryHasBeenSet;
}

string Code::GetGitCommitId() const
{
    return m_gitCommitId;
}

void Code::SetGitCommitId(const string& _gitCommitId)
{
    m_gitCommitId = _gitCommitId;
    m_gitCommitIdHasBeenSet = true;
}

bool Code::GitCommitIdHasBeenSet() const
{
    return m_gitCommitIdHasBeenSet;
}

string Code::GetGitUserNameSecret() const
{
    return m_gitUserNameSecret;
}

void Code::SetGitUserNameSecret(const string& _gitUserNameSecret)
{
    m_gitUserNameSecret = _gitUserNameSecret;
    m_gitUserNameSecretHasBeenSet = true;
}

bool Code::GitUserNameSecretHasBeenSet() const
{
    return m_gitUserNameSecretHasBeenSet;
}

