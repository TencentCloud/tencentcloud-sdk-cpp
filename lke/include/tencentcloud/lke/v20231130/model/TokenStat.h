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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_TOKENSTAT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_TOKENSTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Procedure.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 当前执行的 token 统计信息
                */
                class TokenStat : public AbstractModel
                {
                public:
                    TokenStat();
                    ~TokenStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionId 会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionId 会话 ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取请求 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestId 请求 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置请求 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestId 请求 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取对应哪条会话, 会话 ID, 用于回答的消息存储使用, 可提前生成, 保存消息时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId 对应哪条会话, 会话 ID, 用于回答的消息存储使用, 可提前生成, 保存消息时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置对应哪条会话, 会话 ID, 用于回答的消息存储使用, 可提前生成, 保存消息时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordId 对应哪条会话, 会话 ID, 用于回答的消息存储使用, 可提前生成, 保存消息时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取token 已使用数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedCount token 已使用数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUsedCount() const;

                    /**
                     * 设置token 已使用数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedCount token 已使用数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedCount(const uint64_t& _usedCount);

                    /**
                     * 判断参数 UsedCount 是否已赋值
                     * @return UsedCount 是否已赋值
                     * 
                     */
                    bool UsedCountHasBeenSet() const;

                    /**
                     * 获取免费 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FreeCount 免费 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFreeCount() const;

                    /**
                     * 设置免费 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _freeCount 免费 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFreeCount(const uint64_t& _freeCount);

                    /**
                     * 判断参数 FreeCount 是否已赋值
                     * @return FreeCount 是否已赋值
                     * 
                     */
                    bool FreeCountHasBeenSet() const;

                    /**
                     * 获取订单总 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderCount 订单总 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOrderCount() const;

                    /**
                     * 设置订单总 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderCount 订单总 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderCount(const uint64_t& _orderCount);

                    /**
                     * 判断参数 OrderCount 是否已赋值
                     * @return OrderCount 是否已赋值
                     * 
                     */
                    bool OrderCountHasBeenSet() const;

                    /**
                     * 获取当前执行状态汇总, 常量: 使用中: processing, 成功: success, 失败: failed
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusSummary 当前执行状态汇总, 常量: 使用中: processing, 成功: success, 失败: failed
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusSummary() const;

                    /**
                     * 设置当前执行状态汇总, 常量: 使用中: processing, 成功: success, 失败: failed
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusSummary 当前执行状态汇总, 常量: 使用中: processing, 成功: success, 失败: failed
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusSummary(const std::string& _statusSummary);

                    /**
                     * 判断参数 StatusSummary 是否已赋值
                     * @return StatusSummary 是否已赋值
                     * 
                     */
                    bool StatusSummaryHasBeenSet() const;

                    /**
                     * 获取当前执行状态汇总后中文展示
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusSummaryTitle 当前执行状态汇总后中文展示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusSummaryTitle() const;

                    /**
                     * 设置当前执行状态汇总后中文展示
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusSummaryTitle 当前执行状态汇总后中文展示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusSummaryTitle(const std::string& _statusSummaryTitle);

                    /**
                     * 判断参数 StatusSummaryTitle 是否已赋值
                     * @return StatusSummaryTitle 是否已赋值
                     * 
                     */
                    bool StatusSummaryTitleHasBeenSet() const;

                    /**
                     * 获取当前请求执行时间, 单位 ms
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Elapsed 当前请求执行时间, 单位 ms
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetElapsed() const;

                    /**
                     * 设置当前请求执行时间, 单位 ms
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _elapsed 当前请求执行时间, 单位 ms
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetElapsed(const uint64_t& _elapsed);

                    /**
                     * 判断参数 Elapsed 是否已赋值
                     * @return Elapsed 是否已赋值
                     * 
                     */
                    bool ElapsedHasBeenSet() const;

                    /**
                     * 获取当前请求消耗 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenCount 当前请求消耗 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTokenCount() const;

                    /**
                     * 设置当前请求消耗 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tokenCount 当前请求消耗 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTokenCount(const uint64_t& _tokenCount);

                    /**
                     * 判断参数 TokenCount 是否已赋值
                     * @return TokenCount 是否已赋值
                     * 
                     */
                    bool TokenCountHasBeenSet() const;

                    /**
                     * 获取执行过程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Procedures 执行过程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Procedure> GetProcedures() const;

                    /**
                     * 设置执行过程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _procedures 执行过程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcedures(const std::vector<Procedure>& _procedures);

                    /**
                     * 判断参数 Procedures 是否已赋值
                     * @return Procedures 是否已赋值
                     * 
                     */
                    bool ProceduresHasBeenSet() const;

                    /**
                     * 获取执行过程信息TraceId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TraceId 执行过程信息TraceId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置执行过程信息TraceId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _traceId 执行过程信息TraceId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                private:

                    /**
                     * 会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 请求 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 对应哪条会话, 会话 ID, 用于回答的消息存储使用, 可提前生成, 保存消息时使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * token 已使用数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_usedCount;
                    bool m_usedCountHasBeenSet;

                    /**
                     * 免费 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_freeCount;
                    bool m_freeCountHasBeenSet;

                    /**
                     * 订单总 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_orderCount;
                    bool m_orderCountHasBeenSet;

                    /**
                     * 当前执行状态汇总, 常量: 使用中: processing, 成功: success, 失败: failed
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusSummary;
                    bool m_statusSummaryHasBeenSet;

                    /**
                     * 当前执行状态汇总后中文展示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusSummaryTitle;
                    bool m_statusSummaryTitleHasBeenSet;

                    /**
                     * 当前请求执行时间, 单位 ms
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_elapsed;
                    bool m_elapsedHasBeenSet;

                    /**
                     * 当前请求消耗 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tokenCount;
                    bool m_tokenCountHasBeenSet;

                    /**
                     * 执行过程信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Procedure> m_procedures;
                    bool m_proceduresHasBeenSet;

                    /**
                     * 执行过程信息TraceId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_TOKENSTAT_H_
