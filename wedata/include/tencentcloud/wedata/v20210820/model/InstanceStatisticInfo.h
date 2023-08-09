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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCESTATISTICINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCESTATISTICINFO_H_

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
                * 运维大屏实例状态统计和实例状态趋势
                */
                class InstanceStatisticInfo : public AbstractModel
                {
                public:
                    InstanceStatisticInfo();
                    ~InstanceStatisticInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例状态趋势状态统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CountList 实例状态趋势状态统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetCountList() const;

                    /**
                     * 设置实例状态趋势状态统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _countList 实例状态趋势状态统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCountList(const std::vector<uint64_t>& _countList);

                    /**
                     * 判断参数 CountList 是否已赋值
                     * @return CountList 是否已赋值
                     * 
                     */
                    bool CountListHasBeenSet() const;

                    /**
                     * 获取实例状态趋势时间分割
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeList 实例状态趋势时间分割
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTimeList() const;

                    /**
                     * 设置实例状态趋势时间分割
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeList 实例状态趋势时间分割
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeList(const std::vector<std::string>& _timeList);

                    /**
                     * 判断参数 TimeList 是否已赋值
                     * @return TimeList 是否已赋值
                     * 
                     */
                    bool TimeListHasBeenSet() const;

                    /**
                     * 获取实例状态标识：WAITING_RUNNING、KILLING、FAILED、FAILED_TRYING、SUCCEED 分别表示等待执行、正在终止、失败、失败重试、成功，用于实例状态分布和实例状态趋势
                     * @return InstanceStatus 实例状态标识：WAITING_RUNNING、KILLING、FAILED、FAILED_TRYING、SUCCEED 分别表示等待执行、正在终止、失败、失败重试、成功，用于实例状态分布和实例状态趋势
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置实例状态标识：WAITING_RUNNING、KILLING、FAILED、FAILED_TRYING、SUCCEED 分别表示等待执行、正在终止、失败、失败重试、成功，用于实例状态分布和实例状态趋势
                     * @param _instanceStatus 实例状态标识：WAITING_RUNNING、KILLING、FAILED、FAILED_TRYING、SUCCEED 分别表示等待执行、正在终止、失败、失败重试、成功，用于实例状态分布和实例状态趋势
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取用于实例状态分布计数
                     * @return InstanceCount 用于实例状态分布计数
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置用于实例状态分布计数
                     * @param _instanceCount 用于实例状态分布计数
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取当前展示时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShowTime 当前展示时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShowTime() const;

                    /**
                     * 设置当前展示时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _showTime 当前展示时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShowTime(const std::string& _showTime);

                    /**
                     * 判断参数 ShowTime 是否已赋值
                     * @return ShowTime 是否已赋值
                     * 
                     */
                    bool ShowTimeHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportTime 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReportTime() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reportTime 1
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 实例状态趋势状态统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_countList;
                    bool m_countListHasBeenSet;

                    /**
                     * 实例状态趋势时间分割
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_timeList;
                    bool m_timeListHasBeenSet;

                    /**
                     * 实例状态标识：WAITING_RUNNING、KILLING、FAILED、FAILED_TRYING、SUCCEED 分别表示等待执行、正在终止、失败、失败重试、成功，用于实例状态分布和实例状态趋势
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 用于实例状态分布计数
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 当前展示时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_showTime;
                    bool m_showTimeHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportTime;
                    bool m_reportTimeHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCESTATISTICINFO_H_
