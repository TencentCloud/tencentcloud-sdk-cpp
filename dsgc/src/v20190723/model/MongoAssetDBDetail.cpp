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

#include <tencentcloud/dsgc/v20190723/model/MongoAssetDBDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

MongoAssetDBDetail::MongoAssetDBDetail() :
    m_dataSourceIdHasBeenSet(false),
    m_ddNameHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_colNumsHasBeenSet(false),
    m_sensitiveColNumsHasBeenSet(false),
    m_fieldNumsHasBeenSet(false),
    m_sensitiveFieldNumsHasBeenSet(false),
    m_distributionDataHasBeenSet(false)
{
}

CoreInternalOutcome MongoAssetDBDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoAssetDBDetail.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("DdName") && !value["DdName"].IsNull())
    {
        if (!value["DdName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoAssetDBDetail.DdName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ddName = string(value["DdName"].GetString());
        m_ddNameHasBeenSet = true;
    }

    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoAssetDBDetail.DataType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = string(value["DataType"].GetString());
        m_dataTypeHasBeenSet = true;
    }

    if (value.HasMember("ColNums") && !value["ColNums"].IsNull())
    {
        if (!value["ColNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoAssetDBDetail.ColNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_colNums = value["ColNums"].GetInt64();
        m_colNumsHasBeenSet = true;
    }

    if (value.HasMember("SensitiveColNums") && !value["SensitiveColNums"].IsNull())
    {
        if (!value["SensitiveColNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoAssetDBDetail.SensitiveColNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveColNums = value["SensitiveColNums"].GetInt64();
        m_sensitiveColNumsHasBeenSet = true;
    }

    if (value.HasMember("FieldNums") && !value["FieldNums"].IsNull())
    {
        if (!value["FieldNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoAssetDBDetail.FieldNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldNums = value["FieldNums"].GetInt64();
        m_fieldNumsHasBeenSet = true;
    }

    if (value.HasMember("SensitiveFieldNums") && !value["SensitiveFieldNums"].IsNull())
    {
        if (!value["SensitiveFieldNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoAssetDBDetail.SensitiveFieldNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveFieldNums = value["SensitiveFieldNums"].GetInt64();
        m_sensitiveFieldNumsHasBeenSet = true;
    }

    if (value.HasMember("DistributionData") && !value["DistributionData"].IsNull())
    {
        if (!value["DistributionData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MongoAssetDBDetail.DistributionData` is not array type"));

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

void MongoAssetDBDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_colNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_colNums, allocator);
    }

    if (m_sensitiveColNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveColNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveColNums, allocator);
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


string MongoAssetDBDetail::GetDataSourceId() const
{
    return m_dataSourceId;
}

void MongoAssetDBDetail::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool MongoAssetDBDetail::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string MongoAssetDBDetail::GetDdName() const
{
    return m_ddName;
}

void MongoAssetDBDetail::SetDdName(const string& _ddName)
{
    m_ddName = _ddName;
    m_ddNameHasBeenSet = true;
}

bool MongoAssetDBDetail::DdNameHasBeenSet() const
{
    return m_ddNameHasBeenSet;
}

string MongoAssetDBDetail::GetDataType() const
{
    return m_dataType;
}

void MongoAssetDBDetail::SetDataType(const string& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool MongoAssetDBDetail::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

int64_t MongoAssetDBDetail::GetColNums() const
{
    return m_colNums;
}

void MongoAssetDBDetail::SetColNums(const int64_t& _colNums)
{
    m_colNums = _colNums;
    m_colNumsHasBeenSet = true;
}

bool MongoAssetDBDetail::ColNumsHasBeenSet() const
{
    return m_colNumsHasBeenSet;
}

int64_t MongoAssetDBDetail::GetSensitiveColNums() const
{
    return m_sensitiveColNums;
}

void MongoAssetDBDetail::SetSensitiveColNums(const int64_t& _sensitiveColNums)
{
    m_sensitiveColNums = _sensitiveColNums;
    m_sensitiveColNumsHasBeenSet = true;
}

bool MongoAssetDBDetail::SensitiveColNumsHasBeenSet() const
{
    return m_sensitiveColNumsHasBeenSet;
}

int64_t MongoAssetDBDetail::GetFieldNums() const
{
    return m_fieldNums;
}

void MongoAssetDBDetail::SetFieldNums(const int64_t& _fieldNums)
{
    m_fieldNums = _fieldNums;
    m_fieldNumsHasBeenSet = true;
}

bool MongoAssetDBDetail::FieldNumsHasBeenSet() const
{
    return m_fieldNumsHasBeenSet;
}

int64_t MongoAssetDBDetail::GetSensitiveFieldNums() const
{
    return m_sensitiveFieldNums;
}

void MongoAssetDBDetail::SetSensitiveFieldNums(const int64_t& _sensitiveFieldNums)
{
    m_sensitiveFieldNums = _sensitiveFieldNums;
    m_sensitiveFieldNumsHasBeenSet = true;
}

bool MongoAssetDBDetail::SensitiveFieldNumsHasBeenSet() const
{
    return m_sensitiveFieldNumsHasBeenSet;
}

vector<Note> MongoAssetDBDetail::GetDistributionData() const
{
    return m_distributionData;
}

void MongoAssetDBDetail::SetDistributionData(const vector<Note>& _distributionData)
{
    m_distributionData = _distributionData;
    m_distributionDataHasBeenSet = true;
}

bool MongoAssetDBDetail::DistributionDataHasBeenSet() const
{
    return m_distributionDataHasBeenSet;
}

