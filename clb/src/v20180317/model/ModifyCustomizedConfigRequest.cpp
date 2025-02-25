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

#include <tencentcloud/clb/v20180317/model/ModifyCustomizedConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyCustomizedConfigRequest::ModifyCustomizedConfigRequest() :
    m_configNameHasBeenSet(false),
    m_uconfigIdHasBeenSet(false),
    m_configContentHasBeenSet(false)
{
}

string ModifyCustomizedConfigRequest::ToJsonString() const
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

    if (m_uconfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UconfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uconfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_configContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configContent.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCustomizedConfigRequest::GetConfigName() const
{
    return m_configName;
}

void ModifyCustomizedConfigRequest::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool ModifyCustomizedConfigRequest::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

string ModifyCustomizedConfigRequest::GetUconfigId() const
{
    return m_uconfigId;
}

void ModifyCustomizedConfigRequest::SetUconfigId(const string& _uconfigId)
{
    m_uconfigId = _uconfigId;
    m_uconfigIdHasBeenSet = true;
}

bool ModifyCustomizedConfigRequest::UconfigIdHasBeenSet() const
{
    return m_uconfigIdHasBeenSet;
}

string ModifyCustomizedConfigRequest::GetConfigContent() const
{
    return m_configContent;
}

void ModifyCustomizedConfigRequest::SetConfigContent(const string& _configContent)
{
    m_configContent = _configContent;
    m_configContentHasBeenSet = true;
}

bool ModifyCustomizedConfigRequest::ConfigContentHasBeenSet() const
{
    return m_configContentHasBeenSet;
}


