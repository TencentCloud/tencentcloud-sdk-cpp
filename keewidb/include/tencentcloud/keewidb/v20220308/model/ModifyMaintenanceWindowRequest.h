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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_MODIFYMAINTENANCEWINDOWREQUEST_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_MODIFYMAINTENANCEWINDOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * ModifyMaintenanceWindow请求参数结构体
                */
                class ModifyMaintenanceWindowRequest : public AbstractModel
                {
                public:
                    ModifyMaintenanceWindowRequest();
                    ~ModifyMaintenanceWindowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，如：kee-6ubh****。
                     * @return InstanceId 实例 ID，如：kee-6ubh****。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，如：kee-6ubh****。
                     * @param _instanceId 实例 ID，如：kee-6ubh****。
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
                     * 获取维护时间窗起始时间，如：03:00。
                     * @return StartTime 维护时间窗起始时间，如：03:00。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置维护时间窗起始时间，如：03:00。
                     * @param _startTime 维护时间窗起始时间，如：03:00。
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
                     * 获取维护时间窗结束时间，如：06:00。
                     * @return EndTime 维护时间窗结束时间，如：06:00。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置维护时间窗结束时间，如：06:00。
                     * @param _endTime 维护时间窗结束时间，如：06:00。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，如：kee-6ubh****。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 维护时间窗起始时间，如：03:00。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 维护时间窗结束时间，如：06:00。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_MODIFYMAINTENANCEWINDOWREQUEST_H_
