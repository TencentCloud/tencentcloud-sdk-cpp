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
#include <tencentcloud/lke/v20231130/model/Widget.h>
#include <tencentcloud/lke/v20231130/model/WidgetAction.h>
#include <tencentcloud/lke/v20231130/model/Audio.h>


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
                     * 获取<p>内容</p>
                     * @return Content <p>内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>内容</p>
                     * @param _content <p>内容</p>
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
                     * 获取<p>当前记录所对应的 Session ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionId <p>当前记录所对应的 Session ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>当前记录所对应的 Session ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionId <p>当前记录所对应的 Session ID</p>
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
                     * 获取<p>记录ID</p>
                     * @return RecordId <p>记录ID</p>
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>记录ID</p>
                     * @param _recordId <p>记录ID</p>
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
                     * 获取<p>关联记录ID</p>
                     * @return RelatedRecordId <p>关联记录ID</p>
                     * 
                     */
                    std::string GetRelatedRecordId() const;

                    /**
                     * 设置<p>关联记录ID</p>
                     * @param _relatedRecordId <p>关联记录ID</p>
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
                     * 获取<p>是否来自自己</p>
                     * @return IsFromSelf <p>是否来自自己</p>
                     * 
                     */
                    bool GetIsFromSelf() const;

                    /**
                     * 设置<p>是否来自自己</p>
                     * @param _isFromSelf <p>是否来自自己</p>
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
                     * 获取<p>发送者名称</p>
                     * @return FromName <p>发送者名称</p>
                     * 
                     */
                    std::string GetFromName() const;

                    /**
                     * 设置<p>发送者名称</p>
                     * @param _fromName <p>发送者名称</p>
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
                     * 获取<p>发送者头像</p>
                     * @return FromAvatar <p>发送者头像</p>
                     * 
                     */
                    std::string GetFromAvatar() const;

                    /**
                     * 设置<p>发送者头像</p>
                     * @param _fromAvatar <p>发送者头像</p>
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
                     * 获取<p>时间戳</p>
                     * @return Timestamp <p>时间戳</p>
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置<p>时间戳</p>
                     * @param _timestamp <p>时间戳</p>
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
                     * 获取<p>是否已读</p>
                     * @return HasRead <p>是否已读</p>
                     * 
                     */
                    bool GetHasRead() const;

                    /**
                     * 设置<p>是否已读</p>
                     * @param _hasRead <p>是否已读</p>
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
                     * 获取<p>评价</p>
                     * @return Score <p>评价</p>
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置<p>评价</p>
                     * @param _score <p>评价</p>
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
                     * 获取<p>是否评分</p>
                     * @return CanRating <p>是否评分</p>
                     * 
                     */
                    bool GetCanRating() const;

                    /**
                     * 设置<p>是否评分</p>
                     * @param _canRating <p>是否评分</p>
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
                     * 获取<p>是否展示反馈按钮</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanFeedback <p>是否展示反馈按钮</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanFeedback() const;

                    /**
                     * 设置<p>是否展示反馈按钮</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canFeedback <p>是否展示反馈按钮</p>
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
                     * 获取<p>记录类型</p>
                     * @return Type <p>记录类型</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>记录类型</p>
                     * @param _type <p>记录类型</p>
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
                     * 获取<p>引用来源</p>
                     * @return References <p>引用来源</p>
                     * 
                     */
                    std::vector<MsgRecordReference> GetReferences() const;

                    /**
                     * 设置<p>引用来源</p>
                     * @param _references <p>引用来源</p>
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
                     * 获取<p>评价原因</p>
                     * @return Reasons <p>评价原因</p>
                     * 
                     */
                    std::vector<std::string> GetReasons() const;

                    /**
                     * 设置<p>评价原因</p>
                     * @param _reasons <p>评价原因</p>
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
                     * 获取<p>是否大模型</p>
                     * @return IsLlmGenerated <p>是否大模型</p>
                     * 
                     */
                    bool GetIsLlmGenerated() const;

                    /**
                     * 设置<p>是否大模型</p>
                     * @param _isLlmGenerated <p>是否大模型</p>
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
                     * 获取<p>图片链接，可公有读</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageUrls <p>图片链接，可公有读</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetImageUrls() const;

                    /**
                     * 设置<p>图片链接，可公有读</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageUrls <p>图片链接，可公有读</p>
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
                     * 获取<p>当次 token 统计信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenStat <p>当次 token 统计信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TokenStat GetTokenStat() const;

                    /**
                     * 设置<p>当次 token 统计信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tokenStat <p>当次 token 统计信息</p>
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
                     * 获取<p>回复方式<br>1:大模型直接回复;<br>2:保守回复, 未知问题回复;<br>3:拒答问题回复;<br>4:敏感回复;<br>5:问答对直接回复, 已采纳问答对优先回复;<br>6:欢迎语回复;<br>7:并发超限回复;<br>8:全局干预知识;<br>9:任务流程过程回复, 当历史记录中 task_flow.type = 0 时, 为大模型回复;<br>10:任务流程答案回复;<br>11:搜索引擎回复;<br>12:知识润色后回复;<br>13:图片理解回复;<br>14:实时文档回复;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplyMethod <p>回复方式<br>1:大模型直接回复;<br>2:保守回复, 未知问题回复;<br>3:拒答问题回复;<br>4:敏感回复;<br>5:问答对直接回复, 已采纳问答对优先回复;<br>6:欢迎语回复;<br>7:并发超限回复;<br>8:全局干预知识;<br>9:任务流程过程回复, 当历史记录中 task_flow.type = 0 时, 为大模型回复;<br>10:任务流程答案回复;<br>11:搜索引擎回复;<br>12:知识润色后回复;<br>13:图片理解回复;<br>14:实时文档回复;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReplyMethod() const;

                    /**
                     * 设置<p>回复方式<br>1:大模型直接回复;<br>2:保守回复, 未知问题回复;<br>3:拒答问题回复;<br>4:敏感回复;<br>5:问答对直接回复, 已采纳问答对优先回复;<br>6:欢迎语回复;<br>7:并发超限回复;<br>8:全局干预知识;<br>9:任务流程过程回复, 当历史记录中 task_flow.type = 0 时, 为大模型回复;<br>10:任务流程答案回复;<br>11:搜索引擎回复;<br>12:知识润色后回复;<br>13:图片理解回复;<br>14:实时文档回复;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replyMethod <p>回复方式<br>1:大模型直接回复;<br>2:保守回复, 未知问题回复;<br>3:拒答问题回复;<br>4:敏感回复;<br>5:问答对直接回复, 已采纳问答对优先回复;<br>6:欢迎语回复;<br>7:并发超限回复;<br>8:全局干预知识;<br>9:任务流程过程回复, 当历史记录中 task_flow.type = 0 时, 为大模型回复;<br>10:任务流程答案回复;<br>11:搜索引擎回复;<br>12:知识润色后回复;<br>13:图片理解回复;<br>14:实时文档回复;</p>
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
                     * 获取<p>选项卡, 用于多轮对话</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OptionCards <p>选项卡, 用于多轮对话</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOptionCards() const;

                    /**
                     * 设置<p>选项卡, 用于多轮对话</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _optionCards <p>选项卡, 用于多轮对话</p>
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
                     * 获取<p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskFlow <p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskFlowInfo GetTaskFlow() const;

                    /**
                     * 设置<p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskFlow <p>任务信息</p>
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
                     * 获取<p>用户传入的文件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileInfos <p>用户传入的文件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FileInfo> GetFileInfos() const;

                    /**
                     * 设置<p>用户传入的文件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileInfos <p>用户传入的文件信息</p>
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
                     * 获取<p>参考来源引用位置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuoteInfos <p>参考来源引用位置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QuoteInfo> GetQuoteInfos() const;

                    /**
                     * 设置<p>参考来源引用位置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quoteInfos <p>参考来源引用位置信息</p>
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
                     * 获取<p>Agent的思考过程信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentThought <p>Agent的思考过程信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentThought GetAgentThought() const;

                    /**
                     * 设置<p>Agent的思考过程信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentThought <p>Agent的思考过程信息</p>
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
                     * 获取<p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo <p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExtraInfo GetExtraInfo() const;

                    /**
                     * 设置<p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo <p>扩展信息</p>
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
                     * 获取<p>工作流信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkFlow <p>工作流信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkflowInfo GetWorkFlow() const;

                    /**
                     * 设置<p>工作流信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workFlow <p>工作流信息</p>
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

                    /**
                     * 获取<p>Widget信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Widgets <p>Widget信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Widget> GetWidgets() const;

                    /**
                     * 设置<p>Widget信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _widgets <p>Widget信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidgets(const std::vector<Widget>& _widgets);

                    /**
                     * 判断参数 Widgets 是否已赋值
                     * @return Widgets 是否已赋值
                     * 
                     */
                    bool WidgetsHasBeenSet() const;

                    /**
                     * 获取<p>Widget动作信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WidgetAction <p>Widget动作信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WidgetAction GetWidgetAction() const;

                    /**
                     * 设置<p>Widget动作信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _widgetAction <p>Widget动作信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidgetAction(const WidgetAction& _widgetAction);

                    /**
                     * 判断参数 WidgetAction 是否已赋值
                     * @return WidgetAction 是否已赋值
                     * 
                     */
                    bool WidgetActionHasBeenSet() const;

                    /**
                     * 获取<p>音频信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Audios <p>音频信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Audio> GetAudios() const;

                    /**
                     * 设置<p>音频信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audios <p>音频信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudios(const std::vector<Audio>& _audios);

                    /**
                     * 判断参数 Audios 是否已赋值
                     * @return Audios 是否已赋值
                     * 
                     */
                    bool AudiosHasBeenSet() const;

                    /**
                     * 获取<p>标识选项卡为单选还是双选</p><p>枚举值：</p><ul><li>0： 单选</li><li>1： 双选</li></ul>
                     * @return OptionMode <p>标识选项卡为单选还是双选</p><p>枚举值：</p><ul><li>0： 单选</li><li>1： 双选</li></ul>
                     * 
                     */
                    int64_t GetOptionMode() const;

                    /**
                     * 设置<p>标识选项卡为单选还是双选</p><p>枚举值：</p><ul><li>0： 单选</li><li>1： 双选</li></ul>
                     * @param _optionMode <p>标识选项卡为单选还是双选</p><p>枚举值：</p><ul><li>0： 单选</li><li>1： 双选</li></ul>
                     * 
                     */
                    void SetOptionMode(const int64_t& _optionMode);

                    /**
                     * 判断参数 OptionMode 是否已赋值
                     * @return OptionMode 是否已赋值
                     * 
                     */
                    bool OptionModeHasBeenSet() const;

                private:

                    /**
                     * <p>内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>当前记录所对应的 Session ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>记录ID</p>
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>关联记录ID</p>
                     */
                    std::string m_relatedRecordId;
                    bool m_relatedRecordIdHasBeenSet;

                    /**
                     * <p>是否来自自己</p>
                     */
                    bool m_isFromSelf;
                    bool m_isFromSelfHasBeenSet;

                    /**
                     * <p>发送者名称</p>
                     */
                    std::string m_fromName;
                    bool m_fromNameHasBeenSet;

                    /**
                     * <p>发送者头像</p>
                     */
                    std::string m_fromAvatar;
                    bool m_fromAvatarHasBeenSet;

                    /**
                     * <p>时间戳</p>
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>是否已读</p>
                     */
                    bool m_hasRead;
                    bool m_hasReadHasBeenSet;

                    /**
                     * <p>评价</p>
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>是否评分</p>
                     */
                    bool m_canRating;
                    bool m_canRatingHasBeenSet;

                    /**
                     * <p>是否展示反馈按钮</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canFeedback;
                    bool m_canFeedbackHasBeenSet;

                    /**
                     * <p>记录类型</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>引用来源</p>
                     */
                    std::vector<MsgRecordReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * <p>评价原因</p>
                     */
                    std::vector<std::string> m_reasons;
                    bool m_reasonsHasBeenSet;

                    /**
                     * <p>是否大模型</p>
                     */
                    bool m_isLlmGenerated;
                    bool m_isLlmGeneratedHasBeenSet;

                    /**
                     * <p>图片链接，可公有读</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_imageUrls;
                    bool m_imageUrlsHasBeenSet;

                    /**
                     * <p>当次 token 统计信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TokenStat m_tokenStat;
                    bool m_tokenStatHasBeenSet;

                    /**
                     * <p>回复方式<br>1:大模型直接回复;<br>2:保守回复, 未知问题回复;<br>3:拒答问题回复;<br>4:敏感回复;<br>5:问答对直接回复, 已采纳问答对优先回复;<br>6:欢迎语回复;<br>7:并发超限回复;<br>8:全局干预知识;<br>9:任务流程过程回复, 当历史记录中 task_flow.type = 0 时, 为大模型回复;<br>10:任务流程答案回复;<br>11:搜索引擎回复;<br>12:知识润色后回复;<br>13:图片理解回复;<br>14:实时文档回复;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_replyMethod;
                    bool m_replyMethodHasBeenSet;

                    /**
                     * <p>选项卡, 用于多轮对话</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_optionCards;
                    bool m_optionCardsHasBeenSet;

                    /**
                     * <p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskFlowInfo m_taskFlow;
                    bool m_taskFlowHasBeenSet;

                    /**
                     * <p>用户传入的文件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * <p>参考来源引用位置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QuoteInfo> m_quoteInfos;
                    bool m_quoteInfosHasBeenSet;

                    /**
                     * <p>Agent的思考过程信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentThought m_agentThought;
                    bool m_agentThoughtHasBeenSet;

                    /**
                     * <p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtraInfo m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * <p>工作流信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WorkflowInfo m_workFlow;
                    bool m_workFlowHasBeenSet;

                    /**
                     * <p>Widget信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Widget> m_widgets;
                    bool m_widgetsHasBeenSet;

                    /**
                     * <p>Widget动作信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WidgetAction m_widgetAction;
                    bool m_widgetActionHasBeenSet;

                    /**
                     * <p>音频信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Audio> m_audios;
                    bool m_audiosHasBeenSet;

                    /**
                     * <p>标识选项卡为单选还是双选</p><p>枚举值：</p><ul><li>0： 单选</li><li>1： 双选</li></ul>
                     */
                    int64_t m_optionMode;
                    bool m_optionModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MSGRECORD_H_
