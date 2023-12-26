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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeSlowQueryRecordsResponse::DescribeSlowQueryRecordsResponse() :
    m_totalCountHasBeenSet(false),
    m_slowQueryRecordsHasBeenSet(false),
    m_dBNameListHasBeenSet(false),
    m_catalogNameListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSlowQueryRecordsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("SlowQueryRecords") && !rsp["SlowQueryRecords"].IsNull())
    {
        if (!rsp["SlowQueryRecords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecords` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SlowQueryRecords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SlowQueryRecord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_slowQueryRecords.push_back(item);
        }
        m_slowQueryRecordsHasBeenSet = true;
    }

    if (rsp.HasMember("DBNameList") && !rsp["DBNameList"].IsNull())
    {
        if (!rsp["DBNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBNameList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DBNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dBNameList.push_back((*itr).GetString());
        }
        m_dBNameListHasBeenSet = true;
    }

    if (rsp.HasMember("CatalogNameList") && !rsp["CatalogNameList"].IsNull())
    {
        if (!rsp["CatalogNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CatalogNameList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CatalogNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_catalogNameList.push_back((*itr).GetString());
        }
        m_catalogNameListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSlowQueryRecordsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_slowQueryRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlowQueryRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_slowQueryRecords.begin(); itr != m_slowQueryRecords.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dBNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dBNameList.begin(); itr != m_dBNameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_catalogNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_catalogNameList.begin(); itr != m_catalogNameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


int64_t DescribeSlowQueryRecordsResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeSlowQueryRecordsResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<SlowQueryRecord> DescribeSlowQueryRecordsResponse::GetSlowQueryRecords() const
{
    return m_slowQueryRecords;
}

bool DescribeSlowQueryRecordsResponse::SlowQueryRecordsHasBeenSet() const
{
    return m_slowQueryRecordsHasBeenSet;
}

vector<string> DescribeSlowQueryRecordsResponse::GetDBNameList() const
{
    return m_dBNameList;
}

bool DescribeSlowQueryRecordsResponse::DBNameListHasBeenSet() const
{
    return m_dBNameListHasBeenSet;
}

vector<string> DescribeSlowQueryRecordsResponse::GetCatalogNameList() const
{
    return m_catalogNameList;
}

bool DescribeSlowQueryRecordsResponse::CatalogNameListHasBeenSet() const
{
    return m_catalogNameListHasBeenSet;
}


