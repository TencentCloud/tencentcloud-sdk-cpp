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

#include <tencentcloud/tke/v20180525/model/ClusterLevelAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ClusterLevelAttribute::ClusterLevelAttribute() :
    m_nameHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_podCountHasBeenSet(false),
    m_configMapCountHasBeenSet(false),
    m_rSCountHasBeenSet(false),
    m_cRDCountHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_otherCountHasBeenSet(false)
{
}

CoreInternalOutcome ClusterLevelAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelAttribute.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelAttribute.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelAttribute.NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("PodCount") && !value["PodCount"].IsNull())
    {
        if (!value["PodCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelAttribute.PodCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_podCount = value["PodCount"].GetUint64();
        m_podCountHasBeenSet = true;
    }

    if (value.HasMember("ConfigMapCount") && !value["ConfigMapCount"].IsNull())
    {
        if (!value["ConfigMapCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelAttribute.ConfigMapCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_configMapCount = value["ConfigMapCount"].GetUint64();
        m_configMapCountHasBeenSet = true;
    }

    if (value.HasMember("RSCount") && !value["RSCount"].IsNull())
    {
        if (!value["RSCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelAttribute.RSCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rSCount = value["RSCount"].GetUint64();
        m_rSCountHasBeenSet = true;
    }

    if (value.HasMember("CRDCount") && !value["CRDCount"].IsNull())
    {
        if (!value["CRDCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelAttribute.CRDCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cRDCount = value["CRDCount"].GetUint64();
        m_cRDCountHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelAttribute.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("OtherCount") && !value["OtherCount"].IsNull())
    {
        if (!value["OtherCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelAttribute.OtherCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_otherCount = value["OtherCount"].GetUint64();
        m_otherCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterLevelAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_podCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podCount, allocator);
    }

    if (m_configMapCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigMapCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configMapCount, allocator);
    }

    if (m_rSCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RSCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rSCount, allocator);
    }

    if (m_cRDCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CRDCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cRDCount, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_otherCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_otherCount, allocator);
    }

}


string ClusterLevelAttribute::GetName() const
{
    return m_name;
}

void ClusterLevelAttribute::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ClusterLevelAttribute::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ClusterLevelAttribute::GetAlias() const
{
    return m_alias;
}

void ClusterLevelAttribute::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool ClusterLevelAttribute::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

uint64_t ClusterLevelAttribute::GetNodeCount() const
{
    return m_nodeCount;
}

void ClusterLevelAttribute::SetNodeCount(const uint64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool ClusterLevelAttribute::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

uint64_t ClusterLevelAttribute::GetPodCount() const
{
    return m_podCount;
}

void ClusterLevelAttribute::SetPodCount(const uint64_t& _podCount)
{
    m_podCount = _podCount;
    m_podCountHasBeenSet = true;
}

bool ClusterLevelAttribute::PodCountHasBeenSet() const
{
    return m_podCountHasBeenSet;
}

uint64_t ClusterLevelAttribute::GetConfigMapCount() const
{
    return m_configMapCount;
}

void ClusterLevelAttribute::SetConfigMapCount(const uint64_t& _configMapCount)
{
    m_configMapCount = _configMapCount;
    m_configMapCountHasBeenSet = true;
}

bool ClusterLevelAttribute::ConfigMapCountHasBeenSet() const
{
    return m_configMapCountHasBeenSet;
}

uint64_t ClusterLevelAttribute::GetRSCount() const
{
    return m_rSCount;
}

void ClusterLevelAttribute::SetRSCount(const uint64_t& _rSCount)
{
    m_rSCount = _rSCount;
    m_rSCountHasBeenSet = true;
}

bool ClusterLevelAttribute::RSCountHasBeenSet() const
{
    return m_rSCountHasBeenSet;
}

uint64_t ClusterLevelAttribute::GetCRDCount() const
{
    return m_cRDCount;
}

void ClusterLevelAttribute::SetCRDCount(const uint64_t& _cRDCount)
{
    m_cRDCount = _cRDCount;
    m_cRDCountHasBeenSet = true;
}

bool ClusterLevelAttribute::CRDCountHasBeenSet() const
{
    return m_cRDCountHasBeenSet;
}

bool ClusterLevelAttribute::GetEnable() const
{
    return m_enable;
}

void ClusterLevelAttribute::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ClusterLevelAttribute::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t ClusterLevelAttribute::GetOtherCount() const
{
    return m_otherCount;
}

void ClusterLevelAttribute::SetOtherCount(const uint64_t& _otherCount)
{
    m_otherCount = _otherCount;
    m_otherCountHasBeenSet = true;
}

bool ClusterLevelAttribute::OtherCountHasBeenSet() const
{
    return m_otherCountHasBeenSet;
}

