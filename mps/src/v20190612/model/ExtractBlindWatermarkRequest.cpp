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

#include <tencentcloud/mps/v20190612/model/ExtractBlindWatermarkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ExtractBlindWatermarkRequest::ExtractBlindWatermarkRequest() :
    m_typeHasBeenSet(false),
    m_inputInfoHasBeenSet(false),
    m_taskNotifyConfigHasBeenSet(false),
    m_extractBlindWatermarkConfigHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

string ExtractBlindWatermarkRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_inputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_taskNotifyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNotifyConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskNotifyConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_extractBlindWatermarkConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractBlindWatermarkConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extractBlindWatermarkConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExtractBlindWatermarkRequest::GetType() const
{
    return m_type;
}

void ExtractBlindWatermarkRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ExtractBlindWatermarkRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

MediaInputInfo ExtractBlindWatermarkRequest::GetInputInfo() const
{
    return m_inputInfo;
}

void ExtractBlindWatermarkRequest::SetInputInfo(const MediaInputInfo& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool ExtractBlindWatermarkRequest::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

TaskNotifyConfig ExtractBlindWatermarkRequest::GetTaskNotifyConfig() const
{
    return m_taskNotifyConfig;
}

void ExtractBlindWatermarkRequest::SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig)
{
    m_taskNotifyConfig = _taskNotifyConfig;
    m_taskNotifyConfigHasBeenSet = true;
}

bool ExtractBlindWatermarkRequest::TaskNotifyConfigHasBeenSet() const
{
    return m_taskNotifyConfigHasBeenSet;
}

ExtractBlindWatermarkTaskConfig ExtractBlindWatermarkRequest::GetExtractBlindWatermarkConfig() const
{
    return m_extractBlindWatermarkConfig;
}

void ExtractBlindWatermarkRequest::SetExtractBlindWatermarkConfig(const ExtractBlindWatermarkTaskConfig& _extractBlindWatermarkConfig)
{
    m_extractBlindWatermarkConfig = _extractBlindWatermarkConfig;
    m_extractBlindWatermarkConfigHasBeenSet = true;
}

bool ExtractBlindWatermarkRequest::ExtractBlindWatermarkConfigHasBeenSet() const
{
    return m_extractBlindWatermarkConfigHasBeenSet;
}

string ExtractBlindWatermarkRequest::GetResourceId() const
{
    return m_resourceId;
}

void ExtractBlindWatermarkRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ExtractBlindWatermarkRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}


