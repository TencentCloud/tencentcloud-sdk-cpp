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

#include <tencentcloud/csip/v20221121/model/AuditLogInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AuditLogInfo::AuditLogInfo() :
    m_aiScoreHasBeenSet(false),
    m_appUserHasBeenSet(false),
    m_backPacketHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_clientMacHasBeenSet(false),
    m_clientNameHasBeenSet(false),
    m_clientUserHasBeenSet(false),
    m_clientPortHasBeenSet(false),
    m_dangerLevelHasBeenSet(false),
    m_dbIpHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_dbPortHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_effectRowHasBeenSet(false),
    m_execTimeHasBeenSet(false),
    m_hitRuleHasBeenSet(false),
    m_idHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_opSqlHasBeenSet(false),
    m_opTimeHasBeenSet(false),
    m_retMsgHasBeenSet(false),
    m_retNoHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sqlTypeHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_hitRulesHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_reqIdHasBeenSet(false),
    m_sqlMainTypeHasBeenSet(false),
    m_tableNamesHasBeenSet(false),
    m_fieldNamesHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_clientDriverNameHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_fieldDetailsHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome AuditLogInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AiScore") && !value["AiScore"].IsNull())
    {
        if (!value["AiScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.AiScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_aiScore = value["AiScore"].GetDouble();
        m_aiScoreHasBeenSet = true;
    }

    if (value.HasMember("AppUser") && !value["AppUser"].IsNull())
    {
        if (!value["AppUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.AppUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appUser = string(value["AppUser"].GetString());
        m_appUserHasBeenSet = true;
    }

    if (value.HasMember("BackPacket") && !value["BackPacket"].IsNull())
    {
        if (!value["BackPacket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.BackPacket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backPacket = string(value["BackPacket"].GetString());
        m_backPacketHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("ClientMac") && !value["ClientMac"].IsNull())
    {
        if (!value["ClientMac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.ClientMac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientMac = string(value["ClientMac"].GetString());
        m_clientMacHasBeenSet = true;
    }

    if (value.HasMember("ClientName") && !value["ClientName"].IsNull())
    {
        if (!value["ClientName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.ClientName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientName = string(value["ClientName"].GetString());
        m_clientNameHasBeenSet = true;
    }

    if (value.HasMember("ClientUser") && !value["ClientUser"].IsNull())
    {
        if (!value["ClientUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.ClientUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientUser = string(value["ClientUser"].GetString());
        m_clientUserHasBeenSet = true;
    }

    if (value.HasMember("ClientPort") && !value["ClientPort"].IsNull())
    {
        if (!value["ClientPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.ClientPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clientPort = value["ClientPort"].GetUint64();
        m_clientPortHasBeenSet = true;
    }

    if (value.HasMember("DangerLevel") && !value["DangerLevel"].IsNull())
    {
        if (!value["DangerLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.DangerLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dangerLevel = value["DangerLevel"].GetUint64();
        m_dangerLevelHasBeenSet = true;
    }

    if (value.HasMember("DbIp") && !value["DbIp"].IsNull())
    {
        if (!value["DbIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.DbIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbIp = string(value["DbIp"].GetString());
        m_dbIpHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("DbPort") && !value["DbPort"].IsNull())
    {
        if (!value["DbPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.DbPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dbPort = value["DbPort"].GetUint64();
        m_dbPortHasBeenSet = true;
    }

    if (value.HasMember("DbUser") && !value["DbUser"].IsNull())
    {
        if (!value["DbUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.DbUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbUser = string(value["DbUser"].GetString());
        m_dbUserHasBeenSet = true;
    }

    if (value.HasMember("EffectRow") && !value["EffectRow"].IsNull())
    {
        if (!value["EffectRow"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.EffectRow` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_effectRow = value["EffectRow"].GetUint64();
        m_effectRowHasBeenSet = true;
    }

    if (value.HasMember("ExecTime") && !value["ExecTime"].IsNull())
    {
        if (!value["ExecTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.ExecTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_execTime = value["ExecTime"].GetUint64();
        m_execTimeHasBeenSet = true;
    }

    if (value.HasMember("HitRule") && !value["HitRule"].IsNull())
    {
        if (!value["HitRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.HitRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hitRule = string(value["HitRule"].GetString());
        m_hitRuleHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.InstanceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = value["InstanceId"].GetUint64();
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("OpSql") && !value["OpSql"].IsNull())
    {
        if (!value["OpSql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.OpSql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_opSql = string(value["OpSql"].GetString());
        m_opSqlHasBeenSet = true;
    }

    if (value.HasMember("OpTime") && !value["OpTime"].IsNull())
    {
        if (!value["OpTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.OpTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_opTime = value["OpTime"].GetUint64();
        m_opTimeHasBeenSet = true;
    }

    if (value.HasMember("RetMsg") && !value["RetMsg"].IsNull())
    {
        if (!value["RetMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.RetMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retMsg = string(value["RetMsg"].GetString());
        m_retMsgHasBeenSet = true;
    }

    if (value.HasMember("RetNo") && !value["RetNo"].IsNull())
    {
        if (!value["RetNo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.RetNo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retNo = value["RetNo"].GetUint64();
        m_retNoHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("SqlType") && !value["SqlType"].IsNull())
    {
        if (!value["SqlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.SqlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlType = string(value["SqlType"].GetString());
        m_sqlTypeHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("HitRules") && !value["HitRules"].IsNull())
    {
        if (!value["HitRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.HitRules` is not array type"));

        const rapidjson::Value &tmpValue = value["HitRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HitRules item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hitRules.push_back(item);
        }
        m_hitRulesHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ReqId") && !value["ReqId"].IsNull())
    {
        if (!value["ReqId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.ReqId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reqId = string(value["ReqId"].GetString());
        m_reqIdHasBeenSet = true;
    }

    if (value.HasMember("SqlMainType") && !value["SqlMainType"].IsNull())
    {
        if (!value["SqlMainType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.SqlMainType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlMainType = string(value["SqlMainType"].GetString());
        m_sqlMainTypeHasBeenSet = true;
    }

    if (value.HasMember("TableNames") && !value["TableNames"].IsNull())
    {
        if (!value["TableNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.TableNames` is not array type"));

        const rapidjson::Value &tmpValue = value["TableNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tableNames.push_back((*itr).GetString());
        }
        m_tableNamesHasBeenSet = true;
    }

    if (value.HasMember("FieldNames") && !value["FieldNames"].IsNull())
    {
        if (!value["FieldNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.FieldNames` is not array type"));

        const rapidjson::Value &tmpValue = value["FieldNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fieldNames.push_back((*itr).GetString());
        }
        m_fieldNamesHasBeenSet = true;
    }

    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (value.HasMember("DbType") && !value["DbType"].IsNull())
    {
        if (!value["DbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.DbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbType = string(value["DbType"].GetString());
        m_dbTypeHasBeenSet = true;
    }

    if (value.HasMember("ClientDriverName") && !value["ClientDriverName"].IsNull())
    {
        if (!value["ClientDriverName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.ClientDriverName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientDriverName = string(value["ClientDriverName"].GetString());
        m_clientDriverNameHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }

    if (value.HasMember("FieldDetails") && !value["FieldDetails"].IsNull())
    {
        if (!value["FieldDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.FieldDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["FieldDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TableField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fieldDetails.push_back(item);
        }
        m_fieldDetailsHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditLogInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aiScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aiScore, allocator);
    }

    if (m_appUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appUser.c_str(), allocator).Move(), allocator);
    }

    if (m_backPacketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackPacket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backPacket.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_clientMacHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientMac";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientMac.c_str(), allocator).Move(), allocator);
    }

    if (m_clientNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientName.c_str(), allocator).Move(), allocator);
    }

    if (m_clientUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientUser.c_str(), allocator).Move(), allocator);
    }

    if (m_clientPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientPort, allocator);
    }

    if (m_dangerLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DangerLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dangerLevel, allocator);
    }

    if (m_dbIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbPort, allocator);
    }

    if (m_dbUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbUser.c_str(), allocator).Move(), allocator);
    }

    if (m_effectRowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectRow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectRow, allocator);
    }

    if (m_execTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_execTime, allocator);
    }

    if (m_hitRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hitRule.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceId, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_opSqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpSql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_opSql.c_str(), allocator).Move(), allocator);
    }

    if (m_opTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_opTime, allocator);
    }

    if (m_retMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_retMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_retNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retNo, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_hitRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hitRules.begin(); itr != m_hitRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_reqIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reqId.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlMainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlMainType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlMainType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tableNames.begin(); itr != m_tableNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fieldNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fieldNames.begin(); itr != m_fieldNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_clientDriverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientDriverName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientDriverName.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fieldDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fieldDetails.begin(); itr != m_fieldDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

}


double AuditLogInfo::GetAiScore() const
{
    return m_aiScore;
}

void AuditLogInfo::SetAiScore(const double& _aiScore)
{
    m_aiScore = _aiScore;
    m_aiScoreHasBeenSet = true;
}

bool AuditLogInfo::AiScoreHasBeenSet() const
{
    return m_aiScoreHasBeenSet;
}

string AuditLogInfo::GetAppUser() const
{
    return m_appUser;
}

void AuditLogInfo::SetAppUser(const string& _appUser)
{
    m_appUser = _appUser;
    m_appUserHasBeenSet = true;
}

bool AuditLogInfo::AppUserHasBeenSet() const
{
    return m_appUserHasBeenSet;
}

string AuditLogInfo::GetBackPacket() const
{
    return m_backPacket;
}

void AuditLogInfo::SetBackPacket(const string& _backPacket)
{
    m_backPacket = _backPacket;
    m_backPacketHasBeenSet = true;
}

bool AuditLogInfo::BackPacketHasBeenSet() const
{
    return m_backPacketHasBeenSet;
}

string AuditLogInfo::GetClientIp() const
{
    return m_clientIp;
}

void AuditLogInfo::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool AuditLogInfo::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

string AuditLogInfo::GetClientMac() const
{
    return m_clientMac;
}

void AuditLogInfo::SetClientMac(const string& _clientMac)
{
    m_clientMac = _clientMac;
    m_clientMacHasBeenSet = true;
}

bool AuditLogInfo::ClientMacHasBeenSet() const
{
    return m_clientMacHasBeenSet;
}

string AuditLogInfo::GetClientName() const
{
    return m_clientName;
}

void AuditLogInfo::SetClientName(const string& _clientName)
{
    m_clientName = _clientName;
    m_clientNameHasBeenSet = true;
}

bool AuditLogInfo::ClientNameHasBeenSet() const
{
    return m_clientNameHasBeenSet;
}

string AuditLogInfo::GetClientUser() const
{
    return m_clientUser;
}

void AuditLogInfo::SetClientUser(const string& _clientUser)
{
    m_clientUser = _clientUser;
    m_clientUserHasBeenSet = true;
}

bool AuditLogInfo::ClientUserHasBeenSet() const
{
    return m_clientUserHasBeenSet;
}

uint64_t AuditLogInfo::GetClientPort() const
{
    return m_clientPort;
}

void AuditLogInfo::SetClientPort(const uint64_t& _clientPort)
{
    m_clientPort = _clientPort;
    m_clientPortHasBeenSet = true;
}

bool AuditLogInfo::ClientPortHasBeenSet() const
{
    return m_clientPortHasBeenSet;
}

uint64_t AuditLogInfo::GetDangerLevel() const
{
    return m_dangerLevel;
}

void AuditLogInfo::SetDangerLevel(const uint64_t& _dangerLevel)
{
    m_dangerLevel = _dangerLevel;
    m_dangerLevelHasBeenSet = true;
}

bool AuditLogInfo::DangerLevelHasBeenSet() const
{
    return m_dangerLevelHasBeenSet;
}

string AuditLogInfo::GetDbIp() const
{
    return m_dbIp;
}

void AuditLogInfo::SetDbIp(const string& _dbIp)
{
    m_dbIp = _dbIp;
    m_dbIpHasBeenSet = true;
}

bool AuditLogInfo::DbIpHasBeenSet() const
{
    return m_dbIpHasBeenSet;
}

string AuditLogInfo::GetDbName() const
{
    return m_dbName;
}

void AuditLogInfo::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool AuditLogInfo::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

uint64_t AuditLogInfo::GetDbPort() const
{
    return m_dbPort;
}

void AuditLogInfo::SetDbPort(const uint64_t& _dbPort)
{
    m_dbPort = _dbPort;
    m_dbPortHasBeenSet = true;
}

bool AuditLogInfo::DbPortHasBeenSet() const
{
    return m_dbPortHasBeenSet;
}

string AuditLogInfo::GetDbUser() const
{
    return m_dbUser;
}

void AuditLogInfo::SetDbUser(const string& _dbUser)
{
    m_dbUser = _dbUser;
    m_dbUserHasBeenSet = true;
}

bool AuditLogInfo::DbUserHasBeenSet() const
{
    return m_dbUserHasBeenSet;
}

uint64_t AuditLogInfo::GetEffectRow() const
{
    return m_effectRow;
}

void AuditLogInfo::SetEffectRow(const uint64_t& _effectRow)
{
    m_effectRow = _effectRow;
    m_effectRowHasBeenSet = true;
}

bool AuditLogInfo::EffectRowHasBeenSet() const
{
    return m_effectRowHasBeenSet;
}

uint64_t AuditLogInfo::GetExecTime() const
{
    return m_execTime;
}

void AuditLogInfo::SetExecTime(const uint64_t& _execTime)
{
    m_execTime = _execTime;
    m_execTimeHasBeenSet = true;
}

bool AuditLogInfo::ExecTimeHasBeenSet() const
{
    return m_execTimeHasBeenSet;
}

string AuditLogInfo::GetHitRule() const
{
    return m_hitRule;
}

void AuditLogInfo::SetHitRule(const string& _hitRule)
{
    m_hitRule = _hitRule;
    m_hitRuleHasBeenSet = true;
}

bool AuditLogInfo::HitRuleHasBeenSet() const
{
    return m_hitRuleHasBeenSet;
}

uint64_t AuditLogInfo::GetId() const
{
    return m_id;
}

void AuditLogInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AuditLogInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t AuditLogInfo::GetInstanceId() const
{
    return m_instanceId;
}

void AuditLogInfo::SetInstanceId(const uint64_t& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AuditLogInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AuditLogInfo::GetInstanceName() const
{
    return m_instanceName;
}

void AuditLogInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AuditLogInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string AuditLogInfo::GetOpSql() const
{
    return m_opSql;
}

void AuditLogInfo::SetOpSql(const string& _opSql)
{
    m_opSql = _opSql;
    m_opSqlHasBeenSet = true;
}

bool AuditLogInfo::OpSqlHasBeenSet() const
{
    return m_opSqlHasBeenSet;
}

uint64_t AuditLogInfo::GetOpTime() const
{
    return m_opTime;
}

void AuditLogInfo::SetOpTime(const uint64_t& _opTime)
{
    m_opTime = _opTime;
    m_opTimeHasBeenSet = true;
}

bool AuditLogInfo::OpTimeHasBeenSet() const
{
    return m_opTimeHasBeenSet;
}

string AuditLogInfo::GetRetMsg() const
{
    return m_retMsg;
}

void AuditLogInfo::SetRetMsg(const string& _retMsg)
{
    m_retMsg = _retMsg;
    m_retMsgHasBeenSet = true;
}

bool AuditLogInfo::RetMsgHasBeenSet() const
{
    return m_retMsgHasBeenSet;
}

uint64_t AuditLogInfo::GetRetNo() const
{
    return m_retNo;
}

void AuditLogInfo::SetRetNo(const uint64_t& _retNo)
{
    m_retNo = _retNo;
    m_retNoHasBeenSet = true;
}

bool AuditLogInfo::RetNoHasBeenSet() const
{
    return m_retNoHasBeenSet;
}

string AuditLogInfo::GetSessionId() const
{
    return m_sessionId;
}

void AuditLogInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool AuditLogInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string AuditLogInfo::GetSqlType() const
{
    return m_sqlType;
}

void AuditLogInfo::SetSqlType(const string& _sqlType)
{
    m_sqlType = _sqlType;
    m_sqlTypeHasBeenSet = true;
}

bool AuditLogInfo::SqlTypeHasBeenSet() const
{
    return m_sqlTypeHasBeenSet;
}

string AuditLogInfo::GetTableName() const
{
    return m_tableName;
}

void AuditLogInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool AuditLogInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string AuditLogInfo::GetAssetName() const
{
    return m_assetName;
}

void AuditLogInfo::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool AuditLogInfo::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

vector<HitRules> AuditLogInfo::GetHitRules() const
{
    return m_hitRules;
}

void AuditLogInfo::SetHitRules(const vector<HitRules>& _hitRules)
{
    m_hitRules = _hitRules;
    m_hitRulesHasBeenSet = true;
}

bool AuditLogInfo::HitRulesHasBeenSet() const
{
    return m_hitRulesHasBeenSet;
}

string AuditLogInfo::GetSourceType() const
{
    return m_sourceType;
}

void AuditLogInfo::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool AuditLogInfo::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string AuditLogInfo::GetReqId() const
{
    return m_reqId;
}

void AuditLogInfo::SetReqId(const string& _reqId)
{
    m_reqId = _reqId;
    m_reqIdHasBeenSet = true;
}

bool AuditLogInfo::ReqIdHasBeenSet() const
{
    return m_reqIdHasBeenSet;
}

string AuditLogInfo::GetSqlMainType() const
{
    return m_sqlMainType;
}

void AuditLogInfo::SetSqlMainType(const string& _sqlMainType)
{
    m_sqlMainType = _sqlMainType;
    m_sqlMainTypeHasBeenSet = true;
}

bool AuditLogInfo::SqlMainTypeHasBeenSet() const
{
    return m_sqlMainTypeHasBeenSet;
}

vector<string> AuditLogInfo::GetTableNames() const
{
    return m_tableNames;
}

void AuditLogInfo::SetTableNames(const vector<string>& _tableNames)
{
    m_tableNames = _tableNames;
    m_tableNamesHasBeenSet = true;
}

bool AuditLogInfo::TableNamesHasBeenSet() const
{
    return m_tableNamesHasBeenSet;
}

vector<string> AuditLogInfo::GetFieldNames() const
{
    return m_fieldNames;
}

void AuditLogInfo::SetFieldNames(const vector<string>& _fieldNames)
{
    m_fieldNames = _fieldNames;
    m_fieldNamesHasBeenSet = true;
}

bool AuditLogInfo::FieldNamesHasBeenSet() const
{
    return m_fieldNamesHasBeenSet;
}

string AuditLogInfo::GetFieldName() const
{
    return m_fieldName;
}

void AuditLogInfo::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool AuditLogInfo::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

string AuditLogInfo::GetDbType() const
{
    return m_dbType;
}

void AuditLogInfo::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool AuditLogInfo::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string AuditLogInfo::GetClientDriverName() const
{
    return m_clientDriverName;
}

void AuditLogInfo::SetClientDriverName(const string& _clientDriverName)
{
    m_clientDriverName = _clientDriverName;
    m_clientDriverNameHasBeenSet = true;
}

bool AuditLogInfo::ClientDriverNameHasBeenSet() const
{
    return m_clientDriverNameHasBeenSet;
}

Location AuditLogInfo::GetLocation() const
{
    return m_location;
}

void AuditLogInfo::SetLocation(const Location& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool AuditLogInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

vector<TableField> AuditLogInfo::GetFieldDetails() const
{
    return m_fieldDetails;
}

void AuditLogInfo::SetFieldDetails(const vector<TableField>& _fieldDetails)
{
    m_fieldDetails = _fieldDetails;
    m_fieldDetailsHasBeenSet = true;
}

bool AuditLogInfo::FieldDetailsHasBeenSet() const
{
    return m_fieldDetailsHasBeenSet;
}

uint64_t AuditLogInfo::GetAppId() const
{
    return m_appId;
}

void AuditLogInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AuditLogInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AuditLogInfo::GetNickName() const
{
    return m_nickName;
}

void AuditLogInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool AuditLogInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string AuditLogInfo::GetUin() const
{
    return m_uin;
}

void AuditLogInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AuditLogInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

