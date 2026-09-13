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

#include <tencentcloud/databuddy/v20260715/model/FileConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

FileConfig::FileConfig() :
    m_paramsHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_defaultCatalogHasBeenSet(false),
    m_defaultSchemaHasBeenSet(false),
    m_advanceConfigHasBeenSet(false),
    m_extraParamsHasBeenSet(false),
    m_widgetsHasBeenSet(false),
    m_outputConfHasBeenSet(false),
    m_sqlSyntaxHasBeenSet(false),
    m_clusterIdHasBeenSet(false)
{
}

CoreInternalOutcome FileConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("DefaultCatalog") && !value["DefaultCatalog"].IsNull())
    {
        if (!value["DefaultCatalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.DefaultCatalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultCatalog = string(value["DefaultCatalog"].GetString());
        m_defaultCatalogHasBeenSet = true;
    }

    if (value.HasMember("DefaultSchema") && !value["DefaultSchema"].IsNull())
    {
        if (!value["DefaultSchema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.DefaultSchema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultSchema = string(value["DefaultSchema"].GetString());
        m_defaultSchemaHasBeenSet = true;
    }

    if (value.HasMember("AdvanceConfig") && !value["AdvanceConfig"].IsNull())
    {
        if (!value["AdvanceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.AdvanceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advanceConfig = string(value["AdvanceConfig"].GetString());
        m_advanceConfigHasBeenSet = true;
    }

    if (value.HasMember("ExtraParams") && !value["ExtraParams"].IsNull())
    {
        if (!value["ExtraParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.ExtraParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraParams = string(value["ExtraParams"].GetString());
        m_extraParamsHasBeenSet = true;
    }

    if (value.HasMember("Widgets") && !value["Widgets"].IsNull())
    {
        if (!value["Widgets"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.Widgets` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_widgets = string(value["Widgets"].GetString());
        m_widgetsHasBeenSet = true;
    }

    if (value.HasMember("OutputConf") && !value["OutputConf"].IsNull())
    {
        if (!value["OutputConf"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileConfig.OutputConf` is not array type"));

        const rapidjson::Value &tmpValue = value["OutputConf"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FileOutputConf item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputConf.push_back(item);
        }
        m_outputConfHasBeenSet = true;
    }

    if (value.HasMember("SqlSyntax") && !value["SqlSyntax"].IsNull())
    {
        if (!value["SqlSyntax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.SqlSyntax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlSyntax = string(value["SqlSyntax"].GetString());
        m_sqlSyntaxHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultCatalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultCatalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultCatalog.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultSchema.c_str(), allocator).Move(), allocator);
    }

    if (m_advanceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advanceConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_extraParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraParams.c_str(), allocator).Move(), allocator);
    }

    if (m_widgetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Widgets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_widgets.c_str(), allocator).Move(), allocator);
    }

    if (m_outputConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputConf.begin(); itr != m_outputConf.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sqlSyntaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlSyntax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlSyntax.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

}


string FileConfig::GetParams() const
{
    return m_params;
}

void FileConfig::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool FileConfig::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string FileConfig::GetResourceId() const
{
    return m_resourceId;
}

void FileConfig::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool FileConfig::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string FileConfig::GetDefaultCatalog() const
{
    return m_defaultCatalog;
}

void FileConfig::SetDefaultCatalog(const string& _defaultCatalog)
{
    m_defaultCatalog = _defaultCatalog;
    m_defaultCatalogHasBeenSet = true;
}

bool FileConfig::DefaultCatalogHasBeenSet() const
{
    return m_defaultCatalogHasBeenSet;
}

string FileConfig::GetDefaultSchema() const
{
    return m_defaultSchema;
}

void FileConfig::SetDefaultSchema(const string& _defaultSchema)
{
    m_defaultSchema = _defaultSchema;
    m_defaultSchemaHasBeenSet = true;
}

bool FileConfig::DefaultSchemaHasBeenSet() const
{
    return m_defaultSchemaHasBeenSet;
}

string FileConfig::GetAdvanceConfig() const
{
    return m_advanceConfig;
}

void FileConfig::SetAdvanceConfig(const string& _advanceConfig)
{
    m_advanceConfig = _advanceConfig;
    m_advanceConfigHasBeenSet = true;
}

bool FileConfig::AdvanceConfigHasBeenSet() const
{
    return m_advanceConfigHasBeenSet;
}

string FileConfig::GetExtraParams() const
{
    return m_extraParams;
}

void FileConfig::SetExtraParams(const string& _extraParams)
{
    m_extraParams = _extraParams;
    m_extraParamsHasBeenSet = true;
}

bool FileConfig::ExtraParamsHasBeenSet() const
{
    return m_extraParamsHasBeenSet;
}

string FileConfig::GetWidgets() const
{
    return m_widgets;
}

void FileConfig::SetWidgets(const string& _widgets)
{
    m_widgets = _widgets;
    m_widgetsHasBeenSet = true;
}

bool FileConfig::WidgetsHasBeenSet() const
{
    return m_widgetsHasBeenSet;
}

vector<FileOutputConf> FileConfig::GetOutputConf() const
{
    return m_outputConf;
}

void FileConfig::SetOutputConf(const vector<FileOutputConf>& _outputConf)
{
    m_outputConf = _outputConf;
    m_outputConfHasBeenSet = true;
}

bool FileConfig::OutputConfHasBeenSet() const
{
    return m_outputConfHasBeenSet;
}

string FileConfig::GetSqlSyntax() const
{
    return m_sqlSyntax;
}

void FileConfig::SetSqlSyntax(const string& _sqlSyntax)
{
    m_sqlSyntax = _sqlSyntax;
    m_sqlSyntaxHasBeenSet = true;
}

bool FileConfig::SqlSyntaxHasBeenSet() const
{
    return m_sqlSyntaxHasBeenSet;
}

string FileConfig::GetClusterId() const
{
    return m_clusterId;
}

void FileConfig::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool FileConfig::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

