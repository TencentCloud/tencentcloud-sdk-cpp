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

#include <tencentcloud/tcbr/v20220217/model/BuildPacksInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

BuildPacksInfo::BuildPacksInfo() :
    m_baseImageHasBeenSet(false),
    m_entryPointHasBeenSet(false),
    m_repoLanguageHasBeenSet(false),
    m_uploadFilenameHasBeenSet(false),
    m_languageVersionHasBeenSet(false)
{
}

CoreInternalOutcome BuildPacksInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BaseImage") && !value["BaseImage"].IsNull())
    {
        if (!value["BaseImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildPacksInfo.BaseImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baseImage = string(value["BaseImage"].GetString());
        m_baseImageHasBeenSet = true;
    }

    if (value.HasMember("EntryPoint") && !value["EntryPoint"].IsNull())
    {
        if (!value["EntryPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildPacksInfo.EntryPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entryPoint = string(value["EntryPoint"].GetString());
        m_entryPointHasBeenSet = true;
    }

    if (value.HasMember("RepoLanguage") && !value["RepoLanguage"].IsNull())
    {
        if (!value["RepoLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildPacksInfo.RepoLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoLanguage = string(value["RepoLanguage"].GetString());
        m_repoLanguageHasBeenSet = true;
    }

    if (value.HasMember("UploadFilename") && !value["UploadFilename"].IsNull())
    {
        if (!value["UploadFilename"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildPacksInfo.UploadFilename` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadFilename = string(value["UploadFilename"].GetString());
        m_uploadFilenameHasBeenSet = true;
    }

    if (value.HasMember("LanguageVersion") && !value["LanguageVersion"].IsNull())
    {
        if (!value["LanguageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildPacksInfo.LanguageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_languageVersion = string(value["LanguageVersion"].GetString());
        m_languageVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BuildPacksInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_baseImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baseImage.c_str(), allocator).Move(), allocator);
    }

    if (m_entryPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entryPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_repoLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadFilenameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadFilename";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadFilename.c_str(), allocator).Move(), allocator);
    }

    if (m_languageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanguageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_languageVersion.c_str(), allocator).Move(), allocator);
    }

}


string BuildPacksInfo::GetBaseImage() const
{
    return m_baseImage;
}

void BuildPacksInfo::SetBaseImage(const string& _baseImage)
{
    m_baseImage = _baseImage;
    m_baseImageHasBeenSet = true;
}

bool BuildPacksInfo::BaseImageHasBeenSet() const
{
    return m_baseImageHasBeenSet;
}

string BuildPacksInfo::GetEntryPoint() const
{
    return m_entryPoint;
}

void BuildPacksInfo::SetEntryPoint(const string& _entryPoint)
{
    m_entryPoint = _entryPoint;
    m_entryPointHasBeenSet = true;
}

bool BuildPacksInfo::EntryPointHasBeenSet() const
{
    return m_entryPointHasBeenSet;
}

string BuildPacksInfo::GetRepoLanguage() const
{
    return m_repoLanguage;
}

void BuildPacksInfo::SetRepoLanguage(const string& _repoLanguage)
{
    m_repoLanguage = _repoLanguage;
    m_repoLanguageHasBeenSet = true;
}

bool BuildPacksInfo::RepoLanguageHasBeenSet() const
{
    return m_repoLanguageHasBeenSet;
}

string BuildPacksInfo::GetUploadFilename() const
{
    return m_uploadFilename;
}

void BuildPacksInfo::SetUploadFilename(const string& _uploadFilename)
{
    m_uploadFilename = _uploadFilename;
    m_uploadFilenameHasBeenSet = true;
}

bool BuildPacksInfo::UploadFilenameHasBeenSet() const
{
    return m_uploadFilenameHasBeenSet;
}

string BuildPacksInfo::GetLanguageVersion() const
{
    return m_languageVersion;
}

void BuildPacksInfo::SetLanguageVersion(const string& _languageVersion)
{
    m_languageVersion = _languageVersion;
    m_languageVersionHasBeenSet = true;
}

bool BuildPacksInfo::LanguageVersionHasBeenSet() const
{
    return m_languageVersionHasBeenSet;
}

