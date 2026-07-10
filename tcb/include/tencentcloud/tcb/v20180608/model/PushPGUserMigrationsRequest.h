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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PUSHPGUSERMIGRATIONSREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PUSHPGUSERMIGRATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/MigrationInput.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * PushPGUserMigrations请求参数结构体
                */
                class PushPGUserMigrationsRequest : public AbstractModel
                {
                public:
                    PushPGUserMigrationsRequest();
                    ~PushPGUserMigrationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>云开发环境ID</p>
                     * @return EnvId <p>云开发环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>云开发环境ID</p>
                     * @param _envId <p>云开发环境ID</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>结构化 SQL migration 列表；每项包含 Query SQL 内容</p>
                     * @return Migrations <p>结构化 SQL migration 列表；每项包含 Query SQL 内容</p>
                     * 
                     */
                    std::vector<MigrationInput> GetMigrations() const;

                    /**
                     * 设置<p>结构化 SQL migration 列表；每项包含 Query SQL 内容</p>
                     * @param _migrations <p>结构化 SQL migration 列表；每项包含 Query SQL 内容</p>
                     * 
                     */
                    void SetMigrations(const std::vector<MigrationInput>& _migrations);

                    /**
                     * 判断参数 Migrations 是否已赋值
                     * @return Migrations 是否已赋值
                     * 
                     */
                    bool MigrationsHasBeenSet() const;

                    /**
                     * 获取<p>等待获取数据库锁的最长时间</p><p>单位：毫秒</p><p>默认值：5000</p>
                     * @return LockTimeoutMs <p>等待获取数据库锁的最长时间</p><p>单位：毫秒</p><p>默认值：5000</p>
                     * 
                     */
                    int64_t GetLockTimeoutMs() const;

                    /**
                     * 设置<p>等待获取数据库锁的最长时间</p><p>单位：毫秒</p><p>默认值：5000</p>
                     * @param _lockTimeoutMs <p>等待获取数据库锁的最长时间</p><p>单位：毫秒</p><p>默认值：5000</p>
                     * 
                     */
                    void SetLockTimeoutMs(const int64_t& _lockTimeoutMs);

                    /**
                     * 判断参数 LockTimeoutMs 是否已赋值
                     * @return LockTimeoutMs 是否已赋值
                     * 
                     */
                    bool LockTimeoutMsHasBeenSet() const;

                    /**
                     * 获取<p>单条 SQL 执行最长时间，超过后由 PostgreSQL 取消该语句</p><p>单位：毫秒</p><p>默认值：300000</p>
                     * @return StatementTimeoutMs <p>单条 SQL 执行最长时间，超过后由 PostgreSQL 取消该语句</p><p>单位：毫秒</p><p>默认值：300000</p>
                     * 
                     */
                    int64_t GetStatementTimeoutMs() const;

                    /**
                     * 设置<p>单条 SQL 执行最长时间，超过后由 PostgreSQL 取消该语句</p><p>单位：毫秒</p><p>默认值：300000</p>
                     * @param _statementTimeoutMs <p>单条 SQL 执行最长时间，超过后由 PostgreSQL 取消该语句</p><p>单位：毫秒</p><p>默认值：300000</p>
                     * 
                     */
                    void SetStatementTimeoutMs(const int64_t& _statementTimeoutMs);

                    /**
                     * 判断参数 StatementTimeoutMs 是否已赋值
                     * @return StatementTimeoutMs 是否已赋值
                     * 
                     */
                    bool StatementTimeoutMsHasBeenSet() const;

                    /**
                     * 获取<p>标记请求来源</p><p>deprecated</p>
                     * @return Source <p>标记请求来源</p><p>deprecated</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>标记请求来源</p><p>deprecated</p>
                     * @param _source <p>标记请求来源</p><p>deprecated</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>为true时允许 out-of-order local migrations</p><p>默认值：false</p>
                     * @return IncludeAll <p>为true时允许 out-of-order local migrations</p><p>默认值：false</p>
                     * 
                     */
                    bool GetIncludeAll() const;

                    /**
                     * 设置<p>为true时允许 out-of-order local migrations</p><p>默认值：false</p>
                     * @param _includeAll <p>为true时允许 out-of-order local migrations</p><p>默认值：false</p>
                     * 
                     */
                    void SetIncludeAll(const bool& _includeAll);

                    /**
                     * 判断参数 IncludeAll 是否已赋值
                     * @return IncludeAll 是否已赋值
                     * 
                     */
                    bool IncludeAllHasBeenSet() const;

                private:

                    /**
                     * <p>云开发环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>结构化 SQL migration 列表；每项包含 Query SQL 内容</p>
                     */
                    std::vector<MigrationInput> m_migrations;
                    bool m_migrationsHasBeenSet;

                    /**
                     * <p>等待获取数据库锁的最长时间</p><p>单位：毫秒</p><p>默认值：5000</p>
                     */
                    int64_t m_lockTimeoutMs;
                    bool m_lockTimeoutMsHasBeenSet;

                    /**
                     * <p>单条 SQL 执行最长时间，超过后由 PostgreSQL 取消该语句</p><p>单位：毫秒</p><p>默认值：300000</p>
                     */
                    int64_t m_statementTimeoutMs;
                    bool m_statementTimeoutMsHasBeenSet;

                    /**
                     * <p>标记请求来源</p><p>deprecated</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>为true时允许 out-of-order local migrations</p><p>默认值：false</p>
                     */
                    bool m_includeAll;
                    bool m_includeAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PUSHPGUSERMIGRATIONSREQUEST_H_
