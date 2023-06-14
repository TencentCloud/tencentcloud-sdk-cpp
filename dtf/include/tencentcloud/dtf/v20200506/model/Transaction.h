/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DTF_V20200506_MODEL_TRANSACTION_H_
#define TENCENTCLOUD_DTF_V20200506_MODEL_TRANSACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dtf
    {
        namespace V20200506
        {
            namespace Model
            {
                /**
                * 主事务
                */
                class Transaction : public AbstractModel
                {
                public:
                    Transaction();
                    ~Transaction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主事务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransactionId 主事务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTransactionId() const;

                    /**
                     * 设置主事务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transactionId 主事务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransactionId(const int64_t& _transactionId);

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                    /**
                     * 获取主事务开始时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransactionBegin 主事务开始时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTransactionBegin() const;

                    /**
                     * 设置主事务开始时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transactionBegin 主事务开始时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransactionBegin(const int64_t& _transactionBegin);

                    /**
                     * 判断参数 TransactionBegin 是否已赋值
                     * @return TransactionBegin 是否已赋值
                     * 
                     */
                    bool TransactionBeginHasBeenSet() const;

                    /**
                     * 获取主事务结束时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransactionEnd 主事务结束时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTransactionEnd() const;

                    /**
                     * 设置主事务结束时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transactionEnd 主事务结束时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransactionEnd(const int64_t& _transactionEnd);

                    /**
                     * 判断参数 TransactionEnd 是否已赋值
                     * @return TransactionEnd 是否已赋值
                     * 
                     */
                    bool TransactionEndHasBeenSet() const;

                    /**
                     * 获取主事务提交时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransactionCommit 主事务提交时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTransactionCommit() const;

                    /**
                     * 设置主事务提交时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transactionCommit 主事务提交时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransactionCommit(const int64_t& _transactionCommit);

                    /**
                     * 判断参数 TransactionCommit 是否已赋值
                     * @return TransactionCommit 是否已赋值
                     * 
                     */
                    bool TransactionCommitHasBeenSet() const;

                    /**
                     * 获取主事务回滚时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransactionRollback 主事务回滚时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTransactionRollback() const;

                    /**
                     * 设置主事务回滚时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transactionRollback 主事务回滚时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransactionRollback(const int64_t& _transactionRollback);

                    /**
                     * 判断参数 TransactionRollback 是否已赋值
                     * @return TransactionRollback 是否已赋值
                     * 
                     */
                    bool TransactionRollbackHasBeenSet() const;

                    /**
                     * 获取主事务异常停止时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransactionError 主事务异常停止时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTransactionError() const;

                    /**
                     * 设置主事务异常停止时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transactionError 主事务异常停止时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransactionError(const int64_t& _transactionError);

                    /**
                     * 判断参数 TransactionError 是否已赋值
                     * @return TransactionError 是否已赋值
                     * 
                     */
                    bool TransactionErrorHasBeenSet() const;

                    /**
                     * 获取主事务超时时长，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timeout 主事务超时时长，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置主事务超时时长，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeout 主事务超时时长，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取主事务状态：0:Trying, 1:Confirming, 2: Confirmed, 3:Canceling, 4: Canceled
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 主事务状态：0:Trying, 1:Confirming, 2: Confirmed, 3:Canceling, 4: Canceled
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置主事务状态：0:Trying, 1:Confirming, 2: Confirmed, 3:Canceling, 4: Canceled
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 主事务状态：0:Trying, 1:Confirming, 2: Confirmed, 3:Canceling, 4: Canceled
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取主事务结束标识：0:运行中, 1: 已结束
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndFlag 主事务结束标识：0:运行中, 1: 已结束
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEndFlag() const;

                    /**
                     * 设置主事务结束标识：0:运行中, 1: 已结束
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endFlag 主事务结束标识：0:运行中, 1: 已结束
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndFlag(const int64_t& _endFlag);

                    /**
                     * 判断参数 EndFlag 是否已赋值
                     * @return EndFlag 是否已赋值
                     * 
                     */
                    bool EndFlagHasBeenSet() const;

                    /**
                     * 获取主事务超时标识：0:运行中, 1: 已超时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeoutFlag 主事务超时标识：0:运行中, 1: 已超时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeoutFlag() const;

                    /**
                     * 设置主事务超时标识：0:运行中, 1: 已超时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeoutFlag 主事务超时标识：0:运行中, 1: 已超时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeoutFlag(const int64_t& _timeoutFlag);

                    /**
                     * 判断参数 TimeoutFlag 是否已赋值
                     * @return TimeoutFlag 是否已赋值
                     * 
                     */
                    bool TimeoutFlagHasBeenSet() const;

                    /**
                     * 获取异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取事务分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 事务分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置事务分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId 事务分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取主事务来源服务标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Server 主事务来源服务标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置主事务来源服务标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _server 主事务来源服务标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     * 
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取分支事务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BranchQuantity 分支事务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBranchQuantity() const;

                    /**
                     * 设置分支事务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _branchQuantity 分支事务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBranchQuantity(const int64_t& _branchQuantity);

                    /**
                     * 判断参数 BranchQuantity 是否已赋值
                     * @return BranchQuantity 是否已赋值
                     * 
                     */
                    bool BranchQuantityHasBeenSet() const;

                    /**
                     * 获取重试标识：true：可以重试；false：不可重试
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryFlag 重试标识：true：可以重试；false：不可重试
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRetryFlag() const;

                    /**
                     * 设置重试标识：true：可以重试；false：不可重试
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryFlag 重试标识：true：可以重试；false：不可重试
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryFlag(const bool& _retryFlag);

                    /**
                     * 判断参数 RetryFlag 是否已赋值
                     * @return RetryFlag 是否已赋值
                     * 
                     */
                    bool RetryFlagHasBeenSet() const;

                private:

                    /**
                     * 主事务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * 主事务开始时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_transactionBegin;
                    bool m_transactionBeginHasBeenSet;

                    /**
                     * 主事务结束时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_transactionEnd;
                    bool m_transactionEndHasBeenSet;

                    /**
                     * 主事务提交时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_transactionCommit;
                    bool m_transactionCommitHasBeenSet;

                    /**
                     * 主事务回滚时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_transactionRollback;
                    bool m_transactionRollbackHasBeenSet;

                    /**
                     * 主事务异常停止时间戳，UTC，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_transactionError;
                    bool m_transactionErrorHasBeenSet;

                    /**
                     * 主事务超时时长，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 主事务状态：0:Trying, 1:Confirming, 2: Confirmed, 3:Canceling, 4: Canceled
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 主事务结束标识：0:运行中, 1: 已结束
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_endFlag;
                    bool m_endFlagHasBeenSet;

                    /**
                     * 主事务超时标识：0:运行中, 1: 已超时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeoutFlag;
                    bool m_timeoutFlagHasBeenSet;

                    /**
                     * 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 事务分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 主事务来源服务标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 分支事务数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_branchQuantity;
                    bool m_branchQuantityHasBeenSet;

                    /**
                     * 重试标识：true：可以重试；false：不可重试
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_retryFlag;
                    bool m_retryFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTF_V20200506_MODEL_TRANSACTION_H_
