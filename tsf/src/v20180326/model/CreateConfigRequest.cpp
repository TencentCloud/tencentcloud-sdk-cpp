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

#include <tencentcloud/tsf/v20180326/model/CreateConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CreateConfigRequest::CreateConfigRequest() :
    m_configNameHasBeenSet(false),
    m_configVersionHasBeenSet(false),
    m_configValueHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_configVersionDescHasBeenSet(false),
    m_configTypeHasBeenSet(false),
    m_encodeWithBase64HasBeenSet(false),
    m_programIdListHasBeenSet(false)
{
}

string CreateConfigRequest::ToJsonString() const
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

    if (m_configValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configValue.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_configVersionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigVersionDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configVersionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_configTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configType.c_str(), allocator).Move(), allocator);
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


string CreateConfigRequest::GetConfigName() const
{
    return m_configName;
}

void CreateConfigRequest::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool CreateConfigRequest::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

string CreateConfigRequest::GetConfigVersion() const
{
    return m_configVersion;
}

void CreateConfigRequest::SetConfigVersion(const string& _configVersion)
{
    m_configVersion = _configVersion;
    m_configVersionHasBeenSet = true;
}

bool CreateConfigRequest::ConfigVersionHasBeenSet() const
{
    return m_configVersionHasBeenSet;
}

string CreateConfigRequest::GetConfigValue() const
{
    return m_configValue;
}

void CreateConfigRequest::SetConfigValue(const string& _configValue)
{
    m_configValue = _configValue;
    m_configValueHasBeenSet = true;
}

bool CreateConfigRequest::ConfigValueHasBeenSet() const
{
    return m_configValueHasBeenSet;
}

string CreateConfigRequest::GetApplicationId() const
{
    return m_applicationId;
}

void CreateConfigRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool CreateConfigRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string CreateConfigRequest::GetConfigVersionDesc() const
{
    return m_configVersionDesc;
}

void CreateConfigRequest::SetConfigVersionDesc(const string& _configVersionDesc)
{
    m_configVersionDesc = _configVersionDesc;
    m_configVersionDescHasBeenSet = true;
}

bool CreateConfigRequest::ConfigVersionDescHasBeenSet() const
{
    return m_configVersionDescHasBeenSet;
}

string CreateConfigRequest::GetConfigType() const
{
    return m_configType;
}

void CreateConfigRequest::SetConfigType(const string& _configType)
{
    m_configType = _configType;
    m_configTypeHasBeenSet = true;
}

bool CreateConfigRequest::ConfigTypeHasBeenSet() const
{
    return m_configTypeHasBeenSet;
}

bool CreateConfigRequest::GetEncodeWithBase64() const
{
    return m_encodeWithBase64;
}

void CreateConfigRequest::SetEncodeWithBase64(const bool& _encodeWithBase64)
{
    m_encodeWithBase64 = _encodeWithBase64;
    m_encodeWithBase64HasBeenSet = true;
}

bool CreateConfigRequest::EncodeWithBase64HasBeenSet() const
{
    return m_encodeWithBase64HasBeenSet;
}

vector<string> CreateConfigRequest::GetProgramIdList() const
{
    return m_programIdList;
}

void CreateConfigRequest::SetProgramIdList(const vector<string>& _programIdList)
{
    m_programIdList = _programIdList;
    m_programIdListHasBeenSet = true;
}

bool CreateConfigRequest::ProgramIdListHasBeenSet() const
{
    return m_programIdListHasBeenSet;
}


