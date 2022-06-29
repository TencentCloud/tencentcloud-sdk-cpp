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

#include <tencentcloud/tione/v20211111/model/DataConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DataConfig::DataConfig() :
    m_mappingPathHasBeenSet(false),
    m_dataSourceTypeHasBeenSet(false),
    m_dataSetSourceHasBeenSet(false),
    m_cOSSourceHasBeenSet(false),
    m_cFSSourceHasBeenSet(false),
    m_hDFSSourceHasBeenSet(false)
{
}

CoreInternalOutcome DataConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MappingPath") && !value["MappingPath"].IsNull())
    {
        if (!value["MappingPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataConfig.MappingPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mappingPath = string(value["MappingPath"].GetString());
        m_mappingPathHasBeenSet = true;
    }

    if (value.HasMember("DataSourceType") && !value["DataSourceType"].IsNull())
    {
        if (!value["DataSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataConfig.DataSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceType = string(value["DataSourceType"].GetString());
        m_dataSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("DataSetSource") && !value["DataSetSource"].IsNull())
    {
        if (!value["DataSetSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataConfig.DataSetSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataSetSource.Deserialize(value["DataSetSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataSetSourceHasBeenSet = true;
    }

    if (value.HasMember("COSSource") && !value["COSSource"].IsNull())
    {
        if (!value["COSSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataConfig.COSSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cOSSource.Deserialize(value["COSSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cOSSourceHasBeenSet = true;
    }

    if (value.HasMember("CFSSource") && !value["CFSSource"].IsNull())
    {
        if (!value["CFSSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataConfig.CFSSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cFSSource.Deserialize(value["CFSSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cFSSourceHasBeenSet = true;
    }

    if (value.HasMember("HDFSSource") && !value["HDFSSource"].IsNull())
    {
        if (!value["HDFSSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataConfig.HDFSSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hDFSSource.Deserialize(value["HDFSSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hDFSSourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mappingPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MappingPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mappingPath.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSetSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSetSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataSetSource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cOSSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cOSSource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cFSSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cFSSource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hDFSSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HDFSSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hDFSSource.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DataConfig::GetMappingPath() const
{
    return m_mappingPath;
}

void DataConfig::SetMappingPath(const string& _mappingPath)
{
    m_mappingPath = _mappingPath;
    m_mappingPathHasBeenSet = true;
}

bool DataConfig::MappingPathHasBeenSet() const
{
    return m_mappingPathHasBeenSet;
}

string DataConfig::GetDataSourceType() const
{
    return m_dataSourceType;
}

void DataConfig::SetDataSourceType(const string& _dataSourceType)
{
    m_dataSourceType = _dataSourceType;
    m_dataSourceTypeHasBeenSet = true;
}

bool DataConfig::DataSourceTypeHasBeenSet() const
{
    return m_dataSourceTypeHasBeenSet;
}

DataSetConfig DataConfig::GetDataSetSource() const
{
    return m_dataSetSource;
}

void DataConfig::SetDataSetSource(const DataSetConfig& _dataSetSource)
{
    m_dataSetSource = _dataSetSource;
    m_dataSetSourceHasBeenSet = true;
}

bool DataConfig::DataSetSourceHasBeenSet() const
{
    return m_dataSetSourceHasBeenSet;
}

CosPathInfo DataConfig::GetCOSSource() const
{
    return m_cOSSource;
}

void DataConfig::SetCOSSource(const CosPathInfo& _cOSSource)
{
    m_cOSSource = _cOSSource;
    m_cOSSourceHasBeenSet = true;
}

bool DataConfig::COSSourceHasBeenSet() const
{
    return m_cOSSourceHasBeenSet;
}

CFSConfig DataConfig::GetCFSSource() const
{
    return m_cFSSource;
}

void DataConfig::SetCFSSource(const CFSConfig& _cFSSource)
{
    m_cFSSource = _cFSSource;
    m_cFSSourceHasBeenSet = true;
}

bool DataConfig::CFSSourceHasBeenSet() const
{
    return m_cFSSourceHasBeenSet;
}

HDFSConfig DataConfig::GetHDFSSource() const
{
    return m_hDFSSource;
}

void DataConfig::SetHDFSSource(const HDFSConfig& _hDFSSource)
{
    m_hDFSSource = _hDFSSource;
    m_hDFSSourceHasBeenSet = true;
}

bool DataConfig::HDFSSourceHasBeenSet() const
{
    return m_hDFSSourceHasBeenSet;
}

