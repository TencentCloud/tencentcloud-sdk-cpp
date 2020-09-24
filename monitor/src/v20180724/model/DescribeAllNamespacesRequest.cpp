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

#include <tencentcloud/monitor/v20180724/model/DescribeAllNamespacesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace rapidjson;
using namespace std;

DescribeAllNamespacesRequest::DescribeAllNamespacesRequest() :
    m_sceneTypeHasBeenSet(false),
    m_moduleHasBeenSet(false),
    m_monitorTypesHasBeenSet(false),
    m_idsHasBeenSet(false)
{
}

string DescribeAllNamespacesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sceneTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sceneType.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorTypesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MonitorTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_monitorTypes.begin(); itr != m_monitorTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_idsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_ids.begin(); itr != m_ids.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAllNamespacesRequest::GetSceneType() const
{
    return m_sceneType;
}

void DescribeAllNamespacesRequest::SetSceneType(const string& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool DescribeAllNamespacesRequest::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

string DescribeAllNamespacesRequest::GetModule() const
{
    return m_module;
}

void DescribeAllNamespacesRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DescribeAllNamespacesRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

vector<string> DescribeAllNamespacesRequest::GetMonitorTypes() const
{
    return m_monitorTypes;
}

void DescribeAllNamespacesRequest::SetMonitorTypes(const vector<string>& _monitorTypes)
{
    m_monitorTypes = _monitorTypes;
    m_monitorTypesHasBeenSet = true;
}

bool DescribeAllNamespacesRequest::MonitorTypesHasBeenSet() const
{
    return m_monitorTypesHasBeenSet;
}

vector<string> DescribeAllNamespacesRequest::GetIds() const
{
    return m_ids;
}

void DescribeAllNamespacesRequest::SetIds(const vector<string>& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool DescribeAllNamespacesRequest::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}


