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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRECORDSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRECORDSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConversationRecordTimeUsage.h>
#include <tencentcloud/adp/v20260520/model/ConversationRecordTokenUsage.h>
#include <tencentcloud/adp/v20260520/model/ConversationRecordErrorInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 单次对话记录统计信息
                */
                class ConversationRecordSummary : public AbstractModel
                {
                public:
                    ConversationRecordSummary();
                    ~ConversationRecordSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>回复记录 ID，对应 messages 中回复消息的 record_id</p>
                     * @return RecordId <p>回复记录 ID，对应 messages 中回复消息的 record_id</p>
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>回复记录 ID，对应 messages 中回复消息的 record_id</p>
                     * @param _recordId <p>回复记录 ID，对应 messages 中回复消息的 record_id</p>
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
                     * 获取<p>用户提问记录 ID，对应 messages 中用户消息的 record_id</p>
                     * @return RelatedRecordId <p>用户提问记录 ID，对应 messages 中用户消息的 record_id</p>
                     * 
                     */
                    std::string GetRelatedRecordId() const;

                    /**
                     * 设置<p>用户提问记录 ID，对应 messages 中用户消息的 record_id</p>
                     * @param _relatedRecordId <p>用户提问记录 ID，对应 messages 中用户消息的 record_id</p>
                     * 
                     */
                    void SetRelatedRecordId(const std::string& _relatedRecordId);

                    /**
                     * 判断参数 RelatedRecordId 是否已赋值
                     * @return RelatedRecordId 是否已赋值
                     * 
                     */
                    bool RelatedRecordIdHasBeenSet() const;

                    /**
                     * 获取<p>单次对话耗时信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeUsage <p>单次对话耗时信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConversationRecordTimeUsage GetTimeUsage() const;

                    /**
                     * 设置<p>单次对话耗时信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeUsage <p>单次对话耗时信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeUsage(const ConversationRecordTimeUsage& _timeUsage);

                    /**
                     * 判断参数 TimeUsage 是否已赋值
                     * @return TimeUsage 是否已赋值
                     * 
                     */
                    bool TimeUsageHasBeenSet() const;

                    /**
                     * 获取<p>单次对话 token 消耗信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenUsage <p>单次对话 token 消耗信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConversationRecordTokenUsage GetTokenUsage() const;

                    /**
                     * 设置<p>单次对话 token 消耗信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tokenUsage <p>单次对话 token 消耗信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTokenUsage(const ConversationRecordTokenUsage& _tokenUsage);

                    /**
                     * 判断参数 TokenUsage 是否已赋值
                     * @return TokenUsage 是否已赋值
                     * 
                     */
                    bool TokenUsageHasBeenSet() const;

                    /**
                     * 获取<p>单次对话失败信息；成功时为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorInfo <p>单次对话失败信息；成功时为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConversationRecordErrorInfo GetErrorInfo() const;

                    /**
                     * 设置<p>单次对话失败信息；成功时为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorInfo <p>单次对话失败信息；成功时为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorInfo(const ConversationRecordErrorInfo& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取<p>单次员工助理对话当前状态</p><p>枚举值：</p><ul><li>pending： 待处理</li><li>processing： 处理中</li><li>success： 成功</li><li>failed： 失败</li><li>stop： 停止</li></ul>
                     * @return Status <p>单次员工助理对话当前状态</p><p>枚举值：</p><ul><li>pending： 待处理</li><li>processing： 处理中</li><li>success： 成功</li><li>failed： 失败</li><li>stop： 停止</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>单次员工助理对话当前状态</p><p>枚举值：</p><ul><li>pending： 待处理</li><li>processing： 处理中</li><li>success： 成功</li><li>failed： 失败</li><li>stop： 停止</li></ul>
                     * @param _status <p>单次员工助理对话当前状态</p><p>枚举值：</p><ul><li>pending： 待处理</li><li>processing： 处理中</li><li>success： 成功</li><li>failed： 失败</li><li>stop： 停止</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>回复记录 ID，对应 messages 中回复消息的 record_id</p>
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>用户提问记录 ID，对应 messages 中用户消息的 record_id</p>
                     */
                    std::string m_relatedRecordId;
                    bool m_relatedRecordIdHasBeenSet;

                    /**
                     * <p>单次对话耗时信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConversationRecordTimeUsage m_timeUsage;
                    bool m_timeUsageHasBeenSet;

                    /**
                     * <p>单次对话 token 消耗信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConversationRecordTokenUsage m_tokenUsage;
                    bool m_tokenUsageHasBeenSet;

                    /**
                     * <p>单次对话失败信息；成功时为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConversationRecordErrorInfo m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * <p>单次员工助理对话当前状态</p><p>枚举值：</p><ul><li>pending： 待处理</li><li>processing： 处理中</li><li>success： 成功</li><li>failed： 失败</li><li>stop： 停止</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRECORDSUMMARY_H_
