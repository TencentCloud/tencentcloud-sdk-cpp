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

#include <tencentcloud/dsgc/v20190723/model/DspaCOSDiscoveryTaskDataSourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaCOSDiscoveryTaskDataSourceInfo::DspaCOSDiscoveryTaskDataSourceInfo() :
    m_dataSourceIdHasBeenSet(false),
    m_proxyAddressHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_resourceRegionHasBeenSet(false)
{
}

CoreInternalOutcome DspaCOSDiscoveryTaskDataSourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskDataSourceInfo.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyAddress") && !value["ProxyAddress"].IsNull())
    {
        if (!value["ProxyAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskDataSourceInfo.ProxyAddress` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_proxyAddress.push_back((*itr).GetString());
        }
        m_proxyAddressHasBeenSet = true;
    }

    if (value.HasMember("DataSourceName") && !value["DataSourceName"].IsNull())
    {
        if (!value["DataSourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskDataSourceInfo.DataSourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceName = string(value["DataSourceName"].GetString());
        m_dataSourceNameHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskDataSourceInfo.Condition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_condition.Deserialize(value["Condition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("ResourceRegion") && !value["ResourceRegion"].IsNull())
    {
        if (!value["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskDataSourceInfo.ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(value["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaCOSDiscoveryTaskDataSourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_proxyAddress.begin(); itr != m_proxyAddress.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataSourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_condition.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

}


string DspaCOSDiscoveryTaskDataSourceInfo::GetDataSourceId() const
{
    return m_dataSourceId;
}

void DspaCOSDiscoveryTaskDataSourceInfo::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskDataSourceInfo::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

vector<string> DspaCOSDiscoveryTaskDataSourceInfo::GetProxyAddress() const
{
    return m_proxyAddress;
}

void DspaCOSDiscoveryTaskDataSourceInfo::SetProxyAddress(const vector<string>& _proxyAddress)
{
    m_proxyAddress = _proxyAddress;
    m_proxyAddressHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskDataSourceInfo::ProxyAddressHasBeenSet() const
{
    return m_proxyAddressHasBeenSet;
}

string DspaCOSDiscoveryTaskDataSourceInfo::GetDataSourceName() const
{
    return m_dataSourceName;
}

void DspaCOSDiscoveryTaskDataSourceInfo::SetDataSourceName(const string& _dataSourceName)
{
    m_dataSourceName = _dataSourceName;
    m_dataSourceNameHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskDataSourceInfo::DataSourceNameHasBeenSet() const
{
    return m_dataSourceNameHasBeenSet;
}

DspaDiscoveryTaskCOSCondition DspaCOSDiscoveryTaskDataSourceInfo::GetCondition() const
{
    return m_condition;
}

void DspaCOSDiscoveryTaskDataSourceInfo::SetCondition(const DspaDiscoveryTaskCOSCondition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskDataSourceInfo::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

string DspaCOSDiscoveryTaskDataSourceInfo::GetResourceRegion() const
{
    return m_resourceRegion;
}

void DspaCOSDiscoveryTaskDataSourceInfo::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskDataSourceInfo::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

