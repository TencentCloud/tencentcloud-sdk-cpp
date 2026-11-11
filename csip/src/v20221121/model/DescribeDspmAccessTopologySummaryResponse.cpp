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

#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessTopologySummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeDspmAccessTopologySummaryResponse::DescribeDspmAccessTopologySummaryResponse() :
    m_sourceIpCountHasBeenSet(false),
    m_accountCountHasBeenSet(false),
    m_dbCountHasBeenSet(false),
    m_tableCountHasBeenSet(false),
    m_accessCountLast7DaysHasBeenSet(false),
    m_accessCountLast30DaysHasBeenSet(false),
    m_tableCombinationCountHasBeenSet(false),
    m_dataIncompleteHasBeenSet(false),
    m_lastCalcTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDspmAccessTopologySummaryResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("SourceIpCount") && !rsp["SourceIpCount"].IsNull())
    {
        if (!rsp["SourceIpCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIpCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIpCount = rsp["SourceIpCount"].GetInt64();
        m_sourceIpCountHasBeenSet = true;
    }

    if (rsp.HasMember("AccountCount") && !rsp["AccountCount"].IsNull())
    {
        if (!rsp["AccountCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountCount = rsp["AccountCount"].GetInt64();
        m_accountCountHasBeenSet = true;
    }

    if (rsp.HasMember("DbCount") && !rsp["DbCount"].IsNull())
    {
        if (!rsp["DbCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DbCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dbCount = rsp["DbCount"].GetInt64();
        m_dbCountHasBeenSet = true;
    }

    if (rsp.HasMember("TableCount") && !rsp["TableCount"].IsNull())
    {
        if (!rsp["TableCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableCount = rsp["TableCount"].GetInt64();
        m_tableCountHasBeenSet = true;
    }

    if (rsp.HasMember("AccessCountLast7Days") && !rsp["AccessCountLast7Days"].IsNull())
    {
        if (!rsp["AccessCountLast7Days"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessCountLast7Days` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessCountLast7Days = rsp["AccessCountLast7Days"].GetInt64();
        m_accessCountLast7DaysHasBeenSet = true;
    }

    if (rsp.HasMember("AccessCountLast30Days") && !rsp["AccessCountLast30Days"].IsNull())
    {
        if (!rsp["AccessCountLast30Days"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessCountLast30Days` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessCountLast30Days = rsp["AccessCountLast30Days"].GetInt64();
        m_accessCountLast30DaysHasBeenSet = true;
    }

    if (rsp.HasMember("TableCombinationCount") && !rsp["TableCombinationCount"].IsNull())
    {
        if (!rsp["TableCombinationCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableCombinationCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableCombinationCount = rsp["TableCombinationCount"].GetInt64();
        m_tableCombinationCountHasBeenSet = true;
    }

    if (rsp.HasMember("DataIncomplete") && !rsp["DataIncomplete"].IsNull())
    {
        if (!rsp["DataIncomplete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataIncomplete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dataIncomplete = rsp["DataIncomplete"].GetBool();
        m_dataIncompleteHasBeenSet = true;
    }

    if (rsp.HasMember("LastCalcTime") && !rsp["LastCalcTime"].IsNull())
    {
        if (!rsp["LastCalcTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastCalcTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCalcTime = string(rsp["LastCalcTime"].GetString());
        m_lastCalcTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDspmAccessTopologySummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sourceIpCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceIpCount, allocator);
    }

    if (m_accountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountCount, allocator);
    }

    if (m_dbCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbCount, allocator);
    }

    if (m_tableCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableCount, allocator);
    }

    if (m_accessCountLast7DaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessCountLast7Days";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessCountLast7Days, allocator);
    }

    if (m_accessCountLast30DaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessCountLast30Days";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessCountLast30Days, allocator);
    }

    if (m_tableCombinationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableCombinationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableCombinationCount, allocator);
    }

    if (m_dataIncompleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataIncomplete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataIncomplete, allocator);
    }

    if (m_lastCalcTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCalcTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCalcTime.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDspmAccessTopologySummaryResponse::GetSourceIpCount() const
{
    return m_sourceIpCount;
}

bool DescribeDspmAccessTopologySummaryResponse::SourceIpCountHasBeenSet() const
{
    return m_sourceIpCountHasBeenSet;
}

int64_t DescribeDspmAccessTopologySummaryResponse::GetAccountCount() const
{
    return m_accountCount;
}

bool DescribeDspmAccessTopologySummaryResponse::AccountCountHasBeenSet() const
{
    return m_accountCountHasBeenSet;
}

int64_t DescribeDspmAccessTopologySummaryResponse::GetDbCount() const
{
    return m_dbCount;
}

bool DescribeDspmAccessTopologySummaryResponse::DbCountHasBeenSet() const
{
    return m_dbCountHasBeenSet;
}

int64_t DescribeDspmAccessTopologySummaryResponse::GetTableCount() const
{
    return m_tableCount;
}

bool DescribeDspmAccessTopologySummaryResponse::TableCountHasBeenSet() const
{
    return m_tableCountHasBeenSet;
}

int64_t DescribeDspmAccessTopologySummaryResponse::GetAccessCountLast7Days() const
{
    return m_accessCountLast7Days;
}

bool DescribeDspmAccessTopologySummaryResponse::AccessCountLast7DaysHasBeenSet() const
{
    return m_accessCountLast7DaysHasBeenSet;
}

int64_t DescribeDspmAccessTopologySummaryResponse::GetAccessCountLast30Days() const
{
    return m_accessCountLast30Days;
}

bool DescribeDspmAccessTopologySummaryResponse::AccessCountLast30DaysHasBeenSet() const
{
    return m_accessCountLast30DaysHasBeenSet;
}

int64_t DescribeDspmAccessTopologySummaryResponse::GetTableCombinationCount() const
{
    return m_tableCombinationCount;
}

bool DescribeDspmAccessTopologySummaryResponse::TableCombinationCountHasBeenSet() const
{
    return m_tableCombinationCountHasBeenSet;
}

bool DescribeDspmAccessTopologySummaryResponse::GetDataIncomplete() const
{
    return m_dataIncomplete;
}

bool DescribeDspmAccessTopologySummaryResponse::DataIncompleteHasBeenSet() const
{
    return m_dataIncompleteHasBeenSet;
}

string DescribeDspmAccessTopologySummaryResponse::GetLastCalcTime() const
{
    return m_lastCalcTime;
}

bool DescribeDspmAccessTopologySummaryResponse::LastCalcTimeHasBeenSet() const
{
    return m_lastCalcTimeHasBeenSet;
}


