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

#include <tencentcloud/iecp/v20210914/model/CreateConfigMapRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

CreateConfigMapRequest::CreateConfigMapRequest() :
    m_edgeUnitIDHasBeenSet(false),
    m_configMapNameHasBeenSet(false),
    m_configMapDataHasBeenSet(false),
    m_configMapNamespaceHasBeenSet(false)
{
}

string CreateConfigMapRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_edgeUnitIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitID, allocator);
    }

    if (m_configMapNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigMapName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configMapName.c_str(), allocator).Move(), allocator);
    }

    if (m_configMapDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigMapData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configMapData.begin(); itr != m_configMapData.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_configMapNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigMapNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configMapNamespace.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateConfigMapRequest::GetEdgeUnitID() const
{
    return m_edgeUnitID;
}

void CreateConfigMapRequest::SetEdgeUnitID(const uint64_t& _edgeUnitID)
{
    m_edgeUnitID = _edgeUnitID;
    m_edgeUnitIDHasBeenSet = true;
}

bool CreateConfigMapRequest::EdgeUnitIDHasBeenSet() const
{
    return m_edgeUnitIDHasBeenSet;
}

string CreateConfigMapRequest::GetConfigMapName() const
{
    return m_configMapName;
}

void CreateConfigMapRequest::SetConfigMapName(const string& _configMapName)
{
    m_configMapName = _configMapName;
    m_configMapNameHasBeenSet = true;
}

bool CreateConfigMapRequest::ConfigMapNameHasBeenSet() const
{
    return m_configMapNameHasBeenSet;
}

vector<KeyValueObj> CreateConfigMapRequest::GetConfigMapData() const
{
    return m_configMapData;
}

void CreateConfigMapRequest::SetConfigMapData(const vector<KeyValueObj>& _configMapData)
{
    m_configMapData = _configMapData;
    m_configMapDataHasBeenSet = true;
}

bool CreateConfigMapRequest::ConfigMapDataHasBeenSet() const
{
    return m_configMapDataHasBeenSet;
}

string CreateConfigMapRequest::GetConfigMapNamespace() const
{
    return m_configMapNamespace;
}

void CreateConfigMapRequest::SetConfigMapNamespace(const string& _configMapNamespace)
{
    m_configMapNamespace = _configMapNamespace;
    m_configMapNamespaceHasBeenSet = true;
}

bool CreateConfigMapRequest::ConfigMapNamespaceHasBeenSet() const
{
    return m_configMapNamespaceHasBeenSet;
}


