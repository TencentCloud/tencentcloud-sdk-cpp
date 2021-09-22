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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTNETINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTNETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 专家服务-旗舰护网信息
                */
                class ProtectNetInfo : public AbstractModel
                {
                public:
                    ProtectNetInfo();
                    ~ProtectNetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param TaskId 任务id
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取护网天数
                     * @return ProtectDays 护网天数
                     */
                    uint64_t GetProtectDays() const;

                    /**
                     * 设置护网天数
                     * @param ProtectDays 护网天数
                     */
                    void SetProtectDays(const uint64_t& _protectDays);

                    /**
                     * 判断参数 ProtectDays 是否已赋值
                     * @return ProtectDays 是否已赋值
                     */
                    bool ProtectDaysHasBeenSet() const;

                    /**
                     * 获取护网状态 0未启动，1护网中，2已完成
                     * @return Status 护网状态 0未启动，1护网中，2已完成
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置护网状态 0未启动，1护网中，2已完成
                     * @param Status 护网状态 0未启动，1护网中，2已完成
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取护网启动时间
                     * @return StartTime 护网启动时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置护网启动时间
                     * @param StartTime 护网启动时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取护网完成时间
                     * @return EndTime 护网完成时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置护网完成时间
                     * @param EndTime 护网完成时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取报告下载地址
                     * @return ReportPath 报告下载地址
                     */
                    std::string GetReportPath() const;

                    /**
                     * 设置报告下载地址
                     * @param ReportPath 报告下载地址
                     */
                    void SetReportPath(const std::string& _reportPath);

                    /**
                     * 判断参数 ReportPath 是否已赋值
                     * @return ReportPath 是否已赋值
                     */
                    bool ReportPathHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 护网天数
                     */
                    uint64_t m_protectDays;
                    bool m_protectDaysHasBeenSet;

                    /**
                     * 护网状态 0未启动，1护网中，2已完成
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 护网启动时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 护网完成时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 报告下载地址
                     */
                    std::string m_reportPath;
                    bool m_reportPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTNETINFO_H_
