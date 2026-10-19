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

#include <tencentcloud/dbbrain/v20210527/model/DescribeBlockingLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeBlockingLogsRequest::DescribeBlockingLogsRequest() :
    m_instanceIdHasBeenSet(false),
    m_productHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_rootCauseHasBeenSet(false),
    m_blockingSqlMd5HasBeenSet(false),
    m_blockedSqlMd5HasBeenSet(false),
    m_databaseNamesHasBeenSet(false),
    m_blockingSessionIdsHasBeenSet(false),
    m_blockedSessionIdsHasBeenSet(false),
    m_blockingLoginNamesHasBeenSet(false),
    m_blockedLoginNamesHasBeenSet(false),
    m_blockingHostNamesHasBeenSet(false),
    m_blockedHostNamesHasBeenSet(false),
    m_blockingClientAppsHasBeenSet(false),
    m_blockedClientAppsHasBeenSet(false),
    m_blockedLockModesHasBeenSet(false),
    m_durationMsMinHasBeenSet(false),
    m_durationMsMaxHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderDirectionHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_withXmlHasBeenSet(false)
{
}

string DescribeBlockingLogsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_rootCauseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootCause";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rootCause.c_str(), allocator).Move(), allocator);
    }

    if (m_blockingSqlMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingSqlMd5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_blockingSqlMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedSqlMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedSqlMd5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_blockedSqlMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_databaseNames.begin(); itr != m_databaseNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_blockingSessionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingSessionIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_blockingSessionIds.begin(); itr != m_blockingSessionIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_blockedSessionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedSessionIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_blockedSessionIds.begin(); itr != m_blockedSessionIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_blockingLoginNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingLoginNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_blockingLoginNames.begin(); itr != m_blockingLoginNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_blockedLoginNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedLoginNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_blockedLoginNames.begin(); itr != m_blockedLoginNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_blockingHostNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingHostNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_blockingHostNames.begin(); itr != m_blockingHostNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_blockedHostNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedHostNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_blockedHostNames.begin(); itr != m_blockedHostNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_blockingClientAppsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingClientApps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_blockingClientApps.begin(); itr != m_blockingClientApps.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_blockedClientAppsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedClientApps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_blockedClientApps.begin(); itr != m_blockedClientApps.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_blockedLockModesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedLockModes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_blockedLockModes.begin(); itr != m_blockedLockModes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_durationMsMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMsMin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_durationMsMin, allocator);
    }

    if (m_durationMsMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMsMax";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_durationMsMax, allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_withXmlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithXml";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withXml, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBlockingLogsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeBlockingLogsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeBlockingLogsRequest::GetProduct() const
{
    return m_product;
}

void DescribeBlockingLogsRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeBlockingLogsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeBlockingLogsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeBlockingLogsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeBlockingLogsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeBlockingLogsRequest::GetRootCause() const
{
    return m_rootCause;
}

void DescribeBlockingLogsRequest::SetRootCause(const string& _rootCause)
{
    m_rootCause = _rootCause;
    m_rootCauseHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::RootCauseHasBeenSet() const
{
    return m_rootCauseHasBeenSet;
}

string DescribeBlockingLogsRequest::GetBlockingSqlMd5() const
{
    return m_blockingSqlMd5;
}

void DescribeBlockingLogsRequest::SetBlockingSqlMd5(const string& _blockingSqlMd5)
{
    m_blockingSqlMd5 = _blockingSqlMd5;
    m_blockingSqlMd5HasBeenSet = true;
}

bool DescribeBlockingLogsRequest::BlockingSqlMd5HasBeenSet() const
{
    return m_blockingSqlMd5HasBeenSet;
}

string DescribeBlockingLogsRequest::GetBlockedSqlMd5() const
{
    return m_blockedSqlMd5;
}

void DescribeBlockingLogsRequest::SetBlockedSqlMd5(const string& _blockedSqlMd5)
{
    m_blockedSqlMd5 = _blockedSqlMd5;
    m_blockedSqlMd5HasBeenSet = true;
}

bool DescribeBlockingLogsRequest::BlockedSqlMd5HasBeenSet() const
{
    return m_blockedSqlMd5HasBeenSet;
}

vector<string> DescribeBlockingLogsRequest::GetDatabaseNames() const
{
    return m_databaseNames;
}

void DescribeBlockingLogsRequest::SetDatabaseNames(const vector<string>& _databaseNames)
{
    m_databaseNames = _databaseNames;
    m_databaseNamesHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::DatabaseNamesHasBeenSet() const
{
    return m_databaseNamesHasBeenSet;
}

vector<int64_t> DescribeBlockingLogsRequest::GetBlockingSessionIds() const
{
    return m_blockingSessionIds;
}

void DescribeBlockingLogsRequest::SetBlockingSessionIds(const vector<int64_t>& _blockingSessionIds)
{
    m_blockingSessionIds = _blockingSessionIds;
    m_blockingSessionIdsHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::BlockingSessionIdsHasBeenSet() const
{
    return m_blockingSessionIdsHasBeenSet;
}

vector<int64_t> DescribeBlockingLogsRequest::GetBlockedSessionIds() const
{
    return m_blockedSessionIds;
}

void DescribeBlockingLogsRequest::SetBlockedSessionIds(const vector<int64_t>& _blockedSessionIds)
{
    m_blockedSessionIds = _blockedSessionIds;
    m_blockedSessionIdsHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::BlockedSessionIdsHasBeenSet() const
{
    return m_blockedSessionIdsHasBeenSet;
}

vector<string> DescribeBlockingLogsRequest::GetBlockingLoginNames() const
{
    return m_blockingLoginNames;
}

void DescribeBlockingLogsRequest::SetBlockingLoginNames(const vector<string>& _blockingLoginNames)
{
    m_blockingLoginNames = _blockingLoginNames;
    m_blockingLoginNamesHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::BlockingLoginNamesHasBeenSet() const
{
    return m_blockingLoginNamesHasBeenSet;
}

vector<string> DescribeBlockingLogsRequest::GetBlockedLoginNames() const
{
    return m_blockedLoginNames;
}

void DescribeBlockingLogsRequest::SetBlockedLoginNames(const vector<string>& _blockedLoginNames)
{
    m_blockedLoginNames = _blockedLoginNames;
    m_blockedLoginNamesHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::BlockedLoginNamesHasBeenSet() const
{
    return m_blockedLoginNamesHasBeenSet;
}

vector<string> DescribeBlockingLogsRequest::GetBlockingHostNames() const
{
    return m_blockingHostNames;
}

void DescribeBlockingLogsRequest::SetBlockingHostNames(const vector<string>& _blockingHostNames)
{
    m_blockingHostNames = _blockingHostNames;
    m_blockingHostNamesHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::BlockingHostNamesHasBeenSet() const
{
    return m_blockingHostNamesHasBeenSet;
}

vector<string> DescribeBlockingLogsRequest::GetBlockedHostNames() const
{
    return m_blockedHostNames;
}

void DescribeBlockingLogsRequest::SetBlockedHostNames(const vector<string>& _blockedHostNames)
{
    m_blockedHostNames = _blockedHostNames;
    m_blockedHostNamesHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::BlockedHostNamesHasBeenSet() const
{
    return m_blockedHostNamesHasBeenSet;
}

vector<string> DescribeBlockingLogsRequest::GetBlockingClientApps() const
{
    return m_blockingClientApps;
}

void DescribeBlockingLogsRequest::SetBlockingClientApps(const vector<string>& _blockingClientApps)
{
    m_blockingClientApps = _blockingClientApps;
    m_blockingClientAppsHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::BlockingClientAppsHasBeenSet() const
{
    return m_blockingClientAppsHasBeenSet;
}

vector<string> DescribeBlockingLogsRequest::GetBlockedClientApps() const
{
    return m_blockedClientApps;
}

void DescribeBlockingLogsRequest::SetBlockedClientApps(const vector<string>& _blockedClientApps)
{
    m_blockedClientApps = _blockedClientApps;
    m_blockedClientAppsHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::BlockedClientAppsHasBeenSet() const
{
    return m_blockedClientAppsHasBeenSet;
}

vector<string> DescribeBlockingLogsRequest::GetBlockedLockModes() const
{
    return m_blockedLockModes;
}

void DescribeBlockingLogsRequest::SetBlockedLockModes(const vector<string>& _blockedLockModes)
{
    m_blockedLockModes = _blockedLockModes;
    m_blockedLockModesHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::BlockedLockModesHasBeenSet() const
{
    return m_blockedLockModesHasBeenSet;
}

int64_t DescribeBlockingLogsRequest::GetDurationMsMin() const
{
    return m_durationMsMin;
}

void DescribeBlockingLogsRequest::SetDurationMsMin(const int64_t& _durationMsMin)
{
    m_durationMsMin = _durationMsMin;
    m_durationMsMinHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::DurationMsMinHasBeenSet() const
{
    return m_durationMsMinHasBeenSet;
}

int64_t DescribeBlockingLogsRequest::GetDurationMsMax() const
{
    return m_durationMsMax;
}

void DescribeBlockingLogsRequest::SetDurationMsMax(const int64_t& _durationMsMax)
{
    m_durationMsMax = _durationMsMax;
    m_durationMsMaxHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::DurationMsMaxHasBeenSet() const
{
    return m_durationMsMaxHasBeenSet;
}

string DescribeBlockingLogsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeBlockingLogsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeBlockingLogsRequest::GetOrderDirection() const
{
    return m_orderDirection;
}

void DescribeBlockingLogsRequest::SetOrderDirection(const string& _orderDirection)
{
    m_orderDirection = _orderDirection;
    m_orderDirectionHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::OrderDirectionHasBeenSet() const
{
    return m_orderDirectionHasBeenSet;
}

int64_t DescribeBlockingLogsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBlockingLogsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeBlockingLogsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBlockingLogsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

bool DescribeBlockingLogsRequest::GetWithXml() const
{
    return m_withXml;
}

void DescribeBlockingLogsRequest::SetWithXml(const bool& _withXml)
{
    m_withXml = _withXml;
    m_withXmlHasBeenSet = true;
}

bool DescribeBlockingLogsRequest::WithXmlHasBeenSet() const
{
    return m_withXmlHasBeenSet;
}


