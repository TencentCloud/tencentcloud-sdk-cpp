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

#include <tencentcloud/tke/v20180525/model/UpdateAddonRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

UpdateAddonRequest::UpdateAddonRequest() :
    m_clusterIdHasBeenSet(false),
    m_addonNameHasBeenSet(false),
    m_addonVersionHasBeenSet(false),
    m_rawValuesHasBeenSet(false),
    m_updateStrategyHasBeenSet(false),
    m_dryRunHasBeenSet(false)
{
}

string UpdateAddonRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_addonNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddonName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addonName.c_str(), allocator).Move(), allocator);
    }

    if (m_addonVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddonVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addonVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_rawValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawValues";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rawValues.c_str(), allocator).Move(), allocator);
    }

    if (m_updateStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateAddonRequest::GetClusterId() const
{
    return m_clusterId;
}

void UpdateAddonRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool UpdateAddonRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string UpdateAddonRequest::GetAddonName() const
{
    return m_addonName;
}

void UpdateAddonRequest::SetAddonName(const string& _addonName)
{
    m_addonName = _addonName;
    m_addonNameHasBeenSet = true;
}

bool UpdateAddonRequest::AddonNameHasBeenSet() const
{
    return m_addonNameHasBeenSet;
}

string UpdateAddonRequest::GetAddonVersion() const
{
    return m_addonVersion;
}

void UpdateAddonRequest::SetAddonVersion(const string& _addonVersion)
{
    m_addonVersion = _addonVersion;
    m_addonVersionHasBeenSet = true;
}

bool UpdateAddonRequest::AddonVersionHasBeenSet() const
{
    return m_addonVersionHasBeenSet;
}

string UpdateAddonRequest::GetRawValues() const
{
    return m_rawValues;
}

void UpdateAddonRequest::SetRawValues(const string& _rawValues)
{
    m_rawValues = _rawValues;
    m_rawValuesHasBeenSet = true;
}

bool UpdateAddonRequest::RawValuesHasBeenSet() const
{
    return m_rawValuesHasBeenSet;
}

string UpdateAddonRequest::GetUpdateStrategy() const
{
    return m_updateStrategy;
}

void UpdateAddonRequest::SetUpdateStrategy(const string& _updateStrategy)
{
    m_updateStrategy = _updateStrategy;
    m_updateStrategyHasBeenSet = true;
}

bool UpdateAddonRequest::UpdateStrategyHasBeenSet() const
{
    return m_updateStrategyHasBeenSet;
}

bool UpdateAddonRequest::GetDryRun() const
{
    return m_dryRun;
}

void UpdateAddonRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool UpdateAddonRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}


