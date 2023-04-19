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

#include <tencentcloud/tsf/v20180326/model/CreateFileConfigWithDetailRespRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CreateFileConfigWithDetailRespRequest::CreateFileConfigWithDetailRespRequest() :
    m_configNameHasBeenSet(false),
    m_configVersionHasBeenSet(false),
    m_configFileNameHasBeenSet(false),
    m_configFileValueHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_configFilePathHasBeenSet(false),
    m_configVersionDescHasBeenSet(false),
    m_configFileCodeHasBeenSet(false),
    m_configPostCmdHasBeenSet(false),
    m_encodeWithBase64HasBeenSet(false),
    m_programIdListHasBeenSet(false)
{
}

string CreateFileConfigWithDetailRespRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_configVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_configFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_configFileValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFileValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configFileValue.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_configFilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFilePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configFilePath.c_str(), allocator).Move(), allocator);
    }

    if (m_configVersionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigVersionDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configVersionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_configFileCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFileCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configFileCode.c_str(), allocator).Move(), allocator);
    }

    if (m_configPostCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigPostCmd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configPostCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_encodeWithBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodeWithBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_encodeWithBase64, allocator);
    }

    if (m_programIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programIdList.begin(); itr != m_programIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFileConfigWithDetailRespRequest::GetConfigName() const
{
    return m_configName;
}

void CreateFileConfigWithDetailRespRequest::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool CreateFileConfigWithDetailRespRequest::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

string CreateFileConfigWithDetailRespRequest::GetConfigVersion() const
{
    return m_configVersion;
}

void CreateFileConfigWithDetailRespRequest::SetConfigVersion(const string& _configVersion)
{
    m_configVersion = _configVersion;
    m_configVersionHasBeenSet = true;
}

bool CreateFileConfigWithDetailRespRequest::ConfigVersionHasBeenSet() const
{
    return m_configVersionHasBeenSet;
}

string CreateFileConfigWithDetailRespRequest::GetConfigFileName() const
{
    return m_configFileName;
}

void CreateFileConfigWithDetailRespRequest::SetConfigFileName(const string& _configFileName)
{
    m_configFileName = _configFileName;
    m_configFileNameHasBeenSet = true;
}

bool CreateFileConfigWithDetailRespRequest::ConfigFileNameHasBeenSet() const
{
    return m_configFileNameHasBeenSet;
}

string CreateFileConfigWithDetailRespRequest::GetConfigFileValue() const
{
    return m_configFileValue;
}

void CreateFileConfigWithDetailRespRequest::SetConfigFileValue(const string& _configFileValue)
{
    m_configFileValue = _configFileValue;
    m_configFileValueHasBeenSet = true;
}

bool CreateFileConfigWithDetailRespRequest::ConfigFileValueHasBeenSet() const
{
    return m_configFileValueHasBeenSet;
}

string CreateFileConfigWithDetailRespRequest::GetApplicationId() const
{
    return m_applicationId;
}

void CreateFileConfigWithDetailRespRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool CreateFileConfigWithDetailRespRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string CreateFileConfigWithDetailRespRequest::GetConfigFilePath() const
{
    return m_configFilePath;
}

void CreateFileConfigWithDetailRespRequest::SetConfigFilePath(const string& _configFilePath)
{
    m_configFilePath = _configFilePath;
    m_configFilePathHasBeenSet = true;
}

bool CreateFileConfigWithDetailRespRequest::ConfigFilePathHasBeenSet() const
{
    return m_configFilePathHasBeenSet;
}

string CreateFileConfigWithDetailRespRequest::GetConfigVersionDesc() const
{
    return m_configVersionDesc;
}

void CreateFileConfigWithDetailRespRequest::SetConfigVersionDesc(const string& _configVersionDesc)
{
    m_configVersionDesc = _configVersionDesc;
    m_configVersionDescHasBeenSet = true;
}

bool CreateFileConfigWithDetailRespRequest::ConfigVersionDescHasBeenSet() const
{
    return m_configVersionDescHasBeenSet;
}

string CreateFileConfigWithDetailRespRequest::GetConfigFileCode() const
{
    return m_configFileCode;
}

void CreateFileConfigWithDetailRespRequest::SetConfigFileCode(const string& _configFileCode)
{
    m_configFileCode = _configFileCode;
    m_configFileCodeHasBeenSet = true;
}

bool CreateFileConfigWithDetailRespRequest::ConfigFileCodeHasBeenSet() const
{
    return m_configFileCodeHasBeenSet;
}

string CreateFileConfigWithDetailRespRequest::GetConfigPostCmd() const
{
    return m_configPostCmd;
}

void CreateFileConfigWithDetailRespRequest::SetConfigPostCmd(const string& _configPostCmd)
{
    m_configPostCmd = _configPostCmd;
    m_configPostCmdHasBeenSet = true;
}

bool CreateFileConfigWithDetailRespRequest::ConfigPostCmdHasBeenSet() const
{
    return m_configPostCmdHasBeenSet;
}

bool CreateFileConfigWithDetailRespRequest::GetEncodeWithBase64() const
{
    return m_encodeWithBase64;
}

void CreateFileConfigWithDetailRespRequest::SetEncodeWithBase64(const bool& _encodeWithBase64)
{
    m_encodeWithBase64 = _encodeWithBase64;
    m_encodeWithBase64HasBeenSet = true;
}

bool CreateFileConfigWithDetailRespRequest::EncodeWithBase64HasBeenSet() const
{
    return m_encodeWithBase64HasBeenSet;
}

vector<string> CreateFileConfigWithDetailRespRequest::GetProgramIdList() const
{
    return m_programIdList;
}

void CreateFileConfigWithDetailRespRequest::SetProgramIdList(const vector<string>& _programIdList)
{
    m_programIdList = _programIdList;
    m_programIdListHasBeenSet = true;
}

bool CreateFileConfigWithDetailRespRequest::ProgramIdListHasBeenSet() const
{
    return m_programIdListHasBeenSet;
}


