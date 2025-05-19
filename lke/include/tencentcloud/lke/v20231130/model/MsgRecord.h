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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MSGRECORD_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MSGRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/MsgRecordReference.h>
#include <tencentcloud/lke/v20231130/model/TokenStat.h>
#include <tencentcloud/lke/v20231130/model/TaskFlowInfo.h>
#include <tencentcloud/lke/v20231130/model/FileInfo.h>
#include <tencentcloud/lke/v20231130/model/QuoteInfo.h>
#include <tencentcloud/lke/v20231130/model/AgentThought.h>
#include <tencentcloud/lke/v20231130/model/ExtraInfo.h>
#include <tencentcloud/lke/v20231130/model/WorkflowInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 消息详情
                */
                class MsgRecord : public AbstractModel
                {
                public:
                    MsgRecord();
                    ~MsgRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内容
                     * @return Content 内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置内容
                     * @param _content 内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取当前记录所对应的 Session ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionId 当前记录所对应的 Session ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置当前记录所对应的 Session ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionId 当前记录所对应的 Session ID
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
                     * 获取记录ID
                     * @return RecordId 记录ID
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置记录ID
                     * @param _recordId 记录ID
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
                     * 获取关联记录ID
                     * @return RelatedRecordId 关联记录ID
                     * 
                     */
                    std::string GetRelatedRecordId() const;

                    /**
                     * 设置关联记录ID
                     * @param _relatedRecordId 关联记录ID
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
                     * 获取是否来自自己
                     * @return IsFromSelf 是否来自自己
                     * 
                     */
                    bool GetIsFromSelf() const;

                    /**
                     * 设置是否来自自己
                     * @param _isFromSelf 是否来自自己
                     * 
                     */
                    void SetIsFromSelf(const bool& _isFromSelf);

                    /**
                     * 判断参数 IsFromSelf 是否已赋值
                     * @return IsFromSelf 是否已赋值
                     * 
                     */
                    bool IsFromSelfHasBeenSet() const;

                    /**
                     * 获取发送者名称
                     * @return FromName 发送者名称
                     * 
                     */
                    std::string GetFromName() const;

                    /**
                     * 设置发送者名称
                     * @param _fromName 发送者名称
                     * 
                     */
                    void SetFromName(const std::string& _fromName);

                    /**
                     * 判断参数 FromName 是否已赋值
                     * @return FromName 是否已赋值
                     * 
                     */
                    bool FromNameHasBeenSet() const;

                    /**
                     * 获取发送者头像
                     * @return FromAvatar 发送者头像
                     * 
                     */
                    std::string GetFromAvatar() const;

                    /**
                     * 设置发送者头像
                     * @param _fromAvatar 发送者头像
                     * 
                     */
                    void SetFromAvatar(const std::string& _fromAvatar);

                    /**
                     * 判断参数 FromAvatar 是否已赋值
                     * @return FromAvatar 是否已赋值
                     * 
                     */
                    bool FromAvatarHasBeenSet() const;

                    /**
                     * 获取时间戳
                     * @return Timestamp 时间戳
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置时间戳
                     * @param _timestamp 时间戳
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取是否已读
                     * @return HasRead 是否已读
                     * 
                     */
                    bool GetHasRead() const;

                    /**
                     * 设置是否已读
                     * @param _hasRead 是否已读
                     * 
                     */
                    void SetHasRead(const bool& _hasRead);

                    /**
                     * 判断参数 HasRead 是否已赋值
                     * @return HasRead 是否已赋值
                     * 
                     */
                    bool HasReadHasBeenSet() const;

                    /**
                     * 获取评价
                     * @return Score 评价
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置评价
                     * @param _score 评价
                     * 
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取是否评分
                     * @return CanRating 是否评分
                     * 
                     */
                    bool GetCanRating() const;

                    /**
                     * 设置是否评分
                     * @param _canRating 是否评分
                     * 
                     */
                    void SetCanRating(const bool& _canRating);

                    /**
                     * 判断参数 CanRating 是否已赋值
                     * @return CanRating 是否已赋值
                     * 
                     */
                    bool CanRatingHasBeenSet() const;

                    /**
                     * 获取是否展示反馈按钮
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanFeedback 是否展示反馈按钮
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanFeedback() const;

                    /**
                     * 设置是否展示反馈按钮
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canFeedback 是否展示反馈按钮
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanFeedback(const bool& _canFeedback);

                    /**
                     * 判断参数 CanFeedback 是否已赋值
                     * @return CanFeedback 是否已赋值
                     * 
                     */
                    bool CanFeedbackHasBeenSet() const;

                    /**
                     * 获取记录类型
                     * @return Type 记录类型
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置记录类型
                     * @param _type 记录类型
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取引用来源
                     * @return References 引用来源
                     * 
                     */
                    std::vector<MsgRecordReference> GetReferences() const;

                    /**
                     * 设置引用来源
                     * @param _references 引用来源
                     * 
                     */
                    void SetReferences(const std::vector<MsgRecordReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取评价原因
                     * @return Reasons 评价原因
                     * 
                     */
                    std::vector<std::string> GetReasons() const;

                    /**
                     * 设置评价原因
                     * @param _reasons 评价原因
                     * 
                     */
                    void SetReasons(const std::vector<std::string>& _reasons);

                    /**
                     * 判断参数 Reasons 是否已赋值
                     * @return Reasons 是否已赋值
                     * 
                     */
                    bool ReasonsHasBeenSet() const;

                    /**
                     * 获取是否大模型
                     * @return IsLlmGenerated 是否大模型
                     * 
                     */
                    bool GetIsLlmGenerated() const;

                    /**
                     * 设置是否大模型
                     * @param _isLlmGenerated 是否大模型
                     * 
                     */
                    void SetIsLlmGenerated(const bool& _isLlmGenerated);

                    /**
                     * 判断参数 IsLlmGenerated 是否已赋值
                     * @return IsLlmGenerated 是否已赋值
                     * 
                     */
                    bool IsLlmGeneratedHasBeenSet() const;

                    /**
                     * 获取图片链接，可公有读
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageUrls 图片链接，可公有读
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetImageUrls() const;

                    /**
                     * 设置图片链接，可公有读
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageUrls 图片链接，可公有读
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageUrls(const std::vector<std::string>& _imageUrls);

                    /**
                     * 判断参数 ImageUrls 是否已赋值
                     * @return ImageUrls 是否已赋值
                     * 
                     */
                    bool ImageUrlsHasBeenSet() const;

                    /**
                     * 获取当次 token 统计信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenStat 当次 token 统计信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TokenStat GetTokenStat() const;

                    /**
                     * 设置当次 token 统计信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tokenStat 当次 token 统计信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTokenStat(const TokenStat& _tokenStat);

                    /**
                     * 判断参数 TokenStat 是否已赋值
                     * @return TokenStat 是否已赋值
                     * 
                     */
                    bool TokenStatHasBeenSet() const;

                    /**
                     * 获取回复方式
1:大模型直接回复;
2:保守回复, 未知问题回复;
3:拒答问题回复;
4:敏感回复;
5:问答对直接回复, 已采纳问答对优先回复;
6:欢迎语回复;
7:并发超限回复;
8:全局干预知识;
9:任务流程过程回复, 当历史记录中 task_flow.type = 0 时, 为大模型回复;
10:任务流程答案回复;
11:搜索引擎回复;
12:知识润色后回复;
13:图片理解回复;
14:实时文档回复;
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplyMethod 回复方式
1:大模型直接回复;
2:保守回复, 未知问题回复;
3:拒答问题回复;
4:敏感回复;
5:问答对直接回复, 已采纳问答对优先回复;
6:欢迎语回复;
7:并发超限回复;
8:全局干预知识;
9:任务流程过程回复, 当历史记录中 task_flow.type = 0 时, 为大模型回复;
10:任务流程答案回复;
11:搜索引擎回复;
12:知识润色后回复;
13:图片理解回复;
14:实时文档回复;
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReplyMethod() const;

                    /**
                     * 设置回复方式
1:大模型直接回复;
2:保守回复, 未知问题回复;
3:拒答问题回复;
4:敏感回复;
5:问答对直接回复, 已采纳问答对优先回复;
6:欢迎语回复;
7:并发超限回复;
8:全局干预知识;
9:任务流程过程回复, 当历史记录中 task_flow.type = 0 时, 为大模型回复;
10:任务流程答案回复;
11:搜索引擎回复;
12:知识润色后回复;
13:图片理解回复;
14:实时文档回复;
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replyMethod 回复方式
1:大模型直接回复;
2:保守回复, 未知问题回复;
3:拒答问题回复;
4:敏感回复;
5:问答对直接回复, 已采纳问答对优先回复;
6:欢迎语回复;
7:并发超限回复;
8:全局干预知识;
9:任务流程过程回复, 当历史记录中 task_flow.type = 0 时, 为大模型回复;
10:任务流程答案回复;
11:搜索引擎回复;
12:知识润色后回复;
13:图片理解回复;
14:实时文档回复;
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplyMethod(const uint64_t& _replyMethod);

                    /**
                     * 判断参数 ReplyMethod 是否已赋值
                     * @return ReplyMethod 是否已赋值
                     * 
                     */
                    bool ReplyMethodHasBeenSet() const;

                    /**
                     * 获取选项卡, 用于多轮对话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OptionCards 选项卡, 用于多轮对话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOptionCards() const;

                    /**
                     * 设置选项卡, 用于多轮对话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _optionCards 选项卡, 用于多轮对话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOptionCards(const std::vector<std::string>& _optionCards);

                    /**
                     * 判断参数 OptionCards 是否已赋值
                     * @return OptionCards 是否已赋值
                     * 
                     */
                    bool OptionCardsHasBeenSet() const;

                    /**
                     * 获取任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskFlow 任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskFlowInfo GetTaskFlow() const;

                    /**
                     * 设置任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskFlow 任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskFlow(const TaskFlowInfo& _taskFlow);

                    /**
                     * 判断参数 TaskFlow 是否已赋值
                     * @return TaskFlow 是否已赋值
                     * 
                     */
                    bool TaskFlowHasBeenSet() const;

                    /**
                     * 获取用户传入的文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileInfos 用户传入的文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FileInfo> GetFileInfos() const;

                    /**
                     * 设置用户传入的文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileInfos 用户传入的文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileInfos(const std::vector<FileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取参考来源引用位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuoteInfos 参考来源引用位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QuoteInfo> GetQuoteInfos() const;

                    /**
                     * 设置参考来源引用位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quoteInfos 参考来源引用位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuoteInfos(const std::vector<QuoteInfo>& _quoteInfos);

                    /**
                     * 判断参数 QuoteInfos 是否已赋值
                     * @return QuoteInfos 是否已赋值
                     * 
                     */
                    bool QuoteInfosHasBeenSet() const;

                    /**
                     * 获取Agent的思考过程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentThought Agent的思考过程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentThought GetAgentThought() const;

                    /**
                     * 设置Agent的思考过程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentThought Agent的思考过程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentThought(const AgentThought& _agentThought);

                    /**
                     * 判断参数 AgentThought 是否已赋值
                     * @return AgentThought 是否已赋值
                     * 
                     */
                    bool AgentThoughtHasBeenSet() const;

                    /**
                     * 获取扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExtraInfo GetExtraInfo() const;

                    /**
                     * 设置扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraInfo(const ExtraInfo& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取工作流信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkFlow 工作流信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkflowInfo GetWorkFlow() const;

                    /**
                     * 设置工作流信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workFlow 工作流信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkFlow(const WorkflowInfo& _workFlow);

                    /**
                     * 判断参数 WorkFlow 是否已赋值
                     * @return WorkFlow 是否已赋值
                     * 
                     */
                    bool WorkFlowHasBeenSet() const;

                private:

                    /**
                     * 内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 当前记录所对应的 Session ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 记录ID
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 关联记录ID
                     */
                    std::string m_relatedRecordId;
                    bool m_relatedRecordIdHasBeenSet;

                    /**
                     * 是否来自自己
                     */
                    bool m_isFromSelf;
                    bool m_isFromSelfHasBeenSet;

                    /**
                     * 发送者名称
                     */
                    std::string m_fromName;
                    bool m_fromNameHasBeenSet;

                    /**
                     * 发送者头像
                     */
                    std::string m_fromAvatar;
                    bool m_fromAvatarHasBeenSet;

                    /**
                     * 时间戳
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 是否已读
                     */
                    bool m_hasRead;
                    bool m_hasReadHasBeenSet;

                    /**
                     * 评价
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 是否评分
                     */
                    bool m_canRating;
                    bool m_canRatingHasBeenSet;

                    /**
                     * 是否展示反馈按钮
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canFeedback;
                    bool m_canFeedbackHasBeenSet;

                    /**
                     * 记录类型
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 引用来源
                     */
                    std::vector<MsgRecordReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * 评价原因
                     */
                    std::vector<std::string> m_reasons;
                    bool m_reasonsHasBeenSet;

                    /**
                     * 是否大模型
                     */
                    bool m_isLlmGenerated;
                    bool m_isLlmGeneratedHasBeenSet;

                    /**
                     * 图片链接，可公有读
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_imageUrls;
                    bool m_imageUrlsHasBeenSet;

                    /**
                     * 当次 token 统计信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TokenStat m_tokenStat;
                    bool m_tokenStatHasBeenSet;

                    /**
                     * 回复方式
1:大模型直接回复;
2:保守回复, 未知问题回复;
3:拒答问题回复;
4:敏感回复;
5:问答对直接回复, 已采纳问答对优先回复;
6:欢迎语回复;
7:并发超限回复;
8:全局干预知识;
9:任务流程过程回复, 当历史记录中 task_flow.type = 0 时, 为大模型回复;
10:任务流程答案回复;
11:搜索引擎回复;
12:知识润色后回复;
13:图片理解回复;
14:实时文档回复;
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_replyMethod;
                    bool m_replyMethodHasBeenSet;

                    /**
                     * 选项卡, 用于多轮对话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_optionCards;
                    bool m_optionCardsHasBeenSet;

                    /**
                     * 任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskFlowInfo m_taskFlow;
                    bool m_taskFlowHasBeenSet;

                    /**
                     * 用户传入的文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 参考来源引用位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QuoteInfo> m_quoteInfos;
                    bool m_quoteInfosHasBeenSet;

                    /**
                     * Agent的思考过程信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentThought m_agentThought;
                    bool m_agentThoughtHasBeenSet;

                    /**
                     * 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtraInfo m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 工作流信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WorkflowInfo m_workFlow;
                    bool m_workFlowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MSGRECORD_H_
