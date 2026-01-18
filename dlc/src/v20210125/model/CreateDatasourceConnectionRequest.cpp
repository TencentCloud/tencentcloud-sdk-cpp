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

#include <tencentcloud/dlc/v20210125/model/CreateDatasourceConnectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateDatasourceConnectionRequest::CreateDatasourceConnectionRequest() :
    m_datasourceConnectionNameHasBeenSet(false),
    m_datasourceConnectionTypeHasBeenSet(false),
    m_datasourceConnectionConfigHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_datasourceConnectionDescHasBeenSet(false),
    m_dataEngineNamesHasBeenSet(false),
    m_networkConnectionNameHasBeenSet(false),
    m_networkConnectionDescHasBeenSet(false),
    m_networkConnectionTypeHasBeenSet(false),
    m_customConfigHasBeenSet(false)
{
}

string CreateDatasourceConnectionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceConnectionType.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_datasourceConnectionConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceConnectionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataEngineNames.begin(); itr != m_dataEngineNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_networkConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_networkConnectionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConnectionDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkConnectionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_networkConnectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConnectionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_networkConnectionType, allocator);
    }

    if (m_customConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customConfig.begin(); itr != m_customConfig.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDatasourceConnectionRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void CreateDatasourceConnectionRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool CreateDatasourceConnectionRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}

string CreateDatasourceConnectionRequest::GetDatasourceConnectionType() const
{
    return m_datasourceConnectionType;
}

void CreateDatasourceConnectionRequest::SetDatasourceConnectionType(const string& _datasourceConnectionType)
{
    m_datasourceConnectionType = _datasourceConnectionType;
    m_datasourceConnectionTypeHasBeenSet = true;
}

bool CreateDatasourceConnectionRequest::DatasourceConnectionTypeHasBeenSet() const
{
    return m_datasourceConnectionTypeHasBeenSet;
}

DatasourceConnectionConfig CreateDatasourceConnectionRequest::GetDatasourceConnectionConfig() const
{
    return m_datasourceConnectionConfig;
}

void CreateDatasourceConnectionRequest::SetDatasourceConnectionConfig(const DatasourceConnectionConfig& _datasourceConnectionConfig)
{
    m_datasourceConnectionConfig = _datasourceConnectionConfig;
    m_datasourceConnectionConfigHasBeenSet = true;
}

bool CreateDatasourceConnectionRequest::DatasourceConnectionConfigHasBeenSet() const
{
    return m_datasourceConnectionConfigHasBeenSet;
}

string CreateDatasourceConnectionRequest::GetServiceType() const
{
    return m_serviceType;
}

void CreateDatasourceConnectionRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CreateDatasourceConnectionRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string CreateDatasourceConnectionRequest::GetDatasourceConnectionDesc() const
{
    return m_datasourceConnectionDesc;
}

void CreateDatasourceConnectionRequest::SetDatasourceConnectionDesc(const string& _datasourceConnectionDesc)
{
    m_datasourceConnectionDesc = _datasourceConnectionDesc;
    m_datasourceConnectionDescHasBeenSet = true;
}

bool CreateDatasourceConnectionRequest::DatasourceConnectionDescHasBeenSet() const
{
    return m_datasourceConnectionDescHasBeenSet;
}

vector<string> CreateDatasourceConnectionRequest::GetDataEngineNames() const
{
    return m_dataEngineNames;
}

void CreateDatasourceConnectionRequest::SetDataEngineNames(const vector<string>& _dataEngineNames)
{
    m_dataEngineNames = _dataEngineNames;
    m_dataEngineNamesHasBeenSet = true;
}

bool CreateDatasourceConnectionRequest::DataEngineNamesHasBeenSet() const
{
    return m_dataEngineNamesHasBeenSet;
}

string CreateDatasourceConnectionRequest::GetNetworkConnectionName() const
{
    return m_networkConnectionName;
}

void CreateDatasourceConnectionRequest::SetNetworkConnectionName(const string& _networkConnectionName)
{
    m_networkConnectionName = _networkConnectionName;
    m_networkConnectionNameHasBeenSet = true;
}

bool CreateDatasourceConnectionRequest::NetworkConnectionNameHasBeenSet() const
{
    return m_networkConnectionNameHasBeenSet;
}

string CreateDatasourceConnectionRequest::GetNetworkConnectionDesc() const
{
    return m_networkConnectionDesc;
}

void CreateDatasourceConnectionRequest::SetNetworkConnectionDesc(const string& _networkConnectionDesc)
{
    m_networkConnectionDesc = _networkConnectionDesc;
    m_networkConnectionDescHasBeenSet = true;
}

bool CreateDatasourceConnectionRequest::NetworkConnectionDescHasBeenSet() const
{
    return m_networkConnectionDescHasBeenSet;
}

int64_t CreateDatasourceConnectionRequest::GetNetworkConnectionType() const
{
    return m_networkConnectionType;
}

void CreateDatasourceConnectionRequest::SetNetworkConnectionType(const int64_t& _networkConnectionType)
{
    m_networkConnectionType = _networkConnectionType;
    m_networkConnectionTypeHasBeenSet = true;
}

bool CreateDatasourceConnectionRequest::NetworkConnectionTypeHasBeenSet() const
{
    return m_networkConnectionTypeHasBeenSet;
}

vector<CustomConfig> CreateDatasourceConnectionRequest::GetCustomConfig() const
{
    return m_customConfig;
}

void CreateDatasourceConnectionRequest::SetCustomConfig(const vector<CustomConfig>& _customConfig)
{
    m_customConfig = _customConfig;
    m_customConfigHasBeenSet = true;
}

bool CreateDatasourceConnectionRequest::CustomConfigHasBeenSet() const
{
    return m_customConfigHasBeenSet;
}


