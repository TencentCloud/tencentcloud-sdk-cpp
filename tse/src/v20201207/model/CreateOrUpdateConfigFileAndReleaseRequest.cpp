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

#include <tencentcloud/tse/v20201207/model/CreateOrUpdateConfigFileAndReleaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreateOrUpdateConfigFileAndReleaseRequest::CreateOrUpdateConfigFileAndReleaseRequest() :
    m_instanceIdHasBeenSet(false),
    m_configFilePublishInfoHasBeenSet(false),
    m_strictEnableHasBeenSet(false)
{
}

string CreateOrUpdateConfigFileAndReleaseRequest::ToJsonString() const
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

    if (m_configFilePublishInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFilePublishInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_configFilePublishInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_strictEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrictEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_strictEnable, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateOrUpdateConfigFileAndReleaseRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateOrUpdateConfigFileAndReleaseRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateOrUpdateConfigFileAndReleaseRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

ConfigFilePublishInfo CreateOrUpdateConfigFileAndReleaseRequest::GetConfigFilePublishInfo() const
{
    return m_configFilePublishInfo;
}

void CreateOrUpdateConfigFileAndReleaseRequest::SetConfigFilePublishInfo(const ConfigFilePublishInfo& _configFilePublishInfo)
{
    m_configFilePublishInfo = _configFilePublishInfo;
    m_configFilePublishInfoHasBeenSet = true;
}

bool CreateOrUpdateConfigFileAndReleaseRequest::ConfigFilePublishInfoHasBeenSet() const
{
    return m_configFilePublishInfoHasBeenSet;
}

bool CreateOrUpdateConfigFileAndReleaseRequest::GetStrictEnable() const
{
    return m_strictEnable;
}

void CreateOrUpdateConfigFileAndReleaseRequest::SetStrictEnable(const bool& _strictEnable)
{
    m_strictEnable = _strictEnable;
    m_strictEnableHasBeenSet = true;
}

bool CreateOrUpdateConfigFileAndReleaseRequest::StrictEnableHasBeenSet() const
{
    return m_strictEnableHasBeenSet;
}


