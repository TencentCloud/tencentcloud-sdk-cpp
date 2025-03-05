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

#include <tencentcloud/cdwpg/v20201230/model/NormQueryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

NormQueryItem::NormQueryItem() :
    m_callTimesHasBeenSet(false),
    m_sharedReadBlocksHasBeenSet(false),
    m_sharedWriteBlocksHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_normalQueryHasBeenSet(false),
    m_maxElapsedQueryHasBeenSet(false),
    m_costTimeHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_totalCallTimesPercentHasBeenSet(false),
    m_totalCostTimePercentHasBeenSet(false),
    m_minCostTimeHasBeenSet(false),
    m_maxCostTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_readCostTimeHasBeenSet(false),
    m_writeCostTimeHasBeenSet(false)
{
}

CoreInternalOutcome NormQueryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallTimes") && !value["CallTimes"].IsNull())
    {
        if (!value["CallTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.CallTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_callTimes = value["CallTimes"].GetInt64();
        m_callTimesHasBeenSet = true;
    }

    if (value.HasMember("SharedReadBlocks") && !value["SharedReadBlocks"].IsNull())
    {
        if (!value["SharedReadBlocks"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.SharedReadBlocks` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sharedReadBlocks = value["SharedReadBlocks"].GetInt64();
        m_sharedReadBlocksHasBeenSet = true;
    }

    if (value.HasMember("SharedWriteBlocks") && !value["SharedWriteBlocks"].IsNull())
    {
        if (!value["SharedWriteBlocks"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.SharedWriteBlocks` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sharedWriteBlocks = value["SharedWriteBlocks"].GetInt64();
        m_sharedWriteBlocksHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("NormalQuery") && !value["NormalQuery"].IsNull())
    {
        if (!value["NormalQuery"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.NormalQuery` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_normalQuery = string(value["NormalQuery"].GetString());
        m_normalQueryHasBeenSet = true;
    }

    if (value.HasMember("MaxElapsedQuery") && !value["MaxElapsedQuery"].IsNull())
    {
        if (!value["MaxElapsedQuery"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.MaxElapsedQuery` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxElapsedQuery = string(value["MaxElapsedQuery"].GetString());
        m_maxElapsedQueryHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.CostTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = value["CostTime"].GetDouble();
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("TotalCallTimesPercent") && !value["TotalCallTimesPercent"].IsNull())
    {
        if (!value["TotalCallTimesPercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.TotalCallTimesPercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCallTimesPercent = value["TotalCallTimesPercent"].GetDouble();
        m_totalCallTimesPercentHasBeenSet = true;
    }

    if (value.HasMember("TotalCostTimePercent") && !value["TotalCostTimePercent"].IsNull())
    {
        if (!value["TotalCostTimePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.TotalCostTimePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCostTimePercent = value["TotalCostTimePercent"].GetDouble();
        m_totalCostTimePercentHasBeenSet = true;
    }

    if (value.HasMember("MinCostTime") && !value["MinCostTime"].IsNull())
    {
        if (!value["MinCostTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.MinCostTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minCostTime = value["MinCostTime"].GetDouble();
        m_minCostTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxCostTime") && !value["MaxCostTime"].IsNull())
    {
        if (!value["MaxCostTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.MaxCostTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxCostTime = value["MaxCostTime"].GetDouble();
        m_maxCostTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }

    if (value.HasMember("ReadCostTime") && !value["ReadCostTime"].IsNull())
    {
        if (!value["ReadCostTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.ReadCostTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_readCostTime = value["ReadCostTime"].GetDouble();
        m_readCostTimeHasBeenSet = true;
    }

    if (value.HasMember("WriteCostTime") && !value["WriteCostTime"].IsNull())
    {
        if (!value["WriteCostTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NormQueryItem.WriteCostTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_writeCostTime = value["WriteCostTime"].GetDouble();
        m_writeCostTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NormQueryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callTimes, allocator);
    }

    if (m_sharedReadBlocksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedReadBlocks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sharedReadBlocks, allocator);
    }

    if (m_sharedWriteBlocksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedWriteBlocks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sharedWriteBlocks, allocator);
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

    if (m_maxElapsedQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxElapsedQuery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxElapsedQuery.c_str(), allocator).Move(), allocator);
    }

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costTime, allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCallTimesPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCallTimesPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCallTimesPercent, allocator);
    }

    if (m_totalCostTimePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCostTimePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCostTimePercent, allocator);
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

}


int64_t NormQueryItem::GetCallTimes() const
{
    return m_callTimes;
}

void NormQueryItem::SetCallTimes(const int64_t& _callTimes)
{
    m_callTimes = _callTimes;
    m_callTimesHasBeenSet = true;
}

bool NormQueryItem::CallTimesHasBeenSet() const
{
    return m_callTimesHasBeenSet;
}

int64_t NormQueryItem::GetSharedReadBlocks() const
{
    return m_sharedReadBlocks;
}

void NormQueryItem::SetSharedReadBlocks(const int64_t& _sharedReadBlocks)
{
    m_sharedReadBlocks = _sharedReadBlocks;
    m_sharedReadBlocksHasBeenSet = true;
}

bool NormQueryItem::SharedReadBlocksHasBeenSet() const
{
    return m_sharedReadBlocksHasBeenSet;
}

int64_t NormQueryItem::GetSharedWriteBlocks() const
{
    return m_sharedWriteBlocks;
}

void NormQueryItem::SetSharedWriteBlocks(const int64_t& _sharedWriteBlocks)
{
    m_sharedWriteBlocks = _sharedWriteBlocks;
    m_sharedWriteBlocksHasBeenSet = true;
}

bool NormQueryItem::SharedWriteBlocksHasBeenSet() const
{
    return m_sharedWriteBlocksHasBeenSet;
}

string NormQueryItem::GetDatabaseName() const
{
    return m_databaseName;
}

void NormQueryItem::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool NormQueryItem::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string NormQueryItem::GetNormalQuery() const
{
    return m_normalQuery;
}

void NormQueryItem::SetNormalQuery(const string& _normalQuery)
{
    m_normalQuery = _normalQuery;
    m_normalQueryHasBeenSet = true;
}

bool NormQueryItem::NormalQueryHasBeenSet() const
{
    return m_normalQueryHasBeenSet;
}

string NormQueryItem::GetMaxElapsedQuery() const
{
    return m_maxElapsedQuery;
}

void NormQueryItem::SetMaxElapsedQuery(const string& _maxElapsedQuery)
{
    m_maxElapsedQuery = _maxElapsedQuery;
    m_maxElapsedQueryHasBeenSet = true;
}

bool NormQueryItem::MaxElapsedQueryHasBeenSet() const
{
    return m_maxElapsedQueryHasBeenSet;
}

double NormQueryItem::GetCostTime() const
{
    return m_costTime;
}

void NormQueryItem::SetCostTime(const double& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool NormQueryItem::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

string NormQueryItem::GetClientIp() const
{
    return m_clientIp;
}

void NormQueryItem::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool NormQueryItem::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

string NormQueryItem::GetUserName() const
{
    return m_userName;
}

void NormQueryItem::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool NormQueryItem::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

double NormQueryItem::GetTotalCallTimesPercent() const
{
    return m_totalCallTimesPercent;
}

void NormQueryItem::SetTotalCallTimesPercent(const double& _totalCallTimesPercent)
{
    m_totalCallTimesPercent = _totalCallTimesPercent;
    m_totalCallTimesPercentHasBeenSet = true;
}

bool NormQueryItem::TotalCallTimesPercentHasBeenSet() const
{
    return m_totalCallTimesPercentHasBeenSet;
}

double NormQueryItem::GetTotalCostTimePercent() const
{
    return m_totalCostTimePercent;
}

void NormQueryItem::SetTotalCostTimePercent(const double& _totalCostTimePercent)
{
    m_totalCostTimePercent = _totalCostTimePercent;
    m_totalCostTimePercentHasBeenSet = true;
}

bool NormQueryItem::TotalCostTimePercentHasBeenSet() const
{
    return m_totalCostTimePercentHasBeenSet;
}

double NormQueryItem::GetMinCostTime() const
{
    return m_minCostTime;
}

void NormQueryItem::SetMinCostTime(const double& _minCostTime)
{
    m_minCostTime = _minCostTime;
    m_minCostTimeHasBeenSet = true;
}

bool NormQueryItem::MinCostTimeHasBeenSet() const
{
    return m_minCostTimeHasBeenSet;
}

double NormQueryItem::GetMaxCostTime() const
{
    return m_maxCostTime;
}

void NormQueryItem::SetMaxCostTime(const double& _maxCostTime)
{
    m_maxCostTime = _maxCostTime;
    m_maxCostTimeHasBeenSet = true;
}

bool NormQueryItem::MaxCostTimeHasBeenSet() const
{
    return m_maxCostTimeHasBeenSet;
}

string NormQueryItem::GetFirstTime() const
{
    return m_firstTime;
}

void NormQueryItem::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool NormQueryItem::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

string NormQueryItem::GetLastTime() const
{
    return m_lastTime;
}

void NormQueryItem::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool NormQueryItem::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

double NormQueryItem::GetReadCostTime() const
{
    return m_readCostTime;
}

void NormQueryItem::SetReadCostTime(const double& _readCostTime)
{
    m_readCostTime = _readCostTime;
    m_readCostTimeHasBeenSet = true;
}

bool NormQueryItem::ReadCostTimeHasBeenSet() const
{
    return m_readCostTimeHasBeenSet;
}

double NormQueryItem::GetWriteCostTime() const
{
    return m_writeCostTime;
}

void NormQueryItem::SetWriteCostTime(const double& _writeCostTime)
{
    m_writeCostTime = _writeCostTime;
    m_writeCostTimeHasBeenSet = true;
}

bool NormQueryItem::WriteCostTimeHasBeenSet() const
{
    return m_writeCostTimeHasBeenSet;
}

