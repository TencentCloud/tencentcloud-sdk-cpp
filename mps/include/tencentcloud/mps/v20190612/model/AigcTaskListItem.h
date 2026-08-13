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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIGCTASKLISTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIGCTASKLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Aigc任务详细信息
                */
                class AigcTaskListItem : public AbstractModel
                {
                public:
                    AigcTaskListItem();
                    ~AigcTaskListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskId <p>任务ID</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务类型</p><p>枚举值：</p><ul><li>VideoRedraw： 转绘任务</li><li>AIDrama： AI漫剧任务</li></ul>
                     * @return TaskType <p>任务类型</p><p>枚举值：</p><ul><li>VideoRedraw： 转绘任务</li><li>AIDrama： AI漫剧任务</li></ul>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>任务类型</p><p>枚举值：</p><ul><li>VideoRedraw： 转绘任务</li><li>AIDrama： AI漫剧任务</li></ul>
                     * @param _taskType <p>任务类型</p><p>枚举值：</p><ul><li>VideoRedraw： 转绘任务</li><li>AIDrama： AI漫剧任务</li></ul>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p><p>枚举值：</p><ul><li>PENDING： 任务等待调度</li><li>RUNNING： 任务运行中</li><li>FINISHED： 任务执行成功</li><li>STOP： 任务被中止</li><li>FAILED： 任务失败</li><li>TIMEOUT： 任务超时</li></ul>
                     * @return TaskStatus <p>任务状态</p><p>枚举值：</p><ul><li>PENDING： 任务等待调度</li><li>RUNNING： 任务运行中</li><li>FINISHED： 任务执行成功</li><li>STOP： 任务被中止</li><li>FAILED： 任务失败</li><li>TIMEOUT： 任务超时</li></ul>
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置<p>任务状态</p><p>枚举值：</p><ul><li>PENDING： 任务等待调度</li><li>RUNNING： 任务运行中</li><li>FINISHED： 任务执行成功</li><li>STOP： 任务被中止</li><li>FAILED： 任务失败</li><li>TIMEOUT： 任务超时</li></ul>
                     * @param _taskStatus <p>任务状态</p><p>枚举值：</p><ul><li>PENDING： 任务等待调度</li><li>RUNNING： 任务运行中</li><li>FINISHED： 任务执行成功</li><li>STOP： 任务被中止</li><li>FAILED： 任务失败</li><li>TIMEOUT： 任务超时</li></ul>
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间</p>
                     * @return CreateTime <p>任务创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>任务创建时间</p>
                     * @param _createTime <p>任务创建时间</p>
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
                     * 获取<p>任务开始调度时间</p>
                     * @return ScheduledTime <p>任务开始调度时间</p>
                     * 
                     */
                    std::string GetScheduledTime() const;

                    /**
                     * 设置<p>任务开始调度时间</p>
                     * @param _scheduledTime <p>任务开始调度时间</p>
                     * 
                     */
                    void SetScheduledTime(const std::string& _scheduledTime);

                    /**
                     * 判断参数 ScheduledTime 是否已赋值
                     * @return ScheduledTime 是否已赋值
                     * 
                     */
                    bool ScheduledTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务结束时间</p>
                     * @return FinishedTime <p>任务结束时间</p>
                     * 
                     */
                    std::string GetFinishedTime() const;

                    /**
                     * 设置<p>任务结束时间</p>
                     * @param _finishedTime <p>任务结束时间</p>
                     * 
                     */
                    void SetFinishedTime(const std::string& _finishedTime);

                    /**
                     * 判断参数 FinishedTime 是否已赋值
                     * @return FinishedTime 是否已赋值
                     * 
                     */
                    bool FinishedTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务结果Url</p>
                     * @return Urls <p>任务结果Url</p>
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置<p>任务结果Url</p>
                     * @param _urls <p>任务结果Url</p>
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取<p>任务执行错误码</p>
                     * @return TaskResultCode <p>任务执行错误码</p>
                     * 
                     */
                    int64_t GetTaskResultCode() const;

                    /**
                     * 设置<p>任务执行错误码</p>
                     * @param _taskResultCode <p>任务执行错误码</p>
                     * 
                     */
                    void SetTaskResultCode(const int64_t& _taskResultCode);

                    /**
                     * 判断参数 TaskResultCode 是否已赋值
                     * @return TaskResultCode 是否已赋值
                     * 
                     */
                    bool TaskResultCodeHasBeenSet() const;

                    /**
                     * 获取<p>任务执行错误信息</p>
                     * @return TaskResultMsg <p>任务执行错误信息</p>
                     * 
                     */
                    std::string GetTaskResultMsg() const;

                    /**
                     * 设置<p>任务执行错误信息</p>
                     * @param _taskResultMsg <p>任务执行错误信息</p>
                     * 
                     */
                    void SetTaskResultMsg(const std::string& _taskResultMsg);

                    /**
                     * 判断参数 TaskResultMsg 是否已赋值
                     * @return TaskResultMsg 是否已赋值
                     * 
                     */
                    bool TaskResultMsgHasBeenSet() const;

                    /**
                     * 获取<p>输出视频的分辨率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resolution <p>输出视频的分辨率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>输出视频的分辨率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resolution <p>输出视频的分辨率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取<p>输出视频的宽高比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ratio <p>输出视频的宽高比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRatio() const;

                    /**
                     * 设置<p>输出视频的宽高比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ratio <p>输出视频的宽高比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRatio(const std::string& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取<p>任务请求包</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestBody <p>任务请求包</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestBody() const;

                    /**
                     * 设置<p>任务请求包</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestBody <p>任务请求包</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestBody(const std::string& _requestBody);

                    /**
                     * 判断参数 RequestBody 是否已赋值
                     * @return RequestBody 是否已赋值
                     * 
                     */
                    bool RequestBodyHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务类型</p><p>枚举值：</p><ul><li>VideoRedraw： 转绘任务</li><li>AIDrama： AI漫剧任务</li></ul>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>任务状态</p><p>枚举值：</p><ul><li>PENDING： 任务等待调度</li><li>RUNNING： 任务运行中</li><li>FINISHED： 任务执行成功</li><li>STOP： 任务被中止</li><li>FAILED： 任务失败</li><li>TIMEOUT： 任务超时</li></ul>
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>任务开始调度时间</p>
                     */
                    std::string m_scheduledTime;
                    bool m_scheduledTimeHasBeenSet;

                    /**
                     * <p>任务结束时间</p>
                     */
                    std::string m_finishedTime;
                    bool m_finishedTimeHasBeenSet;

                    /**
                     * <p>任务结果Url</p>
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * <p>任务执行错误码</p>
                     */
                    int64_t m_taskResultCode;
                    bool m_taskResultCodeHasBeenSet;

                    /**
                     * <p>任务执行错误信息</p>
                     */
                    std::string m_taskResultMsg;
                    bool m_taskResultMsgHasBeenSet;

                    /**
                     * <p>输出视频的分辨率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>输出视频的宽高比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * <p>任务请求包</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestBody;
                    bool m_requestBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIGCTASKLISTITEM_H_
