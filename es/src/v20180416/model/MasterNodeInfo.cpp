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

#include <tencentcloud/es/v20180416/model/MasterNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

MasterNodeInfo::MasterNodeInfo() :
    m_enableDedicatedMasterHasBeenSet(false),
    m_masterNodeTypeHasBeenSet(false),
    m_masterNodeNumHasBeenSet(false),
    m_masterNodeCpuNumHasBeenSet(false),
    m_masterNodeMemSizeHasBeenSet(false),
    m_masterNodeDiskSizeHasBeenSet(false),
    m_masterNodeDiskTypeHasBeenSet(false)
{
}

CoreInternalOutcome MasterNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableDedicatedMaster") && !value["EnableDedicatedMaster"].IsNull())
    {
        if (!value["EnableDedicatedMaster"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MasterNodeInfo.EnableDedicatedMaster` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableDedicatedMaster = value["EnableDedicatedMaster"].GetBool();
        m_enableDedicatedMasterHasBeenSet = true;
    }

    if (value.HasMember("MasterNodeType") && !value["MasterNodeType"].IsNull())
    {
        if (!value["MasterNodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MasterNodeInfo.MasterNodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterNodeType = string(value["MasterNodeType"].GetString());
        m_masterNodeTypeHasBeenSet = true;
    }

    if (value.HasMember("MasterNodeNum") && !value["MasterNodeNum"].IsNull())
    {
        if (!value["MasterNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MasterNodeInfo.MasterNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_masterNodeNum = value["MasterNodeNum"].GetUint64();
        m_masterNodeNumHasBeenSet = true;
    }

    if (value.HasMember("MasterNodeCpuNum") && !value["MasterNodeCpuNum"].IsNull())
    {
        if (!value["MasterNodeCpuNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MasterNodeInfo.MasterNodeCpuNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_masterNodeCpuNum = value["MasterNodeCpuNum"].GetUint64();
        m_masterNodeCpuNumHasBeenSet = true;
    }

    if (value.HasMember("MasterNodeMemSize") && !value["MasterNodeMemSize"].IsNull())
    {
        if (!value["MasterNodeMemSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MasterNodeInfo.MasterNodeMemSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_masterNodeMemSize = value["MasterNodeMemSize"].GetUint64();
        m_masterNodeMemSizeHasBeenSet = true;
    }

    if (value.HasMember("MasterNodeDiskSize") && !value["MasterNodeDiskSize"].IsNull())
    {
        if (!value["MasterNodeDiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MasterNodeInfo.MasterNodeDiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_masterNodeDiskSize = value["MasterNodeDiskSize"].GetUint64();
        m_masterNodeDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("MasterNodeDiskType") && !value["MasterNodeDiskType"].IsNull())
    {
        if (!value["MasterNodeDiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MasterNodeInfo.MasterNodeDiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterNodeDiskType = string(value["MasterNodeDiskType"].GetString());
        m_masterNodeDiskTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MasterNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableDedicatedMasterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDedicatedMaster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableDedicatedMaster, allocator);
    }

    if (m_masterNodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterNodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_masterNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_masterNodeNum, allocator);
    }

    if (m_masterNodeCpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNodeCpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_masterNodeCpuNum, allocator);
    }

    if (m_masterNodeMemSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNodeMemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_masterNodeMemSize, allocator);
    }

    if (m_masterNodeDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNodeDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_masterNodeDiskSize, allocator);
    }

    if (m_masterNodeDiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNodeDiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterNodeDiskType.c_str(), allocator).Move(), allocator);
    }

}


bool MasterNodeInfo::GetEnableDedicatedMaster() const
{
    return m_enableDedicatedMaster;
}

void MasterNodeInfo::SetEnableDedicatedMaster(const bool& _enableDedicatedMaster)
{
    m_enableDedicatedMaster = _enableDedicatedMaster;
    m_enableDedicatedMasterHasBeenSet = true;
}

bool MasterNodeInfo::EnableDedicatedMasterHasBeenSet() const
{
    return m_enableDedicatedMasterHasBeenSet;
}

string MasterNodeInfo::GetMasterNodeType() const
{
    return m_masterNodeType;
}

void MasterNodeInfo::SetMasterNodeType(const string& _masterNodeType)
{
    m_masterNodeType = _masterNodeType;
    m_masterNodeTypeHasBeenSet = true;
}

bool MasterNodeInfo::MasterNodeTypeHasBeenSet() const
{
    return m_masterNodeTypeHasBeenSet;
}

uint64_t MasterNodeInfo::GetMasterNodeNum() const
{
    return m_masterNodeNum;
}

void MasterNodeInfo::SetMasterNodeNum(const uint64_t& _masterNodeNum)
{
    m_masterNodeNum = _masterNodeNum;
    m_masterNodeNumHasBeenSet = true;
}

bool MasterNodeInfo::MasterNodeNumHasBeenSet() const
{
    return m_masterNodeNumHasBeenSet;
}

uint64_t MasterNodeInfo::GetMasterNodeCpuNum() const
{
    return m_masterNodeCpuNum;
}

void MasterNodeInfo::SetMasterNodeCpuNum(const uint64_t& _masterNodeCpuNum)
{
    m_masterNodeCpuNum = _masterNodeCpuNum;
    m_masterNodeCpuNumHasBeenSet = true;
}

bool MasterNodeInfo::MasterNodeCpuNumHasBeenSet() const
{
    return m_masterNodeCpuNumHasBeenSet;
}

uint64_t MasterNodeInfo::GetMasterNodeMemSize() const
{
    return m_masterNodeMemSize;
}

void MasterNodeInfo::SetMasterNodeMemSize(const uint64_t& _masterNodeMemSize)
{
    m_masterNodeMemSize = _masterNodeMemSize;
    m_masterNodeMemSizeHasBeenSet = true;
}

bool MasterNodeInfo::MasterNodeMemSizeHasBeenSet() const
{
    return m_masterNodeMemSizeHasBeenSet;
}

uint64_t MasterNodeInfo::GetMasterNodeDiskSize() const
{
    return m_masterNodeDiskSize;
}

void MasterNodeInfo::SetMasterNodeDiskSize(const uint64_t& _masterNodeDiskSize)
{
    m_masterNodeDiskSize = _masterNodeDiskSize;
    m_masterNodeDiskSizeHasBeenSet = true;
}

bool MasterNodeInfo::MasterNodeDiskSizeHasBeenSet() const
{
    return m_masterNodeDiskSizeHasBeenSet;
}

string MasterNodeInfo::GetMasterNodeDiskType() const
{
    return m_masterNodeDiskType;
}

void MasterNodeInfo::SetMasterNodeDiskType(const string& _masterNodeDiskType)
{
    m_masterNodeDiskType = _masterNodeDiskType;
    m_masterNodeDiskTypeHasBeenSet = true;
}

bool MasterNodeInfo::MasterNodeDiskTypeHasBeenSet() const
{
    return m_masterNodeDiskTypeHasBeenSet;
}

