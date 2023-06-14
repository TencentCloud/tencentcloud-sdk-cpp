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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_SENDTASKDATA_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_SENDTASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/Template.h>
#include <tencentcloud/ses/v20201002/model/CycleEmailParam.h>
#include <tencentcloud/ses/v20201002/model/TimedEmailParam.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * 发送任务数据
                */
                class SendTaskData : public AbstractModel
                {
                public:
                    SendTaskData();
                    ~SendTaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取发信地址
                     * @return FromEmailAddress 发信地址
                     * 
                     */
                    std::string GetFromEmailAddress() const;

                    /**
                     * 设置发信地址
                     * @param _fromEmailAddress 发信地址
                     * 
                     */
                    void SetFromEmailAddress(const std::string& _fromEmailAddress);

                    /**
                     * 判断参数 FromEmailAddress 是否已赋值
                     * @return FromEmailAddress 是否已赋值
                     * 
                     */
                    bool FromEmailAddressHasBeenSet() const;

                    /**
                     * 获取收件人列表Id
                     * @return ReceiverId 收件人列表Id
                     * 
                     */
                    uint64_t GetReceiverId() const;

                    /**
                     * 设置收件人列表Id
                     * @param _receiverId 收件人列表Id
                     * 
                     */
                    void SetReceiverId(const uint64_t& _receiverId);

                    /**
                     * 判断参数 ReceiverId 是否已赋值
                     * @return ReceiverId 是否已赋值
                     * 
                     */
                    bool ReceiverIdHasBeenSet() const;

                    /**
                     * 获取任务状态 1 待开始 5 发送中 6 今日暂停发送  7 发信异常 10 发送完成
                     * @return TaskStatus 任务状态 1 待开始 5 发送中 6 今日暂停发送  7 发信异常 10 发送完成
                     * 
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 设置任务状态 1 待开始 5 发送中 6 今日暂停发送  7 发信异常 10 发送完成
                     * @param _taskStatus 任务状态 1 待开始 5 发送中 6 今日暂停发送  7 发信异常 10 发送完成
                     * 
                     */
                    void SetTaskStatus(const uint64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取任务类型 1 即时 2 定时 3 周期
                     * @return TaskType 任务类型 1 即时 2 定时 3 周期
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置任务类型 1 即时 2 定时 3 周期
                     * @param _taskType 任务类型 1 即时 2 定时 3 周期
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务请求发信数量
                     * @return RequestCount 任务请求发信数量
                     * 
                     */
                    uint64_t GetRequestCount() const;

                    /**
                     * 设置任务请求发信数量
                     * @param _requestCount 任务请求发信数量
                     * 
                     */
                    void SetRequestCount(const uint64_t& _requestCount);

                    /**
                     * 判断参数 RequestCount 是否已赋值
                     * @return RequestCount 是否已赋值
                     * 
                     */
                    bool RequestCountHasBeenSet() const;

                    /**
                     * 获取已经发送数量
                     * @return SendCount 已经发送数量
                     * 
                     */
                    uint64_t GetSendCount() const;

                    /**
                     * 设置已经发送数量
                     * @param _sendCount 已经发送数量
                     * 
                     */
                    void SetSendCount(const uint64_t& _sendCount);

                    /**
                     * 判断参数 SendCount 是否已赋值
                     * @return SendCount 是否已赋值
                     * 
                     */
                    bool SendCountHasBeenSet() const;

                    /**
                     * 获取缓存数量
                     * @return CacheCount 缓存数量
                     * 
                     */
                    uint64_t GetCacheCount() const;

                    /**
                     * 设置缓存数量
                     * @param _cacheCount 缓存数量
                     * 
                     */
                    void SetCacheCount(const uint64_t& _cacheCount);

                    /**
                     * 判断参数 CacheCount 是否已赋值
                     * @return CacheCount 是否已赋值
                     * 
                     */
                    bool CacheCountHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
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
                     * 获取任务更新时间
                     * @return UpdateTime 任务更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置任务更新时间
                     * @param _updateTime 任务更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取邮件主题
                     * @return Subject 邮件主题
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置邮件主题
                     * @param _subject 邮件主题
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取模板和模板数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Template 模板和模板数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Template GetTemplate() const;

                    /**
                     * 设置模板和模板数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _template 模板和模板数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplate(const Template& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     * 
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取周期任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleParam 周期任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CycleEmailParam GetCycleParam() const;

                    /**
                     * 设置周期任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleParam 周期任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleParam(const CycleEmailParam& _cycleParam);

                    /**
                     * 判断参数 CycleParam 是否已赋值
                     * @return CycleParam 是否已赋值
                     * 
                     */
                    bool CycleParamHasBeenSet() const;

                    /**
                     * 获取定时任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimedParam 定时任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TimedEmailParam GetTimedParam() const;

                    /**
                     * 设置定时任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timedParam 定时任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimedParam(const TimedEmailParam& _timedParam);

                    /**
                     * 判断参数 TimedParam 是否已赋值
                     * @return TimedParam 是否已赋值
                     * 
                     */
                    bool TimedParamHasBeenSet() const;

                    /**
                     * 获取任务异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrMsg 任务异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置任务异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errMsg 任务异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取收件人列表名称
                     * @return ReceiversName 收件人列表名称
                     * 
                     */
                    std::string GetReceiversName() const;

                    /**
                     * 设置收件人列表名称
                     * @param _receiversName 收件人列表名称
                     * 
                     */
                    void SetReceiversName(const std::string& _receiversName);

                    /**
                     * 判断参数 ReceiversName 是否已赋值
                     * @return ReceiversName 是否已赋值
                     * 
                     */
                    bool ReceiversNameHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 发信地址
                     */
                    std::string m_fromEmailAddress;
                    bool m_fromEmailAddressHasBeenSet;

                    /**
                     * 收件人列表Id
                     */
                    uint64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * 任务状态 1 待开始 5 发送中 6 今日暂停发送  7 发信异常 10 发送完成
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 任务类型 1 即时 2 定时 3 周期
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务请求发信数量
                     */
                    uint64_t m_requestCount;
                    bool m_requestCountHasBeenSet;

                    /**
                     * 已经发送数量
                     */
                    uint64_t m_sendCount;
                    bool m_sendCountHasBeenSet;

                    /**
                     * 缓存数量
                     */
                    uint64_t m_cacheCount;
                    bool m_cacheCountHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 邮件主题
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * 模板和模板数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Template m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * 周期任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CycleEmailParam m_cycleParam;
                    bool m_cycleParamHasBeenSet;

                    /**
                     * 定时任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TimedEmailParam m_timedParam;
                    bool m_timedParamHasBeenSet;

                    /**
                     * 任务异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 收件人列表名称
                     */
                    std::string m_receiversName;
                    bool m_receiversNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_SENDTASKDATA_H_
