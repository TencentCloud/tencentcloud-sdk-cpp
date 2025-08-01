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

#include <tencentcloud/dlc/v20210125/model/AssociateDatasourceHouseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

AssociateDatasourceHouseRequest::AssociateDatasourceHouseRequest() :
    m_datasourceConnectionNameHasBeenSet(false),
    m_datasourceConnectionTypeHasBeenSet(false),
    m_datasourceConnectionConfigHasBeenSet(false),
    m_dataEngineNamesHasBeenSet(false),
    m_networkConnectionTypeHasBeenSet(false),
    m_networkConnectionDescHasBeenSet(false)
{
}

string AssociateDatasourceHouseRequest::ToJsonString() const
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

    if (m_networkConnectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConnectionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_networkConnectionType, allocator);
    }

    if (m_networkConnectionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConnectionDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkConnectionDesc.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssociateDatasourceHouseRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void AssociateDatasourceHouseRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool AssociateDatasourceHouseRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}

string AssociateDatasourceHouseRequest::GetDatasourceConnectionType() const
{
    return m_datasourceConnectionType;
}

void AssociateDatasourceHouseRequest::SetDatasourceConnectionType(const string& _datasourceConnectionType)
{
    m_datasourceConnectionType = _datasourceConnectionType;
    m_datasourceConnectionTypeHasBeenSet = true;
}

bool AssociateDatasourceHouseRequest::DatasourceConnectionTypeHasBeenSet() const
{
    return m_datasourceConnectionTypeHasBeenSet;
}

DatasourceConnectionConfig AssociateDatasourceHouseRequest::GetDatasourceConnectionConfig() const
{
    return m_datasourceConnectionConfig;
}

void AssociateDatasourceHouseRequest::SetDatasourceConnectionConfig(const DatasourceConnectionConfig& _datasourceConnectionConfig)
{
    m_datasourceConnectionConfig = _datasourceConnectionConfig;
    m_datasourceConnectionConfigHasBeenSet = true;
}

bool AssociateDatasourceHouseRequest::DatasourceConnectionConfigHasBeenSet() const
{
    return m_datasourceConnectionConfigHasBeenSet;
}

vector<string> AssociateDatasourceHouseRequest::GetDataEngineNames() const
{
    return m_dataEngineNames;
}

void AssociateDatasourceHouseRequest::SetDataEngineNames(const vector<string>& _dataEngineNames)
{
    m_dataEngineNames = _dataEngineNames;
    m_dataEngineNamesHasBeenSet = true;
}

bool AssociateDatasourceHouseRequest::DataEngineNamesHasBeenSet() const
{
    return m_dataEngineNamesHasBeenSet;
}

int64_t AssociateDatasourceHouseRequest::GetNetworkConnectionType() const
{
    return m_networkConnectionType;
}

void AssociateDatasourceHouseRequest::SetNetworkConnectionType(const int64_t& _networkConnectionType)
{
    m_networkConnectionType = _networkConnectionType;
    m_networkConnectionTypeHasBeenSet = true;
}

bool AssociateDatasourceHouseRequest::NetworkConnectionTypeHasBeenSet() const
{
    return m_networkConnectionTypeHasBeenSet;
}

string AssociateDatasourceHouseRequest::GetNetworkConnectionDesc() const
{
    return m_networkConnectionDesc;
}

void AssociateDatasourceHouseRequest::SetNetworkConnectionDesc(const string& _networkConnectionDesc)
{
    m_networkConnectionDesc = _networkConnectionDesc;
    m_networkConnectionDescHasBeenSet = true;
}

bool AssociateDatasourceHouseRequest::NetworkConnectionDescHasBeenSet() const
{
    return m_networkConnectionDescHasBeenSet;
}


