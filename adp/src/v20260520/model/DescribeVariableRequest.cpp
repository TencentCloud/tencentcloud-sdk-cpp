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

#include <tencentcloud/adp/v20260520/model/DescribeVariableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeVariableRequest::DescribeVariableRequest() :
    m_appIdHasBeenSet(false),
    m_variableIdHasBeenSet(false),
    m_moduleTypeHasBeenSet(false)
{
}

string DescribeVariableRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_variableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VariableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_variableId.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_moduleType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeVariableRequest::GetAppId() const
{
    return m_appId;
}

void DescribeVariableRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeVariableRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeVariableRequest::GetVariableId() const
{
    return m_variableId;
}

void DescribeVariableRequest::SetVariableId(const string& _variableId)
{
    m_variableId = _variableId;
    m_variableIdHasBeenSet = true;
}

bool DescribeVariableRequest::VariableIdHasBeenSet() const
{
    return m_variableIdHasBeenSet;
}

int64_t DescribeVariableRequest::GetModuleType() const
{
    return m_moduleType;
}

void DescribeVariableRequest::SetModuleType(const int64_t& _moduleType)
{
    m_moduleType = _moduleType;
    m_moduleTypeHasBeenSet = true;
}

bool DescribeVariableRequest::ModuleTypeHasBeenSet() const
{
    return m_moduleTypeHasBeenSet;
}


