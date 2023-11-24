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

#include <tencentcloud/teo/v20220901/model/DeployConfigGroupVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DeployConfigGroupVersionRequest::DeployConfigGroupVersionRequest() :
    m_zoneIdHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_configGroupVersionInfosHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string DeployConfigGroupVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_configGroupVersionInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigGroupVersionInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configGroupVersionInfos.begin(); itr != m_configGroupVersionInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeployConfigGroupVersionRequest::GetZoneId() const
{
    return m_zoneId;
}

void DeployConfigGroupVersionRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DeployConfigGroupVersionRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DeployConfigGroupVersionRequest::GetEnvId() const
{
    return m_envId;
}

void DeployConfigGroupVersionRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DeployConfigGroupVersionRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

vector<ConfigGroupVersionInfo> DeployConfigGroupVersionRequest::GetConfigGroupVersionInfos() const
{
    return m_configGroupVersionInfos;
}

void DeployConfigGroupVersionRequest::SetConfigGroupVersionInfos(const vector<ConfigGroupVersionInfo>& _configGroupVersionInfos)
{
    m_configGroupVersionInfos = _configGroupVersionInfos;
    m_configGroupVersionInfosHasBeenSet = true;
}

bool DeployConfigGroupVersionRequest::ConfigGroupVersionInfosHasBeenSet() const
{
    return m_configGroupVersionInfosHasBeenSet;
}

string DeployConfigGroupVersionRequest::GetDescription() const
{
    return m_description;
}

void DeployConfigGroupVersionRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DeployConfigGroupVersionRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


