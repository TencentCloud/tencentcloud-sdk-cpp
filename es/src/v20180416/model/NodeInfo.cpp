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

#include <tencentcloud/es/v20180416/model/NodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace rapidjson;
using namespace std;

NodeInfo::NodeInfo() :
    m_nodeNumHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_localDiskInfoHasBeenSet(false),
    m_diskCountHasBeenSet(false)
{
}

CoreInternalOutcome NodeInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeNum") && !value["NodeNum"].IsNull())
    {
        if (!value["NodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `NodeInfo.NodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeNum = value["NodeNum"].GetUint64();
        m_nodeNumHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Error("response `NodeInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `NodeInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Error("response `NodeInfo.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `NodeInfo.DiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetUint64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("LocalDiskInfo") && !value["LocalDiskInfo"].IsNull())
    {
        if (!value["LocalDiskInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `NodeInfo.LocalDiskInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_localDiskInfo.Deserialize(value["LocalDiskInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_localDiskInfoHasBeenSet = true;
    }

    if (value.HasMember("DiskCount") && !value["DiskCount"].IsNull())
    {
        if (!value["DiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `NodeInfo.DiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskCount = value["DiskCount"].GetUint64();
        m_diskCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nodeNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_localDiskInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LocalDiskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_localDiskInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diskCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskCount, allocator);
    }

}


uint64_t NodeInfo::GetNodeNum() const
{
    return m_nodeNum;
}

void NodeInfo::SetNodeNum(const uint64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool NodeInfo::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

string NodeInfo::GetNodeType() const
{
    return m_nodeType;
}

void NodeInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool NodeInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string NodeInfo::GetType() const
{
    return m_type;
}

void NodeInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool NodeInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string NodeInfo::GetDiskType() const
{
    return m_diskType;
}

void NodeInfo::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool NodeInfo::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

uint64_t NodeInfo::GetDiskSize() const
{
    return m_diskSize;
}

void NodeInfo::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool NodeInfo::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

LocalDiskInfo NodeInfo::GetLocalDiskInfo() const
{
    return m_localDiskInfo;
}

void NodeInfo::SetLocalDiskInfo(const LocalDiskInfo& _localDiskInfo)
{
    m_localDiskInfo = _localDiskInfo;
    m_localDiskInfoHasBeenSet = true;
}

bool NodeInfo::LocalDiskInfoHasBeenSet() const
{
    return m_localDiskInfoHasBeenSet;
}

uint64_t NodeInfo::GetDiskCount() const
{
    return m_diskCount;
}

void NodeInfo::SetDiskCount(const uint64_t& _diskCount)
{
    m_diskCount = _diskCount;
    m_diskCountHasBeenSet = true;
}

bool NodeInfo::DiskCountHasBeenSet() const
{
    return m_diskCountHasBeenSet;
}

