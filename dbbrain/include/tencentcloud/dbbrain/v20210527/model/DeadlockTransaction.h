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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DEADLOCKTRANSACTION_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DEADLOCKTRANSACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/DeadlockSession.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 参与死锁的单个事务。
                */
                class DeadlockTransaction : public AbstractModel
                {
                public:
                    DeadlockTransaction();
                    ~DeadlockTransaction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>事务最终状态。Rollback（被回滚，对应 IsVictim=true）/ Normal（正常，对应 IsVictim=false）/ Unknown（无 victim 信息）。</p>
                     * @return Status <p>事务最终状态。Rollback（被回滚，对应 IsVictim=true）/ Normal（正常，对应 IsVictim=false）/ Unknown（无 victim 信息）。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>事务最终状态。Rollback（被回滚，对应 IsVictim=true）/ Normal（正常，对应 IsVictim=false）/ Unknown（无 victim 信息）。</p>
                     * @param _status <p>事务最终状态。Rollback（被回滚，对应 IsVictim=true）/ Normal（正常，对应 IsVictim=false）/ Unknown（无 victim 信息）。</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>SQL Server 引擎内的事务 ID。同实例短期内唯一。与 Auxiliary 记录里的 transaction_id 对齐。</p>
                     * @return TransactionId <p>SQL Server 引擎内的事务 ID。同实例短期内唯一。与 Auxiliary 记录里的 transaction_id 对齐。</p>
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置<p>SQL Server 引擎内的事务 ID。同实例短期内唯一。与 Auxiliary 记录里的 transaction_id 对齐。</p>
                     * @param _transactionId <p>SQL Server 引擎内的事务 ID。同实例短期内唯一。与 Auxiliary 记录里的 transaction_id 对齐。</p>
                     * 
                     */
                    void SetTransactionId(const std::string& _transactionId);

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                    /**
                     * 获取<p>本事务是否为牺牲事务。true 表示 SQL Server 已回滚该事务；false 表示正常提交；null 表示 XML 缺 VictimProcessIds 无法判定。</p>
                     * @return IsVictim <p>本事务是否为牺牲事务。true 表示 SQL Server 已回滚该事务；false 表示正常提交；null 表示 XML 缺 VictimProcessIds 无法判定。</p>
                     * 
                     */
                    bool GetIsVictim() const;

                    /**
                     * 设置<p>本事务是否为牺牲事务。true 表示 SQL Server 已回滚该事务；false 表示正常提交；null 表示 XML 缺 VictimProcessIds 无法判定。</p>
                     * @param _isVictim <p>本事务是否为牺牲事务。true 表示 SQL Server 已回滚该事务；false 表示正常提交；null 表示 XML 缺 VictimProcessIds 无法判定。</p>
                     * 
                     */
                    void SetIsVictim(const bool& _isVictim);

                    /**
                     * 判断参数 IsVictim 是否已赋值
                     * @return IsVictim 是否已赋值
                     * 
                     */
                    bool IsVictimHasBeenSet() const;

                    /**
                     * 获取<p>该事务下的进程/会话列表。并行计划下同一事务可能包含多个 worker（SessionId 相同 ExecutionContextId 不同）。</p>
                     * @return Sessions <p>该事务下的进程/会话列表。并行计划下同一事务可能包含多个 worker（SessionId 相同 ExecutionContextId 不同）。</p>
                     * 
                     */
                    std::vector<DeadlockSession> GetSessions() const;

                    /**
                     * 设置<p>该事务下的进程/会话列表。并行计划下同一事务可能包含多个 worker（SessionId 相同 ExecutionContextId 不同）。</p>
                     * @param _sessions <p>该事务下的进程/会话列表。并行计划下同一事务可能包含多个 worker（SessionId 相同 ExecutionContextId 不同）。</p>
                     * 
                     */
                    void SetSessions(const std::vector<DeadlockSession>& _sessions);

                    /**
                     * 判断参数 Sessions 是否已赋值
                     * @return Sessions 是否已赋值
                     * 
                     */
                    bool SessionsHasBeenSet() const;

                private:

                    /**
                     * <p>事务最终状态。Rollback（被回滚，对应 IsVictim=true）/ Normal（正常，对应 IsVictim=false）/ Unknown（无 victim 信息）。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>SQL Server 引擎内的事务 ID。同实例短期内唯一。与 Auxiliary 记录里的 transaction_id 对齐。</p>
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * <p>本事务是否为牺牲事务。true 表示 SQL Server 已回滚该事务；false 表示正常提交；null 表示 XML 缺 VictimProcessIds 无法判定。</p>
                     */
                    bool m_isVictim;
                    bool m_isVictimHasBeenSet;

                    /**
                     * <p>该事务下的进程/会话列表。并行计划下同一事务可能包含多个 worker（SessionId 相同 ExecutionContextId 不同）。</p>
                     */
                    std::vector<DeadlockSession> m_sessions;
                    bool m_sessionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DEADLOCKTRANSACTION_H_
