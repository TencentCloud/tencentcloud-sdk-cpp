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

#include <tencentcloud/wedata/v20210820/model/DataSourceEnvInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DataSourceEnvInfo::DataSourceEnvInfo() :
    m_envHasBeenSet(false),
    m_dataSourceTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_envDataSourceIdHasBeenSet(false),
    m_bizParamsHasBeenSet(false)
{
}

CoreInternalOutcome DataSourceEnvInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Env") && !value["Env"].IsNull())
    {
        if (!value["Env"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceEnvInfo.Env` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_env = string(value["Env"].GetString());
        m_envHasBeenSet = true;
    }

    if (value.HasMember("DataSourceType") && !value["DataSourceType"].IsNull())
    {
        if (!value["DataSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceEnvInfo.DataSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceType = string(value["DataSourceType"].GetString());
        m_dataSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceEnvInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceEnvInfo.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceEnvInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceEnvInfo.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("EnvDataSourceId") && !value["EnvDataSourceId"].IsNull())
    {
        if (!value["EnvDataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceEnvInfo.EnvDataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envDataSourceId = string(value["EnvDataSourceId"].GetString());
        m_envDataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("BizParams") && !value["BizParams"].IsNull())
    {
        if (!value["BizParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceEnvInfo.BizParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizParams = string(value["BizParams"].GetString());
        m_bizParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataSourceEnvInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_env.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_envDataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvDataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envDataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_bizParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizParams.c_str(), allocator).Move(), allocator);
    }

}


string DataSourceEnvInfo::GetEnv() const
{
    return m_env;
}

void DataSourceEnvInfo::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool DataSourceEnvInfo::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

string DataSourceEnvInfo::GetDataSourceType() const
{
    return m_dataSourceType;
}

void DataSourceEnvInfo::SetDataSourceType(const string& _dataSourceType)
{
    m_dataSourceType = _dataSourceType;
    m_dataSourceTypeHasBeenSet = true;
}

bool DataSourceEnvInfo::DataSourceTypeHasBeenSet() const
{
    return m_dataSourceTypeHasBeenSet;
}

string DataSourceEnvInfo::GetClusterId() const
{
    return m_clusterId;
}

void DataSourceEnvInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DataSourceEnvInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DataSourceEnvInfo::GetParams() const
{
    return m_params;
}

void DataSourceEnvInfo::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool DataSourceEnvInfo::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string DataSourceEnvInfo::GetProjectId() const
{
    return m_projectId;
}

void DataSourceEnvInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DataSourceEnvInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DataSourceEnvInfo::GetDataSourceId() const
{
    return m_dataSourceId;
}

void DataSourceEnvInfo::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool DataSourceEnvInfo::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string DataSourceEnvInfo::GetEnvDataSourceId() const
{
    return m_envDataSourceId;
}

void DataSourceEnvInfo::SetEnvDataSourceId(const string& _envDataSourceId)
{
    m_envDataSourceId = _envDataSourceId;
    m_envDataSourceIdHasBeenSet = true;
}

bool DataSourceEnvInfo::EnvDataSourceIdHasBeenSet() const
{
    return m_envDataSourceIdHasBeenSet;
}

string DataSourceEnvInfo::GetBizParams() const
{
    return m_bizParams;
}

void DataSourceEnvInfo::SetBizParams(const string& _bizParams)
{
    m_bizParams = _bizParams;
    m_bizParamsHasBeenSet = true;
}

bool DataSourceEnvInfo::BizParamsHasBeenSet() const
{
    return m_bizParamsHasBeenSet;
}

