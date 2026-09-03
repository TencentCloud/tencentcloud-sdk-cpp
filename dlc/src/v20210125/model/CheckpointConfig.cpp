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

#include <tencentcloud/dlc/v20210125/model/CheckpointConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CheckpointConfig::CheckpointConfig() :
    m_catalogHasBeenSet(false),
    m_saveStrategyHasBeenSet(false),
    m_saveFreqHasBeenSet(false),
    m_maxKeepHasBeenSet(false),
    m_outputDirHasBeenSet(false)
{
}

CoreInternalOutcome CheckpointConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointConfig.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("SaveStrategy") && !value["SaveStrategy"].IsNull())
    {
        if (!value["SaveStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointConfig.SaveStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_saveStrategy = string(value["SaveStrategy"].GetString());
        m_saveStrategyHasBeenSet = true;
    }

    if (value.HasMember("SaveFreq") && !value["SaveFreq"].IsNull())
    {
        if (!value["SaveFreq"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointConfig.SaveFreq` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_saveFreq = value["SaveFreq"].GetInt64();
        m_saveFreqHasBeenSet = true;
    }

    if (value.HasMember("MaxKeep") && !value["MaxKeep"].IsNull())
    {
        if (!value["MaxKeep"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointConfig.MaxKeep` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxKeep = value["MaxKeep"].GetInt64();
        m_maxKeepHasBeenSet = true;
    }

    if (value.HasMember("OutputDir") && !value["OutputDir"].IsNull())
    {
        if (!value["OutputDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointConfig.OutputDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputDir = string(value["OutputDir"].GetString());
        m_outputDirHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckpointConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_saveStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_saveStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_saveFreqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveFreq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_saveFreq, allocator);
    }

    if (m_maxKeepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxKeep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxKeep, allocator);
    }

    if (m_outputDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputDir.c_str(), allocator).Move(), allocator);
    }

}


string CheckpointConfig::GetCatalog() const
{
    return m_catalog;
}

void CheckpointConfig::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool CheckpointConfig::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string CheckpointConfig::GetSaveStrategy() const
{
    return m_saveStrategy;
}

void CheckpointConfig::SetSaveStrategy(const string& _saveStrategy)
{
    m_saveStrategy = _saveStrategy;
    m_saveStrategyHasBeenSet = true;
}

bool CheckpointConfig::SaveStrategyHasBeenSet() const
{
    return m_saveStrategyHasBeenSet;
}

int64_t CheckpointConfig::GetSaveFreq() const
{
    return m_saveFreq;
}

void CheckpointConfig::SetSaveFreq(const int64_t& _saveFreq)
{
    m_saveFreq = _saveFreq;
    m_saveFreqHasBeenSet = true;
}

bool CheckpointConfig::SaveFreqHasBeenSet() const
{
    return m_saveFreqHasBeenSet;
}

int64_t CheckpointConfig::GetMaxKeep() const
{
    return m_maxKeep;
}

void CheckpointConfig::SetMaxKeep(const int64_t& _maxKeep)
{
    m_maxKeep = _maxKeep;
    m_maxKeepHasBeenSet = true;
}

bool CheckpointConfig::MaxKeepHasBeenSet() const
{
    return m_maxKeepHasBeenSet;
}

string CheckpointConfig::GetOutputDir() const
{
    return m_outputDir;
}

void CheckpointConfig::SetOutputDir(const string& _outputDir)
{
    m_outputDir = _outputDir;
    m_outputDirHasBeenSet = true;
}

bool CheckpointConfig::OutputDirHasBeenSet() const
{
    return m_outputDirHasBeenSet;
}

