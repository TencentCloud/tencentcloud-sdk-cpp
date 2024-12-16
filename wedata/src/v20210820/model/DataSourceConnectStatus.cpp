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

#include <tencentcloud/wedata/v20210820/model/DataSourceConnectStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DataSourceConnectStatus::DataSourceConnectStatus() :
    m_idHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_connectResultHasBeenSet(false),
    m_connectErrorHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

CoreInternalOutcome DataSourceConnectStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceConnectStatus.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceConnectStatus.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceConnectStatus.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("ConnectResult") && !value["ConnectResult"].IsNull())
    {
        if (!value["ConnectResult"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceConnectStatus.ConnectResult` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connectResult = value["ConnectResult"].GetInt64();
        m_connectResultHasBeenSet = true;
    }

    if (value.HasMember("ConnectError") && !value["ConnectError"].IsNull())
    {
        if (!value["ConnectError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceConnectStatus.ConnectError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectError = string(value["ConnectError"].GetString());
        m_connectErrorHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceConnectStatus.Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataSourceConnectStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_connectResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectResult, allocator);
    }

    if (m_connectErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectError.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

}


uint64_t DataSourceConnectStatus::GetId() const
{
    return m_id;
}

void DataSourceConnectStatus::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DataSourceConnectStatus::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DataSourceConnectStatus::GetProjectId() const
{
    return m_projectId;
}

void DataSourceConnectStatus::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DataSourceConnectStatus::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DataSourceConnectStatus::GetDatasourceId() const
{
    return m_datasourceId;
}

void DataSourceConnectStatus::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool DataSourceConnectStatus::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

int64_t DataSourceConnectStatus::GetConnectResult() const
{
    return m_connectResult;
}

void DataSourceConnectStatus::SetConnectResult(const int64_t& _connectResult)
{
    m_connectResult = _connectResult;
    m_connectResultHasBeenSet = true;
}

bool DataSourceConnectStatus::ConnectResultHasBeenSet() const
{
    return m_connectResultHasBeenSet;
}

string DataSourceConnectStatus::GetConnectError() const
{
    return m_connectError;
}

void DataSourceConnectStatus::SetConnectError(const string& _connectError)
{
    m_connectError = _connectError;
    m_connectErrorHasBeenSet = true;
}

bool DataSourceConnectStatus::ConnectErrorHasBeenSet() const
{
    return m_connectErrorHasBeenSet;
}

uint64_t DataSourceConnectStatus::GetTimestamp() const
{
    return m_timestamp;
}

void DataSourceConnectStatus::SetTimestamp(const uint64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool DataSourceConnectStatus::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

