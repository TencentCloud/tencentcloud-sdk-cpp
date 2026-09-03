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

#include <tencentcloud/dlc/v20210125/model/EvalDatasetConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

EvalDatasetConfig::EvalDatasetConfig() :
    m_evalModeHasBeenSet(false),
    m_evalSplitRatioHasBeenSet(false),
    m_evalDatasetIdHasBeenSet(false),
    m_evalDatasetNameHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
}

CoreInternalOutcome EvalDatasetConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EvalMode") && !value["EvalMode"].IsNull())
    {
        if (!value["EvalMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvalDatasetConfig.EvalMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evalMode = string(value["EvalMode"].GetString());
        m_evalModeHasBeenSet = true;
    }

    if (value.HasMember("EvalSplitRatio") && !value["EvalSplitRatio"].IsNull())
    {
        if (!value["EvalSplitRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `EvalDatasetConfig.EvalSplitRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_evalSplitRatio = value["EvalSplitRatio"].GetDouble();
        m_evalSplitRatioHasBeenSet = true;
    }

    if (value.HasMember("EvalDatasetId") && !value["EvalDatasetId"].IsNull())
    {
        if (!value["EvalDatasetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvalDatasetConfig.EvalDatasetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evalDatasetId = string(value["EvalDatasetId"].GetString());
        m_evalDatasetIdHasBeenSet = true;
    }

    if (value.HasMember("EvalDatasetName") && !value["EvalDatasetName"].IsNull())
    {
        if (!value["EvalDatasetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvalDatasetConfig.EvalDatasetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evalDatasetName = string(value["EvalDatasetName"].GetString());
        m_evalDatasetNameHasBeenSet = true;
    }

    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvalDatasetConfig.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvalDatasetConfig.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EvalDatasetConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_evalModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvalMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evalMode.c_str(), allocator).Move(), allocator);
    }

    if (m_evalSplitRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvalSplitRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evalSplitRatio, allocator);
    }

    if (m_evalDatasetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvalDatasetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evalDatasetId.c_str(), allocator).Move(), allocator);
    }

    if (m_evalDatasetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvalDatasetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evalDatasetName.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

}


string EvalDatasetConfig::GetEvalMode() const
{
    return m_evalMode;
}

void EvalDatasetConfig::SetEvalMode(const string& _evalMode)
{
    m_evalMode = _evalMode;
    m_evalModeHasBeenSet = true;
}

bool EvalDatasetConfig::EvalModeHasBeenSet() const
{
    return m_evalModeHasBeenSet;
}

double EvalDatasetConfig::GetEvalSplitRatio() const
{
    return m_evalSplitRatio;
}

void EvalDatasetConfig::SetEvalSplitRatio(const double& _evalSplitRatio)
{
    m_evalSplitRatio = _evalSplitRatio;
    m_evalSplitRatioHasBeenSet = true;
}

bool EvalDatasetConfig::EvalSplitRatioHasBeenSet() const
{
    return m_evalSplitRatioHasBeenSet;
}

string EvalDatasetConfig::GetEvalDatasetId() const
{
    return m_evalDatasetId;
}

void EvalDatasetConfig::SetEvalDatasetId(const string& _evalDatasetId)
{
    m_evalDatasetId = _evalDatasetId;
    m_evalDatasetIdHasBeenSet = true;
}

bool EvalDatasetConfig::EvalDatasetIdHasBeenSet() const
{
    return m_evalDatasetIdHasBeenSet;
}

string EvalDatasetConfig::GetEvalDatasetName() const
{
    return m_evalDatasetName;
}

void EvalDatasetConfig::SetEvalDatasetName(const string& _evalDatasetName)
{
    m_evalDatasetName = _evalDatasetName;
    m_evalDatasetNameHasBeenSet = true;
}

bool EvalDatasetConfig::EvalDatasetNameHasBeenSet() const
{
    return m_evalDatasetNameHasBeenSet;
}

string EvalDatasetConfig::GetCatalog() const
{
    return m_catalog;
}

void EvalDatasetConfig::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool EvalDatasetConfig::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string EvalDatasetConfig::GetFileName() const
{
    return m_fileName;
}

void EvalDatasetConfig::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool EvalDatasetConfig::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

