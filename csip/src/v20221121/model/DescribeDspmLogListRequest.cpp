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

#include <tencentcloud/csip/v20221121/model/DescribeDspmLogListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeDspmLogListRequest::DescribeDspmLogListRequest() :
    m_memberIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_dangerLevelHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_dbPortHasBeenSet(false),
    m_dbIpHasBeenSet(false),
    m_assetsIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_clientSideIpHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_hitRuleHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_fuzzySearchHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_restoreLogIdHasBeenSet(false),
    m_clientNameHasBeenSet(false),
    m_sourceTypesHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_sqlMainTypesHasBeenSet(false),
    m_sqlTypeHasBeenSet(false),
    m_rowNumMinHasBeenSet(false),
    m_rowNumMaxHasBeenSet(false),
    m_dbTypesHasBeenSet(false),
    m_retNoHasBeenSet(false),
    m_clientDriverNameHasBeenSet(false),
    m_clientPortHasBeenSet(false),
    m_logIdHasBeenSet(false),
    m_dangerLevelsHasBeenSet(false),
    m_sensitiveCategoryRuleHasBeenSet(false),
    m_sensitiveLevelRiskHasBeenSet(false),
    m_clientMacHasBeenSet(false)
{
}

string DescribeDspmLogListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_field.c_str(), allocator).Move(), allocator);
    }

    if (m_dangerLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DangerLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dangerLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dbPort, allocator);
    }

    if (m_dbIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbIp.c_str(), allocator).Move(), allocator);
    }

    if (m_assetsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetsId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_assetsId, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientSideIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientSideIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientSideIp.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_hitRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hitRule, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_fuzzySearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuzzySearch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fuzzySearch.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_restoreLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreLogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_restoreLogId, allocator);
    }

    if (m_clientNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceTypes.begin(); itr != m_sourceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlMainTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlMainTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sqlMainTypes.begin(); itr != m_sqlMainTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sqlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sqlType.c_str(), allocator).Move(), allocator);
    }

    if (m_rowNumMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowNumMin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rowNumMin, allocator);
    }

    if (m_rowNumMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowNumMax";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rowNumMax, allocator);
    }

    if (m_dbTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dbTypes.begin(); itr != m_dbTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_retNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retNo, allocator);
    }

    if (m_clientDriverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientDriverName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientDriverName.c_str(), allocator).Move(), allocator);
    }

    if (m_clientPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clientPort, allocator);
    }

    if (m_logIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logId.c_str(), allocator).Move(), allocator);
    }

    if (m_dangerLevelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DangerLevels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dangerLevels.begin(); itr != m_dangerLevels.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_sensitiveCategoryRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveCategoryRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sensitiveCategoryRule.c_str(), allocator).Move(), allocator);
    }

    if (m_sensitiveLevelRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveLevelRisk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sensitiveLevelRisk.c_str(), allocator).Move(), allocator);
    }

    if (m_clientMacHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientMac";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientMac.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeDspmLogListRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeDspmLogListRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeDspmLogListRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

uint64_t DescribeDspmLogListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDspmLogListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDspmLogListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeDspmLogListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDspmLogListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDspmLogListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeDspmLogListRequest::GetSort() const
{
    return m_sort;
}

void DescribeDspmLogListRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeDspmLogListRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string DescribeDspmLogListRequest::GetField() const
{
    return m_field;
}

void DescribeDspmLogListRequest::SetField(const string& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool DescribeDspmLogListRequest::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

string DescribeDspmLogListRequest::GetDangerLevel() const
{
    return m_dangerLevel;
}

void DescribeDspmLogListRequest::SetDangerLevel(const string& _dangerLevel)
{
    m_dangerLevel = _dangerLevel;
    m_dangerLevelHasBeenSet = true;
}

bool DescribeDspmLogListRequest::DangerLevelHasBeenSet() const
{
    return m_dangerLevelHasBeenSet;
}

string DescribeDspmLogListRequest::GetDbName() const
{
    return m_dbName;
}

void DescribeDspmLogListRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DescribeDspmLogListRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

int64_t DescribeDspmLogListRequest::GetDbPort() const
{
    return m_dbPort;
}

void DescribeDspmLogListRequest::SetDbPort(const int64_t& _dbPort)
{
    m_dbPort = _dbPort;
    m_dbPortHasBeenSet = true;
}

bool DescribeDspmLogListRequest::DbPortHasBeenSet() const
{
    return m_dbPortHasBeenSet;
}

string DescribeDspmLogListRequest::GetDbIp() const
{
    return m_dbIp;
}

void DescribeDspmLogListRequest::SetDbIp(const string& _dbIp)
{
    m_dbIp = _dbIp;
    m_dbIpHasBeenSet = true;
}

bool DescribeDspmLogListRequest::DbIpHasBeenSet() const
{
    return m_dbIpHasBeenSet;
}

int64_t DescribeDspmLogListRequest::GetAssetsId() const
{
    return m_assetsId;
}

void DescribeDspmLogListRequest::SetAssetsId(const int64_t& _assetsId)
{
    m_assetsId = _assetsId;
    m_assetsIdHasBeenSet = true;
}

bool DescribeDspmLogListRequest::AssetsIdHasBeenSet() const
{
    return m_assetsIdHasBeenSet;
}

string DescribeDspmLogListRequest::GetSessionId() const
{
    return m_sessionId;
}

void DescribeDspmLogListRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DescribeDspmLogListRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string DescribeDspmLogListRequest::GetClientSideIp() const
{
    return m_clientSideIp;
}

void DescribeDspmLogListRequest::SetClientSideIp(const string& _clientSideIp)
{
    m_clientSideIp = _clientSideIp;
    m_clientSideIpHasBeenSet = true;
}

bool DescribeDspmLogListRequest::ClientSideIpHasBeenSet() const
{
    return m_clientSideIpHasBeenSet;
}

int64_t DescribeDspmLogListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDspmLogListRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDspmLogListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeDspmLogListRequest::GetHitRule() const
{
    return m_hitRule;
}

void DescribeDspmLogListRequest::SetHitRule(const int64_t& _hitRule)
{
    m_hitRule = _hitRule;
    m_hitRuleHasBeenSet = true;
}

bool DescribeDspmLogListRequest::HitRuleHasBeenSet() const
{
    return m_hitRuleHasBeenSet;
}

int64_t DescribeDspmLogListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDspmLogListRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDspmLogListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDspmLogListRequest::GetFuzzySearch() const
{
    return m_fuzzySearch;
}

void DescribeDspmLogListRequest::SetFuzzySearch(const string& _fuzzySearch)
{
    m_fuzzySearch = _fuzzySearch;
    m_fuzzySearchHasBeenSet = true;
}

bool DescribeDspmLogListRequest::FuzzySearchHasBeenSet() const
{
    return m_fuzzySearchHasBeenSet;
}

string DescribeDspmLogListRequest::GetUserName() const
{
    return m_userName;
}

void DescribeDspmLogListRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeDspmLogListRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

int64_t DescribeDspmLogListRequest::GetRestoreLogId() const
{
    return m_restoreLogId;
}

void DescribeDspmLogListRequest::SetRestoreLogId(const int64_t& _restoreLogId)
{
    m_restoreLogId = _restoreLogId;
    m_restoreLogIdHasBeenSet = true;
}

bool DescribeDspmLogListRequest::RestoreLogIdHasBeenSet() const
{
    return m_restoreLogIdHasBeenSet;
}

string DescribeDspmLogListRequest::GetClientName() const
{
    return m_clientName;
}

void DescribeDspmLogListRequest::SetClientName(const string& _clientName)
{
    m_clientName = _clientName;
    m_clientNameHasBeenSet = true;
}

bool DescribeDspmLogListRequest::ClientNameHasBeenSet() const
{
    return m_clientNameHasBeenSet;
}

vector<string> DescribeDspmLogListRequest::GetSourceTypes() const
{
    return m_sourceTypes;
}

void DescribeDspmLogListRequest::SetSourceTypes(const vector<string>& _sourceTypes)
{
    m_sourceTypes = _sourceTypes;
    m_sourceTypesHasBeenSet = true;
}

bool DescribeDspmLogListRequest::SourceTypesHasBeenSet() const
{
    return m_sourceTypesHasBeenSet;
}

string DescribeDspmLogListRequest::GetTableName() const
{
    return m_tableName;
}

void DescribeDspmLogListRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DescribeDspmLogListRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string DescribeDspmLogListRequest::GetFieldName() const
{
    return m_fieldName;
}

void DescribeDspmLogListRequest::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool DescribeDspmLogListRequest::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

vector<string> DescribeDspmLogListRequest::GetSqlMainTypes() const
{
    return m_sqlMainTypes;
}

void DescribeDspmLogListRequest::SetSqlMainTypes(const vector<string>& _sqlMainTypes)
{
    m_sqlMainTypes = _sqlMainTypes;
    m_sqlMainTypesHasBeenSet = true;
}

bool DescribeDspmLogListRequest::SqlMainTypesHasBeenSet() const
{
    return m_sqlMainTypesHasBeenSet;
}

string DescribeDspmLogListRequest::GetSqlType() const
{
    return m_sqlType;
}

void DescribeDspmLogListRequest::SetSqlType(const string& _sqlType)
{
    m_sqlType = _sqlType;
    m_sqlTypeHasBeenSet = true;
}

bool DescribeDspmLogListRequest::SqlTypeHasBeenSet() const
{
    return m_sqlTypeHasBeenSet;
}

int64_t DescribeDspmLogListRequest::GetRowNumMin() const
{
    return m_rowNumMin;
}

void DescribeDspmLogListRequest::SetRowNumMin(const int64_t& _rowNumMin)
{
    m_rowNumMin = _rowNumMin;
    m_rowNumMinHasBeenSet = true;
}

bool DescribeDspmLogListRequest::RowNumMinHasBeenSet() const
{
    return m_rowNumMinHasBeenSet;
}

int64_t DescribeDspmLogListRequest::GetRowNumMax() const
{
    return m_rowNumMax;
}

void DescribeDspmLogListRequest::SetRowNumMax(const int64_t& _rowNumMax)
{
    m_rowNumMax = _rowNumMax;
    m_rowNumMaxHasBeenSet = true;
}

bool DescribeDspmLogListRequest::RowNumMaxHasBeenSet() const
{
    return m_rowNumMaxHasBeenSet;
}

vector<string> DescribeDspmLogListRequest::GetDbTypes() const
{
    return m_dbTypes;
}

void DescribeDspmLogListRequest::SetDbTypes(const vector<string>& _dbTypes)
{
    m_dbTypes = _dbTypes;
    m_dbTypesHasBeenSet = true;
}

bool DescribeDspmLogListRequest::DbTypesHasBeenSet() const
{
    return m_dbTypesHasBeenSet;
}

int64_t DescribeDspmLogListRequest::GetRetNo() const
{
    return m_retNo;
}

void DescribeDspmLogListRequest::SetRetNo(const int64_t& _retNo)
{
    m_retNo = _retNo;
    m_retNoHasBeenSet = true;
}

bool DescribeDspmLogListRequest::RetNoHasBeenSet() const
{
    return m_retNoHasBeenSet;
}

string DescribeDspmLogListRequest::GetClientDriverName() const
{
    return m_clientDriverName;
}

void DescribeDspmLogListRequest::SetClientDriverName(const string& _clientDriverName)
{
    m_clientDriverName = _clientDriverName;
    m_clientDriverNameHasBeenSet = true;
}

bool DescribeDspmLogListRequest::ClientDriverNameHasBeenSet() const
{
    return m_clientDriverNameHasBeenSet;
}

int64_t DescribeDspmLogListRequest::GetClientPort() const
{
    return m_clientPort;
}

void DescribeDspmLogListRequest::SetClientPort(const int64_t& _clientPort)
{
    m_clientPort = _clientPort;
    m_clientPortHasBeenSet = true;
}

bool DescribeDspmLogListRequest::ClientPortHasBeenSet() const
{
    return m_clientPortHasBeenSet;
}

string DescribeDspmLogListRequest::GetLogId() const
{
    return m_logId;
}

void DescribeDspmLogListRequest::SetLogId(const string& _logId)
{
    m_logId = _logId;
    m_logIdHasBeenSet = true;
}

bool DescribeDspmLogListRequest::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

vector<int64_t> DescribeDspmLogListRequest::GetDangerLevels() const
{
    return m_dangerLevels;
}

void DescribeDspmLogListRequest::SetDangerLevels(const vector<int64_t>& _dangerLevels)
{
    m_dangerLevels = _dangerLevels;
    m_dangerLevelsHasBeenSet = true;
}

bool DescribeDspmLogListRequest::DangerLevelsHasBeenSet() const
{
    return m_dangerLevelsHasBeenSet;
}

string DescribeDspmLogListRequest::GetSensitiveCategoryRule() const
{
    return m_sensitiveCategoryRule;
}

void DescribeDspmLogListRequest::SetSensitiveCategoryRule(const string& _sensitiveCategoryRule)
{
    m_sensitiveCategoryRule = _sensitiveCategoryRule;
    m_sensitiveCategoryRuleHasBeenSet = true;
}

bool DescribeDspmLogListRequest::SensitiveCategoryRuleHasBeenSet() const
{
    return m_sensitiveCategoryRuleHasBeenSet;
}

string DescribeDspmLogListRequest::GetSensitiveLevelRisk() const
{
    return m_sensitiveLevelRisk;
}

void DescribeDspmLogListRequest::SetSensitiveLevelRisk(const string& _sensitiveLevelRisk)
{
    m_sensitiveLevelRisk = _sensitiveLevelRisk;
    m_sensitiveLevelRiskHasBeenSet = true;
}

bool DescribeDspmLogListRequest::SensitiveLevelRiskHasBeenSet() const
{
    return m_sensitiveLevelRiskHasBeenSet;
}

string DescribeDspmLogListRequest::GetClientMac() const
{
    return m_clientMac;
}

void DescribeDspmLogListRequest::SetClientMac(const string& _clientMac)
{
    m_clientMac = _clientMac;
    m_clientMacHasBeenSet = true;
}

bool DescribeDspmLogListRequest::ClientMacHasBeenSet() const
{
    return m_clientMacHasBeenSet;
}


