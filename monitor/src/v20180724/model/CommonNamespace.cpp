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

#include <tencentcloud/monitor/v20180724/model/CommonNamespace.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

CommonNamespace::CommonNamespace() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_configHasBeenSet(false),
    m_availableRegionsHasBeenSet(false),
    m_sortIdHasBeenSet(false),
    m_dashboardIdHasBeenSet(false)
{
}

CoreInternalOutcome CommonNamespace::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonNamespace.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonNamespace.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonNamespace.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonNamespace.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonNamespace.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("AvailableRegions") && !value["AvailableRegions"].IsNull())
    {
        if (!value["AvailableRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CommonNamespace.AvailableRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["AvailableRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_availableRegions.push_back((*itr).GetString());
        }
        m_availableRegionsHasBeenSet = true;
    }

    if (value.HasMember("SortId") && !value["SortId"].IsNull())
    {
        if (!value["SortId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonNamespace.SortId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sortId = value["SortId"].GetInt64();
        m_sortIdHasBeenSet = true;
    }

    if (value.HasMember("DashboardId") && !value["DashboardId"].IsNull())
    {
        if (!value["DashboardId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonNamespace.DashboardId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dashboardId = string(value["DashboardId"].GetString());
        m_dashboardIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonNamespace::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_availableRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_availableRegions.begin(); itr != m_availableRegions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sortId, allocator);
    }

    if (m_dashboardIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashboardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dashboardId.c_str(), allocator).Move(), allocator);
    }

}


string CommonNamespace::GetId() const
{
    return m_id;
}

void CommonNamespace::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CommonNamespace::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CommonNamespace::GetName() const
{
    return m_name;
}

void CommonNamespace::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CommonNamespace::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CommonNamespace::GetValue() const
{
    return m_value;
}

void CommonNamespace::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool CommonNamespace::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string CommonNamespace::GetProductName() const
{
    return m_productName;
}

void CommonNamespace::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool CommonNamespace::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string CommonNamespace::GetConfig() const
{
    return m_config;
}

void CommonNamespace::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool CommonNamespace::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

vector<string> CommonNamespace::GetAvailableRegions() const
{
    return m_availableRegions;
}

void CommonNamespace::SetAvailableRegions(const vector<string>& _availableRegions)
{
    m_availableRegions = _availableRegions;
    m_availableRegionsHasBeenSet = true;
}

bool CommonNamespace::AvailableRegionsHasBeenSet() const
{
    return m_availableRegionsHasBeenSet;
}

int64_t CommonNamespace::GetSortId() const
{
    return m_sortId;
}

void CommonNamespace::SetSortId(const int64_t& _sortId)
{
    m_sortId = _sortId;
    m_sortIdHasBeenSet = true;
}

bool CommonNamespace::SortIdHasBeenSet() const
{
    return m_sortIdHasBeenSet;
}

string CommonNamespace::GetDashboardId() const
{
    return m_dashboardId;
}

void CommonNamespace::SetDashboardId(const string& _dashboardId)
{
    m_dashboardId = _dashboardId;
    m_dashboardIdHasBeenSet = true;
}

bool CommonNamespace::DashboardIdHasBeenSet() const
{
    return m_dashboardIdHasBeenSet;
}

