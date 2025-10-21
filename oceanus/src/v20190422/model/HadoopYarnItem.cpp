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

#include <tencentcloud/oceanus/v20190422/model/HadoopYarnItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

HadoopYarnItem::HadoopYarnItem() :
    m_clusterGroupSerialIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_configHasBeenSet(false),
    m_creatorUinHasBeenSet(false)
{
}

CoreInternalOutcome HadoopYarnItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterGroupSerialId") && !value["ClusterGroupSerialId"].IsNull())
    {
        if (!value["ClusterGroupSerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HadoopYarnItem.ClusterGroupSerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterGroupSerialId = string(value["ClusterGroupSerialId"].GetString());
        m_clusterGroupSerialIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HadoopYarnItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HadoopYarnItem.Cpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetDouble();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HadoopYarnItem.Mem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetDouble();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HadoopYarnItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HadoopYarnItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HadoopYarnItem.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HadoopYarnItem.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HadoopYarnItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterGroupSerialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterGroupSerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterGroupSerialId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

}


string HadoopYarnItem::GetClusterGroupSerialId() const
{
    return m_clusterGroupSerialId;
}

void HadoopYarnItem::SetClusterGroupSerialId(const string& _clusterGroupSerialId)
{
    m_clusterGroupSerialId = _clusterGroupSerialId;
    m_clusterGroupSerialIdHasBeenSet = true;
}

bool HadoopYarnItem::ClusterGroupSerialIdHasBeenSet() const
{
    return m_clusterGroupSerialIdHasBeenSet;
}

int64_t HadoopYarnItem::GetStatus() const
{
    return m_status;
}

void HadoopYarnItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool HadoopYarnItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

double HadoopYarnItem::GetCpu() const
{
    return m_cpu;
}

void HadoopYarnItem::SetCpu(const double& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool HadoopYarnItem::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

double HadoopYarnItem::GetMem() const
{
    return m_mem;
}

void HadoopYarnItem::SetMem(const double& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool HadoopYarnItem::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

string HadoopYarnItem::GetCreateTime() const
{
    return m_createTime;
}

void HadoopYarnItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HadoopYarnItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string HadoopYarnItem::GetUpdateTime() const
{
    return m_updateTime;
}

void HadoopYarnItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool HadoopYarnItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string HadoopYarnItem::GetConfig() const
{
    return m_config;
}

void HadoopYarnItem::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool HadoopYarnItem::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string HadoopYarnItem::GetCreatorUin() const
{
    return m_creatorUin;
}

void HadoopYarnItem::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool HadoopYarnItem::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

