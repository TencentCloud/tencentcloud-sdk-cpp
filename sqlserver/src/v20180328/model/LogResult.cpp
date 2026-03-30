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

#include <tencentcloud/sqlserver/v20180328/model/LogResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

LogResult::LogResult() :
    m_timestampHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_clientAppNameHasBeenSet(false),
    m_clientHostNameHasBeenSet(false),
    m_cpuTimeHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_errorNumberHasBeenSet(false),
    m_isInterceptedHasBeenSet(false),
    m_lastRowCountHasBeenSet(false),
    m_logicalReadsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_objectIdHasBeenSet(false),
    m_objectNameHasBeenSet(false),
    m_objectTypeHasBeenSet(false),
    m_outputParametersHasBeenSet(false),
    m_parameterizedPlanHandleHasBeenSet(false),
    m_physicalReadsHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_rowCountHasBeenSet(false),
    m_serverPrincipalNameHasBeenSet(false),
    m_sessionServerPrincipalNameHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_sourceDatabaseIdHasBeenSet(false),
    m_sqlTextHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_statementHasBeenSet(false),
    m_systemThreadIdHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_userDefinedHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_writesHasBeenSet(false),
    m_destinationHasBeenSet(false)
{
}

CoreInternalOutcome LogResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("ClientAppName") && !value["ClientAppName"].IsNull())
    {
        if (!value["ClientAppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.ClientAppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientAppName = string(value["ClientAppName"].GetString());
        m_clientAppNameHasBeenSet = true;
    }

    if (value.HasMember("ClientHostName") && !value["ClientHostName"].IsNull())
    {
        if (!value["ClientHostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.ClientHostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientHostName = string(value["ClientHostName"].GetString());
        m_clientHostNameHasBeenSet = true;
    }

    if (value.HasMember("CpuTime") && !value["CpuTime"].IsNull())
    {
        if (!value["CpuTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.CpuTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuTime = value["CpuTime"].GetInt64();
        m_cpuTimeHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.DatabaseId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = value["DatabaseId"].GetInt64();
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ErrorNumber") && !value["ErrorNumber"].IsNull())
    {
        if (!value["ErrorNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.ErrorNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorNumber = value["ErrorNumber"].GetInt64();
        m_errorNumberHasBeenSet = true;
    }

    if (value.HasMember("IsIntercepted") && !value["IsIntercepted"].IsNull())
    {
        if (!value["IsIntercepted"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.IsIntercepted` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isIntercepted = string(value["IsIntercepted"].GetString());
        m_isInterceptedHasBeenSet = true;
    }

    if (value.HasMember("LastRowCount") && !value["LastRowCount"].IsNull())
    {
        if (!value["LastRowCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.LastRowCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastRowCount = value["LastRowCount"].GetInt64();
        m_lastRowCountHasBeenSet = true;
    }

    if (value.HasMember("LogicalReads") && !value["LogicalReads"].IsNull())
    {
        if (!value["LogicalReads"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.LogicalReads` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logicalReads = value["LogicalReads"].GetInt64();
        m_logicalReadsHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("ObjectId") && !value["ObjectId"].IsNull())
    {
        if (!value["ObjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.ObjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_objectId = value["ObjectId"].GetInt64();
        m_objectIdHasBeenSet = true;
    }

    if (value.HasMember("ObjectName") && !value["ObjectName"].IsNull())
    {
        if (!value["ObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.ObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectName = string(value["ObjectName"].GetString());
        m_objectNameHasBeenSet = true;
    }

    if (value.HasMember("ObjectType") && !value["ObjectType"].IsNull())
    {
        if (!value["ObjectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.ObjectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectType = string(value["ObjectType"].GetString());
        m_objectTypeHasBeenSet = true;
    }

    if (value.HasMember("OutputParameters") && !value["OutputParameters"].IsNull())
    {
        if (!value["OutputParameters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.OutputParameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputParameters = string(value["OutputParameters"].GetString());
        m_outputParametersHasBeenSet = true;
    }

    if (value.HasMember("ParameterizedPlanHandle") && !value["ParameterizedPlanHandle"].IsNull())
    {
        if (!value["ParameterizedPlanHandle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.ParameterizedPlanHandle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterizedPlanHandle = string(value["ParameterizedPlanHandle"].GetString());
        m_parameterizedPlanHandleHasBeenSet = true;
    }

    if (value.HasMember("PhysicalReads") && !value["PhysicalReads"].IsNull())
    {
        if (!value["PhysicalReads"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.PhysicalReads` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_physicalReads = value["PhysicalReads"].GetInt64();
        m_physicalReadsHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("RowCount") && !value["RowCount"].IsNull())
    {
        if (!value["RowCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.RowCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowCount = value["RowCount"].GetInt64();
        m_rowCountHasBeenSet = true;
    }

    if (value.HasMember("ServerPrincipalName") && !value["ServerPrincipalName"].IsNull())
    {
        if (!value["ServerPrincipalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.ServerPrincipalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverPrincipalName = string(value["ServerPrincipalName"].GetString());
        m_serverPrincipalNameHasBeenSet = true;
    }

    if (value.HasMember("SessionServerPrincipalName") && !value["SessionServerPrincipalName"].IsNull())
    {
        if (!value["SessionServerPrincipalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.SessionServerPrincipalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionServerPrincipalName = string(value["SessionServerPrincipalName"].GetString());
        m_sessionServerPrincipalNameHasBeenSet = true;
    }

    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.Severity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_severity = value["Severity"].GetInt64();
        m_severityHasBeenSet = true;
    }

    if (value.HasMember("SourceDatabaseId") && !value["SourceDatabaseId"].IsNull())
    {
        if (!value["SourceDatabaseId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.SourceDatabaseId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceDatabaseId = value["SourceDatabaseId"].GetInt64();
        m_sourceDatabaseIdHasBeenSet = true;
    }

    if (value.HasMember("SqlText") && !value["SqlText"].IsNull())
    {
        if (!value["SqlText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.SqlText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlText = string(value["SqlText"].GetString());
        m_sqlTextHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Statement") && !value["Statement"].IsNull())
    {
        if (!value["Statement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.Statement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statement = string(value["Statement"].GetString());
        m_statementHasBeenSet = true;
    }

    if (value.HasMember("SystemThreadId") && !value["SystemThreadId"].IsNull())
    {
        if (!value["SystemThreadId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.SystemThreadId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_systemThreadId = value["SystemThreadId"].GetInt64();
        m_systemThreadIdHasBeenSet = true;
    }

    if (value.HasMember("TransactionId") && !value["TransactionId"].IsNull())
    {
        if (!value["TransactionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.TransactionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transactionId = value["TransactionId"].GetInt64();
        m_transactionIdHasBeenSet = true;
    }

    if (value.HasMember("UserDefined") && !value["UserDefined"].IsNull())
    {
        if (!value["UserDefined"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.UserDefined` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDefined = string(value["UserDefined"].GetString());
        m_userDefinedHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Writes") && !value["Writes"].IsNull())
    {
        if (!value["Writes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.Writes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_writes = value["Writes"].GetInt64();
        m_writesHasBeenSet = true;
    }

    if (value.HasMember("Destination") && !value["Destination"].IsNull())
    {
        if (!value["Destination"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.Destination` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destination = string(value["Destination"].GetString());
        m_destinationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_clientAppNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientAppName.c_str(), allocator).Move(), allocator);
    }

    if (m_clientHostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientHostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientHostName.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuTime, allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_databaseId, allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_errorNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorNumber, allocator);
    }

    if (m_isInterceptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIntercepted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isIntercepted.c_str(), allocator).Move(), allocator);
    }

    if (m_lastRowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastRowCount, allocator);
    }

    if (m_logicalReadsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicalReads";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logicalReads, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_objectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_objectId, allocator);
    }

    if (m_objectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectName.c_str(), allocator).Move(), allocator);
    }

    if (m_objectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectType.c_str(), allocator).Move(), allocator);
    }

    if (m_outputParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputParameters.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterizedPlanHandleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterizedPlanHandle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameterizedPlanHandle.c_str(), allocator).Move(), allocator);
    }

    if (m_physicalReadsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhysicalReads";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_physicalReads, allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_rowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowCount, allocator);
    }

    if (m_serverPrincipalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerPrincipalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverPrincipalName.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionServerPrincipalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionServerPrincipalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionServerPrincipalName.c_str(), allocator).Move(), allocator);
    }

    if (m_severityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Severity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_severity, allocator);
    }

    if (m_sourceDatabaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceDatabaseId, allocator);
    }

    if (m_sqlTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlText.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_statementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statement.c_str(), allocator).Move(), allocator);
    }

    if (m_systemThreadIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemThreadId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemThreadId, allocator);
    }

    if (m_transactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transactionId, allocator);
    }

    if (m_userDefinedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefined";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDefined.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_writesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Writes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_writes, allocator);
    }

    if (m_destinationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destination.c_str(), allocator).Move(), allocator);
    }

}


int64_t LogResult::GetTimestamp() const
{
    return m_timestamp;
}

void LogResult::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool LogResult::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string LogResult::GetCategory() const
{
    return m_category;
}

void LogResult::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool LogResult::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string LogResult::GetClientAppName() const
{
    return m_clientAppName;
}

void LogResult::SetClientAppName(const string& _clientAppName)
{
    m_clientAppName = _clientAppName;
    m_clientAppNameHasBeenSet = true;
}

bool LogResult::ClientAppNameHasBeenSet() const
{
    return m_clientAppNameHasBeenSet;
}

string LogResult::GetClientHostName() const
{
    return m_clientHostName;
}

void LogResult::SetClientHostName(const string& _clientHostName)
{
    m_clientHostName = _clientHostName;
    m_clientHostNameHasBeenSet = true;
}

bool LogResult::ClientHostNameHasBeenSet() const
{
    return m_clientHostNameHasBeenSet;
}

int64_t LogResult::GetCpuTime() const
{
    return m_cpuTime;
}

void LogResult::SetCpuTime(const int64_t& _cpuTime)
{
    m_cpuTime = _cpuTime;
    m_cpuTimeHasBeenSet = true;
}

bool LogResult::CpuTimeHasBeenSet() const
{
    return m_cpuTimeHasBeenSet;
}

int64_t LogResult::GetDatabaseId() const
{
    return m_databaseId;
}

void LogResult::SetDatabaseId(const int64_t& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool LogResult::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string LogResult::GetDatabaseName() const
{
    return m_databaseName;
}

void LogResult::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool LogResult::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

int64_t LogResult::GetDuration() const
{
    return m_duration;
}

void LogResult::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool LogResult::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t LogResult::GetErrorNumber() const
{
    return m_errorNumber;
}

void LogResult::SetErrorNumber(const int64_t& _errorNumber)
{
    m_errorNumber = _errorNumber;
    m_errorNumberHasBeenSet = true;
}

bool LogResult::ErrorNumberHasBeenSet() const
{
    return m_errorNumberHasBeenSet;
}

string LogResult::GetIsIntercepted() const
{
    return m_isIntercepted;
}

void LogResult::SetIsIntercepted(const string& _isIntercepted)
{
    m_isIntercepted = _isIntercepted;
    m_isInterceptedHasBeenSet = true;
}

bool LogResult::IsInterceptedHasBeenSet() const
{
    return m_isInterceptedHasBeenSet;
}

int64_t LogResult::GetLastRowCount() const
{
    return m_lastRowCount;
}

void LogResult::SetLastRowCount(const int64_t& _lastRowCount)
{
    m_lastRowCount = _lastRowCount;
    m_lastRowCountHasBeenSet = true;
}

bool LogResult::LastRowCountHasBeenSet() const
{
    return m_lastRowCountHasBeenSet;
}

int64_t LogResult::GetLogicalReads() const
{
    return m_logicalReads;
}

void LogResult::SetLogicalReads(const int64_t& _logicalReads)
{
    m_logicalReads = _logicalReads;
    m_logicalReadsHasBeenSet = true;
}

bool LogResult::LogicalReadsHasBeenSet() const
{
    return m_logicalReadsHasBeenSet;
}

string LogResult::GetMessage() const
{
    return m_message;
}

void LogResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool LogResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t LogResult::GetObjectId() const
{
    return m_objectId;
}

void LogResult::SetObjectId(const int64_t& _objectId)
{
    m_objectId = _objectId;
    m_objectIdHasBeenSet = true;
}

bool LogResult::ObjectIdHasBeenSet() const
{
    return m_objectIdHasBeenSet;
}

string LogResult::GetObjectName() const
{
    return m_objectName;
}

void LogResult::SetObjectName(const string& _objectName)
{
    m_objectName = _objectName;
    m_objectNameHasBeenSet = true;
}

bool LogResult::ObjectNameHasBeenSet() const
{
    return m_objectNameHasBeenSet;
}

string LogResult::GetObjectType() const
{
    return m_objectType;
}

void LogResult::SetObjectType(const string& _objectType)
{
    m_objectType = _objectType;
    m_objectTypeHasBeenSet = true;
}

bool LogResult::ObjectTypeHasBeenSet() const
{
    return m_objectTypeHasBeenSet;
}

string LogResult::GetOutputParameters() const
{
    return m_outputParameters;
}

void LogResult::SetOutputParameters(const string& _outputParameters)
{
    m_outputParameters = _outputParameters;
    m_outputParametersHasBeenSet = true;
}

bool LogResult::OutputParametersHasBeenSet() const
{
    return m_outputParametersHasBeenSet;
}

string LogResult::GetParameterizedPlanHandle() const
{
    return m_parameterizedPlanHandle;
}

void LogResult::SetParameterizedPlanHandle(const string& _parameterizedPlanHandle)
{
    m_parameterizedPlanHandle = _parameterizedPlanHandle;
    m_parameterizedPlanHandleHasBeenSet = true;
}

bool LogResult::ParameterizedPlanHandleHasBeenSet() const
{
    return m_parameterizedPlanHandleHasBeenSet;
}

int64_t LogResult::GetPhysicalReads() const
{
    return m_physicalReads;
}

void LogResult::SetPhysicalReads(const int64_t& _physicalReads)
{
    m_physicalReads = _physicalReads;
    m_physicalReadsHasBeenSet = true;
}

bool LogResult::PhysicalReadsHasBeenSet() const
{
    return m_physicalReadsHasBeenSet;
}

string LogResult::GetResult() const
{
    return m_result;
}

void LogResult::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool LogResult::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

int64_t LogResult::GetRowCount() const
{
    return m_rowCount;
}

void LogResult::SetRowCount(const int64_t& _rowCount)
{
    m_rowCount = _rowCount;
    m_rowCountHasBeenSet = true;
}

bool LogResult::RowCountHasBeenSet() const
{
    return m_rowCountHasBeenSet;
}

string LogResult::GetServerPrincipalName() const
{
    return m_serverPrincipalName;
}

void LogResult::SetServerPrincipalName(const string& _serverPrincipalName)
{
    m_serverPrincipalName = _serverPrincipalName;
    m_serverPrincipalNameHasBeenSet = true;
}

bool LogResult::ServerPrincipalNameHasBeenSet() const
{
    return m_serverPrincipalNameHasBeenSet;
}

string LogResult::GetSessionServerPrincipalName() const
{
    return m_sessionServerPrincipalName;
}

void LogResult::SetSessionServerPrincipalName(const string& _sessionServerPrincipalName)
{
    m_sessionServerPrincipalName = _sessionServerPrincipalName;
    m_sessionServerPrincipalNameHasBeenSet = true;
}

bool LogResult::SessionServerPrincipalNameHasBeenSet() const
{
    return m_sessionServerPrincipalNameHasBeenSet;
}

int64_t LogResult::GetSeverity() const
{
    return m_severity;
}

void LogResult::SetSeverity(const int64_t& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool LogResult::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

int64_t LogResult::GetSourceDatabaseId() const
{
    return m_sourceDatabaseId;
}

void LogResult::SetSourceDatabaseId(const int64_t& _sourceDatabaseId)
{
    m_sourceDatabaseId = _sourceDatabaseId;
    m_sourceDatabaseIdHasBeenSet = true;
}

bool LogResult::SourceDatabaseIdHasBeenSet() const
{
    return m_sourceDatabaseIdHasBeenSet;
}

string LogResult::GetSqlText() const
{
    return m_sqlText;
}

void LogResult::SetSqlText(const string& _sqlText)
{
    m_sqlText = _sqlText;
    m_sqlTextHasBeenSet = true;
}

bool LogResult::SqlTextHasBeenSet() const
{
    return m_sqlTextHasBeenSet;
}

int64_t LogResult::GetState() const
{
    return m_state;
}

void LogResult::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool LogResult::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string LogResult::GetStatement() const
{
    return m_statement;
}

void LogResult::SetStatement(const string& _statement)
{
    m_statement = _statement;
    m_statementHasBeenSet = true;
}

bool LogResult::StatementHasBeenSet() const
{
    return m_statementHasBeenSet;
}

int64_t LogResult::GetSystemThreadId() const
{
    return m_systemThreadId;
}

void LogResult::SetSystemThreadId(const int64_t& _systemThreadId)
{
    m_systemThreadId = _systemThreadId;
    m_systemThreadIdHasBeenSet = true;
}

bool LogResult::SystemThreadIdHasBeenSet() const
{
    return m_systemThreadIdHasBeenSet;
}

int64_t LogResult::GetTransactionId() const
{
    return m_transactionId;
}

void LogResult::SetTransactionId(const int64_t& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool LogResult::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

string LogResult::GetUserDefined() const
{
    return m_userDefined;
}

void LogResult::SetUserDefined(const string& _userDefined)
{
    m_userDefined = _userDefined;
    m_userDefinedHasBeenSet = true;
}

bool LogResult::UserDefinedHasBeenSet() const
{
    return m_userDefinedHasBeenSet;
}

string LogResult::GetUserName() const
{
    return m_userName;
}

void LogResult::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool LogResult::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

int64_t LogResult::GetWrites() const
{
    return m_writes;
}

void LogResult::SetWrites(const int64_t& _writes)
{
    m_writes = _writes;
    m_writesHasBeenSet = true;
}

bool LogResult::WritesHasBeenSet() const
{
    return m_writesHasBeenSet;
}

string LogResult::GetDestination() const
{
    return m_destination;
}

void LogResult::SetDestination(const string& _destination)
{
    m_destination = _destination;
    m_destinationHasBeenSet = true;
}

bool LogResult::DestinationHasBeenSet() const
{
    return m_destinationHasBeenSet;
}

