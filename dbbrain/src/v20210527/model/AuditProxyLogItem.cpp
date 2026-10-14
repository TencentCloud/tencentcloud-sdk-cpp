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

#include <tencentcloud/dbbrain/v20210527/model/AuditProxyLogItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

AuditProxyLogItem::AuditProxyLogItem() :
    m_timestampHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_affectRowsHasBeenSet(false),
    m_autocommitHasBeenSet(false),
    m_comTypeHasBeenSet(false),
    m_connTcHasBeenSet(false),
    m_dBHostHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_errInfoHasBeenSet(false),
    m_execTimeHasBeenSet(false),
    m_holdConnsHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_mcHasBeenSet(false),
    m_sqlStartTimeUsHasBeenSet(false),
    m_newConnNumHasBeenSet(false),
    m_proxyHostHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_queryIdHasBeenSet(false),
    m_sentRowsHasBeenSet(false),
    m_splitedHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_sqlTemplateHasBeenSet(false),
    m_sqlTemplateIdHasBeenSet(false),
    m_sqlTypeHasBeenSet(false),
    m_tablesHasBeenSet(false),
    m_threadIdHasBeenSet(false),
    m_sqlStartTimeHasBeenSet(false),
    m_userHasBeenSet(false),
    m_hostPortHasBeenSet(false),
    m_proxyThreadHasBeenSet(false),
    m_dbHostNumHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_businessTagHasBeenSet(false)
{
}

