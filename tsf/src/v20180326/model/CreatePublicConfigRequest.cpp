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

#include <tencentcloud/tsf/v20180326/model/CreatePublicConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

CreatePublicConfigRequest::CreatePublicConfigRequest() :
    m_configNameHasBeenSet(false),
    m_configVersionHasBeenSet(false),
    m_configValueHasBeenSet(false),
    m_configVersionDescHasBeenSet(false),
    m_configTypeHasBeenSet(false)
{
}

string CreatePublicConfigRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_configNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_configVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_configVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_configValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConfigValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_configValue.c_str(), allocator).Move(), allocator);
    }

    if (m_configVersionDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConfigVersionDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_configVersionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_configTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConfigType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_configType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePublicConfigRequest::GetConfigName() const
{
    return m_configName;
}

void CreatePublicConfigRequest::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool CreatePublicConfigRequest::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

string CreatePublicConfigRequest::GetConfigVersion() const
{
    return m_configVersion;
}

void CreatePublicConfigRequest::SetConfigVersion(const string& _configVersion)
{
    m_configVersion = _configVersion;
    m_configVersionHasBeenSet = true;
}

bool CreatePublicConfigRequest::ConfigVersionHasBeenSet() const
{
    return m_configVersionHasBeenSet;
}

string CreatePublicConfigRequest::GetConfigValue() const
{
    return m_configValue;
}

void CreatePublicConfigRequest::SetConfigValue(const string& _configValue)
{
    m_configValue = _configValue;
    m_configValueHasBeenSet = true;
}

bool CreatePublicConfigRequest::ConfigValueHasBeenSet() const
{
    return m_configValueHasBeenSet;
}

string CreatePublicConfigRequest::GetConfigVersionDesc() const
{
    return m_configVersionDesc;
}

void CreatePublicConfigRequest::SetConfigVersionDesc(const string& _configVersionDesc)
{
    m_configVersionDesc = _configVersionDesc;
    m_configVersionDescHasBeenSet = true;
}

bool CreatePublicConfigRequest::ConfigVersionDescHasBeenSet() const
{
    return m_configVersionDescHasBeenSet;
}

string CreatePublicConfigRequest::GetConfigType() const
{
    return m_configType;
}

void CreatePublicConfigRequest::SetConfigType(const string& _configType)
{
    m_configType = _configType;
    m_configTypeHasBeenSet = true;
}

bool CreatePublicConfigRequest::ConfigTypeHasBeenSet() const
{
    return m_configTypeHasBeenSet;
}


