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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITLOGQUERYFILTER_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITLOGQUERYFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 审计日志查询过滤条件集合。所有字段均可选。注意：MultiSql 、 ExcludeMultiSql 以 JSON 字符串承载二维数组（云 API 平台不支持二维数组），示例：[[a,b]] 表示 (a OR b)。
                */
                class AuditLogQueryFilter : public AbstractModel
                {
                public:
                    AuditLogQueryFilter();
                    ~AuditLogQueryFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>SQL 类型列表，取值如 SELECT、INSERT、UPDATE、DELETE 等。</p>
                     * @return SqlType <p>SQL 类型列表，取值如 SELECT、INSERT、UPDATE、DELETE 等。</p>
                     * 
                     */
                    std::vector<std::string> GetSqlType() const;

                    /**
                     * 设置<p>SQL 类型列表，取值如 SELECT、INSERT、UPDATE、DELETE 等。</p>
                     * @param _sqlType <p>SQL 类型列表，取值如 SELECT、INSERT、UPDATE、DELETE 等。</p>
                     * 
                     */
                    void SetSqlType(const std::vector<std::string>& _sqlType);

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     * 
                     */
                    bool SqlTypeHasBeenSet() const;

                    /**
                     * 获取<p>执行耗时范围（毫秒），长度为 2 的数组：[最小值, 最大值]。</p>
                     * @return ExecTime <p>执行耗时范围（毫秒），长度为 2 的数组：[最小值, 最大值]。</p>
                     * 
                     */
                    std::vector<int64_t> GetExecTime() const;

                    /**
                     * 设置<p>执行耗时范围（毫秒），长度为 2 的数组：[最小值, 最大值]。</p>
                     * @param _execTime <p>执行耗时范围（毫秒），长度为 2 的数组：[最小值, 最大值]。</p>
                     * 
                     */
                    void SetExecTime(const std::vector<int64_t>& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取<p>IO 等待耗时范围（毫秒），长度为 2 的数组。</p>
                     * @return IoWaitTime <p>IO 等待耗时范围（毫秒），长度为 2 的数组。</p>
                     * 
                     */
                    std::vector<int64_t> GetIoWaitTime() const;

                    /**
                     * 设置<p>IO 等待耗时范围（毫秒），长度为 2 的数组。</p>
                     * @param _ioWaitTime <p>IO 等待耗时范围（毫秒），长度为 2 的数组。</p>
                     * 
                     */
                    void SetIoWaitTime(const std::vector<int64_t>& _ioWaitTime);

                    /**
                     * 判断参数 IoWaitTime 是否已赋值
                     * @return IoWaitTime 是否已赋值
                     * 
                     */
                    bool IoWaitTimeHasBeenSet() const;

                    /**
                     * 获取<p>CPU 耗时范围（毫秒），长度为 2 的数组。</p>
                     * @return CpuTime <p>CPU 耗时范围（毫秒），长度为 2 的数组。</p>
                     * 
                     */
                    std::vector<int64_t> GetCpuTime() const;

                    /**
                     * 设置<p>CPU 耗时范围（毫秒），长度为 2 的数组。</p>
                     * @param _cpuTime <p>CPU 耗时范围（毫秒），长度为 2 的数组。</p>
                     * 
                     */
                    void SetCpuTime(const std::vector<int64_t>& _cpuTime);

                    /**
                     * 判断参数 CpuTime 是否已赋值
                     * @return CpuTime 是否已赋值
                     * 
                     */
                    bool CpuTimeHasBeenSet() const;

                    /**
                     * 获取<p>锁等待耗时范围（毫秒），长度为 2 的数组。</p>
                     * @return LockWaitTime <p>锁等待耗时范围（毫秒），长度为 2 的数组。</p>
                     * 
                     */
                    std::vector<int64_t> GetLockWaitTime() const;

                    /**
                     * 设置<p>锁等待耗时范围（毫秒），长度为 2 的数组。</p>
                     * @param _lockWaitTime <p>锁等待耗时范围（毫秒），长度为 2 的数组。</p>
                     * 
                     */
                    void SetLockWaitTime(const std::vector<int64_t>& _lockWaitTime);

                    /**
                     * 判断参数 LockWaitTime 是否已赋值
                     * @return LockWaitTime 是否已赋值
                     * 
                     */
                    bool LockWaitTimeHasBeenSet() const;

                    /**
                     * 获取<p>SQL 执行错误码，例如 0 表示成功。</p>
                     * @return ErrCode <p>SQL 执行错误码，例如 0 表示成功。</p>
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置<p>SQL 执行错误码，例如 0 表示成功。</p>
                     * @param _errCode <p>SQL 执行错误码，例如 0 表示成功。</p>
                     * 
                     */
                    void SetErrCode(const std::string& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取<p>错误信息。</p>
                     * @return ErrInfo <p>错误信息。</p>
                     * 
                     */
                    std::string GetErrInfo() const;

                    /**
                     * 设置<p>错误信息。</p>
                     * @param _errInfo <p>错误信息。</p>
                     * 
                     */
                    void SetErrInfo(const std::string& _errInfo);

                    /**
                     * 判断参数 ErrInfo 是否已赋值
                     * @return ErrInfo 是否已赋值
                     * 
                     */
                    bool ErrInfoHasBeenSet() const;

                    /**
                     * 获取<p>数据库名列表。</p>
                     * @return DBName <p>数据库名列表。</p>
                     * 
                     */
                    std::vector<std::string> GetDBName() const;

                    /**
                     * 设置<p>数据库名列表。</p>
                     * @param _dBName <p>数据库名列表。</p>
                     * 
                     */
                    void SetDBName(const std::vector<std::string>& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取<p>用户名列表。</p>
                     * @return User <p>用户名列表。</p>
                     * 
                     */
                    std::vector<std::string> GetUser() const;

                    /**
                     * 设置<p>用户名列表。</p>
                     * @param _user <p>用户名列表。</p>
                     * 
                     */
                    void SetUser(const std::vector<std::string>& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取<p>来源 IP 列表。</p>
                     * @return Host <p>来源 IP 列表。</p>
                     * 
                     */
                    std::vector<std::string> GetHost() const;

                    /**
                     * 设置<p>来源 IP 列表。</p>
                     * @param _host <p>来源 IP 列表。</p>
                     * 
                     */
                    void SetHost(const std::vector<std::string>& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>线程 ID 列表。</p>
                     * @return ThreadId <p>线程 ID 列表。</p>
                     * 
                     */
                    std::vector<std::string> GetThreadId() const;

                    /**
                     * 设置<p>线程 ID 列表。</p>
                     * @param _threadId <p>线程 ID 列表。</p>
                     * 
                     */
                    void SetThreadId(const std::vector<std::string>& _threadId);

                    /**
                     * 判断参数 ThreadId 是否已赋值
                     * @return ThreadId 是否已赋值
                     * 
                     */
                    bool ThreadIdHasBeenSet() const;

                    /**
                     * 获取<p>代理节点 Host 列表。</p>
                     * @return ProxyHostList <p>代理节点 Host 列表。</p>
                     * 
                     */
                    std::vector<std::string> GetProxyHostList() const;

                    /**
                     * 设置<p>代理节点 Host 列表。</p>
                     * @param _proxyHostList <p>代理节点 Host 列表。</p>
                     * 
                     */
                    void SetProxyHostList(const std::vector<std::string>& _proxyHostList);

                    /**
                     * 判断参数 ProxyHostList 是否已赋值
                     * @return ProxyHostList 是否已赋值
                     * 
                     */
                    bool ProxyHostListHasBeenSet() const;

                    /**
                     * 获取<p>后端 Set Host 列表。</p>
                     * @return SetHostList <p>后端 Set Host 列表。</p>
                     * 
                     */
                    std::vector<std::string> GetSetHostList() const;

                    /**
                     * 设置<p>后端 Set Host 列表。</p>
                     * @param _setHostList <p>后端 Set Host 列表。</p>
                     * 
                     */
                    void SetSetHostList(const std::vector<std::string>& _setHostList);

                    /**
                     * 判断参数 SetHostList 是否已赋值
                     * @return SetHostList 是否已赋值
                     * 
                     */
                    bool SetHostListHasBeenSet() const;

                    /**
                     * 获取<p>后端 Set ID 列表。</p>
                     * @return SetIdList <p>后端 Set ID 列表。</p>
                     * 
                     */
                    std::vector<std::string> GetSetIdList() const;

                    /**
                     * 设置<p>后端 Set ID 列表。</p>
                     * @param _setIdList <p>后端 Set ID 列表。</p>
                     * 
                     */
                    void SetSetIdList(const std::vector<std::string>& _setIdList);

                    /**
                     * 判断参数 SetIdList 是否已赋值
                     * @return SetIdList 是否已赋值
                     * 
                     */
                    bool SetIdListHasBeenSet() const;

                    /**
                     * 获取<p>多 SQL 关键词条件，JSON 字符串，内部为二维数组：第一级为 AND，第二级为 OR。注意云 API 平台不支持二维数组，此处用字符串承载，服务端自动解析。</p>
                     * @return MultiSql <p>多 SQL 关键词条件，JSON 字符串，内部为二维数组：第一级为 AND，第二级为 OR。注意云 API 平台不支持二维数组，此处用字符串承载，服务端自动解析。</p>
                     * 
                     */
                    std::string GetMultiSql() const;

                    /**
                     * 设置<p>多 SQL 关键词条件，JSON 字符串，内部为二维数组：第一级为 AND，第二级为 OR。注意云 API 平台不支持二维数组，此处用字符串承载，服务端自动解析。</p>
                     * @param _multiSql <p>多 SQL 关键词条件，JSON 字符串，内部为二维数组：第一级为 AND，第二级为 OR。注意云 API 平台不支持二维数组，此处用字符串承载，服务端自动解析。</p>
                     * 
                     */
                    void SetMultiSql(const std::string& _multiSql);

                    /**
                     * 判断参数 MultiSql 是否已赋值
                     * @return MultiSql 是否已赋值
                     * 
                     */
                    bool MultiSqlHasBeenSet() const;

                    /**
                     * 获取<p>排除的多 SQL 关键词条件，JSON 字符串，结构同 MultiSql。</p>
                     * @return ExcludeMultiSql <p>排除的多 SQL 关键词条件，JSON 字符串，结构同 MultiSql。</p>
                     * 
                     */
                    std::string GetExcludeMultiSql() const;

                    /**
                     * 设置<p>排除的多 SQL 关键词条件，JSON 字符串，结构同 MultiSql。</p>
                     * @param _excludeMultiSql <p>排除的多 SQL 关键词条件，JSON 字符串，结构同 MultiSql。</p>
                     * 
                     */
                    void SetExcludeMultiSql(const std::string& _excludeMultiSql);

                    /**
                     * 判断参数 ExcludeMultiSql 是否已赋值
                     * @return ExcludeMultiSql 是否已赋值
                     * 
                     */
                    bool ExcludeMultiSqlHasBeenSet() const;

                    /**
                     * 获取<p>SQL 模板 ID。</p>
                     * @return SqlTemplateId <p>SQL 模板 ID。</p>
                     * 
                     */
                    std::string GetSqlTemplateId() const;

                    /**
                     * 设置<p>SQL 模板 ID。</p>
                     * @param _sqlTemplateId <p>SQL 模板 ID。</p>
                     * 
                     */
                    void SetSqlTemplateId(const std::string& _sqlTemplateId);

                    /**
                     * 判断参数 SqlTemplateId 是否已赋值
                     * @return SqlTemplateId 是否已赋值
                     * 
                     */
                    bool SqlTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>SQL 开始时间，示例：2026-10-10 11:05:06.002211</p><p>参数格式：YYYY-MM-DD hh:mm:ss.SSSSSS</p>
                     * @return SqlStartTime <p>SQL 开始时间，示例：2026-10-10 11:05:06.002211</p><p>参数格式：YYYY-MM-DD hh:mm:ss.SSSSSS</p>
                     * 
                     */
                    std::string GetSqlStartTime() const;

                    /**
                     * 设置<p>SQL 开始时间，示例：2026-10-10 11:05:06.002211</p><p>参数格式：YYYY-MM-DD hh:mm:ss.SSSSSS</p>
                     * @param _sqlStartTime <p>SQL 开始时间，示例：2026-10-10 11:05:06.002211</p><p>参数格式：YYYY-MM-DD hh:mm:ss.SSSSSS</p>
                     * 
                     */
                    void SetSqlStartTime(const std::string& _sqlStartTime);

                    /**
                     * 判断参数 SqlStartTime 是否已赋值
                     * @return SqlStartTime 是否已赋值
                     * 
                     */
                    bool SqlStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>查询 ID，关联查询时使用（LogType=All 时必填）。</p>
                     * @return QueryId <p>查询 ID，关联查询时使用（LogType=All 时必填）。</p>
                     * 
                     */
                    std::string GetQueryId() const;

                    /**
                     * 设置<p>查询 ID，关联查询时使用（LogType=All 时必填）。</p>
                     * @param _queryId <p>查询 ID，关联查询时使用（LogType=All 时必填）。</p>
                     * 
                     */
                    void SetQueryId(const std::string& _queryId);

                    /**
                     * 判断参数 QueryId 是否已赋值
                     * @return QueryId 是否已赋值
                     * 
                     */
                    bool QueryIdHasBeenSet() const;

                private:

                    /**
                     * <p>SQL 类型列表，取值如 SELECT、INSERT、UPDATE、DELETE 等。</p>
                     */
                    std::vector<std::string> m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * <p>执行耗时范围（毫秒），长度为 2 的数组：[最小值, 最大值]。</p>
                     */
                    std::vector<int64_t> m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * <p>IO 等待耗时范围（毫秒），长度为 2 的数组。</p>
                     */
                    std::vector<int64_t> m_ioWaitTime;
                    bool m_ioWaitTimeHasBeenSet;

                    /**
                     * <p>CPU 耗时范围（毫秒），长度为 2 的数组。</p>
                     */
                    std::vector<int64_t> m_cpuTime;
                    bool m_cpuTimeHasBeenSet;

                    /**
                     * <p>锁等待耗时范围（毫秒），长度为 2 的数组。</p>
                     */
                    std::vector<int64_t> m_lockWaitTime;
                    bool m_lockWaitTimeHasBeenSet;

                    /**
                     * <p>SQL 执行错误码，例如 0 表示成功。</p>
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>错误信息。</p>
                     */
                    std::string m_errInfo;
                    bool m_errInfoHasBeenSet;

                    /**
                     * <p>数据库名列表。</p>
                     */
                    std::vector<std::string> m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * <p>用户名列表。</p>
                     */
                    std::vector<std::string> m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>来源 IP 列表。</p>
                     */
                    std::vector<std::string> m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>线程 ID 列表。</p>
                     */
                    std::vector<std::string> m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * <p>代理节点 Host 列表。</p>
                     */
                    std::vector<std::string> m_proxyHostList;
                    bool m_proxyHostListHasBeenSet;

                    /**
                     * <p>后端 Set Host 列表。</p>
                     */
                    std::vector<std::string> m_setHostList;
                    bool m_setHostListHasBeenSet;

                    /**
                     * <p>后端 Set ID 列表。</p>
                     */
                    std::vector<std::string> m_setIdList;
                    bool m_setIdListHasBeenSet;

                    /**
                     * <p>多 SQL 关键词条件，JSON 字符串，内部为二维数组：第一级为 AND，第二级为 OR。注意云 API 平台不支持二维数组，此处用字符串承载，服务端自动解析。</p>
                     */
                    std::string m_multiSql;
                    bool m_multiSqlHasBeenSet;

                    /**
                     * <p>排除的多 SQL 关键词条件，JSON 字符串，结构同 MultiSql。</p>
                     */
                    std::string m_excludeMultiSql;
                    bool m_excludeMultiSqlHasBeenSet;

                    /**
                     * <p>SQL 模板 ID。</p>
                     */
                    std::string m_sqlTemplateId;
                    bool m_sqlTemplateIdHasBeenSet;

                    /**
                     * <p>SQL 开始时间，示例：2026-10-10 11:05:06.002211</p><p>参数格式：YYYY-MM-DD hh:mm:ss.SSSSSS</p>
                     */
                    std::string m_sqlStartTime;
                    bool m_sqlStartTimeHasBeenSet;

                    /**
                     * <p>查询 ID，关联查询时使用（LogType=All 时必填）。</p>
                     */
                    std::string m_queryId;
                    bool m_queryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITLOGQUERYFILTER_H_
