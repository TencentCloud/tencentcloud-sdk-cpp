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

#include <tencentcloud/cls/v20201016/model/ModifyCloudProductLogTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyCloudProductLogTaskRequest::ModifyCloudProductLogTaskRequest() :
    m_instanceIdHasBeenSet(false),
    m_assumerNameHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_cloudProductRegionHasBeenSet(false),
    m_extendHasBeenSet(false)
{
}

string ModifyCloudProductLogTaskRequest::ToJsonString() const
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

    if (m_assumerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssumerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assumerName.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudProductRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudProductRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudProductRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_extendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extend.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCloudProductLogTaskRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyCloudProductLogTaskRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyCloudProductLogTaskRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyCloudProductLogTaskRequest::GetAssumerName() const
{
    return m_assumerName;
}

void ModifyCloudProductLogTaskRequest::SetAssumerName(const string& _assumerName)
{
    m_assumerName = _assumerName;
    m_assumerNameHasBeenSet = true;
}

bool ModifyCloudProductLogTaskRequest::AssumerNameHasBeenSet() const
{
    return m_assumerNameHasBeenSet;
}

string ModifyCloudProductLogTaskRequest::GetLogType() const
{
    return m_logType;
}

void ModifyCloudProductLogTaskRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool ModifyCloudProductLogTaskRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string ModifyCloudProductLogTaskRequest::GetCloudProductRegion() const
{
    return m_cloudProductRegion;
}

void ModifyCloudProductLogTaskRequest::SetCloudProductRegion(const string& _cloudProductRegion)
{
    m_cloudProductRegion = _cloudProductRegion;
    m_cloudProductRegionHasBeenSet = true;
}

bool ModifyCloudProductLogTaskRequest::CloudProductRegionHasBeenSet() const
{
    return m_cloudProductRegionHasBeenSet;
}

string ModifyCloudProductLogTaskRequest::GetExtend() const
{
    return m_extend;
}

void ModifyCloudProductLogTaskRequest::SetExtend(const string& _extend)
{
    m_extend = _extend;
    m_extendHasBeenSet = true;
}

bool ModifyCloudProductLogTaskRequest::ExtendHasBeenSet() const
{
    return m_extendHasBeenSet;
}


