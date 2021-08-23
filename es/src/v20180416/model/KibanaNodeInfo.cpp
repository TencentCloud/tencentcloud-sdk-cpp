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

#include <tencentcloud/es/v20180416/model/KibanaNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

KibanaNodeInfo::KibanaNodeInfo() :
    m_kibanaNodeTypeHasBeenSet(false),
    m_kibanaNodeNumHasBeenSet(false),
    m_kibanaNodeCpuNumHasBeenSet(false),
    m_kibanaNodeMemSizeHasBeenSet(false),
    m_kibanaNodeDiskTypeHasBeenSet(false),
    m_kibanaNodeDiskSizeHasBeenSet(false)
{
}

CoreInternalOutcome KibanaNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KibanaNodeType") && !value["KibanaNodeType"].IsNull())
    {
        if (!value["KibanaNodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KibanaNodeInfo.KibanaNodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaNodeType = string(value["KibanaNodeType"].GetString());
        m_kibanaNodeTypeHasBeenSet = true;
    }

    if (value.HasMember("KibanaNodeNum") && !value["KibanaNodeNum"].IsNull())
    {
        if (!value["KibanaNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KibanaNodeInfo.KibanaNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaNodeNum = value["KibanaNodeNum"].GetUint64();
        m_kibanaNodeNumHasBeenSet = true;
    }

    if (value.HasMember("KibanaNodeCpuNum") && !value["KibanaNodeCpuNum"].IsNull())
    {
        if (!value["KibanaNodeCpuNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KibanaNodeInfo.KibanaNodeCpuNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaNodeCpuNum = value["KibanaNodeCpuNum"].GetUint64();
        m_kibanaNodeCpuNumHasBeenSet = true;
    }

    if (value.HasMember("KibanaNodeMemSize") && !value["KibanaNodeMemSize"].IsNull())
    {
        if (!value["KibanaNodeMemSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KibanaNodeInfo.KibanaNodeMemSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaNodeMemSize = value["KibanaNodeMemSize"].GetUint64();
        m_kibanaNodeMemSizeHasBeenSet = true;
    }

    if (value.HasMember("KibanaNodeDiskType") && !value["KibanaNodeDiskType"].IsNull())
    {
        if (!value["KibanaNodeDiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KibanaNodeInfo.KibanaNodeDiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaNodeDiskType = string(value["KibanaNodeDiskType"].GetString());
        m_kibanaNodeDiskTypeHasBeenSet = true;
    }

    if (value.HasMember("KibanaNodeDiskSize") && !value["KibanaNodeDiskSize"].IsNull())
    {
        if (!value["KibanaNodeDiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KibanaNodeInfo.KibanaNodeDiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaNodeDiskSize = value["KibanaNodeDiskSize"].GetUint64();
        m_kibanaNodeDiskSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KibanaNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kibanaNodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaNodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kibanaNodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_kibanaNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kibanaNodeNum, allocator);
    }

    if (m_kibanaNodeCpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaNodeCpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kibanaNodeCpuNum, allocator);
    }

    if (m_kibanaNodeMemSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaNodeMemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kibanaNodeMemSize, allocator);
    }

    if (m_kibanaNodeDiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaNodeDiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kibanaNodeDiskType.c_str(), allocator).Move(), allocator);
    }

    if (m_kibanaNodeDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaNodeDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kibanaNodeDiskSize, allocator);
    }

}


string KibanaNodeInfo::GetKibanaNodeType() const
{
    return m_kibanaNodeType;
}

void KibanaNodeInfo::SetKibanaNodeType(const string& _kibanaNodeType)
{
    m_kibanaNodeType = _kibanaNodeType;
    m_kibanaNodeTypeHasBeenSet = true;
}

bool KibanaNodeInfo::KibanaNodeTypeHasBeenSet() const
{
    return m_kibanaNodeTypeHasBeenSet;
}

uint64_t KibanaNodeInfo::GetKibanaNodeNum() const
{
    return m_kibanaNodeNum;
}

void KibanaNodeInfo::SetKibanaNodeNum(const uint64_t& _kibanaNodeNum)
{
    m_kibanaNodeNum = _kibanaNodeNum;
    m_kibanaNodeNumHasBeenSet = true;
}

bool KibanaNodeInfo::KibanaNodeNumHasBeenSet() const
{
    return m_kibanaNodeNumHasBeenSet;
}

uint64_t KibanaNodeInfo::GetKibanaNodeCpuNum() const
{
    return m_kibanaNodeCpuNum;
}

void KibanaNodeInfo::SetKibanaNodeCpuNum(const uint64_t& _kibanaNodeCpuNum)
{
    m_kibanaNodeCpuNum = _kibanaNodeCpuNum;
    m_kibanaNodeCpuNumHasBeenSet = true;
}

bool KibanaNodeInfo::KibanaNodeCpuNumHasBeenSet() const
{
    return m_kibanaNodeCpuNumHasBeenSet;
}

uint64_t KibanaNodeInfo::GetKibanaNodeMemSize() const
{
    return m_kibanaNodeMemSize;
}

void KibanaNodeInfo::SetKibanaNodeMemSize(const uint64_t& _kibanaNodeMemSize)
{
    m_kibanaNodeMemSize = _kibanaNodeMemSize;
    m_kibanaNodeMemSizeHasBeenSet = true;
}

bool KibanaNodeInfo::KibanaNodeMemSizeHasBeenSet() const
{
    return m_kibanaNodeMemSizeHasBeenSet;
}

string KibanaNodeInfo::GetKibanaNodeDiskType() const
{
    return m_kibanaNodeDiskType;
}

void KibanaNodeInfo::SetKibanaNodeDiskType(const string& _kibanaNodeDiskType)
{
    m_kibanaNodeDiskType = _kibanaNodeDiskType;
    m_kibanaNodeDiskTypeHasBeenSet = true;
}

bool KibanaNodeInfo::KibanaNodeDiskTypeHasBeenSet() const
{
    return m_kibanaNodeDiskTypeHasBeenSet;
}

uint64_t KibanaNodeInfo::GetKibanaNodeDiskSize() const
{
    return m_kibanaNodeDiskSize;
}

void KibanaNodeInfo::SetKibanaNodeDiskSize(const uint64_t& _kibanaNodeDiskSize)
{
    m_kibanaNodeDiskSize = _kibanaNodeDiskSize;
    m_kibanaNodeDiskSizeHasBeenSet = true;
}

bool KibanaNodeInfo::KibanaNodeDiskSizeHasBeenSet() const
{
    return m_kibanaNodeDiskSizeHasBeenSet;
}

