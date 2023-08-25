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

#include <tencentcloud/dsgc/v20190723/model/ESAssetDBDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ESAssetDBDetail::ESAssetDBDetail() :
    m_dataSourceIdHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_fieldNumsHasBeenSet(false),
    m_sensitiveFieldNumsHasBeenSet(false),
    m_distributionDataHasBeenSet(false)
{
}

CoreInternalOutcome ESAssetDBDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESAssetDBDetail.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("IndexName") && !value["IndexName"].IsNull())
    {
        if (!value["IndexName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESAssetDBDetail.IndexName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexName = string(value["IndexName"].GetString());
        m_indexNameHasBeenSet = true;
    }

    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESAssetDBDetail.DataType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = string(value["DataType"].GetString());
        m_dataTypeHasBeenSet = true;
    }

    if (value.HasMember("FieldNums") && !value["FieldNums"].IsNull())
    {
        if (!value["FieldNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESAssetDBDetail.FieldNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldNums = value["FieldNums"].GetInt64();
        m_fieldNumsHasBeenSet = true;
    }

    if (value.HasMember("SensitiveFieldNums") && !value["SensitiveFieldNums"].IsNull())
    {
        if (!value["SensitiveFieldNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESAssetDBDetail.SensitiveFieldNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveFieldNums = value["SensitiveFieldNums"].GetInt64();
        m_sensitiveFieldNumsHasBeenSet = true;
    }

    if (value.HasMember("DistributionData") && !value["DistributionData"].IsNull())
    {
        if (!value["DistributionData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ESAssetDBDetail.DistributionData` is not array type"));

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

void ESAssetDBDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_indexNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataType.c_str(), allocator).Move(), allocator);
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


string ESAssetDBDetail::GetDataSourceId() const
{
    return m_dataSourceId;
}

void ESAssetDBDetail::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool ESAssetDBDetail::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string ESAssetDBDetail::GetIndexName() const
{
    return m_indexName;
}

void ESAssetDBDetail::SetIndexName(const string& _indexName)
{
    m_indexName = _indexName;
    m_indexNameHasBeenSet = true;
}

bool ESAssetDBDetail::IndexNameHasBeenSet() const
{
    return m_indexNameHasBeenSet;
}

string ESAssetDBDetail::GetDataType() const
{
    return m_dataType;
}

void ESAssetDBDetail::SetDataType(const string& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool ESAssetDBDetail::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

int64_t ESAssetDBDetail::GetFieldNums() const
{
    return m_fieldNums;
}

void ESAssetDBDetail::SetFieldNums(const int64_t& _fieldNums)
{
    m_fieldNums = _fieldNums;
    m_fieldNumsHasBeenSet = true;
}

bool ESAssetDBDetail::FieldNumsHasBeenSet() const
{
    return m_fieldNumsHasBeenSet;
}

int64_t ESAssetDBDetail::GetSensitiveFieldNums() const
{
    return m_sensitiveFieldNums;
}

void ESAssetDBDetail::SetSensitiveFieldNums(const int64_t& _sensitiveFieldNums)
{
    m_sensitiveFieldNums = _sensitiveFieldNums;
    m_sensitiveFieldNumsHasBeenSet = true;
}

bool ESAssetDBDetail::SensitiveFieldNumsHasBeenSet() const
{
    return m_sensitiveFieldNumsHasBeenSet;
}

vector<Note> ESAssetDBDetail::GetDistributionData() const
{
    return m_distributionData;
}

void ESAssetDBDetail::SetDistributionData(const vector<Note>& _distributionData)
{
    m_distributionData = _distributionData;
    m_distributionDataHasBeenSet = true;
}

bool ESAssetDBDetail::DistributionDataHasBeenSet() const
{
    return m_distributionDataHasBeenSet;
}

