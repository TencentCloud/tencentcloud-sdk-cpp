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

#include <tencentcloud/antiddos/v20200309/model/CreateDefaultAlarmThresholdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

CreateDefaultAlarmThresholdRequest::CreateDefaultAlarmThresholdRequest() :
    m_defaultAlarmConfigHasBeenSet(false),
    m_instanceTypeHasBeenSet(false)
{
}

string CreateDefaultAlarmThresholdRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_defaultAlarmConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultAlarmConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_defaultAlarmConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


DefaultAlarmThreshold CreateDefaultAlarmThresholdRequest::GetDefaultAlarmConfig() const
{
    return m_defaultAlarmConfig;
}

void CreateDefaultAlarmThresholdRequest::SetDefaultAlarmConfig(const DefaultAlarmThreshold& _defaultAlarmConfig)
{
    m_defaultAlarmConfig = _defaultAlarmConfig;
    m_defaultAlarmConfigHasBeenSet = true;
}

bool CreateDefaultAlarmThresholdRequest::DefaultAlarmConfigHasBeenSet() const
{
    return m_defaultAlarmConfigHasBeenSet;
}

string CreateDefaultAlarmThresholdRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateDefaultAlarmThresholdRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateDefaultAlarmThresholdRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}


