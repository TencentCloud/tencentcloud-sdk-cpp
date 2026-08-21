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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSIPLICENSEBINDSCHEDULERESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSIPLICENSEBINDSCHEDULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LicenseBindFailedItem.h>
#include <tencentcloud/csip/v20221121/model/LicenseBindScheduleItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCSIPLicenseBindSchedule返回参数结构体
                */
                class DescribeCSIPLicenseBindScheduleResponse : public AbstractModel
                {
                public:
                    DescribeCSIPLicenseBindScheduleResponse();
                    ~DescribeCSIPLicenseBindScheduleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务状态：INIT-初始化 / RUNNING-进行中 / DONE-已完成 / FAILED-已失败</p>
                     * @return Status <p>任务状态：INIT-初始化 / RUNNING-进行中 / DONE-已完成 / FAILED-已失败</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>进度百分比 0-100</p>
                     * @return Schedule <p>进度百分比 0-100</p>
                     * 
                     */
                    int64_t GetSchedule() const;

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     * 
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取<p>全部机器数（不受过滤影响）</p>
                     * @return Total <p>全部机器数（不受过滤影响）</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>成功数</p>
                     * @return SuccessNum <p>成功数</p>
                     * 
                     */
                    int64_t GetSuccessNum() const;

                    /**
                     * 判断参数 SuccessNum 是否已赋值
                     * @return SuccessNum 是否已赋值
                     * 
                     */
                    bool SuccessNumHasBeenSet() const;

                    /**
                     * 获取<p>失败数</p>
                     * @return FailedNum <p>失败数</p>
                     * 
                     */
                    int64_t GetFailedNum() const;

                    /**
                     * 判断参数 FailedNum 是否已赋值
                     * @return FailedNum 是否已赋值
                     * 
                     */
                    bool FailedNumHasBeenSet() const;

                    /**
                     * 获取<p>失败明细（全量，含机器额外信息）</p>
                     * @return FailedList <p>失败明细（全量，含机器额外信息）</p>
                     * 
                     */
                    std::vector<LicenseBindFailedItem> GetFailedList() const;

                    /**
                     * 判断参数 FailedList 是否已赋值
                     * @return FailedList 是否已赋值
                     * 
                     */
                    bool FailedListHasBeenSet() const;

                    /**
                     * 获取<p>逐机器明细（受 Filters + 分页影响）</p>
                     * @return List <p>逐机器明细（受 Filters + 分页影响）</p>
                     * 
                     */
                    std::vector<LicenseBindScheduleItem> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务状态：INIT-初始化 / RUNNING-进行中 / DONE-已完成 / FAILED-已失败</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>进度百分比 0-100</p>
                     */
                    int64_t m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * <p>全部机器数（不受过滤影响）</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>成功数</p>
                     */
                    int64_t m_successNum;
                    bool m_successNumHasBeenSet;

                    /**
                     * <p>失败数</p>
                     */
                    int64_t m_failedNum;
                    bool m_failedNumHasBeenSet;

                    /**
                     * <p>失败明细（全量，含机器额外信息）</p>
                     */
                    std::vector<LicenseBindFailedItem> m_failedList;
                    bool m_failedListHasBeenSet;

                    /**
                     * <p>逐机器明细（受 Filters + 分页影响）</p>
                     */
                    std::vector<LicenseBindScheduleItem> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSIPLICENSEBINDSCHEDULERESPONSE_H_
