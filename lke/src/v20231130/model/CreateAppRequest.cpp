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

#include <tencentcloud/lke/v20231130/model/CreateAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

CreateAppRequest::CreateAppRequest() :
    m_appTypeHasBeenSet(false),
    m_baseConfigHasBeenSet(false),
    m_patternHasBeenSet(false)
{
}

string CreateAppRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }

    if (m_baseConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baseConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_patternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pattern.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAppRequest::GetAppType() const
{
    return m_appType;
}

void CreateAppRequest::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool CreateAppRequest::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

BaseConfig CreateAppRequest::GetBaseConfig() const
{
    return m_baseConfig;
}

void CreateAppRequest::SetBaseConfig(const BaseConfig& _baseConfig)
{
    m_baseConfig = _baseConfig;
    m_baseConfigHasBeenSet = true;
}

bool CreateAppRequest::BaseConfigHasBeenSet() const
{
    return m_baseConfigHasBeenSet;
}

string CreateAppRequest::GetPattern() const
{
    return m_pattern;
}

void CreateAppRequest::SetPattern(const string& _pattern)
{
    m_pattern = _pattern;
    m_patternHasBeenSet = true;
}

bool CreateAppRequest::PatternHasBeenSet() const
{
    return m_patternHasBeenSet;
}


