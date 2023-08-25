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

#include <tencentcloud/dsgc/v20190723/model/RDBInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

RDBInstance::RDBInstance() :
    m_dataSourceIdHasBeenSet(false),
    m_dataSourceTypeHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_dBsHasBeenSet(false)
{
}

CoreInternalOutcome RDBInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RDBInstance.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("DataSourceType") && !value["DataSourceType"].IsNull())
    {
        if (!value["DataSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RDBInstance.DataSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceType = string(value["DataSourceType"].GetString());
        m_dataSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceRegion") && !value["ResourceRegion"].IsNull())
    {
        if (!value["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RDBInstance.ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(value["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }

    if (value.HasMember("DBs") && !value["DBs"].IsNull())
    {
        if (!value["DBs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RDBInstance.DBs` is not array type"));

        const rapidjson::Value &tmpValue = value["DBs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBStatements item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dBs.push_back(item);
        }
        m_dBsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RDBInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_dBsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dBs.begin(); itr != m_dBs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RDBInstance::GetDataSourceId() const
{
    return m_dataSourceId;
}

void RDBInstance::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool RDBInstance::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string RDBInstance::GetDataSourceType() const
{
    return m_dataSourceType;
}

void RDBInstance::SetDataSourceType(const string& _dataSourceType)
{
    m_dataSourceType = _dataSourceType;
    m_dataSourceTypeHasBeenSet = true;
}

bool RDBInstance::DataSourceTypeHasBeenSet() const
{
    return m_dataSourceTypeHasBeenSet;
}

string RDBInstance::GetResourceRegion() const
{
    return m_resourceRegion;
}

void RDBInstance::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool RDBInstance::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

vector<DBStatements> RDBInstance::GetDBs() const
{
    return m_dBs;
}

void RDBInstance::SetDBs(const vector<DBStatements>& _dBs)
{
    m_dBs = _dBs;
    m_dBsHasBeenSet = true;
}

bool RDBInstance::DBsHasBeenSet() const
{
    return m_dBsHasBeenSet;
}

