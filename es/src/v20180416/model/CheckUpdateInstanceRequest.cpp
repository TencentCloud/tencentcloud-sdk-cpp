/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/es/v20180416/model/CheckUpdateInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

CheckUpdateInstanceRequest::CheckUpdateInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_masterNodeNumHasBeenSet(false),
    m_masterNodeTypeHasBeenSet(false),
    m_nodeInfoListHasBeenSet(false),
    m_forceRestartHasBeenSet(false),
    m_scaleTypeHasBeenSet(false),
    m_multiZoneInfoHasBeenSet(false),
    m_webNodeTypeInfoHasBeenSet(false),
    m_cosBackupHasBeenSet(false),
    m_readWriteModeHasBeenSet(false)
{
}

string CheckUpdateInstanceRequest::ToJsonString() const
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

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_masterNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_masterNodeNum, allocator);
    }

    if (m_masterNodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_masterNodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeInfoList.begin(); itr != m_nodeInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_forceRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRestart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceRestart, allocator);
    }

    if (m_scaleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scaleType, allocator);
    }

    if (m_multiZoneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZoneInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiZoneInfo.begin(); itr != m_multiZoneInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_webNodeTypeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebNodeTypeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webNodeTypeInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cosBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBackup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosBackup.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_readWriteModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadWriteMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readWriteMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckUpdateInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CheckUpdateInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CheckUpdateInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t CheckUpdateInstanceRequest::GetNodeNum() const
{
    return m_nodeNum;
}

void CheckUpdateInstanceRequest::SetNodeNum(const uint64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool CheckUpdateInstanceRequest::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

string CheckUpdateInstanceRequest::GetNodeType() const
{
    return m_nodeType;
}

void CheckUpdateInstanceRequest::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool CheckUpdateInstanceRequest::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

uint64_t CheckUpdateInstanceRequest::GetDiskSize() const
{
    return m_diskSize;
}

void CheckUpdateInstanceRequest::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool CheckUpdateInstanceRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

uint64_t CheckUpdateInstanceRequest::GetMasterNodeNum() const
{
    return m_masterNodeNum;
}

void CheckUpdateInstanceRequest::SetMasterNodeNum(const uint64_t& _masterNodeNum)
{
    m_masterNodeNum = _masterNodeNum;
    m_masterNodeNumHasBeenSet = true;
}

bool CheckUpdateInstanceRequest::MasterNodeNumHasBeenSet() const
{
    return m_masterNodeNumHasBeenSet;
}

string CheckUpdateInstanceRequest::GetMasterNodeType() const
{
    return m_masterNodeType;
}

void CheckUpdateInstanceRequest::SetMasterNodeType(const string& _masterNodeType)
{
    m_masterNodeType = _masterNodeType;
    m_masterNodeTypeHasBeenSet = true;
}

bool CheckUpdateInstanceRequest::MasterNodeTypeHasBeenSet() const
{
    return m_masterNodeTypeHasBeenSet;
}

vector<NodeInfo> CheckUpdateInstanceRequest::GetNodeInfoList() const
{
    return m_nodeInfoList;
}

void CheckUpdateInstanceRequest::SetNodeInfoList(const vector<NodeInfo>& _nodeInfoList)
{
    m_nodeInfoList = _nodeInfoList;
    m_nodeInfoListHasBeenSet = true;
}

bool CheckUpdateInstanceRequest::NodeInfoListHasBeenSet() const
{
    return m_nodeInfoListHasBeenSet;
}

bool CheckUpdateInstanceRequest::GetForceRestart() const
{
    return m_forceRestart;
}

void CheckUpdateInstanceRequest::SetForceRestart(const bool& _forceRestart)
{
    m_forceRestart = _forceRestart;
    m_forceRestartHasBeenSet = true;
}

bool CheckUpdateInstanceRequest::ForceRestartHasBeenSet() const
{
    return m_forceRestartHasBeenSet;
}

int64_t CheckUpdateInstanceRequest::GetScaleType() const
{
    return m_scaleType;
}

void CheckUpdateInstanceRequest::SetScaleType(const int64_t& _scaleType)
{
    m_scaleType = _scaleType;
    m_scaleTypeHasBeenSet = true;
}

bool CheckUpdateInstanceRequest::ScaleTypeHasBeenSet() const
{
    return m_scaleTypeHasBeenSet;
}

vector<ZoneDetail> CheckUpdateInstanceRequest::GetMultiZoneInfo() const
{
    return m_multiZoneInfo;
}

void CheckUpdateInstanceRequest::SetMultiZoneInfo(const vector<ZoneDetail>& _multiZoneInfo)
{
    m_multiZoneInfo = _multiZoneInfo;
    m_multiZoneInfoHasBeenSet = true;
}

bool CheckUpdateInstanceRequest::MultiZoneInfoHasBeenSet() const
{
    return m_multiZoneInfoHasBeenSet;
}

WebNodeTypeInfo CheckUpdateInstanceRequest::GetWebNodeTypeInfo() const
{
    return m_webNodeTypeInfo;
}

void CheckUpdateInstanceRequest::SetWebNodeTypeInfo(const WebNodeTypeInfo& _webNodeTypeInfo)
{
    m_webNodeTypeInfo = _webNodeTypeInfo;
    m_webNodeTypeInfoHasBeenSet = true;
}

bool CheckUpdateInstanceRequest::WebNodeTypeInfoHasBeenSet() const
{
    return m_webNodeTypeInfoHasBeenSet;
}

CosBackup CheckUpdateInstanceRequest::GetCosBackup() const
{
    return m_cosBackup;
}

void CheckUpdateInstanceRequest::SetCosBackup(const CosBackup& _cosBackup)
{
    m_cosBackup = _cosBackup;
    m_cosBackupHasBeenSet = true;
}

bool CheckUpdateInstanceRequest::CosBackupHasBeenSet() const
{
    return m_cosBackupHasBeenSet;
}

int64_t CheckUpdateInstanceRequest::GetReadWriteMode() const
{
    return m_readWriteMode;
}

void CheckUpdateInstanceRequest::SetReadWriteMode(const int64_t& _readWriteMode)
{
    m_readWriteMode = _readWriteMode;
    m_readWriteModeHasBeenSet = true;
}

bool CheckUpdateInstanceRequest::ReadWriteModeHasBeenSet() const
{
    return m_readWriteModeHasBeenSet;
}


