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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AUDITLOGINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AUDITLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/HitRules.h>
#include <tencentcloud/csip/v20221121/model/Location.h>
#include <tencentcloud/csip/v20221121/model/TableField.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 审计日志列表信息
                */
                class AuditLogInfo : public AbstractModel
                {
                public:
                    AuditLogInfo();
                    ~AuditLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ai分数
                     * @return AiScore ai分数
                     * 
                     */
                    double GetAiScore() const;

                    /**
                     * 设置ai分数
                     * @param _aiScore ai分数
                     * 
                     */
                    void SetAiScore(const double& _aiScore);

                    /**
                     * 判断参数 AiScore 是否已赋值
                     * @return AiScore 是否已赋值
                     * 
                     */
                    bool AiScoreHasBeenSet() const;

                    /**
                     * 获取应用用户
                     * @return AppUser 应用用户
                     * 
                     */
                    std::string GetAppUser() const;

                    /**
                     * 设置应用用户
                     * @param _appUser 应用用户
                     * 
                     */
                    void SetAppUser(const std::string& _appUser);

                    /**
                     * 判断参数 AppUser 是否已赋值
                     * @return AppUser 是否已赋值
                     * 
                     */
                    bool AppUserHasBeenSet() const;

                    /**
                     * 获取备份数据包
                     * @return BackPacket 备份数据包
                     * 
                     */
                    std::string GetBackPacket() const;

                    /**
                     * 设置备份数据包
                     * @param _backPacket 备份数据包
                     * 
                     */
                    void SetBackPacket(const std::string& _backPacket);

                    /**
                     * 判断参数 BackPacket 是否已赋值
                     * @return BackPacket 是否已赋值
                     * 
                     */
                    bool BackPacketHasBeenSet() const;

                    /**
                     * 获取客户端 IP
                     * @return ClientIp 客户端 IP
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置客户端 IP
                     * @param _clientIp 客户端 IP
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取客户端 Mac
                     * @return ClientMac 客户端 Mac
                     * 
                     */
                    std::string GetClientMac() const;

                    /**
                     * 设置客户端 Mac
                     * @param _clientMac 客户端 Mac
                     * 
                     */
                    void SetClientMac(const std::string& _clientMac);

                    /**
                     * 判断参数 ClientMac 是否已赋值
                     * @return ClientMac 是否已赋值
                     * 
                     */
                    bool ClientMacHasBeenSet() const;

                    /**
                     * 获取终端名称，取值Proxy时为casb代理流量，其它为Agent流量
                     * @return ClientName 终端名称，取值Proxy时为casb代理流量，其它为Agent流量
                     * 
                     */
                    std::string GetClientName() const;

                    /**
                     * 设置终端名称，取值Proxy时为casb代理流量，其它为Agent流量
                     * @param _clientName 终端名称，取值Proxy时为casb代理流量，其它为Agent流量
                     * 
                     */
                    void SetClientName(const std::string& _clientName);

                    /**
                     * 判断参数 ClientName 是否已赋值
                     * @return ClientName 是否已赋值
                     * 
                     */
                    bool ClientNameHasBeenSet() const;

                    /**
                     * 获取客户端用户
                     * @return ClientUser 客户端用户
                     * 
                     */
                    std::string GetClientUser() const;

                    /**
                     * 设置客户端用户
                     * @param _clientUser 客户端用户
                     * 
                     */
                    void SetClientUser(const std::string& _clientUser);

                    /**
                     * 判断参数 ClientUser 是否已赋值
                     * @return ClientUser 是否已赋值
                     * 
                     */
                    bool ClientUserHasBeenSet() const;

                    /**
                     * 获取客户端端口
                     * @return ClientPort 客户端端口
                     * 
                     */
                    uint64_t GetClientPort() const;

                    /**
                     * 设置客户端端口
                     * @param _clientPort 客户端端口
                     * 
                     */
                    void SetClientPort(const uint64_t& _clientPort);

                    /**
                     * 判断参数 ClientPort 是否已赋值
                     * @return ClientPort 是否已赋值
                     * 
                     */
                    bool ClientPortHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return DangerLevel 风险等级
                     * 
                     */
                    uint64_t GetDangerLevel() const;

                    /**
                     * 设置风险等级
                     * @param _dangerLevel 风险等级
                     * 
                     */
                    void SetDangerLevel(const uint64_t& _dangerLevel);

                    /**
                     * 判断参数 DangerLevel 是否已赋值
                     * @return DangerLevel 是否已赋值
                     * 
                     */
                    bool DangerLevelHasBeenSet() const;

                    /**
                     * 获取数据库 IP
                     * @return DbIp 数据库 IP
                     * 
                     */
                    std::string GetDbIp() const;

                    /**
                     * 设置数据库 IP
                     * @param _dbIp 数据库 IP
                     * 
                     */
                    void SetDbIp(const std::string& _dbIp);

                    /**
                     * 判断参数 DbIp 是否已赋值
                     * @return DbIp 是否已赋值
                     * 
                     */
                    bool DbIpHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return DbName 数据库名称
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称
                     * @param _dbName 数据库名称
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取数据库端口
                     * @return DbPort 数据库端口
                     * 
                     */
                    uint64_t GetDbPort() const;

                    /**
                     * 设置数据库端口
                     * @param _dbPort 数据库端口
                     * 
                     */
                    void SetDbPort(const uint64_t& _dbPort);

                    /**
                     * 判断参数 DbPort 是否已赋值
                     * @return DbPort 是否已赋值
                     * 
                     */
                    bool DbPortHasBeenSet() const;

                    /**
                     * 获取数据库用户
                     * @return DbUser 数据库用户
                     * 
                     */
                    std::string GetDbUser() const;

                    /**
                     * 设置数据库用户
                     * @param _dbUser 数据库用户
                     * 
                     */
                    void SetDbUser(const std::string& _dbUser);

                    /**
                     * 判断参数 DbUser 是否已赋值
                     * @return DbUser 是否已赋值
                     * 
                     */
                    bool DbUserHasBeenSet() const;

                    /**
                     * 获取影响行数
                     * @return EffectRow 影响行数
                     * 
                     */
                    uint64_t GetEffectRow() const;

                    /**
                     * 设置影响行数
                     * @param _effectRow 影响行数
                     * 
                     */
                    void SetEffectRow(const uint64_t& _effectRow);

                    /**
                     * 判断参数 EffectRow 是否已赋值
                     * @return EffectRow 是否已赋值
                     * 
                     */
                    bool EffectRowHasBeenSet() const;

                    /**
                     * 获取执行时间
                     * @return ExecTime 执行时间
                     * 
                     */
                    uint64_t GetExecTime() const;

                    /**
                     * 设置执行时间
                     * @param _execTime 执行时间
                     * 
                     */
                    void SetExecTime(const uint64_t& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取命中规则
                     * @return HitRule 命中规则
                     * 
                     */
                    std::string GetHitRule() const;

                    /**
                     * 设置命中规则
                     * @param _hitRule 命中规则
                     * 
                     */
                    void SetHitRule(const std::string& _hitRule);

                    /**
                     * 判断参数 HitRule 是否已赋值
                     * @return HitRule 是否已赋值
                     * 
                     */
                    bool HitRuleHasBeenSet() const;

                    /**
                     * 获取日志 ID
                     * @return Id 日志 ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置日志 ID
                     * @param _id 日志 ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取数据资产名称
                     * @return InstanceId 数据资产名称
                     * 
                     */
                    uint64_t GetInstanceId() const;

                    /**
                     * 设置数据资产名称
                     * @param _instanceId 数据资产名称
                     * 
                     */
                    void SetInstanceId(const uint64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取审计单元名
                     * @return InstanceName 审计单元名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置审计单元名
                     * @param _instanceName 审计单元名
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取操作语句(sql 语句)
                     * @return OpSql 操作语句(sql 语句)
                     * 
                     */
                    std::string GetOpSql() const;

                    /**
                     * 设置操作语句(sql 语句)
                     * @param _opSql 操作语句(sql 语句)
                     * 
                     */
                    void SetOpSql(const std::string& _opSql);

                    /**
                     * 判断参数 OpSql 是否已赋值
                     * @return OpSql 是否已赋值
                     * 
                     */
                    bool OpSqlHasBeenSet() const;

                    /**
                     * 获取操作时间(时间)
                     * @return OpTime 操作时间(时间)
                     * 
                     */
                    uint64_t GetOpTime() const;

                    /**
                     * 设置操作时间(时间)
                     * @param _opTime 操作时间(时间)
                     * 
                     */
                    void SetOpTime(const uint64_t& _opTime);

                    /**
                     * 判断参数 OpTime 是否已赋值
                     * @return OpTime 是否已赋值
                     * 
                     */
                    bool OpTimeHasBeenSet() const;

                    /**
                     * 获取返回消息
                     * @return RetMsg 返回消息
                     * 
                     */
                    std::string GetRetMsg() const;

                    /**
                     * 设置返回消息
                     * @param _retMsg 返回消息
                     * 
                     */
                    void SetRetMsg(const std::string& _retMsg);

                    /**
                     * 判断参数 RetMsg 是否已赋值
                     * @return RetMsg 是否已赋值
                     * 
                     */
                    bool RetMsgHasBeenSet() const;

                    /**
                     * 获取返回码
                     * @return RetNo 返回码
                     * 
                     */
                    uint64_t GetRetNo() const;

                    /**
                     * 设置返回码
                     * @param _retNo 返回码
                     * 
                     */
                    void SetRetNo(const uint64_t& _retNo);

                    /**
                     * 判断参数 RetNo 是否已赋值
                     * @return RetNo 是否已赋值
                     * 
                     */
                    bool RetNoHasBeenSet() const;

                    /**
                     * 获取会话ID
                     * @return SessionId 会话ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话ID
                     * @param _sessionId 会话ID
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取操作类型
                     * @return SqlType 操作类型
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置操作类型
                     * @param _sqlType 操作类型
                     * 
                     */
                    void SetSqlType(const std::string& _sqlType);

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     * 
                     */
                    bool SqlTypeHasBeenSet() const;

                    /**
                     * 获取表名
                     * @return TableName 表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名
                     * @param _tableName 表名
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取数据资产名称
                     * @return AssetName 数据资产名称
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置数据资产名称
                     * @param _assetName 数据资产名称
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取规则集合
                     * @return HitRules 规则集合
                     * 
                     */
                    std::vector<HitRules> GetHitRules() const;

                    /**
                     * 设置规则集合
                     * @param _hitRules 规则集合
                     * 
                     */
                    void SetHitRules(const std::vector<HitRules>& _hitRules);

                    /**
                     * 判断参数 HitRules 是否已赋值
                     * @return HitRules 是否已赋值
                     * 
                     */
                    bool HitRulesHasBeenSet() const;

                    /**
                     * 获取流量来源
                     * @return SourceType 流量来源
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置流量来源
                     * @param _sourceType 流量来源
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取单条审计日志id
                     * @return ReqId 单条审计日志id
                     * 
                     */
                    std::string GetReqId() const;

                    /**
                     * 设置单条审计日志id
                     * @param _reqId 单条审计日志id
                     * 
                     */
                    void SetReqId(const std::string& _reqId);

                    /**
                     * 判断参数 ReqId 是否已赋值
                     * @return ReqId 是否已赋值
                     * 
                     */
                    bool ReqIdHasBeenSet() const;

                    /**
                     * 获取SQL 主要类型，DML/DDL/DCL/TCL
                     * @return SqlMainType SQL 主要类型，DML/DDL/DCL/TCL
                     * 
                     */
                    std::string GetSqlMainType() const;

                    /**
                     * 设置SQL 主要类型，DML/DDL/DCL/TCL
                     * @param _sqlMainType SQL 主要类型，DML/DDL/DCL/TCL
                     * 
                     */
                    void SetSqlMainType(const std::string& _sqlMainType);

                    /**
                     * 判断参数 SqlMainType 是否已赋值
                     * @return SqlMainType 是否已赋值
                     * 
                     */
                    bool SqlMainTypeHasBeenSet() const;

                    /**
                     * 获取表名集合
                     * @return TableNames 表名集合
                     * 
                     */
                    std::vector<std::string> GetTableNames() const;

                    /**
                     * 设置表名集合
                     * @param _tableNames 表名集合
                     * 
                     */
                    void SetTableNames(const std::vector<std::string>& _tableNames);

                    /**
                     * 判断参数 TableNames 是否已赋值
                     * @return TableNames 是否已赋值
                     * 
                     */
                    bool TableNamesHasBeenSet() const;

                    /**
                     * 获取字段名集合
                     * @return FieldNames 字段名集合
                     * 
                     */
                    std::vector<std::string> GetFieldNames() const;

                    /**
                     * 设置字段名集合
                     * @param _fieldNames 字段名集合
                     * 
                     */
                    void SetFieldNames(const std::vector<std::string>& _fieldNames);

                    /**
                     * 判断参数 FieldNames 是否已赋值
                     * @return FieldNames 是否已赋值
                     * 
                     */
                    bool FieldNamesHasBeenSet() const;

                    /**
                     * 获取字段名
                     * @return FieldName 字段名
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置字段名
                     * @param _fieldName 字段名
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取数据库类型
                     * @return DbType 数据库类型
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库类型
                     * @param _dbType 数据库类型
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取客户端工具
                     * @return ClientDriverName 客户端工具
                     * 
                     */
                    std::string GetClientDriverName() const;

                    /**
                     * 设置客户端工具
                     * @param _clientDriverName 客户端工具
                     * 
                     */
                    void SetClientDriverName(const std::string& _clientDriverName);

                    /**
                     * 判断参数 ClientDriverName 是否已赋值
                     * @return ClientDriverName 是否已赋值
                     * 
                     */
                    bool ClientDriverNameHasBeenSet() const;

                    /**
                     * 获取位置信息
                     * @return Location 位置信息
                     * 
                     */
                    Location GetLocation() const;

                    /**
                     * 设置位置信息
                     * @param _location 位置信息
                     * 
                     */
                    void SetLocation(const Location& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取字段信息（包含敏感信息）
                     * @return FieldDetails 字段信息（包含敏感信息）
                     * 
                     */
                    std::vector<TableField> GetFieldDetails() const;

                    /**
                     * 设置字段信息（包含敏感信息）
                     * @param _fieldDetails 字段信息（包含敏感信息）
                     * 
                     */
                    void SetFieldDetails(const std::vector<TableField>& _fieldDetails);

                    /**
                     * 判断参数 FieldDetails 是否已赋值
                     * @return FieldDetails 是否已赋值
                     * 
                     */
                    bool FieldDetailsHasBeenSet() const;

                    /**
                     * 获取资产所属账号app id
                     * @return AppId 资产所属账号app id
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置资产所属账号app id
                     * @param _appId 资产所属账号app id
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取账号昵称
                     * @return NickName 账号昵称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置账号昵称
                     * @param _nickName 账号昵称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取资产所属账号uin
                     * @return Uin 资产所属账号uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置资产所属账号uin
                     * @param _uin 资产所属账号uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * ai分数
                     */
                    double m_aiScore;
                    bool m_aiScoreHasBeenSet;

                    /**
                     * 应用用户
                     */
                    std::string m_appUser;
                    bool m_appUserHasBeenSet;

                    /**
                     * 备份数据包
                     */
                    std::string m_backPacket;
                    bool m_backPacketHasBeenSet;

                    /**
                     * 客户端 IP
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 客户端 Mac
                     */
                    std::string m_clientMac;
                    bool m_clientMacHasBeenSet;

                    /**
                     * 终端名称，取值Proxy时为casb代理流量，其它为Agent流量
                     */
                    std::string m_clientName;
                    bool m_clientNameHasBeenSet;

                    /**
                     * 客户端用户
                     */
                    std::string m_clientUser;
                    bool m_clientUserHasBeenSet;

                    /**
                     * 客户端端口
                     */
                    uint64_t m_clientPort;
                    bool m_clientPortHasBeenSet;

                    /**
                     * 风险等级
                     */
                    uint64_t m_dangerLevel;
                    bool m_dangerLevelHasBeenSet;

                    /**
                     * 数据库 IP
                     */
                    std::string m_dbIp;
                    bool m_dbIpHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 数据库端口
                     */
                    uint64_t m_dbPort;
                    bool m_dbPortHasBeenSet;

                    /**
                     * 数据库用户
                     */
                    std::string m_dbUser;
                    bool m_dbUserHasBeenSet;

                    /**
                     * 影响行数
                     */
                    uint64_t m_effectRow;
                    bool m_effectRowHasBeenSet;

                    /**
                     * 执行时间
                     */
                    uint64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * 命中规则
                     */
                    std::string m_hitRule;
                    bool m_hitRuleHasBeenSet;

                    /**
                     * 日志 ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 数据资产名称
                     */
                    uint64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 审计单元名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 操作语句(sql 语句)
                     */
                    std::string m_opSql;
                    bool m_opSqlHasBeenSet;

                    /**
                     * 操作时间(时间)
                     */
                    uint64_t m_opTime;
                    bool m_opTimeHasBeenSet;

                    /**
                     * 返回消息
                     */
                    std::string m_retMsg;
                    bool m_retMsgHasBeenSet;

                    /**
                     * 返回码
                     */
                    uint64_t m_retNo;
                    bool m_retNoHasBeenSet;

                    /**
                     * 会话ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 操作类型
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * 表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 数据资产名称
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 规则集合
                     */
                    std::vector<HitRules> m_hitRules;
                    bool m_hitRulesHasBeenSet;

                    /**
                     * 流量来源
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 单条审计日志id
                     */
                    std::string m_reqId;
                    bool m_reqIdHasBeenSet;

                    /**
                     * SQL 主要类型，DML/DDL/DCL/TCL
                     */
                    std::string m_sqlMainType;
                    bool m_sqlMainTypeHasBeenSet;

                    /**
                     * 表名集合
                     */
                    std::vector<std::string> m_tableNames;
                    bool m_tableNamesHasBeenSet;

                    /**
                     * 字段名集合
                     */
                    std::vector<std::string> m_fieldNames;
                    bool m_fieldNamesHasBeenSet;

                    /**
                     * 字段名
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * 数据库类型
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 客户端工具
                     */
                    std::string m_clientDriverName;
                    bool m_clientDriverNameHasBeenSet;

                    /**
                     * 位置信息
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 字段信息（包含敏感信息）
                     */
                    std::vector<TableField> m_fieldDetails;
                    bool m_fieldDetailsHasBeenSet;

                    /**
                     * 资产所属账号app id
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 账号昵称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 资产所属账号uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AUDITLOGINFO_H_
