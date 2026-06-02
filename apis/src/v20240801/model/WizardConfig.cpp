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

#include <tencentcloud/apis/v20240801/model/WizardConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

WizardConfig::WizardConfig() :
    m_dbTableHasBeenSet(false),
    m_dbEnablePagingHasBeenSet(false),
    m_dbReqParamsHasBeenSet(false),
    m_dbRespParamsHasBeenSet(false),
    m_dbOrdParamsHasBeenSet(false),
    m_dbEnableMappingRespHasBeenSet(false)
{
}

CoreInternalOutcome WizardConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbTable") && !value["DbTable"].IsNull())
    {
        if (!value["DbTable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WizardConfig.DbTable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbTable = string(value["DbTable"].GetString());
        m_dbTableHasBeenSet = true;
    }

    if (value.HasMember("DbEnablePaging") && !value["DbEnablePaging"].IsNull())
    {
        if (!value["DbEnablePaging"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WizardConfig.DbEnablePaging` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dbEnablePaging = value["DbEnablePaging"].GetBool();
        m_dbEnablePagingHasBeenSet = true;
    }

    if (value.HasMember("DbReqParams") && !value["DbReqParams"].IsNull())
    {
        if (!value["DbReqParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WizardConfig.DbReqParams` is not array type"));

        const rapidjson::Value &tmpValue = value["DbReqParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceDatabaseReqParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dbReqParams.push_back(item);
        }
        m_dbReqParamsHasBeenSet = true;
    }

    if (value.HasMember("DbRespParams") && !value["DbRespParams"].IsNull())
    {
        if (!value["DbRespParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WizardConfig.DbRespParams` is not array type"));

        const rapidjson::Value &tmpValue = value["DbRespParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceDatabaseRespParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dbRespParams.push_back(item);
        }
        m_dbRespParamsHasBeenSet = true;
    }

    if (value.HasMember("DbOrdParams") && !value["DbOrdParams"].IsNull())
    {
        if (!value["DbOrdParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WizardConfig.DbOrdParams` is not array type"));

        const rapidjson::Value &tmpValue = value["DbOrdParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceDatabaseOrderParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dbOrdParams.push_back(item);
        }
        m_dbOrdParamsHasBeenSet = true;
    }

    if (value.HasMember("DbEnableMappingResp") && !value["DbEnableMappingResp"].IsNull())
    {
        if (!value["DbEnableMappingResp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WizardConfig.DbEnableMappingResp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dbEnableMappingResp = value["DbEnableMappingResp"].GetBool();
        m_dbEnableMappingRespHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WizardConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbTable.c_str(), allocator).Move(), allocator);
    }

    if (m_dbEnablePagingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbEnablePaging";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbEnablePaging, allocator);
    }

    if (m_dbReqParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbReqParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dbReqParams.begin(); itr != m_dbReqParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dbRespParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbRespParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dbRespParams.begin(); itr != m_dbRespParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dbOrdParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbOrdParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dbOrdParams.begin(); itr != m_dbOrdParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dbEnableMappingRespHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbEnableMappingResp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbEnableMappingResp, allocator);
    }

}


string WizardConfig::GetDbTable() const
{
    return m_dbTable;
}

void WizardConfig::SetDbTable(const string& _dbTable)
{
    m_dbTable = _dbTable;
    m_dbTableHasBeenSet = true;
}

bool WizardConfig::DbTableHasBeenSet() const
{
    return m_dbTableHasBeenSet;
}

bool WizardConfig::GetDbEnablePaging() const
{
    return m_dbEnablePaging;
}

void WizardConfig::SetDbEnablePaging(const bool& _dbEnablePaging)
{
    m_dbEnablePaging = _dbEnablePaging;
    m_dbEnablePagingHasBeenSet = true;
}

bool WizardConfig::DbEnablePagingHasBeenSet() const
{
    return m_dbEnablePagingHasBeenSet;
}

vector<ServiceDatabaseReqParam> WizardConfig::GetDbReqParams() const
{
    return m_dbReqParams;
}

void WizardConfig::SetDbReqParams(const vector<ServiceDatabaseReqParam>& _dbReqParams)
{
    m_dbReqParams = _dbReqParams;
    m_dbReqParamsHasBeenSet = true;
}

bool WizardConfig::DbReqParamsHasBeenSet() const
{
    return m_dbReqParamsHasBeenSet;
}

vector<ServiceDatabaseRespParam> WizardConfig::GetDbRespParams() const
{
    return m_dbRespParams;
}

void WizardConfig::SetDbRespParams(const vector<ServiceDatabaseRespParam>& _dbRespParams)
{
    m_dbRespParams = _dbRespParams;
    m_dbRespParamsHasBeenSet = true;
}

bool WizardConfig::DbRespParamsHasBeenSet() const
{
    return m_dbRespParamsHasBeenSet;
}

vector<ServiceDatabaseOrderParam> WizardConfig::GetDbOrdParams() const
{
    return m_dbOrdParams;
}

void WizardConfig::SetDbOrdParams(const vector<ServiceDatabaseOrderParam>& _dbOrdParams)
{
    m_dbOrdParams = _dbOrdParams;
    m_dbOrdParamsHasBeenSet = true;
}

bool WizardConfig::DbOrdParamsHasBeenSet() const
{
    return m_dbOrdParamsHasBeenSet;
}

bool WizardConfig::GetDbEnableMappingResp() const
{
    return m_dbEnableMappingResp;
}

void WizardConfig::SetDbEnableMappingResp(const bool& _dbEnableMappingResp)
{
    m_dbEnableMappingResp = _dbEnableMappingResp;
    m_dbEnableMappingRespHasBeenSet = true;
}

bool WizardConfig::DbEnableMappingRespHasBeenSet() const
{
    return m_dbEnableMappingRespHasBeenSet;
}