CoreInternalOutcome AuditProxyLogItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("AffectRows") && !value["AffectRows"].IsNull())
    {
        if (!value["AffectRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.AffectRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectRows = value["AffectRows"].GetInt64();
        m_affectRowsHasBeenSet = true;
    }

    if (value.HasMember("Autocommit") && !value["Autocommit"].IsNull())
    {
        if (!value["Autocommit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.Autocommit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autocommit = string(value["Autocommit"].GetString());
        m_autocommitHasBeenSet = true;
    }

    if (value.HasMember("ComType") && !value["ComType"].IsNull())
    {
        if (!value["ComType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.ComType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comType = string(value["ComType"].GetString());
        m_comTypeHasBeenSet = true;
    }

    if (value.HasMember("ConnTc") && !value["ConnTc"].IsNull())
    {
        if (!value["ConnTc"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.ConnTc` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connTc = value["ConnTc"].GetInt64();
        m_connTcHasBeenSet = true;
    }

    if (value.HasMember("DBHost") && !value["DBHost"].IsNull())
    {
        if (!value["DBHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.DBHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBHost = string(value["DBHost"].GetString());
        m_dBHostHasBeenSet = true;
    }

    if (value.HasMember("DBName") && !value["DBName"].IsNull())
    {
        if (!value["DBName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.DBName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBName = string(value["DBName"].GetString());
        m_dBNameHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.ErrCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = string(value["ErrCode"].GetString());
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrInfo") && !value["ErrInfo"].IsNull())
    {
        if (!value["ErrInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.ErrInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errInfo = string(value["ErrInfo"].GetString());
        m_errInfoHasBeenSet = true;
    }

    if (value.HasMember("ExecTime") && !value["ExecTime"].IsNull())
    {
        if (!value["ExecTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.ExecTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_execTime = value["ExecTime"].GetInt64();
        m_execTimeHasBeenSet = true;
    }

    if (value.HasMember("HoldConns") && !value["HoldConns"].IsNull())
    {
        if (!value["HoldConns"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.HoldConns` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_holdConns = string(value["HoldConns"].GetString());
        m_holdConnsHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Mc") && !value["Mc"].IsNull())
    {
        if (!value["Mc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.Mc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mc = string(value["Mc"].GetString());
        m_mcHasBeenSet = true;
    }

    if (value.HasMember("SqlStartTimeUs") && !value["SqlStartTimeUs"].IsNull())
    {
        if (!value["SqlStartTimeUs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.SqlStartTimeUs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sqlStartTimeUs = value["SqlStartTimeUs"].GetInt64();
        m_sqlStartTimeUsHasBeenSet = true;
    }

    if (value.HasMember("NewConnNum") && !value["NewConnNum"].IsNull())
    {
        if (!value["NewConnNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.NewConnNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_newConnNum = value["NewConnNum"].GetInt64();
        m_newConnNumHasBeenSet = true;
    }

    if (value.HasMember("ProxyHost") && !value["ProxyHost"].IsNull())
    {
        if (!value["ProxyHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.ProxyHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyHost = string(value["ProxyHost"].GetString());
        m_proxyHostHasBeenSet = true;
    }

    if (value.HasMember("ProxyId") && !value["ProxyId"].IsNull())
    {
        if (!value["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(value["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }

    if (value.HasMember("QueryId") && !value["QueryId"].IsNull())
    {
        if (!value["QueryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.QueryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryId = string(value["QueryId"].GetString());
        m_queryIdHasBeenSet = true;
    }

    if (value.HasMember("SentRows") && !value["SentRows"].IsNull())
    {
        if (!value["SentRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.SentRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sentRows = value["SentRows"].GetInt64();
        m_sentRowsHasBeenSet = true;
    }

    if (value.HasMember("Splited") && !value["Splited"].IsNull())
    {
        if (!value["Splited"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.Splited` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_splited = value["Splited"].GetInt64();
        m_splitedHasBeenSet = true;
    }

    if (value.HasMember("Sql") && !value["Sql"].IsNull())
    {
        if (!value["Sql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.Sql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sql = string(value["Sql"].GetString());
        m_sqlHasBeenSet = true;
    }

    if (value.HasMember("SqlTemplate") && !value["SqlTemplate"].IsNull())
    {
        if (!value["SqlTemplate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.SqlTemplate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlTemplate = string(value["SqlTemplate"].GetString());
        m_sqlTemplateHasBeenSet = true;
    }

    if (value.HasMember("SqlTemplateId") && !value["SqlTemplateId"].IsNull())
    {
        if (!value["SqlTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.SqlTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlTemplateId = string(value["SqlTemplateId"].GetString());
        m_sqlTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("SqlType") && !value["SqlType"].IsNull())
    {
        if (!value["SqlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.SqlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlType = string(value["SqlType"].GetString());
        m_sqlTypeHasBeenSet = true;
    }

    if (value.HasMember("Tables") && !value["Tables"].IsNull())
    {
        if (!value["Tables"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.Tables` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tables = string(value["Tables"].GetString());
        m_tablesHasBeenSet = true;
    }

    if (value.HasMember("ThreadId") && !value["ThreadId"].IsNull())
    {
        if (!value["ThreadId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.ThreadId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_threadId = string(value["ThreadId"].GetString());
        m_threadIdHasBeenSet = true;
    }

    if (value.HasMember("SqlStartTime") && !value["SqlStartTime"].IsNull())
    {
        if (!value["SqlStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.SqlStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sqlStartTime = value["SqlStartTime"].GetInt64();
        m_sqlStartTimeHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("HostPort") && !value["HostPort"].IsNull())
    {
        if (!value["HostPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.HostPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostPort = string(value["HostPort"].GetString());
        m_hostPortHasBeenSet = true;
    }

    if (value.HasMember("ProxyThread") && !value["ProxyThread"].IsNull())
    {
        if (!value["ProxyThread"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.ProxyThread` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyThread = string(value["ProxyThread"].GetString());
        m_proxyThreadHasBeenSet = true;
    }

    if (value.HasMember("DbHostNum") && !value["DbHostNum"].IsNull())
    {
        if (!value["DbHostNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.DbHostNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbHostNum = string(value["DbHostNum"].GetString());
        m_dbHostNumHasBeenSet = true;
    }

    if (value.HasMember("BusinessCode") && !value["BusinessCode"].IsNull())
    {
        if (!value["BusinessCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.BusinessCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = string(value["BusinessCode"].GetString());
        m_businessCodeHasBeenSet = true;
    }

    if (value.HasMember("BusinessTag") && !value["BusinessTag"].IsNull())
    {
        if (!value["BusinessTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditProxyLogItem.BusinessTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessTag = string(value["BusinessTag"].GetString());
        m_businessTagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditProxyLogItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_affectRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectRows, allocator);
    }

    if (m_autocommitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Autocommit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autocommit.c_str(), allocator).Move(), allocator);
    }

    if (m_comTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comType.c_str(), allocator).Move(), allocator);
    }

    if (m_connTcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnTc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connTc, allocator);
    }

    if (m_dBHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBHost.c_str(), allocator).Move(), allocator);
    }

    if (m_dBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBName.c_str(), allocator).Move(), allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_execTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_execTime, allocator);
    }

    if (m_holdConnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HoldConns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_holdConns.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_mcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mc.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlStartTimeUsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlStartTimeUs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sqlStartTimeUs, allocator);
    }

    if (m_newConnNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewConnNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newConnNum, allocator);
    }

    if (m_proxyHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyHost.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryId.c_str(), allocator).Move(), allocator);
    }

    if (m_sentRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SentRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sentRows, allocator);
    }

    if (m_splitedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Splited";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_splited, allocator);
    }

    if (m_sqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlTemplate.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlType.c_str(), allocator).Move(), allocator);
    }

    if (m_tablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tables.c_str(), allocator).Move(), allocator);
    }

    if (m_threadIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreadId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_threadId.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sqlStartTime, allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_hostPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostPort.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyThreadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyThread";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyThread.c_str(), allocator).Move(), allocator);
    }

    if (m_dbHostNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbHostNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbHostNum.c_str(), allocator).Move(), allocator);
    }

    if (m_businessCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessCode.c_str(), allocator).Move(), allocator);
    }

    if (m_businessTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessTag.c_str(), allocator).Move(), allocator);
    }

}


string AuditProxyLogItem::GetTimestamp() const
{
    return m_timestamp;
}

void AuditProxyLogItem::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool AuditProxyLogItem::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string AuditProxyLogItem::GetClusterId() const
{
    return m_clusterId;
}

void AuditProxyLogItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AuditProxyLogItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t AuditProxyLogItem::GetAffectRows() const
{
    return m_affectRows;
}

void AuditProxyLogItem::SetAffectRows(const int64_t& _affectRows)
{
    m_affectRows = _affectRows;
    m_affectRowsHasBeenSet = true;
}

bool AuditProxyLogItem::AffectRowsHasBeenSet() const
{
    return m_affectRowsHasBeenSet;
}

string AuditProxyLogItem::GetAutocommit() const
{
    return m_autocommit;
}

void AuditProxyLogItem::SetAutocommit(const string& _autocommit)
{
    m_autocommit = _autocommit;
    m_autocommitHasBeenSet = true;
}

bool AuditProxyLogItem::AutocommitHasBeenSet() const
{
    return m_autocommitHasBeenSet;
}

string AuditProxyLogItem::GetComType() const
{
    return m_comType;
}

void AuditProxyLogItem::SetComType(const string& _comType)
{
    m_comType = _comType;
    m_comTypeHasBeenSet = true;
}

bool AuditProxyLogItem::ComTypeHasBeenSet() const
{
    return m_comTypeHasBeenSet;
}

int64_t AuditProxyLogItem::GetConnTc() const
{
    return m_connTc;
}

void AuditProxyLogItem::SetConnTc(const int64_t& _connTc)
{
    m_connTc = _connTc;
    m_connTcHasBeenSet = true;
}

bool AuditProxyLogItem::ConnTcHasBeenSet() const
{
    return m_connTcHasBeenSet;
}

string AuditProxyLogItem::GetDBHost() const
{
    return m_dBHost;
}

void AuditProxyLogItem::SetDBHost(const string& _dBHost)
{
    m_dBHost = _dBHost;
    m_dBHostHasBeenSet = true;
}

bool AuditProxyLogItem::DBHostHasBeenSet() const
{
    return m_dBHostHasBeenSet;
}

string AuditProxyLogItem::GetDBName() const
{
    return m_dBName;
}

void AuditProxyLogItem::SetDBName(const string& _dBName)
{
    m_dBName = _dBName;
    m_dBNameHasBeenSet = true;
}

bool AuditProxyLogItem::DBNameHasBeenSet() const
{
    return m_dBNameHasBeenSet;
}

string AuditProxyLogItem::GetErrCode() const
{
    return m_errCode;
}

void AuditProxyLogItem::SetErrCode(const string& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool AuditProxyLogItem::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string AuditProxyLogItem::GetErrInfo() const
{
    return m_errInfo;
}

void AuditProxyLogItem::SetErrInfo(const string& _errInfo)
{
    m_errInfo = _errInfo;
    m_errInfoHasBeenSet = true;
}

bool AuditProxyLogItem::ErrInfoHasBeenSet() const
{
    return m_errInfoHasBeenSet;
}

int64_t AuditProxyLogItem::GetExecTime() const
{
    return m_execTime;
}

void AuditProxyLogItem::SetExecTime(const int64_t& _execTime)
{
    m_execTime = _execTime;
    m_execTimeHasBeenSet = true;
}

bool AuditProxyLogItem::ExecTimeHasBeenSet() const
{
    return m_execTimeHasBeenSet;
}

string AuditProxyLogItem::GetHoldConns() const
{
    return m_holdConns;
}

void AuditProxyLogItem::SetHoldConns(const string& _holdConns)
{
    m_holdConns = _holdConns;
    m_holdConnsHasBeenSet = true;
}

bool AuditProxyLogItem::HoldConnsHasBeenSet() const
{
    return m_holdConnsHasBeenSet;
}

string AuditProxyLogItem::GetHost() const
{
    return m_host;
}

void AuditProxyLogItem::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool AuditProxyLogItem::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string AuditProxyLogItem::GetMc() const
{
    return m_mc;
}

void AuditProxyLogItem::SetMc(const string& _mc)
{
    m_mc = _mc;
    m_mcHasBeenSet = true;
}

bool AuditProxyLogItem::McHasBeenSet() const
{
    return m_mcHasBeenSet;
}

int64_t AuditProxyLogItem::GetSqlStartTimeUs() const
{
    return m_sqlStartTimeUs;
}

void AuditProxyLogItem::SetSqlStartTimeUs(const int64_t& _sqlStartTimeUs)
{
    m_sqlStartTimeUs = _sqlStartTimeUs;
    m_sqlStartTimeUsHasBeenSet = true;
}

bool AuditProxyLogItem::SqlStartTimeUsHasBeenSet() const
{
    return m_sqlStartTimeUsHasBeenSet;
}

int64_t AuditProxyLogItem::GetNewConnNum() const
{
    return m_newConnNum;
}

void AuditProxyLogItem::SetNewConnNum(const int64_t& _newConnNum)
{
    m_newConnNum = _newConnNum;
    m_newConnNumHasBeenSet = true;
}

bool AuditProxyLogItem::NewConnNumHasBeenSet() const
{
    return m_newConnNumHasBeenSet;
}

string AuditProxyLogItem::GetProxyHost() const
{
    return m_proxyHost;
}

void AuditProxyLogItem::SetProxyHost(const string& _proxyHost)
{
    m_proxyHost = _proxyHost;
    m_proxyHostHasBeenSet = true;
}

bool AuditProxyLogItem::ProxyHostHasBeenSet() const
{
    return m_proxyHostHasBeenSet;
}

string AuditProxyLogItem::GetProxyId() const
{
    return m_proxyId;
}

void AuditProxyLogItem::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool AuditProxyLogItem::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string AuditProxyLogItem::GetQueryId() const
{
    return m_queryId;
}

void AuditProxyLogItem::SetQueryId(const string& _queryId)
{
    m_queryId = _queryId;
    m_queryIdHasBeenSet = true;
}

bool AuditProxyLogItem::QueryIdHasBeenSet() const
{
    return m_queryIdHasBeenSet;
}

int64_t AuditProxyLogItem::GetSentRows() const
{
    return m_sentRows;
}

void AuditProxyLogItem::SetSentRows(const int64_t& _sentRows)
{
    m_sentRows = _sentRows;
    m_sentRowsHasBeenSet = true;
}

bool AuditProxyLogItem::SentRowsHasBeenSet() const
{
    return m_sentRowsHasBeenSet;
}

int64_t AuditProxyLogItem::GetSplited() const
{
    return m_splited;
}

void AuditProxyLogItem::SetSplited(const int64_t& _splited)
{
    m_splited = _splited;
    m_splitedHasBeenSet = true;
}

bool AuditProxyLogItem::SplitedHasBeenSet() const
{
    return m_splitedHasBeenSet;
}

string AuditProxyLogItem::GetSql() const
{
    return m_sql;
}

void AuditProxyLogItem::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool AuditProxyLogItem::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

string AuditProxyLogItem::GetSqlTemplate() const
{
    return m_sqlTemplate;
}

void AuditProxyLogItem::SetSqlTemplate(const string& _sqlTemplate)
{
    m_sqlTemplate = _sqlTemplate;
    m_sqlTemplateHasBeenSet = true;
}

bool AuditProxyLogItem::SqlTemplateHasBeenSet() const
{
    return m_sqlTemplateHasBeenSet;
}

string AuditProxyLogItem::GetSqlTemplateId() const
{
    return m_sqlTemplateId;
}

void AuditProxyLogItem::SetSqlTemplateId(const string& _sqlTemplateId)
{
    m_sqlTemplateId = _sqlTemplateId;
    m_sqlTemplateIdHasBeenSet = true;
}

bool AuditProxyLogItem::SqlTemplateIdHasBeenSet() const
{
    return m_sqlTemplateIdHasBeenSet;
}

string AuditProxyLogItem::GetSqlType() const
{
    return m_sqlType;
}

void AuditProxyLogItem::SetSqlType(const string& _sqlType)
{
    m_sqlType = _sqlType;
    m_sqlTypeHasBeenSet = true;
}

bool AuditProxyLogItem::SqlTypeHasBeenSet() const
{
    return m_sqlTypeHasBeenSet;
}

string AuditProxyLogItem::GetTables() const
{
    return m_tables;
}

void AuditProxyLogItem::SetTables(const string& _tables)
{
    m_tables = _tables;
    m_tablesHasBeenSet = true;
}

bool AuditProxyLogItem::TablesHasBeenSet() const
{
    return m_tablesHasBeenSet;
}

string AuditProxyLogItem::GetThreadId() const
{
    return m_threadId;
}

void AuditProxyLogItem::SetThreadId(const string& _threadId)
{
    m_threadId = _threadId;
    m_threadIdHasBeenSet = true;
}

bool AuditProxyLogItem::ThreadIdHasBeenSet() const
{
    return m_threadIdHasBeenSet;
}

int64_t AuditProxyLogItem::GetSqlStartTime() const
{
    return m_sqlStartTime;
}

void AuditProxyLogItem::SetSqlStartTime(const int64_t& _sqlStartTime)
{
    m_sqlStartTime = _sqlStartTime;
    m_sqlStartTimeHasBeenSet = true;
}

bool AuditProxyLogItem::SqlStartTimeHasBeenSet() const
{
    return m_sqlStartTimeHasBeenSet;
}

string AuditProxyLogItem::GetUser() const
{
    return m_user;
}

void AuditProxyLogItem::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AuditProxyLogItem::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string AuditProxyLogItem::GetHostPort() const
{
    return m_hostPort;
}

void AuditProxyLogItem::SetHostPort(const string& _hostPort)
{
    m_hostPort = _hostPort;
    m_hostPortHasBeenSet = true;
}

bool AuditProxyLogItem::HostPortHasBeenSet() const
{
    return m_hostPortHasBeenSet;
}

string AuditProxyLogItem::GetProxyThread() const
{
    return m_proxyThread;
}

void AuditProxyLogItem::SetProxyThread(const string& _proxyThread)
{
    m_proxyThread = _proxyThread;
    m_proxyThreadHasBeenSet = true;
}

bool AuditProxyLogItem::ProxyThreadHasBeenSet() const
{
    return m_proxyThreadHasBeenSet;
}

string AuditProxyLogItem::GetDbHostNum() const
{
    return m_dbHostNum;
}

void AuditProxyLogItem::SetDbHostNum(const string& _dbHostNum)
{
    m_dbHostNum = _dbHostNum;
    m_dbHostNumHasBeenSet = true;
}

bool AuditProxyLogItem::DbHostNumHasBeenSet() const
{
    return m_dbHostNumHasBeenSet;
}

string AuditProxyLogItem::GetBusinessCode() const
{
    return m_businessCode;
}

void AuditProxyLogItem::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool AuditProxyLogItem::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string AuditProxyLogItem::GetBusinessTag() const
{
    return m_businessTag;
}

void AuditProxyLogItem::SetBusinessTag(const string& _businessTag)
{
    m_businessTag = _businessTag;
    m_businessTagHasBeenSet = true;
}

bool AuditProxyLogItem::BusinessTagHasBeenSet() const
{
    return m_businessTagHasBeenSet;
}

