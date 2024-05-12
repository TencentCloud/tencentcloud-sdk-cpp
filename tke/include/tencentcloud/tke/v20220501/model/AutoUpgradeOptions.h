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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_AUTOUPGRADEOPTIONS_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_AUTOUPGRADEOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 托管节点池运维窗口设置
                */
                class AutoUpgradeOptions : public AbstractModel
                {
                public:
                    AutoUpgradeOptions();
                    ~AutoUpgradeOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自动升级开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoUpgradeStartTime 自动升级开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAutoUpgradeStartTime() const;

                    /**
                     * 设置自动升级开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoUpgradeStartTime 自动升级开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoUpgradeStartTime(const std::string& _autoUpgradeStartTime);

                    /**
                     * 判断参数 AutoUpgradeStartTime 是否已赋值
                     * @return AutoUpgradeStartTime 是否已赋值
                     * 
                     */
                    bool AutoUpgradeStartTimeHasBeenSet() const;

                    /**
                     * 获取自动升级持续时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 自动升级持续时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置自动升级持续时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 自动升级持续时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取运维日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeeklyPeriod 运维日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetWeeklyPeriod() const;

                    /**
                     * 设置运维日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weeklyPeriod 运维日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeeklyPeriod(const std::vector<std::string>& _weeklyPeriod);

                    /**
                     * 判断参数 WeeklyPeriod 是否已赋值
                     * @return WeeklyPeriod 是否已赋值
                     * 
                     */
                    bool WeeklyPeriodHasBeenSet() const;

                private:

                    /**
                     * 自动升级开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autoUpgradeStartTime;
                    bool m_autoUpgradeStartTimeHasBeenSet;

                    /**
                     * 自动升级持续时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 运维日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_weeklyPeriod;
                    bool m_weeklyPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_AUTOUPGRADEOPTIONS_H_
