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

#include <tencentcloud/cls/v20201016/model/CreateCloudProductLogTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateCloudProductLogTaskRequest::CreateCloudProductLogTaskRequest() :
    m_instanceIdHasBeenSet(false),
    m_assumerNameHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_cloudProductRegionHasBeenSet(false),
    m_clsRegionHasBeenSet(false),
    m_logsetNameHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_extendHasBeenSet(false)
{
}

string CreateCloudProductLogTaskRequest::ToJsonString() const
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

    if (m_clsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clsRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetName.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
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


string CreateCloudProductLogTaskRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateCloudProductLogTaskRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateCloudProductLogTaskRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateCloudProductLogTaskRequest::GetAssumerName() const
{
    return m_assumerName;
}

void CreateCloudProductLogTaskRequest::SetAssumerName(const string& _assumerName)
{
    m_assumerName = _assumerName;
    m_assumerNameHasBeenSet = true;
}

bool CreateCloudProductLogTaskRequest::AssumerNameHasBeenSet() const
{
    return m_assumerNameHasBeenSet;
}

string CreateCloudProductLogTaskRequest::GetLogType() const
{
    return m_logType;
}

void CreateCloudProductLogTaskRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool CreateCloudProductLogTaskRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string CreateCloudProductLogTaskRequest::GetCloudProductRegion() const
{
    return m_cloudProductRegion;
}

void CreateCloudProductLogTaskRequest::SetCloudProductRegion(const string& _cloudProductRegion)
{
    m_cloudProductRegion = _cloudProductRegion;
    m_cloudProductRegionHasBeenSet = true;
}

bool CreateCloudProductLogTaskRequest::CloudProductRegionHasBeenSet() const
{
    return m_cloudProductRegionHasBeenSet;
}

string CreateCloudProductLogTaskRequest::GetClsRegion() const
{
    return m_clsRegion;
}

void CreateCloudProductLogTaskRequest::SetClsRegion(const string& _clsRegion)
{
    m_clsRegion = _clsRegion;
    m_clsRegionHasBeenSet = true;
}

bool CreateCloudProductLogTaskRequest::ClsRegionHasBeenSet() const
{
    return m_clsRegionHasBeenSet;
}

string CreateCloudProductLogTaskRequest::GetLogsetName() const
{
    return m_logsetName;
}

void CreateCloudProductLogTaskRequest::SetLogsetName(const string& _logsetName)
{
    m_logsetName = _logsetName;
    m_logsetNameHasBeenSet = true;
}

bool CreateCloudProductLogTaskRequest::LogsetNameHasBeenSet() const
{
    return m_logsetNameHasBeenSet;
}

string CreateCloudProductLogTaskRequest::GetLogsetId() const
{
    return m_logsetId;
}

void CreateCloudProductLogTaskRequest::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool CreateCloudProductLogTaskRequest::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string CreateCloudProductLogTaskRequest::GetTopicName() const
{
    return m_topicName;
}

void CreateCloudProductLogTaskRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CreateCloudProductLogTaskRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string CreateCloudProductLogTaskRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateCloudProductLogTaskRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateCloudProductLogTaskRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CreateCloudProductLogTaskRequest::GetExtend() const
{
    return m_extend;
}

void CreateCloudProductLogTaskRequest::SetExtend(const string& _extend)
{
    m_extend = _extend;
    m_extendHasBeenSet = true;
}

bool CreateCloudProductLogTaskRequest::ExtendHasBeenSet() const
{
    return m_extendHasBeenSet;
}


