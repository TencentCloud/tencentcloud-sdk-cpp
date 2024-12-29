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

#include <tencentcloud/oceanus/v20190422/model/SqlGatewayItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

SqlGatewayItem::SqlGatewayItem() :
    m_serialIdHasBeenSet(false),
    m_flinkVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_resourceRefsHasBeenSet(false),
    m_cuSpecHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false)
{
}

CoreInternalOutcome SqlGatewayItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SerialId") && !value["SerialId"].IsNull())
    {
        if (!value["SerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlGatewayItem.SerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialId = string(value["SerialId"].GetString());
        m_serialIdHasBeenSet = true;
    }

    if (value.HasMember("FlinkVersion") && !value["FlinkVersion"].IsNull())
    {
        if (!value["FlinkVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlGatewayItem.FlinkVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flinkVersion = string(value["FlinkVersion"].GetString());
        m_flinkVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SqlGatewayItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlGatewayItem.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("ResourceRefs") && !value["ResourceRefs"].IsNull())
    {
        if (!value["ResourceRefs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SqlGatewayItem.ResourceRefs` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceRefs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GatewayRefItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceRefs.push_back(item);
        }
        m_resourceRefsHasBeenSet = true;
    }

    if (value.HasMember("CuSpec") && !value["CuSpec"].IsNull())
    {
        if (!value["CuSpec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SqlGatewayItem.CuSpec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cuSpec = value["CuSpec"].GetDouble();
        m_cuSpecHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlGatewayItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlGatewayItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SqlGatewayItem.Properties` is not array type"));

        const rapidjson::Value &tmpValue = value["Properties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Property item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SqlGatewayItem.Cpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetDouble();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SqlGatewayItem.Mem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetDouble();
        m_memHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SqlGatewayItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialId.c_str(), allocator).Move(), allocator);
    }

    if (m_flinkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlinkVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flinkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRefsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRefs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceRefs.begin(); itr != m_resourceRefs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cuSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CuSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cuSpec, allocator);
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

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

}


string SqlGatewayItem::GetSerialId() const
{
    return m_serialId;
}

void SqlGatewayItem::SetSerialId(const string& _serialId)
{
    m_serialId = _serialId;
    m_serialIdHasBeenSet = true;
}

bool SqlGatewayItem::SerialIdHasBeenSet() const
{
    return m_serialIdHasBeenSet;
}

string SqlGatewayItem::GetFlinkVersion() const
{
    return m_flinkVersion;
}

void SqlGatewayItem::SetFlinkVersion(const string& _flinkVersion)
{
    m_flinkVersion = _flinkVersion;
    m_flinkVersionHasBeenSet = true;
}

bool SqlGatewayItem::FlinkVersionHasBeenSet() const
{
    return m_flinkVersionHasBeenSet;
}

int64_t SqlGatewayItem::GetStatus() const
{
    return m_status;
}

void SqlGatewayItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SqlGatewayItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SqlGatewayItem::GetCreatorUin() const
{
    return m_creatorUin;
}

void SqlGatewayItem::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool SqlGatewayItem::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

vector<GatewayRefItem> SqlGatewayItem::GetResourceRefs() const
{
    return m_resourceRefs;
}

void SqlGatewayItem::SetResourceRefs(const vector<GatewayRefItem>& _resourceRefs)
{
    m_resourceRefs = _resourceRefs;
    m_resourceRefsHasBeenSet = true;
}

bool SqlGatewayItem::ResourceRefsHasBeenSet() const
{
    return m_resourceRefsHasBeenSet;
}

double SqlGatewayItem::GetCuSpec() const
{
    return m_cuSpec;
}

void SqlGatewayItem::SetCuSpec(const double& _cuSpec)
{
    m_cuSpec = _cuSpec;
    m_cuSpecHasBeenSet = true;
}

bool SqlGatewayItem::CuSpecHasBeenSet() const
{
    return m_cuSpecHasBeenSet;
}

string SqlGatewayItem::GetCreateTime() const
{
    return m_createTime;
}

void SqlGatewayItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SqlGatewayItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SqlGatewayItem::GetUpdateTime() const
{
    return m_updateTime;
}

void SqlGatewayItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SqlGatewayItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<Property> SqlGatewayItem::GetProperties() const
{
    return m_properties;
}

void SqlGatewayItem::SetProperties(const vector<Property>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool SqlGatewayItem::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

double SqlGatewayItem::GetCpu() const
{
    return m_cpu;
}

void SqlGatewayItem::SetCpu(const double& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool SqlGatewayItem::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

double SqlGatewayItem::GetMem() const
{
    return m_mem;
}

void SqlGatewayItem::SetMem(const double& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool SqlGatewayItem::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

