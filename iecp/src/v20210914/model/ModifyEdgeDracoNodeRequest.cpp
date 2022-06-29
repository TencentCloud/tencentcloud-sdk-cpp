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

#include <tencentcloud/iecp/v20210914/model/ModifyEdgeDracoNodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

ModifyEdgeDracoNodeRequest::ModifyEdgeDracoNodeRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_nodeInfoHasBeenSet(false),
    m_isResetHasBeenSet(false)
{
}

string ModifyEdgeDracoNodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_edgeUnitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitId, allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeId, allocator);
    }

    if (m_nodeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_isResetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isReset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyEdgeDracoNodeRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void ModifyEdgeDracoNodeRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool ModifyEdgeDracoNodeRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

uint64_t ModifyEdgeDracoNodeRequest::GetNodeId() const
{
    return m_nodeId;
}

void ModifyEdgeDracoNodeRequest::SetNodeId(const uint64_t& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool ModifyEdgeDracoNodeRequest::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

DracoNodeInfo ModifyEdgeDracoNodeRequest::GetNodeInfo() const
{
    return m_nodeInfo;
}

void ModifyEdgeDracoNodeRequest::SetNodeInfo(const DracoNodeInfo& _nodeInfo)
{
    m_nodeInfo = _nodeInfo;
    m_nodeInfoHasBeenSet = true;
}

bool ModifyEdgeDracoNodeRequest::NodeInfoHasBeenSet() const
{
    return m_nodeInfoHasBeenSet;
}

bool ModifyEdgeDracoNodeRequest::GetIsReset() const
{
    return m_isReset;
}

void ModifyEdgeDracoNodeRequest::SetIsReset(const bool& _isReset)
{
    m_isReset = _isReset;
    m_isResetHasBeenSet = true;
}

bool ModifyEdgeDracoNodeRequest::IsResetHasBeenSet() const
{
    return m_isResetHasBeenSet;
}


