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

#include <tencentcloud/postgres/v20170312/model/AnalysisItems.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

AnalysisItems::AnalysisItems() :
    m_databaseNameHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_normalQueryHasBeenSet(false),
    m_clientAddrHasBeenSet(false),
    m_callNumHasBeenSet(false),
    m_callPercentHasBeenSet(false),
    m_costTimeHasBeenSet(false),
    m_costPercentHasBeenSet(false),
    m_minCostTimeHasBeenSet(false),
    m_maxCostTimeHasBeenSet(false),
    m_avgCostTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_lastTimeHasBeenSet(false)
{
}

CoreInternalOutcome AnalysisItems::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisItems.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisItems.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("NormalQuery") && !value["NormalQuery"].IsNull())
    {
        if (!value["NormalQuery"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisItems.NormalQuery` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_normalQuery = string(value["NormalQuery"].GetString());
        m_normalQueryHasBeenSet = true;
    }

    if (value.HasMember("ClientAddr") && !value["ClientAddr"].IsNull())
    {
        if (!value["ClientAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisItems.ClientAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientAddr = string(value["ClientAddr"].GetString());
        m_clientAddrHasBeenSet = true;
    }

    if (value.HasMember("CallNum") && !value["CallNum"].IsNull())
    {
        if (!value["CallNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisItems.CallNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_callNum = value["CallNum"].GetUint64();
        m_callNumHasBeenSet = true;
    }

    if (value.HasMember("CallPercent") && !value["CallPercent"].IsNull())
    {
        if (!value["CallPercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisItems.CallPercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_callPercent = value["CallPercent"].GetDouble();
        m_callPercentHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisItems.CostTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = value["CostTime"].GetDouble();
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("CostPercent") && !value["CostPercent"].IsNull())
    {
        if (!value["CostPercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisItems.CostPercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_costPercent = value["CostPercent"].GetDouble();
        m_costPercentHasBeenSet = true;
    }

    if (value.HasMember("MinCostTime") && !value["MinCostTime"].IsNull())
    {
        if (!value["MinCostTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisItems.MinCostTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minCostTime = value["MinCostTime"].GetDouble();
        m_minCostTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxCostTime") && !value["MaxCostTime"].IsNull())
    {
        if (!value["MaxCostTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisItems.MaxCostTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxCostTime = value["MaxCostTime"].GetDouble();
        m_maxCostTimeHasBeenSet = true;
    }

    if (value.HasMember("AvgCostTime") && !value["AvgCostTime"].IsNull())
    {
        if (!value["AvgCostTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisItems.AvgCostTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgCostTime = value["AvgCostTime"].GetDouble();
        m_avgCostTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisItems.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisItems.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnalysisItems::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_normalQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalQuery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_normalQuery.c_str(), allocator).Move(), allocator);
    }

    if (m_clientAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_callNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callNum, allocator);
    }

    if (m_callPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callPercent, allocator);
    }

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costTime, allocator);
    }

    if (m_costPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costPercent, allocator);
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

    if (m_avgCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgCostTime, allocator);
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

}


string AnalysisItems::GetDatabaseName() const
{
    return m_databaseName;
}

void AnalysisItems::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool AnalysisItems::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string AnalysisItems::GetUserName() const
{
    return m_userName;
}

void AnalysisItems::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool AnalysisItems::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string AnalysisItems::GetNormalQuery() const
{
    return m_normalQuery;
}

void AnalysisItems::SetNormalQuery(const string& _normalQuery)
{
    m_normalQuery = _normalQuery;
    m_normalQueryHasBeenSet = true;
}

bool AnalysisItems::NormalQueryHasBeenSet() const
{
    return m_normalQueryHasBeenSet;
}

string AnalysisItems::GetClientAddr() const
{
    return m_clientAddr;
}

void AnalysisItems::SetClientAddr(const string& _clientAddr)
{
    m_clientAddr = _clientAddr;
    m_clientAddrHasBeenSet = true;
}

bool AnalysisItems::ClientAddrHasBeenSet() const
{
    return m_clientAddrHasBeenSet;
}

uint64_t AnalysisItems::GetCallNum() const
{
    return m_callNum;
}

void AnalysisItems::SetCallNum(const uint64_t& _callNum)
{
    m_callNum = _callNum;
    m_callNumHasBeenSet = true;
}

bool AnalysisItems::CallNumHasBeenSet() const
{
    return m_callNumHasBeenSet;
}

double AnalysisItems::GetCallPercent() const
{
    return m_callPercent;
}

void AnalysisItems::SetCallPercent(const double& _callPercent)
{
    m_callPercent = _callPercent;
    m_callPercentHasBeenSet = true;
}

bool AnalysisItems::CallPercentHasBeenSet() const
{
    return m_callPercentHasBeenSet;
}

double AnalysisItems::GetCostTime() const
{
    return m_costTime;
}

void AnalysisItems::SetCostTime(const double& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool AnalysisItems::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

double AnalysisItems::GetCostPercent() const
{
    return m_costPercent;
}

void AnalysisItems::SetCostPercent(const double& _costPercent)
{
    m_costPercent = _costPercent;
    m_costPercentHasBeenSet = true;
}

bool AnalysisItems::CostPercentHasBeenSet() const
{
    return m_costPercentHasBeenSet;
}

double AnalysisItems::GetMinCostTime() const
{
    return m_minCostTime;
}

void AnalysisItems::SetMinCostTime(const double& _minCostTime)
{
    m_minCostTime = _minCostTime;
    m_minCostTimeHasBeenSet = true;
}

bool AnalysisItems::MinCostTimeHasBeenSet() const
{
    return m_minCostTimeHasBeenSet;
}

double AnalysisItems::GetMaxCostTime() const
{
    return m_maxCostTime;
}

void AnalysisItems::SetMaxCostTime(const double& _maxCostTime)
{
    m_maxCostTime = _maxCostTime;
    m_maxCostTimeHasBeenSet = true;
}

bool AnalysisItems::MaxCostTimeHasBeenSet() const
{
    return m_maxCostTimeHasBeenSet;
}

double AnalysisItems::GetAvgCostTime() const
{
    return m_avgCostTime;
}

void AnalysisItems::SetAvgCostTime(const double& _avgCostTime)
{
    m_avgCostTime = _avgCostTime;
    m_avgCostTimeHasBeenSet = true;
}

bool AnalysisItems::AvgCostTimeHasBeenSet() const
{
    return m_avgCostTimeHasBeenSet;
}

string AnalysisItems::GetFirstTime() const
{
    return m_firstTime;
}

void AnalysisItems::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AnalysisItems::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

string AnalysisItems::GetLastTime() const
{
    return m_lastTime;
}

void AnalysisItems::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool AnalysisItems::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

