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

#include <tencentcloud/dsgc/v20190723/model/AssetDBDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

AssetDBDetail::AssetDBDetail() :
    m_dataSourceIdHasBeenSet(false),
    m_ddNameHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_tableNumsHasBeenSet(false),
    m_sensitiveTableNumsHasBeenSet(false),
    m_fieldNumsHasBeenSet(false),
    m_sensitiveFieldNumsHasBeenSet(false),
    m_distributionDataHasBeenSet(false)
{
}

CoreInternalOutcome AssetDBDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDBDetail.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("DdName") && !value["DdName"].IsNull())
    {
        if (!value["DdName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDBDetail.DdName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ddName = string(value["DdName"].GetString());
        m_ddNameHasBeenSet = true;
    }

    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDBDetail.DataType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = string(value["DataType"].GetString());
        m_dataTypeHasBeenSet = true;
    }

    if (value.HasMember("TableNums") && !value["TableNums"].IsNull())
    {
        if (!value["TableNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDBDetail.TableNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableNums = value["TableNums"].GetInt64();
        m_tableNumsHasBeenSet = true;
    }

    if (value.HasMember("SensitiveTableNums") && !value["SensitiveTableNums"].IsNull())
    {
        if (!value["SensitiveTableNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDBDetail.SensitiveTableNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveTableNums = value["SensitiveTableNums"].GetInt64();
        m_sensitiveTableNumsHasBeenSet = true;
    }

    if (value.HasMember("FieldNums") && !value["FieldNums"].IsNull())
    {
        if (!value["FieldNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDBDetail.FieldNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldNums = value["FieldNums"].GetInt64();
        m_fieldNumsHasBeenSet = true;
    }

    if (value.HasMember("SensitiveFieldNums") && !value["SensitiveFieldNums"].IsNull())
    {
        if (!value["SensitiveFieldNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDBDetail.SensitiveFieldNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveFieldNums = value["SensitiveFieldNums"].GetInt64();
        m_sensitiveFieldNumsHasBeenSet = true;
    }

    if (value.HasMember("DistributionData") && !value["DistributionData"].IsNull())
    {
        if (!value["DistributionData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetDBDetail.DistributionData` is not array type"));

        const rapidjson::Value &tmpValue = value["DistributionData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Note item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_distributionData.push_back(item);
        }
        m_distributionDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetDBDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ddNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ddName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableNums, allocator);
    }

    if (m_sensitiveTableNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveTableNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveTableNums, allocator);
    }

    if (m_fieldNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fieldNums, allocator);
    }

    if (m_sensitiveFieldNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveFieldNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveFieldNums, allocator);
    }

    if (m_distributionDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistributionData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_distributionData.begin(); itr != m_distributionData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AssetDBDetail::GetDataSourceId() const
{
    return m_dataSourceId;
}

void AssetDBDetail::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool AssetDBDetail::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string AssetDBDetail::GetDdName() const
{
    return m_ddName;
}

void AssetDBDetail::SetDdName(const string& _ddName)
{
    m_ddName = _ddName;
    m_ddNameHasBeenSet = true;
}

bool AssetDBDetail::DdNameHasBeenSet() const
{
    return m_ddNameHasBeenSet;
}

string AssetDBDetail::GetDataType() const
{
    return m_dataType;
}

void AssetDBDetail::SetDataType(const string& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool AssetDBDetail::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

int64_t AssetDBDetail::GetTableNums() const
{
    return m_tableNums;
}

void AssetDBDetail::SetTableNums(const int64_t& _tableNums)
{
    m_tableNums = _tableNums;
    m_tableNumsHasBeenSet = true;
}

bool AssetDBDetail::TableNumsHasBeenSet() const
{
    return m_tableNumsHasBeenSet;
}

int64_t AssetDBDetail::GetSensitiveTableNums() const
{
    return m_sensitiveTableNums;
}

void AssetDBDetail::SetSensitiveTableNums(const int64_t& _sensitiveTableNums)
{
    m_sensitiveTableNums = _sensitiveTableNums;
    m_sensitiveTableNumsHasBeenSet = true;
}

bool AssetDBDetail::SensitiveTableNumsHasBeenSet() const
{
    return m_sensitiveTableNumsHasBeenSet;
}

int64_t AssetDBDetail::GetFieldNums() const
{
    return m_fieldNums;
}

void AssetDBDetail::SetFieldNums(const int64_t& _fieldNums)
{
    m_fieldNums = _fieldNums;
    m_fieldNumsHasBeenSet = true;
}

bool AssetDBDetail::FieldNumsHasBeenSet() const
{
    return m_fieldNumsHasBeenSet;
}

int64_t AssetDBDetail::GetSensitiveFieldNums() const
{
    return m_sensitiveFieldNums;
}

void AssetDBDetail::SetSensitiveFieldNums(const int64_t& _sensitiveFieldNums)
{
    m_sensitiveFieldNums = _sensitiveFieldNums;
    m_sensitiveFieldNumsHasBeenSet = true;
}

bool AssetDBDetail::SensitiveFieldNumsHasBeenSet() const
{
    return m_sensitiveFieldNumsHasBeenSet;
}

vector<Note> AssetDBDetail::GetDistributionData() const
{
    return m_distributionData;
}

void AssetDBDetail::SetDistributionData(const vector<Note>& _distributionData)
{
    m_distributionData = _distributionData;
    m_distributionDataHasBeenSet = true;
}

bool AssetDBDetail::DistributionDataHasBeenSet() const
{
    return m_distributionDataHasBeenSet;
}

