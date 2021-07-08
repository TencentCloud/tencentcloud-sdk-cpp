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

#include <tencentcloud/apigateway/v20180808/model/ModifyPluginRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ModifyPluginRequest::ModifyPluginRequest() :
    m_pluginIdHasBeenSet(false),
    m_pluginNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_pluginDataHasBeenSet(false)
{
}

string ModifyPluginRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pluginName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pluginData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPluginRequest::GetPluginId() const
{
    return m_pluginId;
}

void ModifyPluginRequest::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool ModifyPluginRequest::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

string ModifyPluginRequest::GetPluginName() const
{
    return m_pluginName;
}

void ModifyPluginRequest::SetPluginName(const string& _pluginName)
{
    m_pluginName = _pluginName;
    m_pluginNameHasBeenSet = true;
}

bool ModifyPluginRequest::PluginNameHasBeenSet() const
{
    return m_pluginNameHasBeenSet;
}

string ModifyPluginRequest::GetDescription() const
{
    return m_description;
}

void ModifyPluginRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyPluginRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyPluginRequest::GetPluginData() const
{
    return m_pluginData;
}

void ModifyPluginRequest::SetPluginData(const string& _pluginData)
{
    m_pluginData = _pluginData;
    m_pluginDataHasBeenSet = true;
}

bool ModifyPluginRequest::PluginDataHasBeenSet() const
{
    return m_pluginDataHasBeenSet;
}


