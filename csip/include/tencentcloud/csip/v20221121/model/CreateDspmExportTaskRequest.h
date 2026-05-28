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
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
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
                     * 获取<p>风险等级(0-安全,1-低风险,2-中风险,3-高风险,-1-全部)</p>
                     * @return DangerLevel <p>风险等级(0-安全,1-低风险,2-中风险,3-高风险,-1-全部)</p>
                     * 
                     */
                    int64_t GetDangerLevel() const;

                    /**
                     * 设置<p>风险等级(0-安全,1-低风险,2-中风险,3-高风险,-1-全部)</p>
                     * @param _dangerLevel <p>风险等级(0-安全,1-低风险,2-中风险,3-高风险,-1-全部)</p>
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
                     * 获取<p>数据库名称</p>
                     * @return DbName <p>数据库名称</p>
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置<p>数据库名称</p>
                     * @param _dbName <p>数据库名称</p>
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
                     * 获取<p>数据库端口</p>
                     * @return DbPort <p>数据库端口</p>
                     * 
                     */
                    int64_t GetDbPort() const;

                    /**
                     * 设置<p>数据库端口</p>
                     * @param _dbPort <p>数据库端口</p>
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
                     * 获取<p>数据库 IP</p>
                     * @return DbIp <p>数据库 IP</p>
                     * 
                     */
                    std::string GetDbIp() const;

                    /**
                     * 设置<p>数据库 IP</p>
                     * @param _dbIp <p>数据库 IP</p>
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
                     * 获取<p>资产 ID</p>
                     * @return AssetsId <p>资产 ID</p>
                     * 
                     */
                    int64_t GetAssetsId() const;

                    /**
                     * 设置<p>资产 ID</p>
                     * @param _assetsId <p>资产 ID</p>
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
                     * 获取<p>会话 ID</p>
                     * @return SessionId <p>会话 ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话 ID</p>
                     * @param _sessionId <p>会话 ID</p>
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
                     * 获取<p>客户端 IP</p>
                     * @return ClientSideIp <p>客户端 IP</p>
                     * 
                     */
                    std::string GetClientSideIp() const;

                    /**
                     * 设置<p>客户端 IP</p>
                     * @param _clientSideIp <p>客户端 IP</p>
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
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
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
                     * 获取<p>命中规则</p>
                     * @return HitRule <p>命中规则</p>
                     * 
                     */
                    int64_t GetHitRule() const;

                    /**
                     * 设置<p>命中规则</p>
                     * @param _hitRule <p>命中规则</p>
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
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
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
                     * 获取<p>模糊查询</p>
                     * @return FuzzySearch <p>模糊查询</p>
                     * 
                     */
                    std::string GetFuzzySearch() const;

                    /**
                     * 设置<p>模糊查询</p>
                     * @param _fuzzySearch <p>模糊查询</p>
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
                     * 获取<p>用户名</p>
                     * @return UserName <p>用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userName <p>用户名</p>
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
                     * 获取<p>客户端</p>
                     * @return ClientName <p>客户端</p>
                     * 
                     */
                    std::string GetClientName() const;

                    /**
                     * 设置<p>客户端</p>
                     * @param _clientName <p>客户端</p>
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
                     * 获取<p>流量来源，取值 Agent/Proxy/空；传Agent会返回Agent的日志，传Proxy会返回Proxy日志，两都传或不传则返回所有</p>
                     * @return SourceTypes <p>流量来源，取值 Agent/Proxy/空；传Agent会返回Agent的日志，传Proxy会返回Proxy日志，两都传或不传则返回所有</p>
                     * 
                     */
                    std::vector<std::string> GetSourceTypes() const;

                    /**
                     * 设置<p>流量来源，取值 Agent/Proxy/空；传Agent会返回Agent的日志，传Proxy会返回Proxy日志，两都传或不传则返回所有</p>
                     * @param _sourceTypes <p>流量来源，取值 Agent/Proxy/空；传Agent会返回Agent的日志，传Proxy会返回Proxy日志，两都传或不传则返回所有</p>
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
                     * 获取<p>表名，长度限制64，多个表名查询的话可以用空格连接</p>
                     * @return TableName <p>表名，长度限制64，多个表名查询的话可以用空格连接</p>
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>表名，长度限制64，多个表名查询的话可以用空格连接</p>
                     * @param _tableName <p>表名，长度限制64，多个表名查询的话可以用空格连接</p>
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
                     * 获取<p>字段名，长度限制64，多个字段名查询的话可以用空格连接</p>
                     * @return FieldName <p>字段名，长度限制64，多个字段名查询的话可以用空格连接</p>
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置<p>字段名，长度限制64，多个字段名查询的话可以用空格连接</p>
                     * @param _fieldName <p>字段名，长度限制64，多个字段名查询的话可以用空格连接</p>
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
                     * 获取<p>SQL 主要类型，DDL, DML, DCL, TCL</p>
                     * @return SqlMainTypes <p>SQL 主要类型，DDL, DML, DCL, TCL</p>
                     * 
                     */
                    std::vector<std::string> GetSqlMainTypes() const;

                    /**
                     * 设置<p>SQL 主要类型，DDL, DML, DCL, TCL</p>
                     * @param _sqlMainTypes <p>SQL 主要类型，DDL, DML, DCL, TCL</p>
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
                     * 获取<p>操作类型</p>
                     * @return SqlType <p>操作类型</p>
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置<p>操作类型</p>
                     * @param _sqlType <p>操作类型</p>
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
                     * 获取<p>影响行数最小值</p>
                     * @return RowNumMin <p>影响行数最小值</p>
                     * 
                     */
                    int64_t GetRowNumMin() const;

                    /**
                     * 设置<p>影响行数最小值</p>
                     * @param _rowNumMin <p>影响行数最小值</p>
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
                     * 获取<p>影响行数最大值</p>
                     * @return RowNumMax <p>影响行数最大值</p>
                     * 
                     */
                    int64_t GetRowNumMax() const;

                    /**
                     * 设置<p>影响行数最大值</p>
                     * @param _rowNumMax <p>影响行数最大值</p>
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
                     * 获取<p>数据库类型</p>
                     * @return DbTypes <p>数据库类型</p>
                     * 
                     */
                    std::vector<std::string> GetDbTypes() const;

                    /**
                     * 设置<p>数据库类型</p>
                     * @param _dbTypes <p>数据库类型</p>
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
                     * 获取<p>返回码</p>
                     * @return RetNo <p>返回码</p>
                     * 
                     */
                    int64_t GetRetNo() const;

                    /**
                     * 设置<p>返回码</p>
                     * @param _retNo <p>返回码</p>
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
                     * 获取<p>客户端工具</p>
                     * @return ClientDriverName <p>客户端工具</p>
                     * 
                     */
                    std::string GetClientDriverName() const;

                    /**
                     * 设置<p>客户端工具</p>
                     * @param _clientDriverName <p>客户端工具</p>
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
                     * 获取<p>客户端端口</p>
                     * @return ClientPort <p>客户端端口</p>
                     * 
                     */
                    int64_t GetClientPort() const;

                    /**
                     * 设置<p>客户端端口</p>
                     * @param _clientPort <p>客户端端口</p>
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
                     * 获取<p>审计日志 ID</p>
                     * @return LogId <p>审计日志 ID</p>
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置<p>审计日志 ID</p>
                     * @param _logId <p>审计日志 ID</p>
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
                     * 获取<p>风险等级数组(0-安全,1-低风险,2-中风险,3-高风险), 如果要全部，则需要将所有的值都传入。如果为空，则会参考：DangerLevel 入参</p>
                     * @return DangerLevels <p>风险等级数组(0-安全,1-低风险,2-中风险,3-高风险), 如果要全部，则需要将所有的值都传入。如果为空，则会参考：DangerLevel 入参</p>
                     * 
                     */
                    std::vector<int64_t> GetDangerLevels() const;

                    /**
                     * 设置<p>风险等级数组(0-安全,1-低风险,2-中风险,3-高风险), 如果要全部，则需要将所有的值都传入。如果为空，则会参考：DangerLevel 入参</p>
                     * @param _dangerLevels <p>风险等级数组(0-安全,1-低风险,2-中风险,3-高风险), 如果要全部，则需要将所有的值都传入。如果为空，则会参考：DangerLevel 入参</p>
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
                     * 获取<p>字段分类</p>
                     * @return SensitiveCategoryRule <p>字段分类</p>
                     * 
                     */
                    std::string GetSensitiveCategoryRule() const;

                    /**
                     * 设置<p>字段分类</p>
                     * @param _sensitiveCategoryRule <p>字段分类</p>
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
                     * 获取<p>字段分级</p>
                     * @return SensitiveLevelRisk <p>字段分级</p>
                     * 
                     */
                    std::string GetSensitiveLevelRisk() const;

                    /**
                     * 设置<p>字段分级</p>
                     * @param _sensitiveLevelRisk <p>字段分级</p>
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
                     * 获取<p>事务Id</p>
                     * @return TrxId <p>事务Id</p>
                     * 
                     */
                    int64_t GetTrxId() const;

                    /**
                     * 设置<p>事务Id</p>
                     * @param _trxId <p>事务Id</p>
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
                     * 获取<p>clientMac</p>
                     * @return ClientMac <p>clientMac</p>
                     * 
                     */
                    std::string GetClientMac() const;

                    /**
                     * 设置<p>clientMac</p>
                     * @param _clientMac <p>clientMac</p>
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
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>风险等级(0-安全,1-低风险,2-中风险,3-高风险,-1-全部)</p>
                     */
                    int64_t m_dangerLevel;
                    bool m_dangerLevelHasBeenSet;

                    /**
                     * <p>数据库名称</p>
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>数据库端口</p>
                     */
                    int64_t m_dbPort;
                    bool m_dbPortHasBeenSet;

                    /**
                     * <p>数据库 IP</p>
                     */
                    std::string m_dbIp;
                    bool m_dbIpHasBeenSet;

                    /**
                     * <p>资产 ID</p>
                     */
                    int64_t m_assetsId;
                    bool m_assetsIdHasBeenSet;

                    /**
                     * <p>会话 ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>客户端 IP</p>
                     */
                    std::string m_clientSideIp;
                    bool m_clientSideIpHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>命中规则</p>
                     */
                    int64_t m_hitRule;
                    bool m_hitRuleHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>模糊查询</p>
                     */
                    std::string m_fuzzySearch;
                    bool m_fuzzySearchHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>客户端</p>
                     */
                    std::string m_clientName;
                    bool m_clientNameHasBeenSet;

                    /**
                     * <p>流量来源，取值 Agent/Proxy/空；传Agent会返回Agent的日志，传Proxy会返回Proxy日志，两都传或不传则返回所有</p>
                     */
                    std::vector<std::string> m_sourceTypes;
                    bool m_sourceTypesHasBeenSet;

                    /**
                     * <p>表名，长度限制64，多个表名查询的话可以用空格连接</p>
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>字段名，长度限制64，多个字段名查询的话可以用空格连接</p>
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * <p>SQL 主要类型，DDL, DML, DCL, TCL</p>
                     */
                    std::vector<std::string> m_sqlMainTypes;
                    bool m_sqlMainTypesHasBeenSet;

                    /**
                     * <p>操作类型</p>
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * <p>影响行数最小值</p>
                     */
                    int64_t m_rowNumMin;
                    bool m_rowNumMinHasBeenSet;

                    /**
                     * <p>影响行数最大值</p>
                     */
                    int64_t m_rowNumMax;
                    bool m_rowNumMaxHasBeenSet;

                    /**
                     * <p>数据库类型</p>
                     */
                    std::vector<std::string> m_dbTypes;
                    bool m_dbTypesHasBeenSet;

                    /**
                     * <p>返回码</p>
                     */
                    int64_t m_retNo;
                    bool m_retNoHasBeenSet;

                    /**
                     * <p>客户端工具</p>
                     */
                    std::string m_clientDriverName;
                    bool m_clientDriverNameHasBeenSet;

                    /**
                     * <p>客户端端口</p>
                     */
                    int64_t m_clientPort;
                    bool m_clientPortHasBeenSet;

                    /**
                     * <p>审计日志 ID</p>
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * <p>风险等级数组(0-安全,1-低风险,2-中风险,3-高风险), 如果要全部，则需要将所有的值都传入。如果为空，则会参考：DangerLevel 入参</p>
                     */
                    std::vector<int64_t> m_dangerLevels;
                    bool m_dangerLevelsHasBeenSet;

                    /**
                     * <p>字段分类</p>
                     */
                    std::string m_sensitiveCategoryRule;
                    bool m_sensitiveCategoryRuleHasBeenSet;

                    /**
                     * <p>字段分级</p>
                     */
                    std::string m_sensitiveLevelRisk;
                    bool m_sensitiveLevelRiskHasBeenSet;

                    /**
                     * <p>事务Id</p>
                     */
                    int64_t m_trxId;
                    bool m_trxIdHasBeenSet;

                    /**
                     * <p>clientMac</p>
                     */
                    std::string m_clientMac;
                    bool m_clientMacHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMEXPORTTASKREQUEST_H_
