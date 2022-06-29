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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_MODIFYTASKRUNSTATUSREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_MODIFYTASKRUNSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyTaskRunStatus请求参数结构体
                */
                class ModifyTaskRunStatusRequest : public AbstractModel
                {
                public:
                    ModifyTaskRunStatusRequest();
                    ~ModifyTaskRunStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param TaskId 任务ID
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务状态, 1001--未开始 1002--进行中（执行）1003--进行中（暂停）1004--执行结束
                     * @return Status 任务状态, 1001--未开始 1002--进行中（执行）1003--进行中（暂停）1004--执行结束
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态, 1001--未开始 1002--进行中（执行）1003--进行中（暂停）1004--执行结束
                     * @param Status 任务状态, 1001--未开始 1002--进行中（执行）1003--进行中（暂停）1004--执行结束
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取执行结果是否符合预期（当前扭转状态为执行结束时，需要必传此字段）
                     * @return IsExpect 执行结果是否符合预期（当前扭转状态为执行结束时，需要必传此字段）
                     */
                    bool GetIsExpect() const;

                    /**
                     * 设置执行结果是否符合预期（当前扭转状态为执行结束时，需要必传此字段）
                     * @param IsExpect 执行结果是否符合预期（当前扭转状态为执行结束时，需要必传此字段）
                     */
                    void SetIsExpect(const bool& _isExpect);

                    /**
                     * 判断参数 IsExpect 是否已赋值
                     * @return IsExpect 是否已赋值
                     */
                    bool IsExpectHasBeenSet() const;

                    /**
                     * 获取演习结论（当演习状态转变为执行结束时，需要填写此字段）
                     * @return Summary 演习结论（当演习状态转变为执行结束时，需要填写此字段）
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置演习结论（当演习状态转变为执行结束时，需要填写此字段）
                     * @param Summary 演习结论（当演习状态转变为执行结束时，需要填写此字段）
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     */
                    bool SummaryHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态, 1001--未开始 1002--进行中（执行）1003--进行中（暂停）1004--执行结束
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 执行结果是否符合预期（当前扭转状态为执行结束时，需要必传此字段）
                     */
                    bool m_isExpect;
                    bool m_isExpectHasBeenSet;

                    /**
                     * 演习结论（当演习状态转变为执行结束时，需要填写此字段）
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_MODIFYTASKRUNSTATUSREQUEST_H_
