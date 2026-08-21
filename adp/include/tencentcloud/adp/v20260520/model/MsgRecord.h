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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORD_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/MsgRecordResult.h>
#include <tencentcloud/adp/v20260520/model/MsgRecordSource.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * MsgRecord
                */
                class MsgRecord : public AbstractModel
                {
                public:
                    MsgRecord();
                    ~MsgRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取答案
                     * @return Answer 答案
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置答案
                     * @param _answer 答案
                     * 
                     */
                    void SetAnswer(const std::string& _answer);

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return AppId 应用ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置应用ID
                     * @param _appId 应用ID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取分类ID
                     * @return CategoryId 分类ID
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置分类ID
                     * @param _categoryId 分类ID
                     * 
                     */
                    void SetCategoryId(const std::string& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取意图
                     * @return Intent 意图
                     * 
                     */
                    std::string GetIntent() const;

                    /**
                     * 设置意图
                     * @param _intent 意图
                     * 
                     */
                    void SetIntent(const std::string& _intent);

                    /**
                     * 判断参数 Intent 是否已赋值
                     * @return Intent 是否已赋值
                     * 
                     */
                    bool IntentHasBeenSet() const;

                    /**
                     * 获取意图分类
                     * @return IntentCategory 意图分类
                     * 
                     */
                    std::string GetIntentCategory() const;

                    /**
                     * 设置意图分类
                     * @param _intentCategory 意图分类
                     * 
                     */
                    void SetIntentCategory(const std::string& _intentCategory);

                    /**
                     * 判断参数 IntentCategory 是否已赋值
                     * @return IntentCategory 是否已赋值
                     * 
                     */
                    bool IntentCategoryHasBeenSet() const;

                    /**
                     * 获取是否是智能分类
                     * @return IsSmart 是否是智能分类
                     * 
                     */
                    bool GetIsSmart() const;

                    /**
                     * 设置是否是智能分类
                     * @param _isSmart 是否是智能分类
                     * 
                     */
                    void SetIsSmart(const bool& _isSmart);

                    /**
                     * 判断参数 IsSmart 是否已赋值
                     * @return IsSmart 是否已赋值
                     * 
                     */
                    bool IsSmartHasBeenSet() const;

                    /**
                     * 获取问题
                     * @return Question 问题
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置问题
                     * @param _question 问题
                     * 
                     */
                    void SetQuestion(const std::string& _question);

                    /**
                     * 判断参数 Question 是否已赋值
                     * @return Question 是否已赋值
                     * 
                     */
                    bool QuestionHasBeenSet() const;

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
                     * 获取表示消息的回复方式，枚举 ReplyMethod：0=未指定, 1=大模型直接回复, 2=保守回复, 3=拒答, 4=敏感回复, 5=问答对优先回复, 6=欢迎语, 7=并发超限, 8=全局干预知识, 9=任务流程过程回复, 10=任务流程答案, 11=搜索引擎, 12=知识润色, 13=图片理解, 14=实时文档, 15=澄清确认, 16=工作流回复, 17=工作流结束, 18=智能体回复, 19=多意图, 20=中断, 21=智能体计划预览, 22=智能体计划结果, 23=智能体结构化输出。
                     * @return ReplyMethod 表示消息的回复方式，枚举 ReplyMethod：0=未指定, 1=大模型直接回复, 2=保守回复, 3=拒答, 4=敏感回复, 5=问答对优先回复, 6=欢迎语, 7=并发超限, 8=全局干预知识, 9=任务流程过程回复, 10=任务流程答案, 11=搜索引擎, 12=知识润色, 13=图片理解, 14=实时文档, 15=澄清确认, 16=工作流回复, 17=工作流结束, 18=智能体回复, 19=多意图, 20=中断, 21=智能体计划预览, 22=智能体计划结果, 23=智能体结构化输出。
                     * 
                     */
                    int64_t GetReplyMethod() const;

                    /**
                     * 设置表示消息的回复方式，枚举 ReplyMethod：0=未指定, 1=大模型直接回复, 2=保守回复, 3=拒答, 4=敏感回复, 5=问答对优先回复, 6=欢迎语, 7=并发超限, 8=全局干预知识, 9=任务流程过程回复, 10=任务流程答案, 11=搜索引擎, 12=知识润色, 13=图片理解, 14=实时文档, 15=澄清确认, 16=工作流回复, 17=工作流结束, 18=智能体回复, 19=多意图, 20=中断, 21=智能体计划预览, 22=智能体计划结果, 23=智能体结构化输出。
                     * @param _replyMethod 表示消息的回复方式，枚举 ReplyMethod：0=未指定, 1=大模型直接回复, 2=保守回复, 3=拒答, 4=敏感回复, 5=问答对优先回复, 6=欢迎语, 7=并发超限, 8=全局干预知识, 9=任务流程过程回复, 10=任务流程答案, 11=搜索引擎, 12=知识润色, 13=图片理解, 14=实时文档, 15=澄清确认, 16=工作流回复, 17=工作流结束, 18=智能体回复, 19=多意图, 20=中断, 21=智能体计划预览, 22=智能体计划结果, 23=智能体结构化输出。
                     * 
                     */
                    void SetReplyMethod(const int64_t& _replyMethod);

                    /**
                     * 判断参数 ReplyMethod 是否已赋值
                     * @return ReplyMethod 是否已赋值
                     * 
                     */
                    bool ReplyMethodHasBeenSet() const;

                    /**
                     * 获取返回结果
                     * @return Result 返回结果
                     * 
                     */
                    MsgRecordResult GetResult() const;

                    /**
                     * 设置返回结果
                     * @param _result 返回结果
                     * 
                     */
                    void SetResult(const MsgRecordResult& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取分数
                     * @return Score 分数
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置分数
                     * @param _score 分数
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
                     * 获取会话ID
                     * @return SessionId 会话ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话ID
                     * @param _sessionId 会话ID
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
                     * 获取来源
                     * @return Source 来源
                     * 
                     */
                    MsgRecordSource GetSource() const;

                    /**
                     * 设置来源
                     * @param _source 来源
                     * 
                     */
                    void SetSource(const MsgRecordSource& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取trace_id
                     * @return TraceId trace_id
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置trace_id
                     * @param _traceId trace_id
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
                     * 答案
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 分类ID
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 意图
                     */
                    std::string m_intent;
                    bool m_intentHasBeenSet;

                    /**
                     * 意图分类
                     */
                    std::string m_intentCategory;
                    bool m_intentCategoryHasBeenSet;

                    /**
                     * 是否是智能分类
                     */
                    bool m_isSmart;
                    bool m_isSmartHasBeenSet;

                    /**
                     * 问题
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 记录ID
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 表示消息的回复方式，枚举 ReplyMethod：0=未指定, 1=大模型直接回复, 2=保守回复, 3=拒答, 4=敏感回复, 5=问答对优先回复, 6=欢迎语, 7=并发超限, 8=全局干预知识, 9=任务流程过程回复, 10=任务流程答案, 11=搜索引擎, 12=知识润色, 13=图片理解, 14=实时文档, 15=澄清确认, 16=工作流回复, 17=工作流结束, 18=智能体回复, 19=多意图, 20=中断, 21=智能体计划预览, 22=智能体计划结果, 23=智能体结构化输出。
                     */
                    int64_t m_replyMethod;
                    bool m_replyMethodHasBeenSet;

                    /**
                     * 返回结果
                     */
                    MsgRecordResult m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 分数
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 会话ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 来源
                     */
                    MsgRecordSource m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * trace_id
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORD_H_
