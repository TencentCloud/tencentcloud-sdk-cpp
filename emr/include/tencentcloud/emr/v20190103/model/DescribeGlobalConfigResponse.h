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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEGLOBALCONFIGRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEGLOBALCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/CapacityGlobalConfig.h>
#include <tencentcloud/emr/v20190103/model/FairGlobalConfig.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeGlobalConfig返回参数结构体
                */
                class DescribeGlobalConfigResponse : public AbstractModel
                {
                public:
                    DescribeGlobalConfigResponse();
                    ~DescribeGlobalConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否开启了资源调度功能
                     * @return EnableResourceSchedule 是否开启了资源调度功能
                     * 
                     */
                    bool GetEnableResourceSchedule() const;

                    /**
                     * 判断参数 EnableResourceSchedule 是否已赋值
                     * @return EnableResourceSchedule 是否已赋值
                     * 
                     */
                    bool EnableResourceScheduleHasBeenSet() const;

                    /**
                     * 获取当前生效的资源调度器
                     * @return ActiveScheduler 当前生效的资源调度器
                     * 
                     */
                    std::string GetActiveScheduler() const;

                    /**
                     * 判断参数 ActiveScheduler 是否已赋值
                     * @return ActiveScheduler 是否已赋值
                     * 
                     */
                    bool ActiveSchedulerHasBeenSet() const;

                    /**
                     * 获取公平调度器的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CapacityGlobalConfig 公平调度器的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CapacityGlobalConfig GetCapacityGlobalConfig() const;

                    /**
                     * 判断参数 CapacityGlobalConfig 是否已赋值
                     * @return CapacityGlobalConfig 是否已赋值
                     * 
                     */
                    bool CapacityGlobalConfigHasBeenSet() const;

                    /**
                     * 获取容量调度器的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FairGlobalConfig 容量调度器的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FairGlobalConfig GetFairGlobalConfig() const;

                    /**
                     * 判断参数 FairGlobalConfig 是否已赋值
                     * @return FairGlobalConfig 是否已赋值
                     * 
                     */
                    bool FairGlobalConfigHasBeenSet() const;

                    /**
                     * 获取最新的资源调度器
                     * @return Scheduler 最新的资源调度器
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     * 
                     */
                    bool SchedulerHasBeenSet() const;

                private:

                    /**
                     * 是否开启了资源调度功能
                     */
                    bool m_enableResourceSchedule;
                    bool m_enableResourceScheduleHasBeenSet;

                    /**
                     * 当前生效的资源调度器
                     */
                    std::string m_activeScheduler;
                    bool m_activeSchedulerHasBeenSet;

                    /**
                     * 公平调度器的信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CapacityGlobalConfig m_capacityGlobalConfig;
                    bool m_capacityGlobalConfigHasBeenSet;

                    /**
                     * 容量调度器的信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FairGlobalConfig m_fairGlobalConfig;
                    bool m_fairGlobalConfigHasBeenSet;

                    /**
                     * 最新的资源调度器
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEGLOBALCONFIGRESPONSE_H_
