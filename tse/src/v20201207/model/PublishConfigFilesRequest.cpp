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

#include <tencentcloud/tse/v20201207/model/PublishConfigFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

PublishConfigFilesRequest::PublishConfigFilesRequest() :
    m_instanceIdHasBeenSet(false),
    m_configFileReleasesHasBeenSet(false),
    m_strictEnableHasBeenSet(false)
{
}

string PublishConfigFilesRequest::ToJsonString() const
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

    if (m_configFileReleasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFileReleases";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_configFileReleases.ToJsonObject(d[key.c_str()], allocator);
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


string PublishConfigFilesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void PublishConfigFilesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PublishConfigFilesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

ConfigFileRelease PublishConfigFilesRequest::GetConfigFileReleases() const
{
    return m_configFileReleases;
}

void PublishConfigFilesRequest::SetConfigFileReleases(const ConfigFileRelease& _configFileReleases)
{
    m_configFileReleases = _configFileReleases;
    m_configFileReleasesHasBeenSet = true;
}

bool PublishConfigFilesRequest::ConfigFileReleasesHasBeenSet() const
{
    return m_configFileReleasesHasBeenSet;
}

bool PublishConfigFilesRequest::GetStrictEnable() const
{
    return m_strictEnable;
}

void PublishConfigFilesRequest::SetStrictEnable(const bool& _strictEnable)
{
    m_strictEnable = _strictEnable;
    m_strictEnableHasBeenSet = true;
}

bool PublishConfigFilesRequest::StrictEnableHasBeenSet() const
{
    return m_strictEnableHasBeenSet;
}


