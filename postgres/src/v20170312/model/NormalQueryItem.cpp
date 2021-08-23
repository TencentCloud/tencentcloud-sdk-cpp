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

#include <tencentcloud/postgres/v20170312/model/NormalQueryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

NormalQueryItem::NormalQueryItem() :
    m_userNameHasBeenSet(false),
    m_callsHasBeenSet(false),
    m_callsGridsHasBeenSet(false),
    m_costTimeHasBeenSet(false),
    m_rowsHasBeenSet(false),
    m_minCostTimeHasBeenSet(false),
    m_maxCostTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_sharedReadBlksHasBeenSet(false),
    m_sharedWriteBlksHasBeenSet(false),
    m_readCostTimeHasBeenSet(false),
    m_writeCostTimeHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_normalQueryHasBeenSet(false)
{
}

CoreInternalOutcome NormalQueryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalQueryItem.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Calls") && !value["Calls"].IsNull())
    {
        if (!value["Calls"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NormalQueryItem.Calls` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_calls = value["Calls"].GetInt64();
        m_callsHasBeenSet = true;
    }

    if (value.HasMember("CallsGrids") && !value["CallsGrids"].IsNull())
    {
        if (!value["CallsGrids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NormalQueryItem.CallsGrids` is not array type"));

        const rapidjson::Value &tmpValue = value["CallsGrids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_callsGrids.push_back((*itr).GetInt64());
        }
        m_callsGridsHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NormalQueryItem.CostTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = value["CostTime"].GetDouble();
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("Rows") && !value["Rows"].IsNull())
    {
        if (!value["Rows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NormalQueryItem.Rows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rows = value["Rows"].GetInt64();
        m_rowsHasBeenSet = true;
    }

    if (value.HasMember("MinCostTime") && !value["MinCostTime"].IsNull())
    {
        if (!value["MinCostTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NormalQueryItem.MinCostTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minCostTime = value["MinCostTime"].GetDouble();
        m_minCostTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxCostTime") && !value["MaxCostTime"].IsNull())
    {
        if (!value["MaxCostTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NormalQueryItem.MaxCostTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxCostTime = value["MaxCostTime"].GetDouble();
        m_maxCostTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalQueryItem.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalQueryItem.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }

    if (value.HasMember("SharedReadBlks") && !value["SharedReadBlks"].IsNull())
    {
        if (!value["SharedReadBlks"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NormalQueryItem.SharedReadBlks` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sharedReadBlks = value["SharedReadBlks"].GetInt64();
        m_sharedReadBlksHasBeenSet = true;
    }

    if (value.HasMember("SharedWriteBlks") && !value["SharedWriteBlks"].IsNull())
    {
        if (!value["SharedWriteBlks"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NormalQueryItem.SharedWriteBlks` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sharedWriteBlks = value["SharedWriteBlks"].GetInt64();
        m_sharedWriteBlksHasBeenSet = true;
    }

    if (value.HasMember("ReadCostTime") && !value["ReadCostTime"].IsNull())
    {
        if (!value["ReadCostTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NormalQueryItem.ReadCostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readCostTime = value["ReadCostTime"].GetInt64();
        m_readCostTimeHasBeenSet = true;
    }

    if (value.HasMember("WriteCostTime") && !value["WriteCostTime"].IsNull())
    {
        if (!value["WriteCostTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NormalQueryItem.WriteCostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_writeCostTime = value["WriteCostTime"].GetInt64();
        m_writeCostTimeHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalQueryItem.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("NormalQuery") && !value["NormalQuery"].IsNull())
    {
        if (!value["NormalQuery"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalQueryItem.NormalQuery` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_normalQuery = string(value["NormalQuery"].GetString());
        m_normalQueryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NormalQueryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_callsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Calls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_calls, allocator);
    }

    if (m_callsGridsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallsGrids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callsGrids.begin(); itr != m_callsGrids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costTime, allocator);
    }

    if (m_rowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rows, allocator);
    }

    if (m_minCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minCostTime, allocator);
    }

    if (m_maxCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCostTime, allocator);
    }

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sharedReadBlksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedReadBlks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sharedReadBlks, allocator);
    }

    if (m_sharedWriteBlksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedWriteBlks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sharedWriteBlks, allocator);
    }

    if (m_readCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readCostTime, allocator);
    }

    if (m_writeCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_writeCostTime, allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_normalQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalQuery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_normalQuery.c_str(), allocator).Move(), allocator);
    }

}


string NormalQueryItem::GetUserName() const
{
    return m_userName;
}

void NormalQueryItem::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool NormalQueryItem::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

int64_t NormalQueryItem::GetCalls() const
{
    return m_calls;
}

void NormalQueryItem::SetCalls(const int64_t& _calls)
{
    m_calls = _calls;
    m_callsHasBeenSet = true;
}

bool NormalQueryItem::CallsHasBeenSet() const
{
    return m_callsHasBeenSet;
}

vector<int64_t> NormalQueryItem::GetCallsGrids() const
{
    return m_callsGrids;
}

void NormalQueryItem::SetCallsGrids(const vector<int64_t>& _callsGrids)
{
    m_callsGrids = _callsGrids;
    m_callsGridsHasBeenSet = true;
}

bool NormalQueryItem::CallsGridsHasBeenSet() const
{
    return m_callsGridsHasBeenSet;
}

double NormalQueryItem::GetCostTime() const
{
    return m_costTime;
}

void NormalQueryItem::SetCostTime(const double& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool NormalQueryItem::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

int64_t NormalQueryItem::GetRows() const
{
    return m_rows;
}

void NormalQueryItem::SetRows(const int64_t& _rows)
{
    m_rows = _rows;
    m_rowsHasBeenSet = true;
}

bool NormalQueryItem::RowsHasBeenSet() const
{
    return m_rowsHasBeenSet;
}

double NormalQueryItem::GetMinCostTime() const
{
    return m_minCostTime;
}

void NormalQueryItem::SetMinCostTime(const double& _minCostTime)
{
    m_minCostTime = _minCostTime;
    m_minCostTimeHasBeenSet = true;
}

bool NormalQueryItem::MinCostTimeHasBeenSet() const
{
    return m_minCostTimeHasBeenSet;
}

double NormalQueryItem::GetMaxCostTime() const
{
    return m_maxCostTime;
}

void NormalQueryItem::SetMaxCostTime(const double& _maxCostTime)
{
    m_maxCostTime = _maxCostTime;
    m_maxCostTimeHasBeenSet = true;
}

bool NormalQueryItem::MaxCostTimeHasBeenSet() const
{
    return m_maxCostTimeHasBeenSet;
}

string NormalQueryItem::GetFirstTime() const
{
    return m_firstTime;
}

void NormalQueryItem::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool NormalQueryItem::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

string NormalQueryItem::GetLastTime() const
{
    return m_lastTime;
}

void NormalQueryItem::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool NormalQueryItem::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

int64_t NormalQueryItem::GetSharedReadBlks() const
{
    return m_sharedReadBlks;
}

void NormalQueryItem::SetSharedReadBlks(const int64_t& _sharedReadBlks)
{
    m_sharedReadBlks = _sharedReadBlks;
    m_sharedReadBlksHasBeenSet = true;
}

bool NormalQueryItem::SharedReadBlksHasBeenSet() const
{
    return m_sharedReadBlksHasBeenSet;
}

int64_t NormalQueryItem::GetSharedWriteBlks() const
{
    return m_sharedWriteBlks;
}

void NormalQueryItem::SetSharedWriteBlks(const int64_t& _sharedWriteBlks)
{
    m_sharedWriteBlks = _sharedWriteBlks;
    m_sharedWriteBlksHasBeenSet = true;
}

bool NormalQueryItem::SharedWriteBlksHasBeenSet() const
{
    return m_sharedWriteBlksHasBeenSet;
}

int64_t NormalQueryItem::GetReadCostTime() const
{
    return m_readCostTime;
}

void NormalQueryItem::SetReadCostTime(const int64_t& _readCostTime)
{
    m_readCostTime = _readCostTime;
    m_readCostTimeHasBeenSet = true;
}

bool NormalQueryItem::ReadCostTimeHasBeenSet() const
{
    return m_readCostTimeHasBeenSet;
}

int64_t NormalQueryItem::GetWriteCostTime() const
{
    return m_writeCostTime;
}

void NormalQueryItem::SetWriteCostTime(const int64_t& _writeCostTime)
{
    m_writeCostTime = _writeCostTime;
    m_writeCostTimeHasBeenSet = true;
}

bool NormalQueryItem::WriteCostTimeHasBeenSet() const
{
    return m_writeCostTimeHasBeenSet;
}

string NormalQueryItem::GetDatabaseName() const
{
    return m_databaseName;
}

void NormalQueryItem::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool NormalQueryItem::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string NormalQueryItem::GetNormalQuery() const
{
    return m_normalQuery;
}

void NormalQueryItem::SetNormalQuery(const string& _normalQuery)
{
    m_normalQuery = _normalQuery;
    m_normalQueryHasBeenSet = true;
}

bool NormalQueryItem::NormalQueryHasBeenSet() const
{
    return m_normalQueryHasBeenSet;
}

