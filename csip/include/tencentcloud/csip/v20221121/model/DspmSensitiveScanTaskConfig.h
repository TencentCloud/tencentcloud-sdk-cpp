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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSENSITIVESCANTASKCONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSENSITIVESCANTASKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmScheduleConfig.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm敏感数据扫描任务配置
                */
                class DspmSensitiveScanTaskConfig : public AbstractModel
                {
                public:
                    DspmSensitiveScanTaskConfig();
                    ~DspmSensitiveScanTaskConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否定时任务
                     * @return IsScheduled 是否定时任务
                     * 
                     */
                    bool GetIsScheduled() const;

                    /**
                     * 设置是否定时任务
                     * @param _isScheduled 是否定时任务
                     * 
                     */
                    void SetIsScheduled(const bool& _isScheduled);

                    /**
                     * 判断参数 IsScheduled 是否已赋值
                     * @return IsScheduled 是否已赋值
                     * 
                     */
                    bool IsScheduledHasBeenSet() const;

                    /**
                     * 获取调度周期配置
                     * @return ScheduleConfig 调度周期配置
                     * 
                     */
                    DspmScheduleConfig GetScheduleConfig() const;

                    /**
                     * 设置调度周期配置
                     * @param _scheduleConfig 调度周期配置
                     * 
                     */
                    void SetScheduleConfig(const DspmScheduleConfig& _scheduleConfig);

                    /**
                     * 判断参数 ScheduleConfig 是否已赋值
                     * @return ScheduleConfig 是否已赋值
                     * 
                     */
                    bool ScheduleConfigHasBeenSet() const;

                    /**
                     * 获取是否立即扫描
                     * @return IsRunAtOnce 是否立即扫描
                     * 
                     */
                    bool GetIsRunAtOnce() const;

                    /**
                     * 设置是否立即扫描
                     * @param _isRunAtOnce 是否立即扫描
                     * 
                     */
                    void SetIsRunAtOnce(const bool& _isRunAtOnce);

                    /**
                     * 判断参数 IsRunAtOnce 是否已赋值
                     * @return IsRunAtOnce 是否已赋值
                     * 
                     */
                    bool IsRunAtOnceHasBeenSet() const;

                private:

                    /**
                     * 是否定时任务
                     */
                    bool m_isScheduled;
                    bool m_isScheduledHasBeenSet;

                    /**
                     * 调度周期配置
                     */
                    DspmScheduleConfig m_scheduleConfig;
                    bool m_scheduleConfigHasBeenSet;

                    /**
                     * 是否立即扫描
                     */
                    bool m_isRunAtOnce;
                    bool m_isRunAtOnceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSENSITIVESCANTASKCONFIG_H_
