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

#include <tencentcloud/cdwpg/v20201230/model/ScaleOutInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

ScaleOutInstanceRequest::ScaleOutInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_scaleOutCountHasBeenSet(false)
{
}

string ScaleOutInstanceRequest::ToJsonString() const
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

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleOutCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleOutCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scaleOutCount, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScaleOutInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ScaleOutInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ScaleOutInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ScaleOutInstanceRequest::GetNodeType() const
{
    return m_nodeType;
}

void ScaleOutInstanceRequest::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ScaleOutInstanceRequest::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

int64_t ScaleOutInstanceRequest::GetScaleOutCount() const
{
    return m_scaleOutCount;
}

void ScaleOutInstanceRequest::SetScaleOutCount(const int64_t& _scaleOutCount)
{
    m_scaleOutCount = _scaleOutCount;
    m_scaleOutCountHasBeenSet = true;
}

bool ScaleOutInstanceRequest::ScaleOutCountHasBeenSet() const
{
    return m_scaleOutCountHasBeenSet;
}


