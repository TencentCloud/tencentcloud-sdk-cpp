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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_REBUILDINDEXTASKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_REBUILDINDEXTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 索引重建任务信息
                */
                class RebuildIndexTaskInfo : public AbstractModel
                {
                public:
                    RebuildIndexTaskInfo();
                    ~RebuildIndexTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引重建任务ID
                     * @return TaskId 索引重建任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置索引重建任务ID
                     * @param _taskId 索引重建任务ID
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
                     * 获取索引重建任务当前状态，0:索引重建任务已创建，1:创建索引重建资源，2:索引重建资源创建完成，3:重建中，4:暂停，5:重建索引成功，6:重建成功（可检索），7:重建失败，8:撤销，9:删除元数据和索引
                     * @return Status 索引重建任务当前状态，0:索引重建任务已创建，1:创建索引重建资源，2:索引重建资源创建完成，3:重建中，4:暂停，5:重建索引成功，6:重建成功（可检索），7:重建失败，8:撤销，9:删除元数据和索引
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置索引重建任务当前状态，0:索引重建任务已创建，1:创建索引重建资源，2:索引重建资源创建完成，3:重建中，4:暂停，5:重建索引成功，6:重建成功（可检索），7:重建失败，8:撤销，9:删除元数据和索引
                     * @param _status 索引重建任务当前状态，0:索引重建任务已创建，1:创建索引重建资源，2:索引重建资源创建完成，3:重建中，4:暂停，5:重建索引成功，6:重建成功（可检索），7:重建失败，8:撤销，9:删除元数据和索引
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取重建任务开始时间戳
                     * @return StartTime 重建任务开始时间戳
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置重建任务开始时间戳
                     * @param _startTime 重建任务开始时间戳
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取重建任务结束时间戳
                     * @return EndTime 重建任务结束时间戳
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置重建任务结束时间戳
                     * @param _endTime 重建任务结束时间戳
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取重投预估剩余时间，单位秒
                     * @return RemainTime 重投预估剩余时间，单位秒
                     * 
                     */
                    int64_t GetRemainTime() const;

                    /**
                     * 设置重投预估剩余时间，单位秒
                     * @param _remainTime 重投预估剩余时间，单位秒
                     * 
                     */
                    void SetRemainTime(const int64_t& _remainTime);

                    /**
                     * 判断参数 RemainTime 是否已赋值
                     * @return RemainTime 是否已赋值
                     * 
                     */
                    bool RemainTimeHasBeenSet() const;

                    /**
                     * 获取重建任务创建时间戳
                     * @return CreateTime 重建任务创建时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置重建任务创建时间戳
                     * @param _createTime 重建任务创建时间戳
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取重投完成度，百分比
                     * @return Progress 重投完成度，百分比
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置重投完成度，百分比
                     * @param _progress 重投完成度，百分比
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取重建任务更新时间
                     * @return UpdateTime 重建任务更新时间
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置重建任务更新时间
                     * @param _updateTime 重建任务更新时间
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取附加状态描述信息（目前仅描述失败时失败原因）
                     * @return StatusMessage 附加状态描述信息（目前仅描述失败时失败原因）
                     * 
                     */
                    std::string GetStatusMessage() const;

                    /**
                     * 设置附加状态描述信息（目前仅描述失败时失败原因）
                     * @param _statusMessage 附加状态描述信息（目前仅描述失败时失败原因）
                     * 
                     */
                    void SetStatusMessage(const std::string& _statusMessage);

                    /**
                     * 判断参数 StatusMessage 是否已赋值
                     * @return StatusMessage 是否已赋值
                     * 
                     */
                    bool StatusMessageHasBeenSet() const;

                private:

                    /**
                     * 索引重建任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 索引重建任务当前状态，0:索引重建任务已创建，1:创建索引重建资源，2:索引重建资源创建完成，3:重建中，4:暂停，5:重建索引成功，6:重建成功（可检索），7:重建失败，8:撤销，9:删除元数据和索引
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 重建任务开始时间戳
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 重建任务结束时间戳
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 重投预估剩余时间，单位秒
                     */
                    int64_t m_remainTime;
                    bool m_remainTimeHasBeenSet;

                    /**
                     * 重建任务创建时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 重投完成度，百分比
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 重建任务更新时间
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 附加状态描述信息（目前仅描述失败时失败原因）
                     */
                    std::string m_statusMessage;
                    bool m_statusMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_REBUILDINDEXTASKINFO_H_
