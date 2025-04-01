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

#ifndef TENCENTCLOUD_VDB_V20230616_MODEL_MODIFYINSTANCEMAINTENANCEWINDOWREQUEST_H_
#define TENCENTCLOUD_VDB_V20230616_MODEL_MODIFYINSTANCEMAINTENANCEWINDOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vdb
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * ModifyInstanceMaintenanceWindow请求参数结构体
                */
                class ModifyInstanceMaintenanceWindowRequest : public AbstractModel
                {
                public:
                    ModifyInstanceMaintenanceWindowRequest();
                    ~ModifyInstanceMaintenanceWindowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定需修改维护时间窗的实例 ID。
                     * @return InstanceId 指定需修改维护时间窗的实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定需修改维护时间窗的实例 ID。
                     * @param _instanceId 指定需修改维护时间窗的实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取维护时间窗开始时间。取值范围为"00:00-23:00"的任意整点，如01:00。
                     * @return StartTime 维护时间窗开始时间。取值范围为"00:00-23:00"的任意整点，如01:00。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置维护时间窗开始时间。取值范围为"00:00-23:00"的任意整点，如01:00。
                     * @param _startTime 维护时间窗开始时间。取值范围为"00:00-23:00"的任意整点，如01:00。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取设置维护时间窗的时长。根据指定的维护时间窗开始时间与时长可确定维护时间窗的范围。
- 单位：小时。
- 取值范围：3、6、8、10、12。
                     * @return TimeSpan 设置维护时间窗的时长。根据指定的维护时间窗开始时间与时长可确定维护时间窗的范围。
- 单位：小时。
- 取值范围：3、6、8、10、12。
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置设置维护时间窗的时长。根据指定的维护时间窗开始时间与时长可确定维护时间窗的范围。
- 单位：小时。
- 取值范围：3、6、8、10、12。
                     * @param _timeSpan 设置维护时间窗的时长。根据指定的维护时间窗开始时间与时长可确定维护时间窗的范围。
- 单位：小时。
- 取值范围：3、6、8、10、12。
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                private:

                    /**
                     * 指定需修改维护时间窗的实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 维护时间窗开始时间。取值范围为"00:00-23:00"的任意整点，如01:00。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 设置维护时间窗的时长。根据指定的维护时间窗开始时间与时长可确定维护时间窗的范围。
- 单位：小时。
- 取值范围：3、6、8、10、12。
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_MODIFYINSTANCEMAINTENANCEWINDOWREQUEST_H_
