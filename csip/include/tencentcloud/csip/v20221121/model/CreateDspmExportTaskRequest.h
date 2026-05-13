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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMEXPORTTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMEXPORTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateDspmExportTask请求参数结构体
                */
                class CreateDspmExportTaskRequest : public AbstractModel
                {
                public:
                    CreateDspmExportTaskRequest();
                    ~CreateDspmExportTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取风险等级(0-安全,1-低风险,2-中风险,3-高风险,-1-全部)
                     * @return DangerLevel 风险等级(0-安全,1-低风险,2-中风险,3-高风险,-1-全部)
                     * 
                     */
                    int64_t GetDangerLevel() const;

                    /**
                     * 设置风险等级(0-安全,1-低风险,2-中风险,3-高风险,-1-全部)
                     * @param _dangerLevel 风险等级(0-安全,1-低风险,2-中风险,3-高风险,-1-全部)
                     * 
                     */
                    void SetDangerLevel(const int64_t& _dangerLevel);

                    /**
                     * 判断参数 DangerLevel 是否已赋值
                     * @return DangerLevel 是否已赋值
                     * 
                     */
                    bool DangerLevelHasBeenSet() const;

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
                    int64_t GetDbPort() const;

                    /**
                     * 设置数据库端口
                     * @param _dbPort 数据库端口
                     * 
                     */
                    void SetDbPort(const int64_t& _dbPort);

                    /**
                     * 判断参数 DbPort 是否已赋值
                     * @return DbPort 是否已赋值
                     * 
                     */
                    bool DbPortHasBeenSet() const;

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
                     * 获取资产 ID
                     * @return AssetsId 资产 ID
                     * 
                     */
                    int64_t GetAssetsId() const;

                    /**
                     * 设置资产 ID
                     * @param _assetsId 资产 ID
                     * 
                     */
                    void SetAssetsId(const int64_t& _assetsId);

                    /**
                     * 判断参数 AssetsId 是否已赋值
                     * @return AssetsId 是否已赋值
                     * 
                     */
                    bool AssetsIdHasBeenSet() const;

                    /**
                     * 获取会话 ID
                     * @return SessionId 会话 ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话 ID
                     * @param _sessionId 会话 ID
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
                     * 获取客户端 IP
                     * @return ClientSideIp 客户端 IP
                     * 
                     */
                    std::string GetClientSideIp() const;

                    /**
                     * 设置客户端 IP
                     * @param _clientSideIp 客户端 IP
                     * 
                     */
                    void SetClientSideIp(const std::string& _clientSideIp);

                    /**
                     * 判断参数 ClientSideIp 是否已赋值
                     * @return ClientSideIp 是否已赋值
                     * 
                     */
                    bool ClientSideIpHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取命中规则
                     * @return HitRule 命中规则
                     * 
                     */
                    int64_t GetHitRule() const;

                    /**
                     * 设置命中规则
                     * @param _hitRule 命中规则
                     * 
                     */
                    void SetHitRule(const int64_t& _hitRule);

                    /**
                     * 判断参数 HitRule 是否已赋值
                     * @return HitRule 是否已赋值
                     * 
                     */
                    bool HitRuleHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取模糊查询
                     * @return FuzzySearch 模糊查询
                     * 
                     */
                    std::string GetFuzzySearch() const;

                    /**
                     * 设置模糊查询
                     * @param _fuzzySearch 模糊查询
                     * 
                     */
                    void SetFuzzySearch(const std::string& _fuzzySearch);

                    /**
                     * 判断参数 FuzzySearch 是否已赋值
                     * @return FuzzySearch 是否已赋值
                     * 
                     */
                    bool FuzzySearchHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取客户端
                     * @return ClientName 客户端
                     * 
                     */
                    std::string GetClientName() const;

                    /**
                     * 设置客户端
                     * @param _clientName 客户端
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
                     * 获取流量来源，取值 Agent/Proxy/空；传Agent会返回Agent的日志，传Proxy会返回Proxy日志，两都都传或不传则返回所有
                     * @return SourceTypes 流量来源，取值 Agent/Proxy/空；传Agent会返回Agent的日志，传Proxy会返回Proxy日志，两都都传或不传则返回所有
                     * 
                     */
                    std::vector<std::string> GetSourceTypes() const;

                    /**
                     * 设置流量来源，取值 Agent/Proxy/空；传Agent会返回Agent的日志，传Proxy会返回Proxy日志，两都都传或不传则返回所有
                     * @param _sourceTypes 流量来源，取值 Agent/Proxy/空；传Agent会返回Agent的日志，传Proxy会返回Proxy日志，两都都传或不传则返回所有
                     * 
                     */
                    void SetSourceTypes(const std::vector<std::string>& _sourceTypes);

                    /**
                     * 判断参数 SourceTypes 是否已赋值
                     * @return SourceTypes 是否已赋值
                     * 
                     */
                    bool SourceTypesHasBeenSet() const;

                    /**
                     * 获取表名，长度限制64，多个表名查询的话可以用空格连接	
                     * @return TableName 表名，长度限制64，多个表名查询的话可以用空格连接	
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名，长度限制64，多个表名查询的话可以用空格连接	
                     * @param _tableName 表名，长度限制64，多个表名查询的话可以用空格连接	
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
                     * 获取字段名，长度限制64，多个字段名查询的话可以用空格连接
                     * @return FieldName 字段名，长度限制64，多个字段名查询的话可以用空格连接
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置字段名，长度限制64，多个字段名查询的话可以用空格连接
                     * @param _fieldName 字段名，长度限制64，多个字段名查询的话可以用空格连接
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
                     * 获取SQL 主要类型，DDL, DML, DCL, TCL	
                     * @return SqlMainTypes SQL 主要类型，DDL, DML, DCL, TCL	
                     * 
                     */
                    std::vector<std::string> GetSqlMainTypes() const;

                    /**
                     * 设置SQL 主要类型，DDL, DML, DCL, TCL	
                     * @param _sqlMainTypes SQL 主要类型，DDL, DML, DCL, TCL	
                     * 
                     */
                    void SetSqlMainTypes(const std::vector<std::string>& _sqlMainTypes);

                    /**
                     * 判断参数 SqlMainTypes 是否已赋值
                     * @return SqlMainTypes 是否已赋值
                     * 
                     */
                    bool SqlMainTypesHasBeenSet() const;

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
                     * 获取影响行数最小值	
                     * @return RowNumMin 影响行数最小值	
                     * 
                     */
                    int64_t GetRowNumMin() const;

                    /**
                     * 设置影响行数最小值	
                     * @param _rowNumMin 影响行数最小值	
                     * 
                     */
                    void SetRowNumMin(const int64_t& _rowNumMin);

                    /**
                     * 判断参数 RowNumMin 是否已赋值
                     * @return RowNumMin 是否已赋值
                     * 
                     */
                    bool RowNumMinHasBeenSet() const;

                    /**
                     * 获取影响行数最大值	
                     * @return RowNumMax 影响行数最大值	
                     * 
                     */
                    int64_t GetRowNumMax() const;

                    /**
                     * 设置影响行数最大值	
                     * @param _rowNumMax 影响行数最大值	
                     * 
                     */
                    void SetRowNumMax(const int64_t& _rowNumMax);

                    /**
                     * 判断参数 RowNumMax 是否已赋值
                     * @return RowNumMax 是否已赋值
                     * 
                     */
                    bool RowNumMaxHasBeenSet() const;

                    /**
                     * 获取数据库类型	
                     * @return DbTypes 数据库类型	
                     * 
                     */
                    std::vector<std::string> GetDbTypes() const;

                    /**
                     * 设置数据库类型	
                     * @param _dbTypes 数据库类型	
                     * 
                     */
                    void SetDbTypes(const std::vector<std::string>& _dbTypes);

                    /**
                     * 判断参数 DbTypes 是否已赋值
                     * @return DbTypes 是否已赋值
                     * 
                     */
                    bool DbTypesHasBeenSet() const;

                    /**
                     * 获取返回码	
                     * @return RetNo 返回码	
                     * 
                     */
                    int64_t GetRetNo() const;

                    /**
                     * 设置返回码	
                     * @param _retNo 返回码	
                     * 
                     */
                    void SetRetNo(const int64_t& _retNo);

                    /**
                     * 判断参数 RetNo 是否已赋值
                     * @return RetNo 是否已赋值
                     * 
                     */
                    bool RetNoHasBeenSet() const;

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
                     * 获取客户端端口	
                     * @return ClientPort 客户端端口	
                     * 
                     */
                    int64_t GetClientPort() const;

                    /**
                     * 设置客户端端口	
                     * @param _clientPort 客户端端口	
                     * 
                     */
                    void SetClientPort(const int64_t& _clientPort);

                    /**
                     * 判断参数 ClientPort 是否已赋值
                     * @return ClientPort 是否已赋值
                     * 
                     */
                    bool ClientPortHasBeenSet() const;

                    /**
                     * 获取审计日志 ID
                     * @return LogId 审计日志 ID
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置审计日志 ID
                     * @param _logId 审计日志 ID
                     * 
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取风险等级数组(0-安全,1-低风险,2-中风险,3-高风险), 如果要全部，则需要将所有的值都传入。如果为空，则会参考：DangerLevel 入参
                     * @return DangerLevels 风险等级数组(0-安全,1-低风险,2-中风险,3-高风险), 如果要全部，则需要将所有的值都传入。如果为空，则会参考：DangerLevel 入参
                     * 
                     */
                    std::vector<int64_t> GetDangerLevels() const;

                    /**
                     * 设置风险等级数组(0-安全,1-低风险,2-中风险,3-高风险), 如果要全部，则需要将所有的值都传入。如果为空，则会参考：DangerLevel 入参
                     * @param _dangerLevels 风险等级数组(0-安全,1-低风险,2-中风险,3-高风险), 如果要全部，则需要将所有的值都传入。如果为空，则会参考：DangerLevel 入参
                     * 
                     */
                    void SetDangerLevels(const std::vector<int64_t>& _dangerLevels);

                    /**
                     * 判断参数 DangerLevels 是否已赋值
                     * @return DangerLevels 是否已赋值
                     * 
                     */
                    bool DangerLevelsHasBeenSet() const;

                    /**
                     * 获取字段分类
                     * @return SensitiveCategoryRule 字段分类
                     * 
                     */
                    std::string GetSensitiveCategoryRule() const;

                    /**
                     * 设置字段分类
                     * @param _sensitiveCategoryRule 字段分类
                     * 
                     */
                    void SetSensitiveCategoryRule(const std::string& _sensitiveCategoryRule);

                    /**
                     * 判断参数 SensitiveCategoryRule 是否已赋值
                     * @return SensitiveCategoryRule 是否已赋值
                     * 
                     */
                    bool SensitiveCategoryRuleHasBeenSet() const;

                    /**
                     * 获取字段分级
                     * @return SensitiveLevelRisk 字段分级
                     * 
                     */
                    std::string GetSensitiveLevelRisk() const;

                    /**
                     * 设置字段分级
                     * @param _sensitiveLevelRisk 字段分级
                     * 
                     */
                    void SetSensitiveLevelRisk(const std::string& _sensitiveLevelRisk);

                    /**
                     * 判断参数 SensitiveLevelRisk 是否已赋值
                     * @return SensitiveLevelRisk 是否已赋值
                     * 
                     */
                    bool SensitiveLevelRiskHasBeenSet() const;

                    /**
                     * 获取事务Id
                     * @return TrxId 事务Id
                     * 
                     */
                    int64_t GetTrxId() const;

                    /**
                     * 设置事务Id
                     * @param _trxId 事务Id
                     * 
                     */
                    void SetTrxId(const int64_t& _trxId);

                    /**
                     * 判断参数 TrxId 是否已赋值
                     * @return TrxId 是否已赋值
                     * 
                     */
                    bool TrxIdHasBeenSet() const;

                    /**
                     * 获取clientMac
                     * @return ClientMac clientMac
                     * 
                     */
                    std::string GetClientMac() const;

                    /**
                     * 设置clientMac
                     * @param _clientMac clientMac
                     * 
                     */
                    void SetClientMac(const std::string& _clientMac);

                    /**
                     * 判断参数 ClientMac 是否已赋值
                     * @return ClientMac 是否已赋值
                     * 
                     */
                    bool ClientMacHasBeenSet() const;

                private:

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 风险等级(0-安全,1-低风险,2-中风险,3-高风险,-1-全部)
                     */
                    int64_t m_dangerLevel;
                    bool m_dangerLevelHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 数据库端口
                     */
                    int64_t m_dbPort;
                    bool m_dbPortHasBeenSet;

                    /**
                     * 数据库 IP
                     */
                    std::string m_dbIp;
                    bool m_dbIpHasBeenSet;

                    /**
                     * 资产 ID
                     */
                    int64_t m_assetsId;
                    bool m_assetsIdHasBeenSet;

                    /**
                     * 会话 ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 客户端 IP
                     */
                    std::string m_clientSideIp;
                    bool m_clientSideIpHasBeenSet;

                    /**
                     * 结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 命中规则
                     */
                    int64_t m_hitRule;
                    bool m_hitRuleHasBeenSet;

                    /**
                     * 开始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 模糊查询
                     */
                    std::string m_fuzzySearch;
                    bool m_fuzzySearchHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 客户端
                     */
                    std::string m_clientName;
                    bool m_clientNameHasBeenSet;

                    /**
                     * 流量来源，取值 Agent/Proxy/空；传Agent会返回Agent的日志，传Proxy会返回Proxy日志，两都都传或不传则返回所有
                     */
                    std::vector<std::string> m_sourceTypes;
                    bool m_sourceTypesHasBeenSet;

                    /**
                     * 表名，长度限制64，多个表名查询的话可以用空格连接	
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 字段名，长度限制64，多个字段名查询的话可以用空格连接
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * SQL 主要类型，DDL, DML, DCL, TCL	
                     */
                    std::vector<std::string> m_sqlMainTypes;
                    bool m_sqlMainTypesHasBeenSet;

                    /**
                     * 操作类型	
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * 影响行数最小值	
                     */
                    int64_t m_rowNumMin;
                    bool m_rowNumMinHasBeenSet;

                    /**
                     * 影响行数最大值	
                     */
                    int64_t m_rowNumMax;
                    bool m_rowNumMaxHasBeenSet;

                    /**
                     * 数据库类型	
                     */
                    std::vector<std::string> m_dbTypes;
                    bool m_dbTypesHasBeenSet;

                    /**
                     * 返回码	
                     */
                    int64_t m_retNo;
                    bool m_retNoHasBeenSet;

                    /**
                     * 客户端工具	
                     */
                    std::string m_clientDriverName;
                    bool m_clientDriverNameHasBeenSet;

                    /**
                     * 客户端端口	
                     */
                    int64_t m_clientPort;
                    bool m_clientPortHasBeenSet;

                    /**
                     * 审计日志 ID
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * 风险等级数组(0-安全,1-低风险,2-中风险,3-高风险), 如果要全部，则需要将所有的值都传入。如果为空，则会参考：DangerLevel 入参
                     */
                    std::vector<int64_t> m_dangerLevels;
                    bool m_dangerLevelsHasBeenSet;

                    /**
                     * 字段分类
                     */
                    std::string m_sensitiveCategoryRule;
                    bool m_sensitiveCategoryRuleHasBeenSet;

                    /**
                     * 字段分级
                     */
                    std::string m_sensitiveLevelRisk;
                    bool m_sensitiveLevelRiskHasBeenSet;

                    /**
                     * 事务Id
                     */
                    int64_t m_trxId;
                    bool m_trxIdHasBeenSet;

                    /**
                     * clientMac
                     */
                    std::string m_clientMac;
                    bool m_clientMacHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMEXPORTTASKREQUEST_H_
