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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKBYSTATUS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKBYSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 状态趋势统计
                */
                class TaskByStatus : public AbstractModel
                {
                public:
                    TaskByStatus();
                    ~TaskByStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统计值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CountGroup 统计值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCountGroup() const;

                    /**
                     * 设置统计值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _countGroup 统计值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCountGroup(const std::string& _countGroup);

                    /**
                     * 判断参数 CountGroup 是否已赋值
                     * @return CountGroup 是否已赋值
                     * 
                     */
                    bool CountGroupHasBeenSet() const;

                    /**
                     * 获取日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShowTimeGroup 日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShowTimeGroup() const;

                    /**
                     * 设置日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _showTimeGroup 日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShowTimeGroup(const std::string& _showTimeGroup);

                    /**
                     * 判断参数 ShowTimeGroup 是否已赋值
                     * @return ShowTimeGroup 是否已赋值
                     * 
                     */
                    bool ShowTimeGroupHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取周期单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleUnit 周期单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置周期单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleUnit 周期单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleUnit(const std::string& _cycleUnit);

                    /**
                     * 判断参数 CycleUnit 是否已赋值
                     * @return CycleUnit 是否已赋值
                     * 
                     */
                    bool CycleUnitHasBeenSet() const;

                    /**
                     * 获取1
                     * @return ReportTime 1
                     * 
                     */
                    std::string GetReportTime() const;

                    /**
                     * 设置1
                     * @param _reportTime 1
                     * 
                     */
                    void SetReportTime(const std::string& _reportTime);

                    /**
                     * 判断参数 ReportTime 是否已赋值
                     * @return ReportTime 是否已赋值
                     * 
                     */
                    bool ReportTimeHasBeenSet() const;

                    /**
                     * 获取1
                     * @return Count 1
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置1
                     * @param _count 1
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 统计值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_countGroup;
                    bool m_countGroupHasBeenSet;

                    /**
                     * 日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_showTimeGroup;
                    bool m_showTimeGroupHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 周期单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * 1
                     */
                    std::string m_reportTime;
                    bool m_reportTimeHasBeenSet;

                    /**
                     * 1
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKBYSTATUS_H_
