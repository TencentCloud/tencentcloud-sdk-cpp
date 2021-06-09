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

#include <tencentcloud/tke/v20180525/model/CreateClusterInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CreateClusterInstancesRequest::CreateClusterInstancesRequest() :
    m_clusterIdHasBeenSet(false),
    m_runInstanceParaHasBeenSet(false),
    m_instanceAdvancedSettingsHasBeenSet(false),
    m_skipValidateOptionsHasBeenSet(false)
{
}

string CreateClusterInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_runInstanceParaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunInstancePara";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runInstancePara.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceAdvancedSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAdvancedSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceAdvancedSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_skipValidateOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipValidateOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_skipValidateOptions.begin(); itr != m_skipValidateOptions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateClusterInstancesRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateClusterInstancesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateClusterInstancesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateClusterInstancesRequest::GetRunInstancePara() const
{
    return m_runInstancePara;
}

void CreateClusterInstancesRequest::SetRunInstancePara(const string& _runInstancePara)
{
    m_runInstancePara = _runInstancePara;
    m_runInstanceParaHasBeenSet = true;
}

bool CreateClusterInstancesRequest::RunInstanceParaHasBeenSet() const
{
    return m_runInstanceParaHasBeenSet;
}

InstanceAdvancedSettings CreateClusterInstancesRequest::GetInstanceAdvancedSettings() const
{
    return m_instanceAdvancedSettings;
}

void CreateClusterInstancesRequest::SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings)
{
    m_instanceAdvancedSettings = _instanceAdvancedSettings;
    m_instanceAdvancedSettingsHasBeenSet = true;
}

bool CreateClusterInstancesRequest::InstanceAdvancedSettingsHasBeenSet() const
{
    return m_instanceAdvancedSettingsHasBeenSet;
}

vector<string> CreateClusterInstancesRequest::GetSkipValidateOptions() const
{
    return m_skipValidateOptions;
}

void CreateClusterInstancesRequest::SetSkipValidateOptions(const vector<string>& _skipValidateOptions)
{
    m_skipValidateOptions = _skipValidateOptions;
    m_skipValidateOptionsHasBeenSet = true;
}

bool CreateClusterInstancesRequest::SkipValidateOptionsHasBeenSet() const
{
    return m_skipValidateOptionsHasBeenSet;
}


