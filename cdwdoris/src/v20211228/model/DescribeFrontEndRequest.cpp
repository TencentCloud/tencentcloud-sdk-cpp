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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeFrontEndRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeFrontEndRequest::DescribeFrontEndRequest() :
    m_instanceIdHasBeenSet(false),
    m_configTypeHasBeenSet(false),
    m_param1HasBeenSet(false),
    m_param2HasBeenSet(false),
    m_param3HasBeenSet(false),
    m_param4HasBeenSet(false),
    m_param5HasBeenSet(false)
{
}

string DescribeFrontEndRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_configTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configType.c_str(), allocator).Move(), allocator);
    }

    if (m_param1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Param1";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_param1.c_str(), allocator).Move(), allocator);
    }

    if (m_param2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Param2";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_param2.c_str(), allocator).Move(), allocator);
    }

    if (m_param3HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Param3";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_param3.c_str(), allocator).Move(), allocator);
    }

    if (m_param4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Param4";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_param4.c_str(), allocator).Move(), allocator);
    }

    if (m_param5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Param5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_param5.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFrontEndRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeFrontEndRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeFrontEndRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeFrontEndRequest::GetConfigType() const
{
    return m_configType;
}

void DescribeFrontEndRequest::SetConfigType(const string& _configType)
{
    m_configType = _configType;
    m_configTypeHasBeenSet = true;
}

bool DescribeFrontEndRequest::ConfigTypeHasBeenSet() const
{
    return m_configTypeHasBeenSet;
}

string DescribeFrontEndRequest::GetParam1() const
{
    return m_param1;
}

void DescribeFrontEndRequest::SetParam1(const string& _param1)
{
    m_param1 = _param1;
    m_param1HasBeenSet = true;
}

bool DescribeFrontEndRequest::Param1HasBeenSet() const
{
    return m_param1HasBeenSet;
}

string DescribeFrontEndRequest::GetParam2() const
{
    return m_param2;
}

void DescribeFrontEndRequest::SetParam2(const string& _param2)
{
    m_param2 = _param2;
    m_param2HasBeenSet = true;
}

bool DescribeFrontEndRequest::Param2HasBeenSet() const
{
    return m_param2HasBeenSet;
}

string DescribeFrontEndRequest::GetParam3() const
{
    return m_param3;
}

void DescribeFrontEndRequest::SetParam3(const string& _param3)
{
    m_param3 = _param3;
    m_param3HasBeenSet = true;
}

bool DescribeFrontEndRequest::Param3HasBeenSet() const
{
    return m_param3HasBeenSet;
}

string DescribeFrontEndRequest::GetParam4() const
{
    return m_param4;
}

void DescribeFrontEndRequest::SetParam4(const string& _param4)
{
    m_param4 = _param4;
    m_param4HasBeenSet = true;
}

bool DescribeFrontEndRequest::Param4HasBeenSet() const
{
    return m_param4HasBeenSet;
}

string DescribeFrontEndRequest::GetParam5() const
{
    return m_param5;
}

void DescribeFrontEndRequest::SetParam5(const string& _param5)
{
    m_param5 = _param5;
    m_param5HasBeenSet = true;
}

bool DescribeFrontEndRequest::Param5HasBeenSet() const
{
    return m_param5HasBeenSet;
}


