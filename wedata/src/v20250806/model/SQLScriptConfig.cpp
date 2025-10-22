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

#include <tencentcloud/wedata/v20250806/model/SQLScriptConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

SQLScriptConfig::SQLScriptConfig() :
    m_datasourceIdHasBeenSet(false),
    m_datasourceEnvHasBeenSet(false),
    m_computeResourceHasBeenSet(false),
    m_executorGroupIdHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_advanceConfigHasBeenSet(false)
{
}

CoreInternalOutcome SQLScriptConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScriptConfig.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceEnv") && !value["DatasourceEnv"].IsNull())
    {
        if (!value["DatasourceEnv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScriptConfig.DatasourceEnv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceEnv = string(value["DatasourceEnv"].GetString());
        m_datasourceEnvHasBeenSet = true;
    }

    if (value.HasMember("ComputeResource") && !value["ComputeResource"].IsNull())
    {
        if (!value["ComputeResource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScriptConfig.ComputeResource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeResource = string(value["ComputeResource"].GetString());
        m_computeResourceHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupId") && !value["ExecutorGroupId"].IsNull())
    {
        if (!value["ExecutorGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScriptConfig.ExecutorGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupId = string(value["ExecutorGroupId"].GetString());
        m_executorGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScriptConfig.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("AdvanceConfig") && !value["AdvanceConfig"].IsNull())
    {
        if (!value["AdvanceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScriptConfig.AdvanceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advanceConfig = string(value["AdvanceConfig"].GetString());
        m_advanceConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SQLScriptConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceEnv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceEnv.c_str(), allocator).Move(), allocator);
    }

    if (m_computeResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeResource.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

    if (m_advanceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advanceConfig.c_str(), allocator).Move(), allocator);
    }

}


string SQLScriptConfig::GetDatasourceId() const
{
    return m_datasourceId;
}

void SQLScriptConfig::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool SQLScriptConfig::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string SQLScriptConfig::GetDatasourceEnv() const
{
    return m_datasourceEnv;
}

void SQLScriptConfig::SetDatasourceEnv(const string& _datasourceEnv)
{
    m_datasourceEnv = _datasourceEnv;
    m_datasourceEnvHasBeenSet = true;
}

bool SQLScriptConfig::DatasourceEnvHasBeenSet() const
{
    return m_datasourceEnvHasBeenSet;
}

string SQLScriptConfig::GetComputeResource() const
{
    return m_computeResource;
}

void SQLScriptConfig::SetComputeResource(const string& _computeResource)
{
    m_computeResource = _computeResource;
    m_computeResourceHasBeenSet = true;
}

bool SQLScriptConfig::ComputeResourceHasBeenSet() const
{
    return m_computeResourceHasBeenSet;
}

string SQLScriptConfig::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void SQLScriptConfig::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool SQLScriptConfig::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

string SQLScriptConfig::GetParams() const
{
    return m_params;
}

void SQLScriptConfig::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool SQLScriptConfig::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string SQLScriptConfig::GetAdvanceConfig() const
{
    return m_advanceConfig;
}

void SQLScriptConfig::SetAdvanceConfig(const string& _advanceConfig)
{
    m_advanceConfig = _advanceConfig;
    m_advanceConfigHasBeenSet = true;
}

bool SQLScriptConfig::AdvanceConfigHasBeenSet() const
{
    return m_advanceConfigHasBeenSet;
}

