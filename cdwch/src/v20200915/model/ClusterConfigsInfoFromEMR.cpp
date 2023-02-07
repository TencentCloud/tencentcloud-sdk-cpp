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

#include <tencentcloud/cdwch/v20200915/model/ClusterConfigsInfoFromEMR.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

ClusterConfigsInfoFromEMR::ClusterConfigsInfoFromEMR() :
    m_fileNameHasBeenSet(false),
    m_fileConfHasBeenSet(false),
    m_keyConfHasBeenSet(false),
    m_oriParamHasBeenSet(false),
    m_needRestartHasBeenSet(false),
    m_filePathHasBeenSet(false)
{
}

CoreInternalOutcome ClusterConfigsInfoFromEMR::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterConfigsInfoFromEMR.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileConf") && !value["FileConf"].IsNull())
    {
        if (!value["FileConf"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterConfigsInfoFromEMR.FileConf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileConf = string(value["FileConf"].GetString());
        m_fileConfHasBeenSet = true;
    }

    if (value.HasMember("KeyConf") && !value["KeyConf"].IsNull())
    {
        if (!value["KeyConf"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterConfigsInfoFromEMR.KeyConf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyConf = string(value["KeyConf"].GetString());
        m_keyConfHasBeenSet = true;
    }

    if (value.HasMember("OriParam") && !value["OriParam"].IsNull())
    {
        if (!value["OriParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterConfigsInfoFromEMR.OriParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oriParam = string(value["OriParam"].GetString());
        m_oriParamHasBeenSet = true;
    }

    if (value.HasMember("NeedRestart") && !value["NeedRestart"].IsNull())
    {
        if (!value["NeedRestart"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterConfigsInfoFromEMR.NeedRestart` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needRestart = value["NeedRestart"].GetInt64();
        m_needRestartHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterConfigsInfoFromEMR.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterConfigsInfoFromEMR::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileConf.c_str(), allocator).Move(), allocator);
    }

    if (m_keyConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyConf.c_str(), allocator).Move(), allocator);
    }

    if (m_oriParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oriParam.c_str(), allocator).Move(), allocator);
    }

    if (m_needRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRestart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needRestart, allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

}


string ClusterConfigsInfoFromEMR::GetFileName() const
{
    return m_fileName;
}

void ClusterConfigsInfoFromEMR::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ClusterConfigsInfoFromEMR::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ClusterConfigsInfoFromEMR::GetFileConf() const
{
    return m_fileConf;
}

void ClusterConfigsInfoFromEMR::SetFileConf(const string& _fileConf)
{
    m_fileConf = _fileConf;
    m_fileConfHasBeenSet = true;
}

bool ClusterConfigsInfoFromEMR::FileConfHasBeenSet() const
{
    return m_fileConfHasBeenSet;
}

string ClusterConfigsInfoFromEMR::GetKeyConf() const
{
    return m_keyConf;
}

void ClusterConfigsInfoFromEMR::SetKeyConf(const string& _keyConf)
{
    m_keyConf = _keyConf;
    m_keyConfHasBeenSet = true;
}

bool ClusterConfigsInfoFromEMR::KeyConfHasBeenSet() const
{
    return m_keyConfHasBeenSet;
}

string ClusterConfigsInfoFromEMR::GetOriParam() const
{
    return m_oriParam;
}

void ClusterConfigsInfoFromEMR::SetOriParam(const string& _oriParam)
{
    m_oriParam = _oriParam;
    m_oriParamHasBeenSet = true;
}

bool ClusterConfigsInfoFromEMR::OriParamHasBeenSet() const
{
    return m_oriParamHasBeenSet;
}

int64_t ClusterConfigsInfoFromEMR::GetNeedRestart() const
{
    return m_needRestart;
}

void ClusterConfigsInfoFromEMR::SetNeedRestart(const int64_t& _needRestart)
{
    m_needRestart = _needRestart;
    m_needRestartHasBeenSet = true;
}

bool ClusterConfigsInfoFromEMR::NeedRestartHasBeenSet() const
{
    return m_needRestartHasBeenSet;
}

string ClusterConfigsInfoFromEMR::GetFilePath() const
{
    return m_filePath;
}

void ClusterConfigsInfoFromEMR::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool ClusterConfigsInfoFromEMR::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

